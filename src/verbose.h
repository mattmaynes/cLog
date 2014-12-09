/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 Matthew Maynes
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef _VERBOSE_H
#define _VERBOSE_H

#include <stdio.h>
#include <time.h>
#include <sys/types.h>

/* 
 * Note: verbose MUST be defined as an int in the code that uses this header
 */
extern int verbose;

#define verbose(msg, ...)\
	if(verbose) fprintf(stdout, "[INFO] %ld " msg "\n", time(NULL), ##__VA_ARGS__);\
	else (void) 0
	// essentially a no op forcing the placement of a semi-colon

#endif /* _VERBOSE_H */
