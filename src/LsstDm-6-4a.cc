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

[LsstDm-6-4a-4]
First line in control statement body should be indented more than control 
statement keyword 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-4 Block layout should be as illustrated in example 1 below 
         (K&R, strongly recommended) not as in example 2 or 3.


EXAMPLE 1 - strongly recommended

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

- Implementation does not check indentation for lines which starts with 
  preprocessor directives.
- Implementation can be parameterized by changing values of the following 
  variables in Python scripts:
  "MinIndentSize" - the minimum admissible size of indentation in spaces; 
  default set to 2
  "MaxIndentSize" - the maximum admissible size of indentation in spaces; 
  default set to 4
  "TabSize"       - size of tab character in spaces; default set to 4


ATTRIBUTION

Implementation and example copied from Parasoft:FORMAT-37; altered default 
indent values.
*/


// EXAMPLE

void bad( int x ) {
    while (x == 0)
     x = 1;       // Violation
    if (x == 0) {
    x++;           // Violation
    x++;
    }
}

// REPAIR

void good( int x ) {
    while (x == 0)
      x = 1;     // OK
    if (x == 0) {
        x++;       // OK
        x++;
    }
}



