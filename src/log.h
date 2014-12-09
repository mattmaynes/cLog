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

#ifndef _LOG_H
#define _LOG_H

#include <stdio.h>
#include <time.h>
#include <syslog.h>

#ifndef LOG_STREAM
#define LOG_STREAM stderr
#endif /* LOG_STREAM */

#ifdef LOGSYS

#define log_emerg(fmt, ...) 	syslog(LOG_EMERG, 	fmt __VA_ARGS__)
#define log_alert(fmt, ...) 	syslog(LOG_ALERT, 	fmt __VA_ARGS__)
#define log_critical(fmt, ...) 	syslog(LOG_CRIT, 	fmt __VA_ARGS__)
#define log_error(fmt, ...) 	syslog(LOG_ERR, 	fmt __VA_ARGS__)
#define log_warning(fmt, ...) 	syslog(LOG_WARNING, 	fmt __VA_ARGS__)
#define log_notice(fmt, ...) 	syslog(LOG_NOTICE, 	fmt __VA_ARGS__)
#define log_info(fmt, ...) 	syslog(LOG_INFO, 	fmt __VA_ARGS__)
#define log_debug(fmt, ...)	syslog(LOG_DEBUG, 	fmt __VA_ARGS__)

#else /* NOT LOGSYS */

#define log_emerg(fmt, ...)	fprintf(LOG_STREAM, "[PANIC] %ld "	fmt "\n", time(NULL), ##__VA_ARGS__)
#define log_alert(fmt, ...)	fprintf(LOG_STREAM, "[ALERT] %ld " 	fmt "\n", time(NULL), ##__VA_ARGS__)
#define log_critical(fmt, ...)	fprintf(LOG_STREAM, "[CRITICAL] %ld " 	fmt "\n", time(NULL), ##__VA_ARGS__)
#define log_error(fmt, ...) 	fprintf(LOG_STREAM, "[ERROR] %ld " 	fmt "\n", time(NULL), ##__VA_ARGS__)
#define log_warning(fmt, ...)	fprintf(LOG_STREAM, "[WARNING] %ld "	fmt "\n", time(NULL), ##__VA_ARGS__)
#define log_notice(fmt, ...)	fprintf(LOG_STREAM, "[NOTICE] %ld " 	fmt "\n", time(NULL), ##__VA_ARGS__)
#define log_info(fmt, ...)	fprintf(LOG_STREAM, "[INFO] %ld " 	fmt "\n", time(NULL), ##__VA_ARGS__)

#ifdef DEBUG
#define log_debug(fmt, ...)	fprintf(LOG_STREAM, "[DEBUG] <%s:%d> %ld " fmt "\n", __FILE__, __LINE__, time(NULL), ##__VA_ARGS__)
#else
#define log_debug(fmt, ...)
#endif /* DEBUG */

#endif /* LOGSYS  */

#endif /* _CLOG_H */
