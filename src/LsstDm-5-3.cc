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

[LsstDm-5-3-3]
Prefer C++-style casts 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-3 Avoid type conversions as far as possible.

EXAMPLE

floatValue = static_cast<float> (intValue);    // YES!
floatValue = intValue;                         // NO!
floatValue = (float)intValue;                  // NO C-style casts!


DEFINITION

When required, type conversions must always be done explicitly 
using C++ style casts.

Never rely on implicit type conversion. 

By this, the programmer indicates that he is aware of the different 
types involved and that the mix is intentional. If you find you are 
casting a lot, stop and think! Maybe there is a better way to do things. 


CAVEAT


ATTRIBUTION

Implementation and example copied from Parasoft:CODSTA-CPP-11; unchanged.
*/

// EXAMPLE

class Base {
public:
    Base( );
    virtual ~Base( );
};

class Derived : public Base {
public:
    Derived( );
    ~Derived( );
};

void foo( ) {
    Base *pB;
    Derived *pD2 = (Derived *) pB;     // Violation
}



// REPAIR

class BaseG {
public:
    BaseG( );
    virtual ~BaseG( );
};

class DerivedG : public BaseG {
public:
    DerivedG( );
    ~DerivedG( );
};

void fooG( ) {
    BaseG *pB;
    DerivedG *pD1 = dynamic_cast<DerivedG*>( pB );   // OK
}

