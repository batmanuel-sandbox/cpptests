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

[LsstDm-5-22-3]
Assignment operators shall not be used in expressions that yield a 
Boolean value 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-22 Executable statements in conditionals must be avoided.


EXAMPLE

// NO!
if ((fileHandle = open (fileName, "w"))) {
    ...
}

// YES:
fileHandle = open (fileName, "w");
if (fileHandle) {
    ...
}

DEFINITION

Conditionals with executable statements are just very difficult to read. This is especially true for programmers new to C/C++. 

CAVEAT

ATTRIBUTION

Implementation copied from Parasoft:MISRA2004-13_1; unchanged.
*/



// EXAMPLE

void foo() 
{
    int x;
    int y;
    int z;
    z = !(x = y);                // Violation
    if ((x > y) && (x = 4)) {     // Violation
    }
    if (!(x = y)) {               // Violation
    }
}



// REPAIR

void fooG() 
{
    int x;
    int y;
    int z;
    z = !(x == y);               // OK
    if ((x > y) && (x == 4)) {    // OK
    }
    if (!(x == y)) {              // OK
    }
}

