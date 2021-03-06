/**
 * Copyright (C) 2016 Frank Yang <codebear4@gmail.com>
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

/* $Id$ */

#ifndef PHP_OOP_REGISTER_H
#define PHP_OOP_REGISTER_H

#include "php_oop.h"

void register_handler(zend_bool *ret, zend_string *type, zend_class_entry *ce);

#endif
