/* CKit: Data structure and arithmetic implement in C
 * Copyright (C) 2011 Wu Xiaohu, All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#if !defined (__CKIT_H_INSIDE__) && !defined (CKIT_COMPILATION)
# error "Only <ckit/ckit.h> can be included directly."
#endif

#ifndef CKIT_VERSION_H
#define CKIT_VERSION_H

#include <ckit/ckit-types.h>

CKIT_BEGIN_DECLS

CKIT_EXTERN const int ckit_major_version;
CKIT_EXTERN const int ckit_minor_version;
CKIT_EXTERN const int ckit_micro_version;

/* compile-time version check */
#define CKIT_CHECK_VERSION(major,minor,micro)				\
  (CKIT_MAJOR_VERSION > (major) ||					\
   (CKIT_MAJOR_VERSION == (major) && CKIT_MINOR_VERSION > (minor)) ||	\
   (CKIT_MAJOR_VERSION == (major) && CKIT_MINOR_VERSION == (minor) &&	\
    CKIT_MICRO_VERSION >= (micro)))
 
/* runtime version check */
const char* ckit_check_version (int major_required,
				int minor_required,
				int micro_required);

CKIT_END_DECLS

#endif /* CKIT_VERSION_H */
