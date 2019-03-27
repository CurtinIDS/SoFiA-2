/// ____________________________________________________________________ ///
///                                                                      ///
/// SoFiA 2.0.0-beta (Path.h) - Source Finding Application               ///
/// Copyright (C) 2019 Tobias Westmeier                                  ///
/// ____________________________________________________________________ ///
///                                                                      ///
/// Address:  Tobias Westmeier                                           ///
///           ICRAR M468                                                 ///
///           The University of Western Australia                        ///
///           35 Stirling Highway                                        ///
///           Crawley WA 6009                                            ///
///           Australia                                                  ///
///                                                                      ///
/// E-mail:   tobias.westmeier [at] uwa.edu.au                           ///
/// ____________________________________________________________________ ///
///                                                                      ///
/// This program is free software: you can redistribute it and/or modify ///
/// it under the terms of the GNU General Public License as published by ///
/// the Free Software Foundation, either version 3 of the License, or    ///
/// (at your option) any later version.                                  ///
///                                                                      ///
/// This program is distributed in the hope that it will be useful,      ///
/// but WITHOUT ANY WARRANTY; without even the implied warranty of       ///
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the         ///
/// GNU General Public License for more details.                         ///
///                                                                      ///
/// You should have received a copy of the GNU General Public License    ///
/// along with this program. If not, see http://www.gnu.org/licenses/.   ///
/// ____________________________________________________________________ ///
///                                                                      ///

#ifndef SoFiA_PATH_H
#define SoFiA_PATH_H

#include "common.h"


// ----------------------------------------------------------------- //
// Class 'Path'                                                      //
// ----------------------------------------------------------------- //
// The purpose of this class is to provide a structure for storing   //
// and handling file paths in a Linux/Unix directory system. Various //
// methods for setting and reading the different components of the   //
// path are available.                                               //
// ----------------------------------------------------------------- //

typedef class Path Path;

// Constructor and destructor
public Path *Path_new                    (void);
public void  Path_delete                 (Path *this);

// Public methods
public void  Path_set                    (Path *this, const char *path);
public void  Path_set_file               (Path *this, const char *file);
public void  Path_set_dir                (Path *this, const char *dir);
public void  Path_set_file_from_template (Path *this, const char *basename, const char *suffix, const char *mimetype);
public void  Path_append_dir             (Path *this, const char *appendix);
public char *Path_get                    (Path *this);
public char *Path_get_dir                (const Path *this);
public char *Path_get_file               (const Path *this);

public bool  Path_file_is_readable       (Path *this);

#endif
