/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Copyright (C) 2003 - The Authors
 *
 *  Author : Richard GAYRAUD - 04 Nov 2003
 *           From Hewlett Packard Company.
 *           Polycom Inc. (Edward Estabrook, Richard Lum).  Contributions (c) 2010 - 2013
 */

#ifndef __XPPARSERHPP__
#define __XPPARSERHPP__

#include <string>

int    xp_replace(char *source, char *dest, const char *search, const char *replace);
int    xp_set_xml_buffer_from_string(const char * str, int dump_xml);
int    xp_set_xml_buffer_from_file(const char * filename, int dump_xml);
char * xp_open_element(int index);
char * xp_open_element_skip_control(int index, int skip_scenario);
char * xp_open_element(int index);
void   xp_close_element();
int    xp_search_element_from_name(char * element, int occurence);
char * xp_get_value(const char * name);
char * xp_get_cdata();
int    xp_get_content_length(char * P_buffer);
void   xp_convert_special_characters(char * buffer); /* convert &lt; (<), &amp; (&), &gt; (>), &quot; ("), and &apos; (') */
std::string xp_get_errors();

// Valid during xp_file parsing.
// maybe inaccurate in methods that work with local copy of ptr
unsigned int xp_get_whereami_key();
std::string convert_whereami_key_to_string(unsigned int key);
std::string whereami_if_valid();
int is_xp_file_metadata_valid();


#endif

