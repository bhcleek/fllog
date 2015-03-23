//
// Fl_Native_File_Chooser.cxx -- FLTK native OS file chooser widget
//
// Copyright 2004 by Greg Ercolano.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the
//
//  Free Software Foundation, Inc.
//  51 Franklin Street, Fifth Floor
//  Boston, MA  02110-1301 USA.
//


#include <config.h>

#if FLLOG_FLTK_API_MAJOR == 1 && FLLOG_FLTK_API_MINOR < 3

// Use Windows' chooser
#	if defined(__WIN32__) || defined(__CYGWIN__)
#	include "Fl_Native_File_Chooser_WIN32.cxx"
#	endif

// Use Apple's chooser
#	ifdef __APPLE__
#	include "Fl_Native_File_Chooser_MAC.cxx"
#	endif

// All else falls back to FLTK's own chooser
#	if ! defined(__APPLE__) && !defined(_WIN32) && !defined(__CYGWIN__)
#	include "Fl_Native_File_Chooser_FLTK.cxx"
#	endif

#else
#	ifdef __WIN32__
#	include "Fl_Native_File_Chooser_WIN32.cxx"
#	endif

#endif
