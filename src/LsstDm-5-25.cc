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

[LsstDm-5-25-3]
Member functions shall be declared const whenever possible 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-25 Class methods that do not update internal data nor return 
          references/pointers to internal data must use the 'const' label 
          at the end of the signature.


EXAMPLE

double getFactor() const;

DEFINITION

This is required if one wants to manipulate constant versions of the object. 

CAVEAT


ATTRIBUTION

Implementation copied from Parasoft:CODSTA-CPP-54; unchanged.
*/

// EXAMPLE

class Bad {
     int bad(int a){  // Violation
         return a;
     }	
};



// REPAIR

class Good {
     int good(int a) const {  // OK
         return a;
     }	
};


