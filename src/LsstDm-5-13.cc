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

Declare variables as locally as possible
[LsstDm-5-13 - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-13 Variables should be declared in the smallest scope possible.



EXAMPLE


DEFINITION

Variables should be initialized when declared (and not declared before they 
can be initialized).

By keeping the operations on a variable within a small scope, it is easier 
to control the effects and side effects of the variable. See also Rule 5-4. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:OPT-01; unchanged.
*/


// EXAMPLE

void bad( ) {
    int a;      // Violation
    {
        a = 0;
    }
}


// REPAIR

void good( ) {
    {
        int a;  // OK
        a = 0;
    }
    int b;      // OK
    if (b>0) {
        b = -1;
    } else {
        b = 1;
    }
}


