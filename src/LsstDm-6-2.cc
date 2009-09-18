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

[LsstDm-6-2-3]
Line should be indented by a multiple of four spaces 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-2 Basic indentation must be 4 spaces.


EXAMPLE

for (i = 0; i < nElements; i++) {
    a[i] = 0;
}


DEFINITION
Indentation of 1 is too small to emphasize the logical layout of the code. 
Indentation larger than 4 makes deeply nested code difficult to read and 
increases the chance that the lines must be split. Choosing between 
indentation of 2, 3 and 4, 2 and 4 are the more common. We require 4 
because it is more visually obvious. 

CAVEAT

- Implementation assumes that lines should start in the first column unless 
  within the context of a block.
- Implementation treats tab characters as alignment to correct column 
  indentation.
- Implementation does not check indentation for lines which are in context 
  of "()" or "[]" or line which starts with preprocessor directives.
- Implementation can be parameterized by changing values of the following 
  variables in Python scripts:
  - Variable "IndentSize" contains the size of indentation in spaces.
  - Variable "TabSize" contains the size of tab character in spaces.
  - Both variables are set to 4.


ATTRIBUTION

Implementation and example copied from Parasoft:FORMAT-27; unmodified.


NOTES


Improves readability of code.
*/



// EXAMPLE

class A {
        };     // Violation

  void foo(){   // Violation
   }           // Violation
class B {
   int a;      // Violation
     int b;    // Violation
};

 /** Violation - Incorrect first line of comment indentation
 * ...
 */
void koo( int x){
    if (x == 0 || 
      x == 1){    // OK - in context of "()"
       x = 1;     // Violation
         x = 2;   // Violation
    }
}



// REPAIR

class AG {
};             // OK

void fooG(){    // OK
}              // OK
class BG {
    int a;     // OK
    int b;     // OK
};

/** OK - Correct first line of comment indentation
 * ...
 */
void kooG( int x){
    if (x == 0 || 
      x == 1){    // OK - in context of "()"
        x = 1;    // OK
        x = 2;    // OK
    }
}



