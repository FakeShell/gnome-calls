/*
 * Copyright (C) 2018 Purism SPC
 *
 * This file is part of Calls.
 *
 * Calls is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Calls is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Calls.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Bob Ham <bob.ham@puri.sm>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef CALLS_MESSAGE_SOURCE_H__
#define CALLS_MESSAGE_SOURCE_H__

#include "util.h"

#include <glib-object.h>

G_BEGIN_DECLS

#define CALLS_TYPE_MESSAGE_SOURCE (calls_message_source_get_type ())

G_DECLARE_INTERFACE (CallsMessageSource, calls_message_source, CALLS, MESSAGE_SOURCE, GObject);

struct _CallsMessageSourceInterface
{
  GTypeInterface parent_iface;
};

#define CALLS_ERROR(obj,error) \
  CALLS_EMIT_ERROR (CALLS_MESSAGE_SOURCE (obj), error)

/** Array of GTypes for message signals */
GType * calls_message_signal_arg_types();

G_END_DECLS

#endif /* CALLS_MESSAGE_SOURCE_H__ */
