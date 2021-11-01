/*
 Copyright (C) 2016-2017 Alexander Borisov
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#ifndef MyHTML_MyCSS_TOKENIZER_RESOURCE_H
#define MyHTML_MyCSS_TOKENIZER_RESOURCE_H
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//
// generated by Perl script utils/mycss_first_char.pl
static const mycss_tokenizer_state_t mycss_begin_chars_state_map[] = {
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_WHITESPACE,              // whitespace
    MyCSS_TOKENIZER_STATE_WHITESPACE,              // whitespace
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_WHITESPACE,              // whitespace
    MyCSS_TOKENIZER_STATE_WHITESPACE,              // whitespace
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_WHITESPACE,              // whitespace
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_QUOTATION_MARK,          // U+0022 QUOTATION MARK (")
    MyCSS_TOKENIZER_STATE_NUMBER_SIGN,             // U+0023 NUMBER SIGN (#)
    MyCSS_TOKENIZER_STATE_DOLLAR_SIGN,             // U+0024 DOLLAR SIGN ($)
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_APOSTROPHE,              // U+0027 APOSTROPHE (')
    MyCSS_TOKENIZER_STATE_LEFT_PARENTHESIS,        // U+0028 LEFT PARENTHESIS (()
    MyCSS_TOKENIZER_STATE_RIGHT_PARENTHESIS,       // U+0029 RIGHT PARENTHESIS ())
    MyCSS_TOKENIZER_STATE_ASTERISK,                // U+002A ASTERISK (*)
    MyCSS_TOKENIZER_STATE_PLUS_SIGN,               // U+002B PLUS SIGN (+)
    MyCSS_TOKENIZER_STATE_COMMA,                   // U+002C COMMA (,)
    MyCSS_TOKENIZER_STATE_HYPHEN_MINUS,            // U+002D HYPHEN-MINUS (-)
    MyCSS_TOKENIZER_STATE_FULL_STOP,               // U+002E FULL STOP (.)
    MyCSS_TOKENIZER_STATE_SOLIDUS,                 // U+002F SOLIDUS (/)
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_DIGIT,                   // digit
    MyCSS_TOKENIZER_STATE_COLON,                   // U+003A COLON (:)
    MyCSS_TOKENIZER_STATE_SEMICOLON,               // U+003B SEMICOLON (;)
    MyCSS_TOKENIZER_STATE_LESS_THAN_SIGN,          // U+003C LESS-THAN SIGN (<)
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_COMMERCIAL_AT,           // U+0040 COMMERCIAL AT (@)
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_LETTER_U,                // name-start code point and LATIN CAPITAL AND SMALL LETTER U
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_LEFT_SQUARE_BRACKET,     // U+005B LEFT SQUARE BRACKET ([)
    MyCSS_TOKENIZER_STATE_REVERSE_SOLIDUS,         // U+005C REVERSE SOLIDUS ()
    MyCSS_TOKENIZER_STATE_RIGHT_SQUARE_BRACKET,    // U+005D RIGHT SQUARE BRACKET (])
    MyCSS_TOKENIZER_STATE_CIRCUMFLEX_ACCENT,       // U+005E CIRCUMFLEX ACCENT (^)
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_LETTER_U,                // name-start code point and LATIN CAPITAL AND SMALL LETTER U
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_LEFT_CURLY_BRACKET,      // U+007B LEFT CURLY BRACKET ({)
    MyCSS_TOKENIZER_STATE_VERTICAL_LINE,           // U+007C VERTICAL LINE (|)
    MyCSS_TOKENIZER_STATE_RIGHT_CURLY_BRACKET,     // U+007D RIGHT CURLY BRACKET (})
    MyCSS_TOKENIZER_STATE_TILDE,                   // U+007E TILDE (~)
    MyCSS_TOKENIZER_STATE_DELIM_SINGLE_CODE_POINT, //
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT,   // name-start code point
    MyCSS_TOKENIZER_STATE_NAME_START_CODE_POINT    // name-start code point
};

static const unsigned char mycss_chars_name_code_point_map[] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x2d, 0xff, 0xff, 0x30, 0x31,
    0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x41, 0x42, 0x43, 0x44, 0x45,
    0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59,
    0x5a, 0xff, 0xff, 0xff, 0xff, 0x5f, 0xff, 0x61, 0x62, 0x63,
    0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d,
    0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77,
    0x78, 0x79, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x81,
    0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b,
    0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95,
    0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f,
    0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9,
    0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3,
    0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd,
    0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7,
    0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1,
    0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb,
    0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5,
    0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef,
    0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9,
    0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};

static const char mycss_token_type_description[][32] =
{
    "UNDEF",
    "WHITESPACE",
    "IDENT",
    "FUNCTION",
    "AT_KEYWORD",
    "HASH",
    "STRING",
    "URL",
    "NUMBER",
    "DIMENSION",
    "PERCENTAGE",
    "INCLUDE_MATCH",
    "DASH_MATCH",
    "PREFIX_MATCH",
    "SUFFIX_MATCH",
    "SUBSTRING_MATCH",
    "COLUMN",
    "CDO",
    "CDC",
    "BAD_STRING",
    "DELIM",
    "LEFT_PARENTHESIS",
    "RIGHT_PARENTHESIS",
    "COMMA",
    "COLON",
    "SEMICOLON",
    "LEFT_SQUARE_BRACKET",
    "RIGHT_SQUARE_BRACKET",
    "LEFT_CURLY_BRACKET",
    "RIGHT_CURLY_BRACKET",
    "BAD_URL",
    "COMMENT",
    "UNICODE_RANGE",
    "END_OF_FILE",
    ""
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MyHTML_MyCSS_TOKENIZER_RESOURCE_H */