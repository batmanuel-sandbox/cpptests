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

[LsstDm-3-4c - 3]
Place left parenthesis directly after function name when declaring it.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-4. Names representing methods or functions should be verbs and 
     must be written in mixed case starting with lowercase. 

     Do not put a space between the function name and the opening 
     parenthesis when declaring or invoking the function. 


EXAMPLE

getName(), computeTotalWidth()


DEFINITION

Improves readability.



CAVEAT 

This Rule only checks the left parenthesis is positioned correctly in the
function declaration and NOT when invoking it.



ATTTRIBUTION

Implementation based on Parasoft:FORMAT-30.
*/


// EXAMPLE TO FAIL
int bad () {              // Violation
    int const SIZE = 5;
    return SIZE;
};

int myBadSize = bad ();    // Not checked by this Rule

// REPAIR

int good() {              // OK
    int const SIZE = 5;
    return SIZE;
};

int myGoodSize = good();  // Not checked by this Rule






