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

Deeply nested code should be avoided.
[LsstDm-6-3 - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-3 Deeply nested code should be avoided.


EXAMPLE



DEFINITION

Code that is too deeply nested is hard to both read and debug. 
One should replace excessive nesting with function calls. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:METRICS-23; unchanged.
*/


// EXAMPLE

class A {
    void bad( int x ) const {
        if (x > 0) {                    // OK
            if (x > 1) {                // OK
                if (x > 2) {            // OK
                    if (x > 3) {        // OK
                        if (x > 4) {    // OK
                            if (x > 5) { // Violation
                            }
                        }
                    }
                }
            }
        }
    }
};



// REPAIR

// Do not use excessive block nesting depth (5 levels)

