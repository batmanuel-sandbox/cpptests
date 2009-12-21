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

[LsstDm-3-3a-3]
Identifiers for enumeration values shall be uppercase using
underscore as word separator.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-3 Named constants (including enumeration values) must be all 
uppercase using underscore to separate words.


EXAMPLE

    enum Swimmers { TROUT, CARP, HALIBUT };
    Swimmers tastySwimmers;
    enum { FISH_TROUT, FISH_CARP, FISH_HALIBUT };

DEFINITION

Common practice in the C++ development community. 
Values with words separated by underscore are accepted.


ATTRIBUTION

Implementation based on Parasoft:NAMING-42; modified for LSST needs.
*/

// EXAMPLE

enum SwitchPosition {upHigh, down_Low}; // Violation
enum SwitchPosition1 {Up, Down}; // Violation


// REPAIR

enum SwitchPosition2 {UP_HIGH, DOWN_LOW};  // OK
enum SwitchPosition3 {UP, DOWN};  // OK

