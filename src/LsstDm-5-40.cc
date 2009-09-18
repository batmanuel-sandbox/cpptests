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

[LsstDm-5-40-3]
Prefer vector and string to dynamically allocated arrays 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-40 Use 'std::vector<Foo>' over array declaration (e.g. Foo[]).


EXAMPLE


DEFINITION

This is less prone to memory leaks (i.e. putting delete instead of delete[]) 
and you don't need special pointers to work with it. Again, let's use the 
good STL classes. 


CAVEAT


ATTRIBUTION

Implementation and example based on Parasoft:STL-10; unchanged.

*/



// EXAMPLE

#include <vector>
using namespace std;

class Bad{};
void foo() {
  Bad *p;
  p = new Bad[10]; // Violation
};



// REPAIR

class Good{};

void goo() {
  Good obj;
  vector <Good> vectorGood; // OK
  vectorGood.push_back(obj);
};


