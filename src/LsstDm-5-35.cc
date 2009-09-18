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

Do not use floating point or unsigned variables as loop counters
[LsstDm-5-35 - 3]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-35 Signed int should be the preferred type for indices, 
          even those in which a negative value is illegal. 


EXAMPLE

double d = new d[10];
for (int i = 0; i < 10; i++) { d[i] = static_cast<double>(i); }


DEFINITION

'unsigned int' helps avoid index out of range exceptions at compile-time, 
but it throws you a curve when comparing ints and unsigned ints; 
requiring you to explicitly cast unsigned to signed. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:MISRA-065; modified.
*/


// EXAMPLE

void bad() {
  float i;
  for ( i = 0.; i < 10.; i++ )  { /* Violation */
  }
  unsigned short j;
  for ( j = 0; j < 10; j++ ) {  /* Violation */
  }
  unsigned k;
  for ( k = 0; k < 10; k++ ) {  /* Violation */
  }
}



// REPAIR

void good() {
  int i;
  for ( i=0; i<10; i++ ) { /* OK */
  }
}




