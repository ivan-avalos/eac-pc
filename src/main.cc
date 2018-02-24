/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
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

#include "staff.h"

const char* usage_message = "Usage:\n"
"\t-i <arg> Input file\n"
"\t-o <arg> Output file\n"
"\t-h       Print this menu.\n";

int main(int argc, char** argv)
{
	// Parse arguments
	int c;
	char* inPath;
	bool isIn;
	char* outPath;
	bool isOut;

	while((c = getopt(argc, argv, "i:o:h")) != -1) {
		switch (c) {
			case 'i':
				inPath = optarg;
				isIn = true;
				break;
			case 'o':
				outPath = optarg;
				isOut = true;
				break;
			case 'h':
				std::cout << usage_message;
				exit (0);
			case '?':
				std::cout << "Unknown argument " << optopt << std::endl;
				std::cout << usage_message;
				return 1;
			default:
				std::cout << usage_message;
				exit (-1);
		}

		
	}

	if(!isIn || !isOut) {
		std::cout << usage_message;
		exit (-1);
	}

	// Read file
	std::string iPstr(inPath);
	std::string oPstr(outPath);
	
	Fileman fileman(iPstr, oPstr);
	std::vector<std::string> lines = fileman.readFile ();

	// Transpile input
	Eacman eacman;
	std::string transpiled = eacman.transpile (lines);

	// Write output
	fileman.writeFile (transpiled);
	
	return 0;
}

