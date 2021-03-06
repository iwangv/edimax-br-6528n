/* vi: set sw=4 ts=4: */
/*
 * Wrapper for common string vector sorting operation
 *
 * Copyright (c) 2008 Denys Vlasenko
 *
 * Licensed under GPLv2, see file LICENSE in this tarball for details.
 */

#include "libbb.h"

int bb_pstrcmp(const void *a, const void *b)
{
	return strcmp(*(char**)a, *(char**)b);
}

void qsort_string_vector(char **sv, unsigned count)
{
	qsort(sv, count, sizeof(char*), bb_pstrcmp);
}
