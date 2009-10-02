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

Variables should not be introduced until they can be initialized 
with meaningful values
[LsstDm-5-4 - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-4  Variables should be initialized where they are declared.


EXAMPLE

int i=0;
float aFloat = 0.0;
int *i = 0          // 0 preferred pointer initialization, not NULL


DEFINITION

This ensures that variables are valid at any time. 

Sometimes it is impossible to initialize a variable to a valid value where 
it is declared:

    int x, y, z;
    getCenter(&x, &y, &z);

In these cases it may be left uninitialized rather than initialized 
to some phony value. Fixed phony values can be of use in debugging since 
they are consistent across runs, machines, builds and platforms. 

See also Rule 5-13. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:OPT-26; used unchanged.
*/


// EXAMPLE

int f(int);

void bad(int x) {
    int i;              // Violation: i is prematurely declared 
                        // (the intent is to use i in the for loop only)

    int max=0;          // Violation: max initialized with a dummy value

    max = ::f(x);
    for (i=0 ; i<max ; ++i) {
    }
}




// REPAIR

int f(int);

void good(int x) {

    int max = ::f(x);   // OK: max not introduced until meaningful
                        // value is available

    for(int i = 0; i < max; i++) { // OK
    }
}


