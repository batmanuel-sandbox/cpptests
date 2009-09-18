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

[LsstDm-5-2a-3]
Order of scopes in class: public before all others 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Statements
Rule 5-2  The parts of a class must be sorted 'public' , 'protected' ,
     and 'private'.


EXAMPLE

class MyClass{
        public:
                int anInt;
                int doSomething();
        protected:
                float aFloat;
                float doSomethingElse();
        private:
                char _aChar;
                char doSomethingPrivately();
        ...
        }


DEFINITION

All sections must be identified explicitly. Not applicable sections may be
left out. Member declarations should be done with data members first, then
member functions, in each section

Public must be before "protected" which must be before "private".


CAVEAT

The ordering of data members before member functions within a section
is not being checked.


ATTRIBUTION

Implemented based on: Parasoft:CODSTA-CPP-46; unchanged.
*/


// EXAMPLE

// file: TestFoo.h
class TestAllFoo {  // Violation
public:
    void foo1( );
protected:
    void foo2( );
private:
    void foo3( );
};



// REPAIR

// file: Foo.h
class Foo {  // OK
public:
    void foo1( );
protected:
    void foo2( );
private:
    void foo3( );
};


