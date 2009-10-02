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

[LsstDm-4-2-5]
An include file for a class should have a file name of the form 
<class name> + <extension>.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 Files
Rule 4-2 Files that contain a single class should have the name of the class, 
     including capitalization.

EXAMPLE

MyClass.h, MyClass.cc


DEFINITION

Makes it easy to find the associated files of a given class. This convention 
is enforced in Java and has become very successful as such. In general, 
there should be one class declaration per header file. In some cases, 
smaller related classes may be grouped into one header file.


CAVEAT



ATTRIBUTION

Implementation based on Parasoft:NAMING-32; modified to allow *.hpp 
and *.h include files.
*/



// EXAMPLE

// For file: MyClass.h

class MyWork {    // Violation
};


// REPAIR

// For file: MyClass.h

class MyClass {    // OK
};

