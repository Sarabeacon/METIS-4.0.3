/*
 * macros.h
 *
 * This file contains macros used in multilevel
 *
 * Started 9/25/94
 * George
 *
 * $Id: macros.h,v 1.2 1996/11/05 19:20:07 karypis Exp $
 *
 */

/*************************************************************************
* The following macro returns a random number in the specified range
**************************************************************************/
#define RandomInRangeFast(u) ((rand()>>2)%(u))

#define RandomInRange(u) ((int)(drand48()*((double)(u))))


#define HTVALUE(k, n) ((k)%(n))

#define FEwgtVtx(v) (((v)->cewgt + (v)->ewgtsum)*((v)->cewgt + (v)->ewgtsum))

#define SWAP(a, b, tmp) \
                        do {(tmp) = (a); (a) = (b); (b) = (tmp);} while(0)

#define INC_DEC(a, b, val) \
                        do {(a) += (val); (b) -= (val);} while(0)

#define TIMELVL(x) x;

