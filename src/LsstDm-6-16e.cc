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

There shall be a single ASCII space character following all semicolons 
and commas.
[LsstDm-6-16e - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-16 The following white space conventions should be followed: 
          * Conventional operators should be surrounded by a space character 
            (except * and /)
          * C++ reserved words should be followed by a white space.
          * Commas should be followed by a white space.
          * Colons should be surrounded by white space.
          * Semicolons in for statements should be followed by a space 
            character. 


EXAMPLE

a = (b + c)*d;              // NOT:   a=(b+c)*d
while (true) {              // NOT:   while(true) ...
doSomething(a, b, c, d);    // NOT:   doSomething(a,b,c,d);
for (i = 0; i < 10; i++) {  // NOT:   for (i=0;i<10;i++){


DEFINITION

Makes the individual components of the statements stand out. 
Enhances readability. It is difficult to give a complete list of the 
suggested use of whitespace in C++ code. The examples above however 
should give a general idea of the intentions. 


CAVEAT

Implementation checks for space following a semi-colon in a '()' context
and also checks for a space following a comma in a '()' context. 
LsstDm-6-16* Rules handle the other requirements.


ATTRIBUTION

Implementation and example copied from Parasoft:FORMAT-20; modified to
require space following a comma, also.
*/


// EXAMPLE

void bad(int j,int k) {  //violation
    int m;
    m = j + k;

    int i;
    for ( i = 0;i <= 10;i++) { // Violation
        m++;
    }
}



// REPAIR

void good(int j, int k) {  // OK
    int m;
    m = j + k;

    int i;
    for ( i = 0; i <= 10; i++) { // OK
        m++;
    }
}



