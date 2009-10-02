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

[LsstDm-5-30-3]
Avoid magic numbers 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-30 The use of magic numbers in the code must be avoided. 


EXAMPLE


DEFINITION

Numbers other than 0 and 1 should be declared as named constants instead. 
See also Rule 3-3.

If the number does not have an obvious meaning by itself, the readability 
is enhanced by introducing a named constant instead. A different approach 
is to introduce a method from which the constant can be accessed. 


CAVEAT

Implementation excludes using literal constants in initialization.
Implementation skips usage of 0 or 1 because they are equivalent of true 
or false.


ATTRIBUTION

Implementation and example copied from Parasoft:CODSTA-26; unchanged.
*/



// EXAMPLE

void foo(int);

int bad( int a[], int b ) {
    int e;
    int f = 0;  
    a[5] = 56; // Violation
    e= 8;      // Violation
    ::foo(56);   // Violation
    return 8;  // Violation
}



// REPAIR

const int MAX = 8;       // OK

void bar(float);

int good( float a[], float b ) {
    int e;
    int f = 0;        // OK  
    int i = 5;        // OK
    a[i] = MAX;       // OK
    e = MAX;          // OK
    ::bar(a[5]);        // OK
    return  MAX;      // OK
}


