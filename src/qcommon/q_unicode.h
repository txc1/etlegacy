/*
 * Wolfenstein: Enemy Territory GPL Source Code
 * Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.
 *
 * Daemon GPL Source Code
 * Copyright (C) 2012-2013 Unvanquished Developers
 *
 * ET: Legacy
 * Copyright (C) 2012 Jan Simek <mail@etlegacy.com>
 *
 * This file is part of ET: Legacy - http://www.etlegacy.com
 *
 * ET: Legacy is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ET: Legacy is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ET: Legacy. If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, Wolfenstein: Enemy Territory GPL Source Code is also
 * subject to certain additional terms. You should have received a copy
 * of these additional terms immediately following the terms and conditions
 * of the GNU General Public License which accompanied the source code.
 * If not, please request a copy in writing from id Software at the address below.
 *
 * id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.
 */
/**
 * @file q_unicode.h
 * @brief Unicode & UTF-8 handling
 *
 * The whole unicode handling system was published at [cprogramming.com]
 * by Jeff Bezanson and adapted for the id Tech 3 engine by Unvanquished
 * developers.
 *
 * [cprogramming.com]: http://www.cprogramming.com/tutorial/unicode.html
 */

#ifndef INCLUDE_Q_UNICODE_H
#define INCLUDE_Q_UNICODE_H

int Q_UTF8_Width(const char *str);
int Q_UTF8_WidthCP(int ch);
int Q_UTF8_Strlen(const char *str);
int Q_UTF8_PrintStrlen(const char *str);
qboolean Q_UTF8_ContByte(char c);
unsigned long Q_UTF8_CodePoint(const char *str);
char *Q_UTF8_Encode(unsigned long codepoint);
int Q_UTF8_Store(const char *s);
char *Q_UTF8_Unstore(int e);
glyphInfo_t *Q_UTF8_GetGlyph(fontInfo_t *font, const char *s);

#endif // INCLUDE_Q_UNICODE_H