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
[LsstDm-4-13-3]
Don't write namespace usings in a header file or before an #include 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 File
Rule 4-13 Using declarations and using directives must not be used in 
     header files.

EXAMPLE

Example using declaration:   using lsst::canbus::CanIo
Example using directive:   using namespace lsst::canbus


DEFINITION

A using declaration adds a name to the local scope. This is bound to 
create a conflict. Using directives are less likely to cause conflicts, 
since the compiler will force the user to qualify the name. However, code 
is generally clearer and more precise if they are not used in header files. 


CAVEAT


ATTRIBUTION

Implemented copied from Parasoft:CODSTA-CPP-39; unchanged.

*/

// EXAMPLE
namespace boo{
    #include <stdio.h>
    using namespace std;    // Violation
    #include <stddef.h>
}


// REPAIR

namespace goo{
    #include <stdio.h>
    #include <stddef.h>
    using namespace std;    // OK
}


