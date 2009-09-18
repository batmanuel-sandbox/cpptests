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

[LsstDm-4-11-3]
#include statements in a file should only be preceded by other 
preprocessor directives or comments 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 Files
Rule 4-11 Include statements must be located at the top of a file only.

EXAMPLE


DEFINITION

In the case of the implementation (.cc file) of a template definition (.h file) the include statement may be placed at the end of the including file.

Common practice. Avoid unwanted compilation side effects by "hidden" include statements deep into a source file. 


CAVEAT

The rule enforces that the only items which may precede a #include in a 
file are other preprocessor directives or comments."


ATTRIBUTION

Implementation based on Parasoft:MISRA2004-19_1; unchanged.
*/



// EXAMPLE

void foo();
int g;
#include "test.h"  // Violation



// REPAIR

/*
#include "test.h"  // OK
void hoo();
int h;
*/

