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

[LsstDm-4-5a-3]
Avoid inline functions except for simple accessors/mutators.

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 4 Files
Rule 4-5: Inline functions are prohibited except for simple accessors/mutators 
     that get or set a simple attribute.


EXAMPLE 

class Foo {
public:
    Foo();
    virtual ~Foo();
    int getValue() const { return value; };
    int getAnotherValue() const;

private:
    int value;
    int anotherValue;
};


 
DEFINITION

Inline functions are prohibited except for simple accessors/mutators
that get or set a simple attribute.  All others must be approved by 
the DM Project Scientist, and will only be approved where there is no 
other way to meet performance requirements.

If used, inline functions must be very simple, with bodies of 10 lines or less. 

When choosing whether to inline, think about balancing compile-time and 
run-time performance. Be careful to avoid requiring inclusion of 
additional .h files (use forward declaration if needed). 


CAVEAT

Rule implementation disallows inlining for constructors and destructors.
Implementation checks only inline function existence and does not
check its complexity.


ATTRIBUTION

Implemented based on Parasoft: OPT-17; unmodified.
*/


// EXAMPLE

class MyClass {
public:
    inline MyClass( ) {};               // Violation
    MyClass( const MyClass& ) {};       // Violation
    ~MyClass( ) {};                     // Violation
};

class Bad {
public:
    Bad();
    virtual ~Bad();
    int getValue() const { return value; };
    int getAnotherValue() const;

private:
    int value;
    int anotherValue;
};



// REPAIR

class MyClassG {
public:
    MyClassG( );                     // OK
    MyClassG( const MyClassG& );     // OK
    ~MyClassG( );                    // OK
};

MyClassG::MyClassG( ) {}
MyClassG::MyClassG( const MyClassG& ) {}
MyClassG::~MyClassG( ) {}

class Foo {
public:
    Foo();
    virtual ~Foo();
    void doit() { value=10; value=2;value=3;value=5;value=anotherValue; 
                 value++;value++; anotherValue = value;};
    int getValue() const { return value; };
    int getAnotherValue() const;

private:
    int value;
    int anotherValue;
};

