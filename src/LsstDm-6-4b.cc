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

[LsstDm-6-4b-4]
Sibling statement lines should be indented to the same level 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-4 Block layout should be as illustrated in example 1 below 
         (K&R, strongly recommended) not as in example 2 or 3.


EXAMPLE 1 - highly recommended

while (!done) {
    doSomething();
    done = moreToDo();
}

EXAMPLE 2 - BAD

while (!done)
{
    doSomething();
    done = moreToDo();
}

EXAMPLE 3 - BAD

while (!done)
    {
      doSomething();
      done = moreToDo();
    }

DEFINITION

Example 3 introduces an extra indentation level which doesn't emphasize 
the logical structure of the code as clearly as example 1. Example 2 adds 
an additional line without significant increase in readability. 


CAVEAT

- Implementation treats tab characters as an alignment to correct column 
  indentation.
- Implementation does not check indentation for lines which are in context 
  of "()" or "[]" or lines which start with preprocessor directives.
- Implementation can be parameterized by changing value of the "TabSize" 
  variable in Python scripts (by default it is set to 4 spaces).


ATTRIBUTION

Implementation and example copied from Parasoft:FORMAT-36; unchanged.
*/



// EXAMPLE

void foo( int x ) {
    if (x == 0) {
    }
     x = 2;
    x = 2;          // Violation
   x = 2;           // Violation
    x = 2;          // Violation
   x = 2;           // Violation
}




// REPAIR

void fooG( int x ) {
    if (x == 0) {
    }
    x = 2;          // OK
    x = 2;          // OK
    x = 2;          // OK
    x = 2;          // OK
    x = 2;          // OK
}



