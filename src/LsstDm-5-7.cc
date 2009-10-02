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

Use of global variables should be minimized
[LsstDm-5-7 - 3]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-7 Use of global variables should be minimized. 


EXAMPLE



DEFINITION

In C++ there is no reason that global variables need to be used at all. 
The same is true for global functions or file scope (static) variables. 
See also Rule 3-9. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:NAMING-04; modified to catch 
all global variable use.
*/


// EXAMPLE

int globalVar = 0; // to be avoided


// REPAIR

namespace glob {   // put into namespace
int globalVar = 0;
int const CONSTANT_GLOB_VAR = 0;
}



