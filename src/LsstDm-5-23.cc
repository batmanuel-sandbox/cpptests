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

[LsstDm-5-23-3]
Whenever a function is declared or defined, its type shall be explicitly stated 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-23 Functions must always have the return value explicitly listed.


EXAMPLE

// YES:
int getValue() {
    ...
}

// NO:
getvalue() {
}



DEFINITION

If not explicitly listed, C++ implies int return value for functions. A programmer must never rely on this feature, since this might be confusing for programmers not aware of this artifact. 

CAVEAT

Post-increment and post-decrement are not checked.


ATTRIBUTION

Implementation copied from Parasoft:MISRA2004-8_2_a; unchanged.

*/

// EXAMPLE

// Fails to compile...
//bad();     // Violation



// REPAIR

int good(); // OK

