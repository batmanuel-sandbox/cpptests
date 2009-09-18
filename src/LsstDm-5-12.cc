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

Floating-point expressions should never be directly tested for equality 
or inequality
[LsstDm-5-12 - 3]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-12 Floats and doubles should never be directly tested for equality.



EXAMPLE

if (value == 1.0)    // Subject to roundoff error
if (fabs(value - 1.0) < epsilon)   // OK


DEFINITION

Round-off makes it difficult for two floating point numbers to be truly equal.
Always use greater than or less than. A utility method like 
'boolean closeEnough(value1,value2)' would be useful. 


CAVEAT

Implementation does not detect indirect tests of equality and inequality 
which are equally problematic.

if ( ( x <= y ) && ( x >= y ) ) {
    ;
}



ATTRIBUTION

Implementation and example copied from Parasoft:MISRA2004-13_3; unchanged.
*/


// EXAMPLE

void foo() {
    float x, y;

    if (x == y);      // Violation
    if (x == 0.0f);   // Violation
}


// REPAIR

void foo( float epsilon ) {
    float x, y;

    if (x - epsilon <= y && y <= x + epsilon);  // OK
    if (-epsilon <= x && x <= epsilon);         // OK
}



