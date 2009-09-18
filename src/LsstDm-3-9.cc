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

[LsstDm-3-9-3]
Whenever a global function  is  referenced, use the :: operator 


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-9 Global variables should be avoided and if used always be referred to using the '::' operator.


EXAMPLE

::mainWindow.open(), ::applicationContext.getName()


DEFINITION

In general, the use of global variables should be avoided. Consider using 
singleton objects instead. Only use where required (i.e. reusing a framework 
that requires it.) See Rule 5-7. 


CAVEAT



ATTRIBUTION

Implemented based on: Parasoft:CODSTA-CPP-23; no changes
*/


// EXAMPLE

namespace N {
    void globalFoo1( );
}

void globalFoo1( ) {
}

void globalFoo2( ) {
    globalFoo1( );      // Violation
    N::globalFoo1( );   // Violation
}



// REPAIR

namespace N {
    void globalFoo1( );
}

void globalFoo1G( ) {
}

void globalFoo2G( ) {
    ::globalFoo1G( );    // OK
    ::N::globalFoo1( ); // OK
}



