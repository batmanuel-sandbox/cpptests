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

Loop variables should be declared in loop scope. 
Prefer pre-increment and pre-decrement.

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-14 Loop variables should be declared in loop scope.  Prefer 
          pre-increment and pre-decrement.

EXAMPLE

int sum = 0;
double x = 0.0;
for (iter ptr = vec.begin(), end = vec.end();  ptr != end; ++ptr, ++x) {
    sum += x*(*ptr);
}


for (int i = 0, sum = 0; i < 100; i++)
    sum += value[i];


DEFINITION

Loop variables should be declared in loop scope. 
Use of pre-increment and pre-decrement is preferred but not required. 

Increase maintainability and readability. Make it crystal clear what 
controls the loop and what the loop contains. 


CAVEAT

Pre-increment and Pre-decrement are not checked.


ATTRIBUTION

Implementation based on Parasoft:MISRA2004-13_5; unchanged.
*/

#include <vector>

// EXAMPLE
void bad( ) 
{
    int value = 10;
    for (int i = 0, sum = 0; i < 10; i++) { // BAD: 'sum' not loop variable
        sum += value;
    }

    int count = 0;
    int j; 
    for ( j = 0; j < 10; ++j) {     // BAD: 'j' not declared within loop scope
        count += j;
    }
}



// REPAIR

void good( )
{
    int sum = 0;
    int value = 10;
    for (int i = 0; i < 100; i++) {      // OK
        sum += value*i;
    }
}

void ok( )
{
    std::vector<int> vec;
    for ( int i = 0; i < 10; ++i) {       // OK
        vec.push_back(i);    
    }

    int sum = 0;
    double x = 2.0;
    for (std::vector<int>::iterator ptr = vec.begin(), end = vec.end(); 
         ptr != end; ++ptr, ++x) {     // OK
       sum += x*(*ptr);
    }
}


