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

[LsstDm-4-7a-5]
Tabs that do not use ASCII spaces must not be used 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 Files
Rule 4-7 Special characters like TAB, carriage-return (ctrl-M) and 
         page break should be avoided.

EXAMPLE


DEFINITION

Tabs must be expanded by the editor to spaces and should be 4 spaces. 


CAVEAT



ATTRIBUTION

Implementation based on Parasoft:FORMAT-01; unchanged.
*/

// EXAMPLE

void bad( ) {
    int i;           // Violation
}


//REPAIR

void good( ) {
    int i;               //OK
}


