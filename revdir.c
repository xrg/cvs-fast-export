/*
 *  Copyright © 2006 Keith Packard <keithp@keithp.com>
 *
 *  SPDX-License-Identifier: GPL-2.0+
 */

/*
 * Pack a collection of files into a space-efficient representation in
 * which directories are coalesced.
 */

#include "cvs.h"
#include "hash.h"
#include "revdir.h"

static bool
dir_is_ancestor(const master_dir *child, const master_dir *ancestor)
{
    while ((child = child->parent))
	if (child == ancestor) {
	    return true;
	}
    return false;
}

#ifdef TREEPACK
#include "treepack.c"
#else
#include "dirpack.c"
#endif


// end

