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

[LsstDm-3-5a-3]
Names of non-scalar typedefs must not be suffixed with "_t", "_type", "_T", 
"_Type" 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-5 A name representing a typedef must be initial letter capitalized,
     camel-case with no prefix of the enclosing class and no suffix of 'T' 
     or 'Type'.


EXAMPLE

        typedef unsigned char Byte;
        typedef unsigned long BitMask;
        Byte smallMask;


DEFINITION

This syntax is consistent with template type names and classes which are 
also similar in usage. 

Non-scalar typedefs shall not be suffixed with an underscore followed 
by  't', 'type', 'T', or 'Type'. 


CAVEAT

This Rule checks only that the initial letter is uppercase; it does not
check CamelCase nor does it check the prefix condition.


ATTRIBUTION

Copied from NAMING-29; modified to disallow suffices of '_t', '_type', 
'_T', '_Type'

*/



// EXAMPLE

class MyClass {
    int count;
};
typedef MyClass Mya_t;       // Violation
typedef MyClass Myb_type;    // Violation
typedef MyClass Myc_T;       // Violation
typedef MyClass Myd_Type;    // Violation


// REPAIR

class MyClassG {
    int count;
};
typedef MyClassG Mya;        // OK
typedef MyClassG Myb;        // OK
typedef MyClassG Myc;        // OK
typedef MyClassG Myd;        // OK

