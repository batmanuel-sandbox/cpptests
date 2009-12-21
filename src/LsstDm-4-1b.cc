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

[LsstDm-4-a-3]
Header files in C++ always have the file name extension ".h" or ".hpp";
Source files in C++ always have the file name extension ".cc". 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 File
Rule 4-1b C++ header files must have the extension .h (preferred) 
     or .hpp (allowed). Source files must have the extension .cc .


EXAMPLE

    MyClass.cc, MyClass.h


DEFINITION

These are accepted C++ standards for file extension. 


CAVEAT



ATTRIBUTION

Implementation based on: NAMING-41; modified to include legal ".hpp", too
*/


// EXAMPLE

//file.cpp

#include "test.hh"    // Violation
#include "test.notcc" // Violation
void foo( ) {
}



// REPAIR

//file.cc

#include "test.h"    // OK
#include "test.hpp"  // OK

#include "test.cc"   // OK
void lsstDm41b( ) {
}
