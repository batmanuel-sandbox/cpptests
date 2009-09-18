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

[LsstDm-5-27a-1]
Constructors allowing for conversion should be made explicit 

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-27 Constructors taking one argument must be declared as 'explicit' .


EXAMPLE

class Year {
private:
    int y;
public:
    explicit Year(int i) : y(i) { }
};

    Year y1 = 1947; // illegal
    Year y2 = Year(1947); // OK
    Year y3(1947);  // Better

// Example of unintended result and no error reported
class String {
    int size;
    char *p;
public:
    String(int sz);    // constructor and implicit conversions
}
void f(){
    String s(10);
    s = 100;         // programmer's typo not detected; 100 is
                     // converted to a String and then assigned to s!
}


DEFINITION

A default constructor must be provided. Avoid implicit copy constructors. 

The example avoids implicit type conversions (see Rule 5-3). 
The declaration of y1 would be legal had 'explicit' not been used. 
This type of implicit conversion can result in incorrect and unintentional 
side effects. 


CAVEAT

LsstDm-5-27b checks that copy constructors are provided. 


ATTRIBUTION

Implementation copied from Parasoft:CODSTA-CPP-04; unchanged.
*/

// EXAMPLE

class Bad {
public:
    Bad( int i ) : _i( i ) {}  // Violation
    virtual ~Bad( ) {}
private:
    int _i;
};
 


// REPAIR

/* One argument constructors that are not meant for type conversion should
   be declared explicit. Conversions should be performed by conversion 
   functions rather than relying on implicit constructor calls. */

class Good {
public:
    explicit Good( int i ) : _i( i ) {}  // OK
    virtual ~Good( ) {}
private:
    int _i;
};
 
int main( ) {
    return 0;
};

