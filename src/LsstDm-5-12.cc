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

Floating-point expressions should never be directly tested for equality 
or inequality unless in comparison to zero ("0").
[LsstDm-5-12 - 3]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-12 Floats and doubles should never be directly tested for equality 
unless in comparison to zero.



EXAMPLE

if (fabs(value - 1.0) < epsilon)                  // Preferred

if (b == 0 && sigma2 == 0) {                  // OK in specific situations
    _sigma2 = 1.0;  //avoid 0/0 at center of PSF  
}

if (value == 1.0)          // No: Subject to roundoff error



DEFINITION

Round-off makes it difficult for two floating point numbers to be truly equal.
Always use greater than or less than. A utility method like 
'boolean closeEnough(value1,value2)' would be useful. 


CAVEAT

Implementation does not detect indirect tests of equality and inequality 
which are equally problematic.

if ( ( x <= y ) && ( x >= y ) ) {
    ;
}



ATTRIBUTION

Implementation and example copied from Parasoft:MISRA2004-13_3; unchanged.
*/


// EXAMPLE

void bad( ) 
{
    float sigma2;
    if ( sigma2 == 1 );      // Violation
    if ( sigma2 == 1.0 );    // Violation
}

void anotherBad() 
{
    float *z;
    float x, y;
    int i;
    if ( x == y );           // VIOLATION
    if ( x == 1.0 );         // VIOLATION
    if ( 1.0 == x );         // VIOLATION
    if ( x == i );           // VIOLATION
    if ( i == x );           // VIOLATION
    if ( *z == 1 );          // VIOLATION
    if ( 1 == *z );          // VIOLATION
    if ( *z == 1.0 );        // VIOLATION
    if ( 1.0 == *z );        // VIOLATION
    if ( i == 0.0 );         // VIOLATION
    if ( i == 1.0 );         // VIOLATION
    if ( x == 010 );         // VIOLATION

}


// REPAIR
void good( ) 
{
    float sigma2;
    if (sigma2 == 0) {}      // OK
    if (sigma2 == 0.0) {}    // Failing still 
}

void anotherGood( float epsilon ) 
{
    float *z;
    int i,j;
    float x, y;
    if (x - epsilon <= y && y <= x + epsilon);  // OK
    if (-epsilon <= x && x <= epsilon);         // OK

    if ( x == 0 );
    if ( x == 00 );
    if ( 0 == x ); 
    if ( 0 == 1.0 );         
    if ( 1.0 == 0 );
    if ( 0 == 0.0 );
    if ( 0.0 == 0 );
    if ( x == 0.0 );  //Failing still
    if ( 0.0 == x );  //Failing still
    if ( z == 0 );
    if ( *z == 0 );
    if ( *z == 0.0 ); //Failing still
    if ( i == 0 );
    if ( i == 1 );
    if ( i == j );
}

