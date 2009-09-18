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

Tests of a value against zero should be made explicit, unless the operand 
is effectively Boolean
[LsstDm-5- - 3]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-11 Implicit test for 0 should not be used other than for 
          boolean variables. 


EXAMPLE

if (nLines != 0)    // NOT:   if (nLines)


DEFINITION

By using explicit test the statement gives an immediate clue of the type 
being tested. It is common also to suggest that pointers shouldn't test 
implicit for 0 either, i.e. 'if (line == 0)' instead of 'if (line)' . 
The latter is regarded as such a common practice in C/C++ however that it 
can be used. 


CAVEAT

Implementation does not report violations on constant expressions.


ATTRIBUTION

Implementation and example copied from Parasoft:MISRA2004-13_2; unchanged
*/


// EXAMPLE

int mad() {
    return 1;
}

void bad( int x, int y ) {
  if (mad()) {}	// Violation
  if (y) {}     // Violation
}



// REPAIR

int foo() {
    return 1;
}

void good( int x, int y ) {
  if (foo() != 0) {}	// OK
  if (y != 0) {}        // OK
}


