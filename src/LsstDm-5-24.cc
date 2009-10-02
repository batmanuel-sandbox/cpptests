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

Reference parameters must be declared as const references whenever possible
[LsstDm-5-24 - 2]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-24 Arguments that are of non-primitive types and will not be 
          modified should be passed by 'const' reference.


EXAMPLE

void setWidget(Widget const &widget)


DEFINITION

Passing by 'const' reference when possible is much more efficient 
than passing large objects but also allows use of non-pointer syntax 
in the method. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:CODSTA-CPP-43; unchanged.
*/


// EXAMPLE
struct Bad {
    int x;
    int y;
};

int bar( Bad &f ) {  // Violation
    return f.x;
}

int foo( Bad &f ) { // OK
    return f.x++;
}

// REPAIR

struct Good {
    int x;
    int y;
};

int bar( const Good &f ) {  // OK
    return f.x;
}


