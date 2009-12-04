// -*- LSST-C++ -*-
/* 
 * LSST Data Management System
 * Copyright 2008, 2009 LSST Corporation.
 * 
 * This product includes software developed by the
 * LSST Project (http://www.lsst.org/).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the LSST License Statement and 
 * the GNU General Public License along with this program.  If not, 
 * see <http://www.lsstcorp.org/LegalNotices/>.
 */

/* 
RULE

[LsstDm-3-2a - 3]
Begin non-const global or local non-boolean variable names with a lowercase 
letter; begin non-const global or local boolean variable names with one of
{is can has should} followed by an uppercase letter.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-2  (Non-Constant) Variable names must be in mixed case starting 
           with lower case.
Rule 3-24 The prefix 'is', 'can', 'has', 'should' should be prepended to
           names for boolean variables and methods.

EXAMPLE 

    line, savingsAccount, isWidget


DEFINITION

Common practice in the C++ development community. Makes variables easy to 
distinguish from types, and effectively resolves potential naming collision 
as in the declaration Line line;. 

Keep variable names balanced between short and longer, more meaningful. 
Use 8 to 20 characters as a guideline (excluding integer loop counters 
which may be as little as 1 character). 


CAVEAT

This Rule checks that global and local non-boolean variable names start with a 
lowercase letter and that  global and local boolean variable names start with 
one of {is can has should} followed by an uppercase letter; 
it does not verify camelCase. 

'Enum' variables are checked in Rule [LsstDm-3-2b - 3]
Member  variables are checked in [LsstDm-3-10 - 3]


ATTRIBUTION

Implementation based on Parasoft: NAMING-05 but seriously altered.
*/


// EXAMPLE

int HeightBad;                // VIOLATION
int _depthBad;                // VIOLATION
bool WidgetBad;               // VIOLATION
bool thingyBad;               // VIOLATION

void setBadDepthDetonation(int depthDetonation){
    int Height;                // VIOLATION
    int _depth;                // VIOLATION
    bool Widget;               // VIOLATION
    bool thingy;               // VIOLATION
    _depth = depthDetonation;  // VIOLATION
    Height = depthDetonation;  // VIOLATION
    Widget = 1;
    thingy = 0;
};



// REPAIR
int heightGood;                // OK
int depthGood;                 // OK
bool isWidgetGood;             // OK
bool hasThingyGood;            // OK

void setGoodDepthDetonation(int depthDetonation){
    int const Width=3;           // not an error since it's a const
    int height;                // OK
    int depth;                 // OK
    bool isWidget;             // OK
    bool hasThingy;            // OK
    depth = depthDetonation;   // OK
    height = depthDetonation;  // OK
    isWidget = 1;
    hasThingy = 0;
};

