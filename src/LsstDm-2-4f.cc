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

Keep functions short
[LsstDm-2-4f - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 2 General Recommendations
Rule 2-4f Keep functions short and with a single purpose


EXAMPLE


DEFINITION

Keep functions short and with a single purpose. 


CAVEAT

Implementation does not ensure function has a single purpose.


ATTRIBUTION

Implementation and example copied from Parasoft:METRICS-18; unchanged.

*/


// EXAMPLE

void foo(int a, int b) { // Violation - CC value: 11
    switch (a) {
        case 1:        // 1
            break;        
        case 2:        // 2
            break;
        case 3:        // 3
            break;
        default:      
            break;
    }
    if (a || b) {          // 4, 5
    }
    if ((a || b) && (a && b)) { // 6, 7, 8, 9
    }
    while (a != 0) {      // 10
    } ;
    while (a != 0) {      // 11
    } ;
}


// REPAIR

// Keep a Cyclomatic Complexity value on the level lower than 10.



