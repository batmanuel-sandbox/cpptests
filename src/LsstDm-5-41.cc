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

'Using namespace' should only be used for 'std' library
[LsstDm-5-41 - 4]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-41 Minimize use of 'using namespace' when defining symbols 


EXAMPLE

#include iostream.
using namespace std;



DEFINITION

'Using namespace' should only be used for system library 'std'. 

It can be difficult to determine from where a particular symbol came. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:  XXXXXXXXXXXXX
*/


// REPAIR   [ NOTE reorder of EXAMPLE and REPAIR for compilation reasons]

#include <iostream>
using namespace std; // OK


// EXAMPLE

namespace first {
}

namespace second {
}

using namespace first;    /* Violation */






