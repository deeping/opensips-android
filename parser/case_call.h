/*
 * $Id$
 *
 * Call-ID Header Name Parsing Macros
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * History:
 * ----------
 * 2003-02-28 scratchpad compatibility abandoned (jiri)
 * 2003-01-27 next baby-step to removing ZT - PRESERVE_ZT (jiri)
 */


#ifndef CASE_CALL_H
#define CASE_CALL_H


#define ID_INF_CASE                      \
	switch(LOWER_DWORD(val)) {           \
		case __id1_:                     \
			hdr->type = HDR_CALLID_T;    \
			hdr->name.len = 7;           \
			return (p + 4);              \
		                                 \
		case __id2_:                     \
			hdr->type = HDR_CALLID_T;    \
			hdr->name.len = 7;           \
			p += 4;                      \
			goto dc_end;                 \
		                                 \
		case __inf_:                     \
			p += 4;                      \
			if ( LOWER_BYTE(*p) == 'o') {\
				hdr->type = HDR_CALL_INFO_T; \
				hdr->name.len = 9;       \
				p += 1;                  \
				goto dc_cont;            \
			}                            \
		goto other;                      \
		}


#define call_CASE      \
	p += 4;            \
	val = READ(p);     \
	ID_INF_CASE;       \
	goto other;


#endif /* CASE_CALL_H */