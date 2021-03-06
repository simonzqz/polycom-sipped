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
 *  Author : Richard GAYRAUD - 04 Nov 2003
 *           Marc LAMBERTON
 *           Olivier JACQUES
 *           Herve PELLAN
 *           David MANSUTTI
 *           Francois-Xavier Kowalski
 *           Gerard Lyonnaz
 *           From Hewlett Packard Company.
 *           F. Tarek Rogers
 *           Peter Higginson
 *           Vincent Luba
 *           Shriram Natarajan
 *           Guillaume Teissier from FTR&D
 *           Clement Chen
 *           Wolfgang Beck
 *           Charles P Wright from IBM Research
 *           Polycom Inc. (Edward Estabrook, Richard Lum).  Contributions (c) 2010 - 2013
 */

#ifndef REPORTTASK_HPP
#define REPORTTASK_HPP

#include "task.hpp"

class screentask : public task {
public:
  unsigned int wake();
  static void report(bool last);
  static void initialize();
  bool run();
  void dump();
private:
  static class screentask *instance;
};

class stattask : public task {
public:
  unsigned int wake();
  static void report();
  static void initialize();
  bool run();
  void dump();
private:
  static class stattask *instance;
};

#endif


/* Screen/Statistics Printing Functions. */
int                        print_statistics(int last);
void                       print_header_line(FILE *f, int last);
int                        print_stats_in_file(FILE * f, int last, int diagram_only=0);
int                        print_bottom_line(FILE *f, int last);
int                        print_count_file(FILE *f, int header);

