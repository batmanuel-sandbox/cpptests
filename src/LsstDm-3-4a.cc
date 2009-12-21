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

[LsstDm-3-4a - 3]
Global function and class method names must conform to 
leading lowercase letter of camelCase: 
   1) if private methods, prepend with '_'
   2) if boolean functions or methods, prepend with one of {is,can,has,should};
   3) alphabetic part will always be leading lowercase letter camelCase.
    

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-4. Names representing methods or functions should be verbs and 
     must be written in mixed case starting with lowercase. 

     Do not put a space between the function name and the opening 
     parenthesis when declaring or invoking the function. 

Rule 3-24 The prefixes: 'is', 'has', 'can', and 'should' should be used 
     for boolean variables and methods.

Rule 3-10 Private class variables and methods must have underscore prefix.


EXAMPLE

getName(), computeTotalWidth(), isWidget()


DEFINITION

Common practice in the C++ development community. This is identical to 
variable names, but functions in C++ are already distinguishable from 
variables by their specific form. 



CAVEAT 

This Rule checks the alphabetic portion of name starts with a lowercase 
letter.  This Rule checks that global boolean functions start with one of
{is can has should}; it usurps both Rule 3-10 and Rule 3-24 with respect to 
methods and functions; there is no LsstDm-3-10.cc nor LsstDm-3-23.cc.

This Rule does not check for camelCase, verb usage, or parenthesis positioning.

Parenthesis usage is checked in LsstDm-3-4c


ATTTRIBUTION

Implementation based on Parasoft:NAMING-34.
*/


// EXAMPLE TO FAIL

class BadClass {
public:
    int   _a(int);            // VIOLATION
    int   _isA(int);          // VIOLATION
    int   Aa(int);            // VIOLATION
    bool  aBool(int);         // VIOLATION
    bool  _isBool(int);       // VIOLATION
protected:
    int   _b(int);            // VIOLATION
    int   _isB(int);          // VIOLATION
    int   Bb(int);            // VIOLATION
    bool  bBool(int);         // VIOLATION
    bool  _hasBool(int);      // VIOLATION
private:
    int  length(int);         // VIOLATION
    bool cBool(int);          // VIOLATION
    bool shouldBool(int);     // VIOLATION
};

void BadFcn() {               // VIOLATION
    bool badFcnVar;
}

bool EvenWorseFcn() {}        // VIOLATION


// REPAIR

bool isGoodLocal;          // OK

class GoodClass {
public:
    int   a(int);          // OK
    int   isA(int);        // OK 
    bool  isBool(int);     // OK
protected:
    int   b(int);          // OK
    int   isB(int);        // OK 
    bool  hasBool(int);    // OK
private:
    int  _length(int);     // OK
    bool _canBool(int);    // OK
    bool _shouldBool(int); // OK
};

void goodFcn() {
    bool isGoodFcnVar;     // OK
}

bool isEvenWorseFcn() {}   // OK
