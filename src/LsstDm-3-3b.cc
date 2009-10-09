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

[LsstDm-3-3b-3]
All #define constants shall be in uppercase using underscore to separate words.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-3 Named constants (including enumeration values) must be all 
uppercase using underscore to separate words.


EXAMPLE

    #define MAX_ITERATION 25


DEFINITION

Common practice in the C++ development community. In general, the use of 
such constants should be minimized. In many cases implementing the value 
as a method is a better choice: 

        int getMaxIterations() {     // NOT: MAX_ITERATIONS = 25
            return 25;
        }

This form is both easier to read, and it ensures a unified interface towards 
class values. 

Identifiers with words separated by underscore are accepted.


ATTRIBUTION

Implementation based on Parasoft:NAMING-01 unchanged.
*/

// EXAMPLE
#define maxIterations 25     // Violation


// REPAIR

#define MAX_ITERATIONS 25     // OK

