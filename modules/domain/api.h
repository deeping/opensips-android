/*
 * Copyright (C) 2008 Juha Heinanen
 *
 * This file is part of OpenSIPS, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

#ifndef DOMAIN_API_H_
#define DOMAIN_API_H_

#include "../../str.h"
#include "domain.h"

typedef int (*is_domain_local_t)(str* _domain);

typedef struct domain_api {
	is_domain_local_t is_domain_local;
} domain_api_t;

typedef int (*bind_domain_t)(domain_api_t* api);
int bind_domain(domain_api_t* api);


#endif
