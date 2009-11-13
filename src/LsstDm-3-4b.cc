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

[LsstDm-3-4b - 3]
Public and Protected member function names must start with lowercase letter 
(camelCase); Private member function names must lead with '_' and
then start with lowercase letter (camelCase).


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-4. Names representing methods or functions should be verbs and 
     must be written in mixed case starting with lowercase. 

     Private member function names must additonally start with an underscore 
     ('_').

     Do not put a space between the function name and the opening 
     parenthesis when declaring or invoking the function. 


EXAMPLE

getName(), computeTotalWidth()


DEFINITION

Common practice in the C++ development community. This is identical to 
variable names, but functions in C++ are already distinguishable from 
variables by their specific form. 



CAVEAT 

This Rule only checks that member function names start with a lowercase letter;
    it does not check for camelCase, verb usage, or parenthesis positioning.

Global function name usage is checked in LsstDm-3-4a
Parenthesis usage is checked in XXXXXXX


ATTTRIBUTION

Implementation based on Parasoft:NAMING-34.
*/


// EXAMPLE TO FAIL

class BadClass {
public:
    void const GetPublic() const {}           // Violation
    void const _getAnotherPublic() const {}   // Violation
protected:
    void const GetProtected() const {}          // Violation
    void const _getAnotherProtected() const {}  // Violation
private:
    void const GetPrivate() const {}          // Violation
    void const getAnotherPrivate() const {}   // Violation
};


// REPAIR

class GoodClass {
public:
    void const getPublic() const {}           // OK
    void const getAnotherPublic() const {}    // OK
protected:
    void const getProtected() const {}          // OK
    void const getAnotherPrivate() const {}   // OK
private:
    void const _getPrivate() const {}         // OK
    void const _getAnotherPrivate() const {}  // OK
};

