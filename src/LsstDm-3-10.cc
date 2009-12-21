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

[LsstDm-3-10 - 3]
Private non-boolean variables must have '_' prefix followed by lowercase 
    letter (_camelCase);
public and protected non-boolean variables must start with 
    lowercase letter (camelCase);
the first camel word in a boolean variable must be one of 'is', 'has', 'can',
    'should'.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-10 Private class variables must have underscore prefix.
Rule 3-2  Variable names must be in mixed case starting with lower case.
Rule 3-24 Boolean Variable names must start with one of 'is', 'has', 'can',
    'should'. 

EXAMPLE

class SomeClass
{
private:
    int  _depth;
    int  _computeBlob();
}

void setDepth(int depth){
    _depth = depth;
}


DEFINITION

Apart from its name and its type, the scope of a variable is its most important 
feature. Indicating class scope by using underscore makes it easy to distinguish 
class variables from local scratch variables. This is important because class 
variables are considered to have higher significance than method variables, 
and should be treated with special care by the programmer. 

A side effect of the underscore naming convention is that it nicely resolves the 
problem of finding reasonable variable names for setter methods and constructors: 


An issue is whether the underscore should be added as a prefix or as a suffix. 
Both practices are commonly used. Since LSST Data Management uses both C++ and 
Python as implementation languages, prefixing the underscore is recommended in 
order to maintain conformity with Python's naming convention where variables 
with leading underscore are treated specially. Care must be given to avoid 
using a reserved name.

It should be noted that scope identification in variables has been a 
controversial issue for quite some time. It seems, though, that this practice 
now is gaining acceptance and that it is becoming more and more common as a 
convention in the professional development community.

Keep variable names balanced between short and longer, more meaningful.
Use 8 to 20 characters as a guideline (excluding integer loop counters
which may be as little as 1 character).


CAVEAT

This Rule checks only that non-const  class variable names start with 
a lowercase letter; it does not verify camelCase.

Local variables are checked in Rule [LsstDM-3-2a - 3]
'Enum' variables are checked in Rule [LsstDm-3-2b - 3]


ATTRIBUTION

Implementation copied from Parasoft:NAMING-07; unchanged.
*/


// EXAMPLE
bool badLocal;           // VIOLATION

class BadClass {
public:     
    int   _a;            // VIOLATION
    int   _isA;          // VIOLATION
    int   Aa;            // VIOLATION
    bool  aBool;         // Poor form but does not violate this Rule
    bool  _isBool;       // VIOLATION
protected:
    int   _b;            // VIOLATION
    int   _isB;          // VIOLATION
    int   Bb;            // VIOLATION
    bool  bBool;         // Poor form but does not violate this Rule
    bool  _hasBool;      // VIOLATION
private:
    int  length;         // VIOLATION
    bool cBool;          // VIOLATION
    bool shouldBool;     // VIOLATION
};

void badFcn() {
    bool badFcnVar;
}

// REPAIR

bool isGoodLocal;     // OK

class GoodClass {
public:     
    int   a;          // OK
    int   isA;        // OK poor form; Rule doesn't complain re bool prefixes
    bool  isBool;     // OK
protected:
    int   b;          // OK
    int   isB;        // OK poor form; Rule doesn't complain re bool prefixes
    bool  hasBool;    // OK
private:
    int  _length;     // OK
    bool _canBool;    // OK
    bool _shouldBool; // OK
};

void goodFcn() {
    bool isGoodFcnVar; // OK
}
