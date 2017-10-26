/* vifm
 * Copyright (C) 2014 xaizek.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef VIFM__UI__STATUSBAR_H__
#define VIFM__UI__STATUSBAR_H__

#include "../utils/macros.h"
#include "../utils/test_helpers.h"

/* Managing status bar. */

/* Clears the status bar. */
void ui_sb_clear(void);

/* Immediately (UI is updated) displays message on the status bar without
 * storing it in message history. */
void ui_sb_quick_msgf(const char format[], ...) _gnuc_printf(1, 2);

/* Clears message displayed by ui_sb_quick_msgf(). */
void ui_sb_quick_msg_clear(void);

/* Repeats last message if message is NULL. */
void ui_sb_msg(const char message[]);

void ui_sb_msgf(const char format[], ...) _gnuc_printf(1, 2);

void ui_sb_err(const char message[]);

void status_bar_errorf(const char message[], ...) _gnuc_printf(1, 2);

int is_status_bar_multiline(void);

/* Retrieves last message put on the status bar.  Use ui_sb_msg("") to clear
 * it. */
const char * ui_sb_last(void);

/* Status bar locking. */

/* Locks status bar from using status_bar window, so that it can safely be used
 * for purposes other than printing messages. */
void ui_sb_lock(void);

/* Unlocks previously locked status bar. */
void ui_sb_unlock(void);

/* Checks whether status bar is currently locked.  Returns non-zero if so,
 * otherwise zero is returned. */
int ui_sb_locked(void);

#endif /* VIFM__UI__STATUSBAR_H__ */

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 filetype=c : */
