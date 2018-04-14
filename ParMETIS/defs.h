/*
 * Copyright 1997, Regents of the University of Minnesota
 *
 * defs.h
 *
 * This file contains constant definitions
 *
 * Started 8/27/94
 * George
 *
 * $Id: defs.h,v 1.6 1997/07/18 00:32:05 karypis Exp $
 *
 */

#define OPTION_CUT		0
#define OPTION_FOLDF		1
#define OPTION_IPART		2
#define OPTION_NUMBERING	3
#define OPTION_DBGLVL		4

#define XYZ_XCOORD		1
#define XYZ_SPFILL		2

#define IPART_SER		1
#define IPART_RB		2

#define UNMATCHED		-1
#define MAYBE_MATCHED		-2
#define TOO_HEAVY		-3

#define MAX_PES			4096
#define MAX_INT			(1<<30)

#define HTABLE_EMPTY    	-1

#define NGR_PASSES		4	/* Number of greedy refinement passes */
#define NIPARTS			8	/* Number of random initial partitions */
#define NLGR_PASSES		5	/* Number of GR refinement during IPartition */

#define IGNORE_FRACTION		0.9	/* What fraction of vertices will not be colored */

#define KEEP_BIT        (idxtype)536870912        /* 1<<29 */

#define COARSEN_FRACTION	0.75	/* Node reduction between succesive coarsening levels */
#define COARSEN_FRACTION2	0.55	/* Node reduction between succesive coarsening levels */
#define UNBALANCE_FRACTION		1.05
#define ORDER_UNBALANCE_FRACTION	1.05

#define MAXVWGT_FACTOR		1.5

#define MATCH_LOCAL		1
#define MATCH_GLOBAL		2

#define EDGE_WEIGHT		1
#define NOEDGE_WEIGHT		2

/* Debug Levels */
#define DBG_TIME	1		/* Perform timing analysis */
#define DBG_INFO	2		/* Perform timing analysis */
#define DBG_PROGRESS   	4		/* Show the coarsening progress */
#define DBG_REFINEINFO	8		/* Show info on communication during folding */
#define DBG_MATCHINFO	16		/* Show info on matching */
#define DBG_RMOVEINFO	32		/* Show info on communication during folding */