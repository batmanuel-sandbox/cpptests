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

[LsstDm-6-7 - 5]
'if' and 'else' should be followed by a compound statement


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 6 Layout and Comments
Rule 6-7  The 'if-else' class of statements should have the form in the
          examples below.


EXAMPLE 1

if (condition) {
    statements;
}


EXAMPLE 2

if (condition) {
    ...
} else {
    ...
}


EXAMPLE 3

if (condition) {
    statements;
} else if (condition) {
    statements;
} else {
    statements;
}


DEFINITION

The layout shown in the three examples above is equivalent to the Sun 
recommendation. 


CAVEAT

See associated Rule: LsstDM-6-7b.


ATTRIBUTION

Implementation and example copied from Parasoft:CODSTA-07; unchanged.
*/


// EXAMPLE

void bad1( int x, int y ) {
    int i, j;
    if(x > 0)      // Violation
        x = i;
    else if(y > 0) // Violation
        y = i;
    else
        y = j;     // Violation
}

void bad2( int x, int y )
{
    int i, j;
    if(x > 0)      // Violation
    {
        x = i;
    }
    else if(y > 0) // Violation
    {
        y = i;
    } else if(y > 0) // Violation
    {
        y = i;
    }
    else
    {
        y = j;     // Violation
        x = j;
    }
}

// REPAIR

void good1( int x, int y ) {
    int i, j;
    if(x > 0) {     // OK
        x = i;
    } else if(y > 0) { // OK
        y = i;
    } else {
        y = j;     // OK
        x = j;
    }
}




