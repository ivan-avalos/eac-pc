/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * debugman.cc
 * Copyright (C) 2018 Ivan Avalos <ivan.avalos.diaz@hotmail.com>
 *
 * eac-pc is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * eac-pc is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "debugman.h"

void Debugman::debugFileman () {
	Fileman fileman("test/input.c", "test/output.c");

	// Read file
	std::vector<std::string> lines = fileman.readFile ();
	for(int i=0;i<lines.size();i++) {
		std::cout << "LINE " << i << ": " << lines[i] << std::endl;
	}

	std::string output;
	for(int i=0;i<lines.size();i++) {
		output += lines[i] + "\n";
	}

	// Write file
	fileman.writeFile (output);
	
}

void Debugman::debugEacmanCompiler () {

	Fileman fileman("test/input.c", "");
	Eacman eacman;
	
	// Read file
	std::vector<std::string> lines = fileman.readFile ();
	for(int i=0;i<lines.size();i++) {
		std::cout << "LINE " << i << ": " << lines[i] << std::endl;
	}

	// Compile
	std::string output = eacman.transpile (lines);
	std::cout << output << std::endl;
}

/*void Debugman::trimInput () {

	Eacman eacman;

	// Read file
	std::string trimline =
		eacman.trimln("\t\t1234\t\t");
	std::cout << "LINE: " << trimline << std::endl;
}*/

/*void Debugman::debugEacmanRC() {
	
	Fileman fileman("test/input.c", "test/output.c");
	Eacman eacman;

	// Read file
	std::vector<std::string> lines = eacman.removeComments (fileman.readFile ());
	for(int i=0;i<lines.size();i++) {
		std::cout << "LINE " << i << ": " << lines[i] << std::endl;
	}
}*/