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

[LsstDm-3-6a]
The name of a namespace will be camelCase with leading lowercase letter.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-6 Names representing namespaces should be camelCase with leading 
lowercase letter  and based on component or directory name.


EXAMPLE

namespace afwMath = lsst::afw::math;
namespace pexLog = lsst::pex::logging;


DEFINITION

Rule improves readability and maintainability.


CAVEAT 

This Rule only checks that namespace names are leading lowercase;
it does not check that namespace names are based on component 
or directory name. Nor does it require the alias to be defined in the
source of the namespace's module.


ATTRIBUTION

Copied from Naming-30; heavily modified to conform to LSST rule.
*/

// EXAMPLE TO FAIL

namespace lsst {
namespace afw {
namespace math {
}}}

namespace afwmath = lsst::afw::math;    //violation


// REPAIR 

namespace afwMath = lsst::afw::math;    // OK

