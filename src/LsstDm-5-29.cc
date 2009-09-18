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

Destructors must be declared virtual in base classes
[LsstDm-5-29 - 1]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-29 Destructors should be declared virtual. 


EXAMPLE

struct B {~B();};
struct D : B {~D();};
B* b = new D;
delete b; // Will not call D::~D() !


DEFINITION

As in the example above, without a virtual destructor, the proper 
destructor may not be called. 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:OOP-29; unchanged.
*/


// EXAMPLE

class BadBase {
    public:
        BadBase() {}
        ~BadBase() {}  // Violation
};

class BadDerived : public BadBase {
    public:
        BadDerived() {};
        ~BadDerived() {};
};


// REPAIR

class GoodBase {
    public:
        GoodBase() {}
        virtual ~GoodBase() {}    // OK
};

class GoodDerived : public GoodBase {
    public:
        GoodDerived() {};
        ~GoodDerived() {};
};



