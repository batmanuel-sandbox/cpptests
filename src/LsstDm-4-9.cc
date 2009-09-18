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

[LsstDm-4-9-3]
Use multiple include guards 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 Files
Rule 4-9 Header files must include a construction that prevents 
     multiple inclusion.


EXAMPLE

For a file named AntennaRx?.h:

#ifndef LSST_ANTENNA_RX_H            // referring to file: AntennaRx.h
#define LSST_ANTENNA_RX_H
 ...
#endif // LSST_ANTENNA_RX_H

DEFINITION

The convention is an all uppercase construction of the full namespace, 
the file name and the h suffix with each part separated by underscore.

The construction is to avoid compilation errors. The construction must 
appear in the top of the file (before the file header) so file parsing 
is aborted immediately and compilation time is reduced. 


CAVEAT

Implementation does not check the 'LSST_' prefix on the guard token.


ATTRIBUTION

Implementation copied from: Parasoft:PFO-02 with no changes.
*/



// EXAMPLE

// file foo.h
// Violation - no multiple inclusion mechanism present
int j;



// REPAIR

// file foo.h
// OK
#ifndef LSST_FOO_H
#define LSST_FOO_H
int i;
#endif



