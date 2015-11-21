/*
 *  Copyright © 2006 Keith Packard <keithp@keithp.com>
 *
 *  SPDX-License-Identifier: GPL-2.0+
 */

/*
 * Dump functions for graphing and debug instrumentation.
 */

#include "cvs.h"
#include <unistd.h>
#ifdef ORDERDEBUG
#include "revdir.h"
#endif /*ORDERDEBUG */

void
dump_number_file(FILE *f, const char *name, const cvs_number *number)
/* dump a filename/CVS-version pair to a specified file pointer */
{
    char buf[BUFSIZ];

    fputs(stringify_revision(name, " ", number, buf, sizeof buf), f);
}

void
dump_number(const char *name, const cvs_number *number)
/* dump a filename/CVS-version pair to standard output */
{
    dump_number_file(stdout, name, number);
}

#ifdef ORDERDEBUG
void
dump_git_commit(const git_commit *c, FILE *fp)
/* dump all delta/revision pairs associated with a gitspace commit */
{
    cvs_commit	*cc;
    revdir_iter *it = revdir_iter_alloc(&c->revdir);
    while((cc = revdir_iter_next(it))) {
	dump_number_file(fp, cc->master->name, cc->number);
	printf(" ");
    }
    fputs("\n", fp);
}
#endif /* ORDERDEBUG */

/* end */
