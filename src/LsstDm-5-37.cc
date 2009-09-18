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

Do not use a #define that prevents the compiler from checking types 
except ones used only in #ifs and #elifs conditions
[LsstDm-5-37 - 4]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-37 Minimize use of 'define' statement.


EXAMPLE

// Preferred
int const num = 16;

// NO
#define NUM 16


DEFINITION

They have subtle side effects in debuggers and other tools. For example, 
symbolic names for constants aren't visible to the debugger and require 
const variables. 


CAVEAT

Implementation skips #defines which are used only in #ifs and #elifs 
conditions.

Rule works only within file scope.  It means that each source and header 
file is parsed separately.


ATTRIBUTION

Implementation and example copied from Parasoft:CODSTA-37; unchanged.
*/


// EXAMPLE

#define BAD_V1 20      // Violation
#define BAD_V2 1       // OK
#if BAD_V2
#endif


// REPAIR

const int GOOD_V1 = 20; // OK
#define GOOD_V2 1       // OK
#if GOOD_V2
#endif


