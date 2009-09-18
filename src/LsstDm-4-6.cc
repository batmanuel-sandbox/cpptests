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

[LsstDm-4-6-3]
Source lines will be kept to a length of 110 characters or less 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 Files
Rule 4-6 File content must be kept within 110 columns.

EXAMPLE


DEFINITION

The restriction to 80 columns is no longer as much a consideration as 
a common dimension for editors, terminal emulators, printers and debuggers, 
and so on. However, even with multi-window environments and current 
displays it is often useful to have multiple source windows open 
side by side, and limiting the number of characters facilitates this. 

It improves readability when unintentional line breaks are avoided when 
passing a file between programmers.

CAVEAT

THe implementation counts a TAB counted as one character.  
Note, LsstDm XXXX ensures TABs are expanded to spaces.


ATTRIBUTION

Implemented based on Parasoft:METRICS-26 with line length change 
to 110 characters.
*/



// EXAMPLE

int  foo;    /* .......................................................................................*/  // Violation



// REPAIR

int boo;    /* ... */   // OK

