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

[LsstDm-5-27b-3]
All classes should contain the copy constructor 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-27 Constructors taking one argument must be declared as 'explicit' .


EXAMPLE


DEFINITION

A default constructor must be provided. Avoid implicit copy constructors. 


CAVEAT

The implementation accepts an explicit comment. That comment indicates
to others that the default copy constructor has been externally vetted.  
The acceptable format for the comments are "// Copy constructor" 
and "/* copy constructor".

LsstDm-5-27a checks that constructors are declared as 'explicit'.


ATTRIBUTION

Implementation copied from Parasoft:MRM-05; unchanged.
*/


// EXAMPLE

class Bad {  // Violation
};



// REPAIR

class Good {            // OK
    Good(const Good &b) {
    } 
};

class GoodAlternate1 {  // OK
// Copy constructor
};

class GoodAlternate2 {  // OK
    /* copy constructor  */
};

