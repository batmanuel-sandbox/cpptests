/*  THIS RULE IS NOT IMPLEMENTED IN PARASOFT YET!!!
    // -*- LSST-C++ -*-
 */
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

[LsstDm-4-1a-3]
The head of each .h and each .cc file must being with a fixed format 
comment declaring the file contents and format to emacs.

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 File
Rule 4-1a The head of each .h and each .cc file must being with a fixed format 
          comment declaring the file contents and format to emacs.


EXAMPLE

For C++:
    // -*- LSST-C++ -*-


DEFINITION

This solved the emacs problem of not recognizing a C++ header file ending 
in .h.  Vim use is not affected.


CAVEAT



ATTRIBUTION


*/


// EXAMPLE

/*
This file is an example which does NOT include the header line. 
All other source files have the correct header.
*/

//#include test.cc
