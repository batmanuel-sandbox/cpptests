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

Only one statement is allowed per line
[LsstDm-6-1 - 3]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-1 Multiple statements per line should not be used. 



EXAMPLE

// NO!
value = 10; setHex(value); doLess();


DEFINITION

Multiple statements per line should not be used.

The example above is too hard to read and debug. Always use separate lines. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:FORMAT-06; unchanged.
*/


// EXAMPLE

void bad() {
   int i; char c; // Violation
   i = 10; c = 'c';
}



// REPAIR

void good() {
    int i;   // OK
    char c; 
    i = 10;  // OK
    c = 'c';
}



