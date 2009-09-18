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

The goto statement should not be used
[LsstDm-5-33 - 4]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-33 goto should not be used.


EXAMPLE



DEFINITION

'Goto' statements violate the idea of structured code. Only in some very 
few cases (for instance breaking out of deeply nested structures) should 
goto be considered, and only if the alternative structured counterpart 
is proven to be less readable. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:MISRA2004-14_4; unchanged.
*/


// EXAMPLE

int bad( int a ) {
    if (a < 0) {     
        goto end;       /* Violation */
    } 
    a = bad(a-1);
end:
    return a+1;
}


// REPAIR

int good( int a ) {
    /* Code was changed and does not use goto anymore */
    if (a >= 0) {
        a = good(a-1);
    }
    return a+1;
}



