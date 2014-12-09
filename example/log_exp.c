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


/*
 * Note that to have debug messages print you must
 * either define debug before includign log.h or compile
 * with a flag called debug
 *
 * #define DEBUG
 *
 * OR
 * compile with -DDEBUG
 */
#include "../src/log.h"
#include "../src/verbose.h"

int verbose; // Note that this variable must be defined when including verbose.h

int main(void){
	log_emerg("Test emerg");
	log_alert("Test alert");
	log_critical("Test critical");
	log_error("Test error");
	log_warning("Test warning");
	log_notice("Test notice");
	log_info("Test info");
	log_debug("Test debug");

	// Verbose can be toggled at runtime where as all other log macros
	// are done at compile time
	verbose("Test verbose off"); // This will not print
	verbose = 1;
	verbose("Test verbose on"); // This will
	return 0;
}
