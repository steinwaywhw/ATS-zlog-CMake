/***********************************************************************/
/*                                                                     */
/*                         Applied Type System                         */
/*                                                                     */
/*                              Hongwei Xi                             */
/*                                                                     */
/***********************************************************************/

/*
** ATS - Unleashing the Potential of Types!
**
** Copyright (C) 2002-2010 Hongwei Xi, Boston University
**
** All rights reserved
**
** ATS is free software;  you can  redistribute it and/or modify it under
** the terms of the GNU LESSER GENERAL PUBLIC LICENSE as published by the
** Free Software Foundation; either version 2.1, or (at your option)  any
** later version.
** 
** ATS is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without  even  the  implied  warranty  of MERCHANTABILITY or
** FITNESS FOR A PARTICULAR PURPOSE.  See the  GNU General Public License
** for more details.
** 
** You  should  have  received  a  copy of the GNU General Public License
** along  with  ATS;  see the  file COPYING.  If not, please write to the
** Free Software Foundation,  51 Franklin Street, Fifth Floor, Boston, MA
** 02110-1301, USA.
*/

/* ****** ****** */

/*
**
** Contributed by Zhiqiang Ren (aren AT cs DOT bu DOT edu)
** Start Time: Oct, 2012
**
*/

/* ****** ****** */


#ifndef ATSLIB_ZLOG_CATS
#define ATSLIB_ZLOG_CATS


#include "zlog.h"


ATSinline()
ats_int_type
atslib_zlog_init(ats_ptr_type confpath)
{
    return zlog_init(confpath);
}

ATSinline()
zlog_category_t * atslib_zlog_get_category(ats_ptr_type cname)
{
    return zlog_get_category(cname);
}
    
ATSinline()
ats_bool_type
atslib_zlog_category_not_null (zlog_category_t * cat)
{
    return cat != NULL;
}

ATSinline()
ats_void_type atslib_zlog_info(
    zlog_category_t * cat,
    ats_ptr_type location,
    ats_ptr_type fmt,
    ...)
{
    va_list ap;
    va_start(ap, fmt);

    vzlog(cat,
         NULL, 0,
         NULL, 0,
         0, ZLOG_LEVEL_INFO,
         fmt, ap);

    va_end(ap);
}

#endif




