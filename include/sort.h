/*
 *   segemehl - a read aligner
 *   Copyright (C) 2008-2017  Steve Hoffmann and Christian Otto
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef SORT_H
#define SORT_H

/*
 * sort.h
 * declarations for various sorting algorithms
 *
 * @author Steve Hoffmann
 * @date Mon 27 Nov 2006
 *
 *  SVN
 *  Revision of last commit: $Rev: 19 $
 *  Author: $Author: steve $
 *  Date: $Date: 2008-05-14 15:43:29 +0200 (Wed, 14 May 2008) $
 *
 *  Id: $Id: sort.h 19 2008-05-14 13:43:29Z steve $
 *  Url: $URL: file:///homes/bierdepot/steve/svn/segemehl/trunk/libs/sort.h $
 */
 #include "basic-types.h"


 Uint cmp_dbl(Uint, Uint, void *, void *);
 Uint cmp_flt(Uint, Uint, void *, void *);
 Uint cmp_int(Uint, Uint, void *, void *);
 Uint cmp_int_bin (Uint a, void *, void *, void *);
 Uint cmp_Uint_bin (Uint, void *, void *, void *);
 int cmp_Uint_qsort(const void *a, const void *b);
 int cmp_int_qsort(const void *a, const void *b);
 int cmp_dbl_qsort(const void *a, const void *b);
 int cmp_char_qsort(const void *a, const void *b);

 Uint cmp_Uint_quickSort(Uint i, Uint j, void *arr, void *nfo);

 Uint binarySearch_left(void *, Uint, void*, Uint(*cmp)(Uint,void *, void *, void *), void *);
 Uint binarySearch_right(void *, Uint, void*, Uint(*cmp)(Uint,void *, void *, void *), void *);
 Uint binarySearch_l(void *, Uint, void*, Uint(*cmp)(Uint,void *, void *, void *), void *);
 Uint binarySearch_range(void *, Uint, void*, Uint(*cmp)(Uint,void *, void *, void *), void *);
 Uint binarySearch(void *, Uint, void*, Uint(*cmp)(Uint,void *, void *, void *), void *);
 Uint *quickSort(void *, void *, Uint, Uint (*cmp)(Uint, Uint, void *, void *), void *);
 Uint compareMkstr(Uint, Uint, Uint depth, void *, void *);
 Uint compareMkstrptr(Uint, Uint, Uint depth, void *, void *);
 Uint *quickSortMultikey(void *, void*, Uint, Uint (*cmp)(Uint, Uint, Uint, void*, void*), Uint, void*);
 int cmp_PairUint_qsort(const void*, const void*);
 int cmp_PairUint_bsearch(const void*, const void*);
 int cmp_PairSint_qsort(const void*, const void*);
 int cmp_PairSint_bsearch(const void*, const void*);
 int cmp_PairLSint_bsearch(const void* a, const void* b);
 int cmp_PairLSint_qsort(const void* a, const void* b);
int cmp_Uint_qsort_rev(const void *a, const void *b);
#endif

