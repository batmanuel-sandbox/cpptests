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

Avoid overly complex inheritance hierarchies
[LsstDm-2-4b - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 2-4b Avoid overly complex inheritance hierarchies, 
          more than 3 levels should be a warning sign (except in Frameworks).


EXAMPLE


DEFINITION

Avoid multiple inheritance, and only use when it is for completely 
distinct/disjoint considerations (such as application role versus 
persistence container type). 


CAVEAT

Implementation measures the class inheritance level by calculating the number
of base classes. Rule triggers if the class inheritance level exceeds 3.

Implementation does not excuse Framework functions.



ATTRIBUTION

Implementation and example copied from Parasoft:METRICS-05; modified to 
trigger when class inheritance level exceeds 3.

*/


// EXAMPLE

class Base {
};                                              // OK

class Dev1 : public Base {
};                                              // OK

class Dev2 : public Dev1 {
};                                              // OK

class Dev3 : public Dev2 {
};                                              // OK

class Dev4 : public Dev3 {
};                                              // Violation



// REPAIR

// Limit the number of base classes to 3.


