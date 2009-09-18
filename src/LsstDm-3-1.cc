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

[LsstDm-3-1 - 3]
Class, struct, union and typedef names are to start with an uppercase letter  (CamelCase) 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-1. Names of user defined types must be in mixed case starting with uppercase.


EXAMPLE

	class Line, SavingsAccount

	struct {
    		float bar;
    		int  yoMama;
	} Foo;
	Foo myFoo;

	typedef Vector<Frame> FrameVector;


DEFINITION

Common practice in the C++ development community. The capitalization rule for class 
names should be all words in the name capitalized, e.g., "ClassName". 


CAVEAT 

This Rule checks only that class, struct, union and typedef names 
start with an uppercase letter; it does not verify CamelCase.


ATTTRIBUTION

Implementation based on Parasoft:NAMING-10; modified to remove 'enum'.
*/


// EXAMPLE TO FAIL
class   myClass   {};               // Violation
struct  myStruct  {};               // Violation
union   myUnion   {};               // Violation
typedef int       myInt;            // Violation


// REPAIR

class   MyClass   {};               // OK
struct  MyStruct  {};               // OK
union   MyUnion   {};               // OK
typedef int       MyInt;            // OK


