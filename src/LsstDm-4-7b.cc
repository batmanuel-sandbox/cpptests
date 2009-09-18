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

[LsstDm-4-7b-5]
Special characters, like TAB, CR, page-break, should be avoided


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 Files
Rule 4-7 Special characters like TAB, carriage-return (ctrl-M) and 
         page break should be avoided.

EXAMPLE


DEFINITION

These characters can cause problem for editors, printers, terminal emulators 
or debuggers when used in a multi-programmer, multi-platform environment. 
Tabs must be expanded by the editor to spaces and should be 4 spaces. 


CAVEAT

Implementation allows the following escape sequences:
	\\,  \', \", \<Octal Number>,\x<Hexadecimal Number>"


ATTRIBUTION

Implementation based on Parasoft:CODSTA-CPP-60; modified to allow subset 
of ISO/IEC 14882:2003 escape characters.

*/



// EXAMPLE

#include <stdio.h>
void foo( ) {
    printf("ABCD\u1111");     // Violation
    printf("abcd\tgf");       // Violation
}



// REPAIR

// Do not use escape sequences not defined in list.


