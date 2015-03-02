#include <curses.h>
#include <stdio.h>

/** @file
 *
 * MuCurses alert functions
 *
 */

FILE_LICENCE ( GPL2_OR_LATER );

/**
 * Audible signal
 *
 * @ret rc	return status code
 */
int beep ( void ) {
	printf("\a");
	return OK;
}
