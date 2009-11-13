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
Begin non-const local variable names with a lowercase letters 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-2  (Non-Constant) Variable names must be in mixed case starting 
           with lower case.

EXAMPLE 

    line, savingsAccount


DEFINITION

Common practice in the C++ development community. Makes variables easy to 
distinguish from types, and effectively resolves potential naming collision 
as in the declaration Line line;. 

Keep variable names balanced between short and longer, more meaningful. 
Use 8 to 20 characters as a guideline (excluding integer loop counters 
which may be as little as 1 character). 


CAVEAT

This Rule checks only that local variable names start with a lowercase letter; 
it does not verify camelCase. 

'Enum' variables are checked in Rule [LsstDm-3-2b - 3]
Member  variables are checked in [LsstDm-3-10 - 3]


ATTRIBUTION

Implementation based on Parasoft: NAMING-05.
*/


// EXAMPLE

void setBadDepthDetonation(int depthDetonation){
    int Height;
    int _depth;
    _depth = depthDetonation;  // VIOLATION
    Height = depthDetonation;  // VIOLATION
};



// REPAIR


void setGoodDepthDetonation(int depthDetonation){
    int const Width=3;           // not an error since it's a const
    int height;
    int depth;
    depth = depthDetonation;   // OK
    height = depthDetonation;  // OK
};

