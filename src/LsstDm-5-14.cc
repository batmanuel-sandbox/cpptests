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

Only loop control statements must be included in the 'for()' construction

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-14 Only loop control statements must be included in the 'for()' 
          construction.

EXAMPLE

// YES:
int sum = 0;
for (int i = 0; i < 100; i++)
    sum += value[i];

// NO:
for (int i = 0; int sum = 0; i < 100; i++)
    sum += value[i];


DEFINITION

Use of post-increment and post-decrement is preferred but not required. 
Loop variables should be declared in loop scope. 

Increase maintainability and readability. Make it crystal clear what 
controls the loop and what the loop contains. 


CAVEAT

Post-increment and post-decrement are not checked.


ATTRIBUTION

Implementation based on Parasoft:MISRA2004-13_5; unchanged.
*/


// EXAMPLE

/*   Following fails to compile on some systems
void bad( ) {
    int value = 10;
    for (int i = 0; int sum = 0; i < 100; i++) {
        sum += value;
    }
}
*/



// REPAIR

void good( )
{
    int sum = 0;
    int value = 10;
    for (int i = 0; i < 100; i++) {
        sum += value;
    }
}

