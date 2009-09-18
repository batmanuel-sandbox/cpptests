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

Sections of code should not be "commented out"
[LsstDm-5-38 - 4]

SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 5 Statements
Rule 5-38 No code should be commented out; use a preprocessor directive 
          to include or inhibit code use. 


EXAMPLE

#define DEBUG_IO 1
#if defined(DEBUG_IO)
    [...statements...]
#endif


DEFINITION

Specifically for debug print statements, use the 'lsst::pex::log::Trace' class. 


CAVEAT

There are situations where the implementation may report false positive or 
false negative.  Such situations are caused by similarity betwen source 
code and comment text. 



ATTRIBUTION

Implementation and example copied from Parasoft:MISRA2004-2_4; unchanged.
*/


// EXAMPLE

void bad() {
    int x = 5;
    /*  Section of code     // Violation
        commented out
    if (x==0){
        x++;
    }
    */
}



// REPAIR

void good() {
    int x = 5;
/* Comment without          // OK
   code within */
#if 0                       
    if (x==0){
        x++;
    }
#endif
}


