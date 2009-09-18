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

Avoid using multiple inheritance
[LsstDm-2-4d - 5]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 2 General Recommendations
Rule 2-4d Avoid multiple inheritance.


EXAMPLE


DEFINITION

Avoid multiple inheritance, and only use when it is for completely 
distinct/disjoint considerations (such as application role versus 
persistence container type). 


CAVEAT



ATTRIBUTION

Implementation and example copied from Parasoft:OOP-05; unchanged other 
than severity level.
*/


// EXAMPLE

class BadA {
};
class BadB {
};
class BadC : public BadA, public BadB {
};                                                  // Violation


// REPAIR

class GoodB {
};
class GoodA : public GoodB {
};                                                  // OK
class GoodC : public GoodB {
};                                                  // OK



