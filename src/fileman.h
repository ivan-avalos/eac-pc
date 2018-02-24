/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * fileman.h
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

#ifndef _FILEMAN_H_
#define _FILEMAN_H_

#include "staff.h"

class Fileman
{
private:
	 std::string inPath;
	 std::string outPath;
	 
public:
	 Fileman(std::string inpath, std::string outpath);
	 std::vector <std::string> readFile();
	 void writeFile(std::string content);

};

#endif // _FILEMAN_H_

