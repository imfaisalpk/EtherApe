/*
   Etherape
   Copyright (C) 2000 Juan Toledo
   * 
   *  File copied from mtr.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/*  Prototypes for dns.c  */

void dns_open ();
int dns_waitfd ();
void dns_ack ();
void dns_events (double *sinterval);
char *dns_lookup (int address);
char *dns_lookup2 (int address);
int dns_forward (char *name);
char *strlongip (int address);