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

If a function has no parameters, use () instead of ( void )
[LsstDm-6-6a - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-6 The function declarations should have the following form:
             void someMethod() {
                 ...
             }

EXAMPLE

void someMethod() {
    ...
}


DEFINITION

This follows from the general block rule specified in 6-4. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:CODSTA-07; unchanged.
*/


// EXAMPLE

void bad(void) {           // Violation
    int * d;
    void* p = (void *) d;
}


// REPAIR

void good() {               // OK
    int * d;
    void* p = (void *) d;
}


