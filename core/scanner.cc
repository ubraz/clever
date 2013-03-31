/* Generated by re2c 0.13.5 */
/**
 * Clever programming language
 * Copyright (c) Clever Team
 *
 * This file is distributed under the MIT license. See LICENSE for details.
 */

#include <cstdio>
#include "core/scanner.h"
#include "core/parser.hh"
#include "core/ast.h"
#include "core/value.h"
#include "core/native_types.h"

namespace clever {

typedef Parser::token token;

Parser::token_type yylex(Parser::semantic_type* yylval,
	Parser::location_type* yyloc, Driver& driver, ScannerState& s) {
	const unsigned char* cursor = s.cur;
	int yylen;

next_token:
	if (YYCURSOR >= YYLIMIT) {
		RET(token::END);
	}

	s.yylex = cursor;


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYGETCONDITION() < 1) {
		goto yyc_INITIAL;
	} else {
		if (YYGETCONDITION() < 2) {
			goto yyc_ST_COMMENT;
		} else {
			goto yyc_ST_MULTILINE_COMMENT;
		}
	}
/* *********************************** */
yyc_INITIAL:
	{
		static const unsigned char yybm[] = {
			/* table 1 .. 8: 0 */
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40, 168, 104, 168,  40, 168,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			168,  40,   8,  40,  40,  40,  40,  32, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 47,  47,  47,  47,  47,  47,  47,  47, 
			 45,  45,  40,  40,  40,  40,  40,  40, 
			 40,  44,  44,  44,  44,  44,  44,  44, 
			 44,  44,  44,  44,  44,  44,  44,  44, 
			 44,  44,  44,  44,  44,  44,  44,  44, 
			 44,  44,  44,  40,  16,  40,  40,  40, 
			 40,  44,  44,  44,  44,  44,  44,  44, 
			 44,  44,  44,  44,  44,  44,  44,  44, 
			 44,  44,  44,  44,  44,  44,  44,  44, 
			 44,  44,  44,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			 40,  40,  40,  40,  40,  40,  40,  40, 
			/* table 9 .. 10: 256 */
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			192, 192, 192, 192, 192, 192, 192, 192, 
			192, 192,   0,   0,   0,   0,   0,   0, 
			  0, 192, 192, 192, 192, 192, 192, 192, 
			192, 192, 192, 192, 192, 192, 192, 192, 
			192, 192, 192, 192, 192, 192, 192, 192, 
			192, 192, 192,   0,   0,   0,   0, 192, 
			  0,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
		};

		yych = *YYCURSOR;
		switch (yych) {
		case 0x00:	goto yy2;
		case '\t':
		case '\v':
		case '\r':
		case ' ':	goto yy5;
		case '\n':	goto yy7;
		case '!':	goto yy9;
		case '"':	goto yy10;
		case '#':	goto yy11;
		case '%':	goto yy13;
		case '&':	goto yy14;
		case '\'':	goto yy16;
		case '(':
		case ')':
		case ',':
		case ';':
		case '{':
		case '}':
		case '~':	goto yy17;
		case '*':	goto yy18;
		case '+':	goto yy19;
		case '-':	goto yy20;
		case '.':	goto yy21;
		case '/':	goto yy22;
		case '0':	goto yy23;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy25;
		case '<':	goto yy26;
		case '=':	goto yy28;
		case '>':	goto yy29;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':	goto yy31;
		case '^':	goto yy33;
		case '_':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'q':
		case 'u':
		case 'x':
		case 'y':
		case 'z':	goto yy34;
		case 'a':	goto yy36;
		case 'b':	goto yy37;
		case 'c':	goto yy38;
		case 'd':	goto yy39;
		case 'e':	goto yy40;
		case 'f':	goto yy41;
		case 'i':	goto yy42;
		case 'n':	goto yy43;
		case 'o':	goto yy44;
		case 'p':	goto yy45;
		case 'r':	goto yy46;
		case 's':	goto yy47;
		case 't':	goto yy48;
		case 'v':	goto yy49;
		case 'w':	goto yy50;
		case '|':	goto yy51;
		default:	goto yy4;
		}
yy2:
		++YYCURSOR;
yy3:
		{ yylen = cursor - s.yylex; }
		{ RET(Parser::token_type(s.yylex[0])); }
yy4:
		yych = *++YYCURSOR;
		goto yy3;
yy5:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy291;
yy6:
		{ yylen = cursor - s.yylex; }
		{ yyloc->step(); SKIP(); }
yy7:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy289;
yy8:
		{ yylen = cursor - s.yylex; }
		{
		if (YYGETCONDITION() == yycST_COMMENT) {
			YYSETCONDITION(INITIAL);
		}
		yyloc->lines(yylen);
		yyloc->step();
		SKIP();
	}
yy9:
		yych = *++YYCURSOR;
		if (yych == '=') goto yy286;
		goto yy3;
yy10:
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		goto yy282;
yy11:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{
		YYSETCONDITION(ST_COMMENT);
		SKIP();
	}
yy13:
		yych = *++YYCURSOR;
		if (yych == '=') goto yy279;
		goto yy3;
yy14:
		++YYCURSOR;
		if ((yych = *YYCURSOR) == '&') goto yy277;
		if (yych == '=') goto yy275;
yy15:
		{ yylen = cursor - s.yylex; }
		{ RET(Parser::token_type(s.yylex[0])); }
yy16:
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		goto yy269;
yy17:
		yych = *++YYCURSOR;
		goto yy15;
yy18:
		yych = *++YYCURSOR;
		if (yych == '=') goto yy266;
		goto yy15;
yy19:
		yych = *++YYCURSOR;
		if (yych == '+') goto yy264;
		if (yych == '=') goto yy262;
		goto yy15;
yy20:
		yyaccept = 1;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '/') {
			if (yych <= ',') goto yy15;
			if (yych <= '-') goto yy260;
			if (yych <= '.') goto yy257;
			goto yy15;
		} else {
			if (yych <= '9') goto yy255;
			if (yych == '=') goto yy258;
			goto yy15;
		}
yy21:
		yych = *++YYCURSOR;
		if (yych <= '/') goto yy3;
		if (yych <= '9') goto yy253;
		goto yy3;
yy22:
		yych = *++YYCURSOR;
		if (yych <= '.') {
			if (yych == '*') goto yy247;
			goto yy15;
		} else {
			if (yych <= '/') goto yy249;
			if (yych == '=') goto yy251;
			goto yy15;
		}
yy23:
		yyaccept = 2;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'x') goto yy243;
		goto yy242;
yy24:
		{ yylen = cursor - s.yylex; }
		{
		const char* nstr = reinterpret_cast<const char*>(s.yylex);
		int64_t n = 0;

		for (int i = 0; i < yylen; ++i) {
			n = n * 10 + (nstr[i] - '0');
		}

		yylval->intlit = new ast::IntLit(n, *yyloc);

		RET(token::NUM_INTEGER);
	}
yy25:
		yyaccept = 2;
		yych = *(YYMARKER = ++YYCURSOR);
		goto yy233;
yy26:
		++YYCURSOR;
		if ((yych = *YYCURSOR) <= ';') goto yy27;
		if (yych <= '<') goto yy225;
		if (yych <= '=') goto yy227;
yy27:
		{ yylen = cursor - s.yylex; }
		{ RET(token::LESS); }
yy28:
		yych = *++YYCURSOR;
		if (yych == '=') goto yy223;
		goto yy15;
yy29:
		++YYCURSOR;
		if ((yych = *YYCURSOR) <= '<') goto yy30;
		if (yych <= '=') goto yy219;
		if (yych <= '>') goto yy217;
yy30:
		{ yylen = cursor - s.yylex; }
		{ RET(token::GREATER); }
yy31:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy213;
yy32:
		{ yylen = cursor - s.yylex; }
		{
		yylval->ident = new ast::Ident(
			CSTRING(std::string(reinterpret_cast<const char*>(s.yylex), yylen)), *yyloc);

		RET(token::CONSTANT);
	}
yy33:
		yych = *++YYCURSOR;
		if (yych == '=') goto yy210;
		goto yy15;
yy34:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy57;
yy35:
		{ yylen = cursor - s.yylex; }
		{
		yylval->ident = new ast::Ident(
			CSTRING(std::string(reinterpret_cast<const char*>(s.yylex), yylen)), *yyloc);

		RET(token::IDENT);
	}
yy36:
		yych = *++YYCURSOR;
		if (yych == 'n') goto yy207;
		goto yy57;
yy37:
		yych = *++YYCURSOR;
		if (yych == 'r') goto yy202;
		goto yy57;
yy38:
		yych = *++YYCURSOR;
		switch (yych) {
		case 'a':	goto yy170;
		case 'l':	goto yy171;
		case 'o':	goto yy172;
		case 'r':	goto yy173;
		default:	goto yy57;
		}
yy39:
		yych = *++YYCURSOR;
		if (yych == 'e') goto yy161;
		if (yych == 'o') goto yy162;
		goto yy57;
yy40:
		yych = *++YYCURSOR;
		if (yych == 'l') goto yy150;
		goto yy57;
yy41:
		yych = *++YYCURSOR;
		if (yych <= 'i') {
			if (yych == 'a') goto yy127;
			if (yych <= 'h') goto yy57;
			goto yy128;
		} else {
			if (yych <= 'o') {
				if (yych <= 'n') goto yy57;
				goto yy129;
			} else {
				if (yych == 'u') goto yy130;
				goto yy57;
			}
		}
yy42:
		yych = *++YYCURSOR;
		if (yych <= 'l') {
			if (yych == 'f') goto yy117;
			goto yy57;
		} else {
			if (yych <= 'm') goto yy119;
			if (yych <= 'n') goto yy120;
			goto yy57;
		}
yy43:
		yych = *++YYCURSOR;
		if (yych == 'e') goto yy110;
		if (yych == 'u') goto yy111;
		goto yy57;
yy44:
		yych = *++YYCURSOR;
		if (yych == 'r') goto yy108;
		goto yy57;
yy45:
		yych = *++YYCURSOR;
		if (yych == 'r') goto yy95;
		if (yych == 'u') goto yy96;
		goto yy57;
yy46:
		yych = *++YYCURSOR;
		if (yych == 'e') goto yy89;
		goto yy57;
yy47:
		yych = *++YYCURSOR;
		if (yych == 't') goto yy77;
		if (yych == 'w') goto yy78;
		goto yy57;
yy48:
		yych = *++YYCURSOR;
		if (yych == 'h') goto yy66;
		if (yych == 'r') goto yy67;
		goto yy57;
yy49:
		yych = *++YYCURSOR;
		if (yych == 'a') goto yy63;
		goto yy57;
yy50:
		yych = *++YYCURSOR;
		if (yych == 'h') goto yy58;
		goto yy57;
yy51:
		yych = *++YYCURSOR;
		if (yych == '=') goto yy52;
		if (yych == '|') goto yy54;
		goto yy15;
yy52:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::BW_OR_EQUAL); }
yy54:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::BOOLEAN_OR); }
yy56:
		++YYCURSOR;
		yych = *YYCURSOR;
yy57:
		if (yybm[256+yych] & 64) {
			goto yy56;
		}
		goto yy35;
yy58:
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'e') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::WHILE);
	}
yy63:
		yych = *++YYCURSOR;
		if (yych != 'r') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::VAR); }
yy66:
		yych = *++YYCURSOR;
		if (yych == 'r') goto yy73;
		goto yy57;
yy67:
		yych = *++YYCURSOR;
		if (yych == 'u') goto yy70;
		if (yych != 'y') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::TRY); }
yy70:
		yych = *++YYCURSOR;
		if (yych != 'e') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		yylval->true_ = new ast::TrueLit(*yyloc);
		RET(token::TRUE);
	}
yy73:
		yych = *++YYCURSOR;
		if (yych != 'o') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'w') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::THROW); }
yy77:
		yych = *++YYCURSOR;
		if (yych == 'a') goto yy84;
		goto yy57;
yy78:
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'c') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'h') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::SWITCH); }
yy84:
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'c') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::STATIC); }
yy89:
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'u') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'r') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'n') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::RETURN);
	}
yy95:
		yych = *++YYCURSOR;
		if (yych == 'i') goto yy102;
		goto yy57;
yy96:
		yych = *++YYCURSOR;
		if (yych != 'b') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'c') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::PUBLIC); }
yy102:
		yych = *++YYCURSOR;
		if (yych != 'v') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'a') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'e') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::PRIVATE); }
yy108:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::LOGICAL_OR); }
yy110:
		yych = *++YYCURSOR;
		if (yych == 'w') goto yy115;
		goto yy57;
yy111:
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		yylval->nillit = new ast::NullLit(*yyloc);
		RET(token::NIL);
	}
yy115:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::NEW);
	}
yy117:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::IF);
	}
yy119:
		yych = *++YYCURSOR;
		if (yych == 'p') goto yy122;
		goto yy57;
yy120:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::IN); }
yy122:
		yych = *++YYCURSOR;
		if (yych != 'o') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'r') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::IMPORT);
	}
yy127:
		yych = *++YYCURSOR;
		if (yych == 'l') goto yy146;
		goto yy57;
yy128:
		yych = *++YYCURSOR;
		if (yych == 'n') goto yy140;
		goto yy57;
yy129:
		yych = *++YYCURSOR;
		if (yych == 'r') goto yy138;
		goto yy57;
yy130:
		yych = *++YYCURSOR;
		if (yych != 'n') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'c') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'o') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'n') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::FUNC);
	}
yy138:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::FOR);
	}
yy140:
		yych = *++YYCURSOR;
		if (yych != 'a') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'y') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::FINALLY); }
yy146:
		yych = *++YYCURSOR;
		if (yych != 's') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'e') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		yylval->false_ = new ast::FalseLit(*yyloc);
		RET(token::FALSE);
	}
yy150:
		yych = *++YYCURSOR;
		if (yych != 's') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'e') goto yy57;
		yyaccept = 3;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= 'Z') {
			if (yych <= '/') {
				if (yych == ' ') goto yy155;
			} else {
				if (yych <= '9') goto yy56;
				if (yych >= 'A') goto yy56;
			}
		} else {
			if (yych <= '`') {
				if (yych == '_') goto yy56;
			} else {
				if (yych == 'i') goto yy154;
				if (yych <= 'z') goto yy56;
			}
		}
yy153:
		{ yylen = cursor - s.yylex; }
		{
		RET(token::ELSE);
	}
yy154:
		yych = *++YYCURSOR;
		if (yych == 'f') goto yy160;
		goto yy57;
yy155:
		yych = *++YYCURSOR;
		if (yych == 'i') goto yy157;
yy156:
		YYCURSOR = YYMARKER;
		if (yyaccept <= 2) {
			if (yyaccept <= 1) {
				if (yyaccept <= 0) {
					goto yy3;
				} else {
					goto yy15;
				}
			} else {
				goto yy24;
			}
		} else {
			if (yyaccept <= 4) {
				if (yyaccept <= 3) {
					goto yy153;
				} else {
					goto yy238;
				}
			} else {
				goto yy271;
			}
		}
yy157:
		yych = *++YYCURSOR;
		if (yych != 'f') goto yy156;
		++YYCURSOR;
yy159:
		{ yylen = cursor - s.yylex; }
		{
		RET(token::ELSEIF);
	}
yy160:
		yych = *++YYCURSOR;
		if (yybm[256+yych] & 64) {
			goto yy56;
		}
		goto yy159;
yy161:
		yych = *++YYCURSOR;
		if (yych == 'f') goto yy164;
		goto yy57;
yy162:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::DO);
	}
yy164:
		yych = *++YYCURSOR;
		if (yych != 'a') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'u') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::DEFAULT); }
yy170:
		yych = *++YYCURSOR;
		if (yych <= 'r') goto yy57;
		if (yych <= 's') goto yy195;
		if (yych <= 't') goto yy196;
		goto yy57;
yy171:
		yych = *++YYCURSOR;
		if (yych == 'a') goto yy191;
		goto yy57;
yy172:
		yych = *++YYCURSOR;
		if (yych == 'n') goto yy181;
		goto yy57;
yy173:
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 't') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'c') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'a') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'l') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::CRITICAL);
	}
yy181:
		yych = *++YYCURSOR;
		if (yych <= 'r') goto yy57;
		if (yych <= 's') goto yy182;
		if (yych <= 't') goto yy183;
		goto yy57;
yy182:
		yych = *++YYCURSOR;
		if (yych == 't') goto yy189;
		goto yy57;
yy183:
		yych = *++YYCURSOR;
		if (yych != 'i') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'n') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'u') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'e') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::CONTINUE); }
yy189:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::CONST); }
yy191:
		yych = *++YYCURSOR;
		if (yych != 's') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 's') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::CLASS);
	}
yy195:
		yych = *++YYCURSOR;
		if (yych == 'e') goto yy200;
		goto yy57;
yy196:
		yych = *++YYCURSOR;
		if (yych != 'c') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'h') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::CATCH); }
yy200:
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::CASE); }
yy202:
		yych = *++YYCURSOR;
		if (yych != 'e') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'a') goto yy57;
		yych = *++YYCURSOR;
		if (yych != 'k') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{
		RET(token::BREAK);
	}
yy207:
		yych = *++YYCURSOR;
		if (yych != 'd') goto yy57;
		++YYCURSOR;
		if (yybm[256+(yych = *YYCURSOR)] & 64) {
			goto yy56;
		}
		{ yylen = cursor - s.yylex; }
		{ RET(token::LOGICAL_AND); }
yy210:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::XOR_EQUAL); }
yy212:
		++YYCURSOR;
		yych = *YYCURSOR;
yy213:
		if (yybm[256+yych] & 128) {
			goto yy212;
		}
		if (yych <= '`') goto yy32;
		if (yych >= '{') goto yy32;
yy214:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yych <= 'Z') {
			if (yych <= '/') goto yy216;
			if (yych <= '9') goto yy214;
			if (yych >= 'A') goto yy214;
		} else {
			if (yych <= '_') {
				if (yych >= '_') goto yy214;
			} else {
				if (yych <= '`') goto yy216;
				if (yych <= 'z') goto yy214;
			}
		}
yy216:
		{ yylen = cursor - s.yylex; }
		{
		yylval->type = new ast::Type(
			CSTRING(std::string(reinterpret_cast<const char*>(s.yylex), yylen)), *yyloc);
		RET(token::TYPE);
	}
yy217:
		++YYCURSOR;
		if ((yych = *YYCURSOR) == '=') goto yy221;
		{ yylen = cursor - s.yylex; }
		{ RET(token::RSHIFT); }
yy219:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::GREATER_EQUAL); }
yy221:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::RSHIFT_EQUAL); }
yy223:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::EQUAL); }
yy225:
		++YYCURSOR;
		if ((yych = *YYCURSOR) == '=') goto yy229;
		{ yylen = cursor - s.yylex; }
		{ RET(token::LSHIFT); }
yy227:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::LESS_EQUAL); }
yy229:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::LSHIFT_EQUAL); }
yy231:
		yych = *++YYCURSOR;
		if (yych <= '/') goto yy156;
		if (yych <= '9') goto yy239;
		goto yy156;
yy232:
		yyaccept = 2;
		YYMARKER = ++YYCURSOR;
		yych = *YYCURSOR;
yy233:
		if (yybm[0+yych] & 1) {
			goto yy232;
		}
		if (yych <= 'D') {
			if (yych == '.') goto yy231;
			goto yy24;
		} else {
			if (yych <= 'E') goto yy234;
			if (yych != 'e') goto yy24;
		}
yy234:
		yych = *++YYCURSOR;
		if (yych <= ',') {
			if (yych != '+') goto yy156;
		} else {
			if (yych <= '-') goto yy235;
			if (yych <= '/') goto yy156;
			if (yych <= '9') goto yy236;
			goto yy156;
		}
yy235:
		yych = *++YYCURSOR;
		if (yych <= '/') goto yy156;
		if (yych >= ':') goto yy156;
yy236:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yych <= '/') goto yy238;
		if (yych <= '9') goto yy236;
yy238:
		{ yylen = cursor - s.yylex; }
		{
		double n = strtod(
			std::string(reinterpret_cast<const char*>(s.yylex), yylen).c_str(), NULL);

		yylval->dbllit = new ast::DoubleLit(n, *yyloc);

		RET(token::NUM_DOUBLE);
	}
yy239:
		yyaccept = 4;
		YYMARKER = ++YYCURSOR;
		yych = *YYCURSOR;
		if (yych <= 'D') {
			if (yych <= '/') goto yy238;
			if (yych <= '9') goto yy239;
			goto yy238;
		} else {
			if (yych <= 'E') goto yy234;
			if (yych == 'e') goto yy234;
			goto yy238;
		}
yy241:
		yyaccept = 2;
		YYMARKER = ++YYCURSOR;
		yych = *YYCURSOR;
yy242:
		if (yybm[0+yych] & 2) {
			goto yy241;
		}
		if (yych <= '9') {
			if (yych == '.') goto yy231;
			if (yych <= '/') goto yy24;
			goto yy232;
		} else {
			if (yych <= 'E') {
				if (yych <= 'D') goto yy24;
				goto yy234;
			} else {
				if (yych == 'e') goto yy234;
				goto yy24;
			}
		}
yy243:
		yych = *++YYCURSOR;
		if (yybm[0+yych] & 4) {
			goto yy244;
		}
		goto yy156;
yy244:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yybm[0+yych] & 4) {
			goto yy244;
		}
		{ yylen = cursor - s.yylex; }
		{
		const char* nstr = reinterpret_cast<const char*>(s.yylex + 2);
		int64_t n = 0;

		for (int i = 0; i < yylen - 2; ++i) {
			n <<= 4;
			if (isdigit(nstr[i])) {
				n += nstr[i] - '0';
			}
			else {
				n += toupper(nstr[i]) - 'A' + 10;
			}
		}

		yylval->intlit = new ast::IntLit(n, *yyloc);

		RET(token::NUM_INTEGER);
	}
yy247:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{
		YYSETCONDITION(ST_MULTILINE_COMMENT);
		SKIP();
	}
yy249:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{
		YYSETCONDITION(ST_COMMENT);
		SKIP();
	}
yy251:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::DIV_EQUAL); }
yy253:
		yyaccept = 4;
		YYMARKER = ++YYCURSOR;
		yych = *YYCURSOR;
		if (yych <= 'D') {
			if (yych <= '/') goto yy238;
			if (yych <= '9') goto yy253;
			goto yy238;
		} else {
			if (yych <= 'E') goto yy234;
			if (yych == 'e') goto yy234;
			goto yy238;
		}
yy255:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yych == '.') goto yy231;
		if (yych <= '/') goto yy156;
		if (yych <= '9') goto yy255;
		goto yy156;
yy257:
		yych = *++YYCURSOR;
		if (yych <= '/') goto yy156;
		if (yych <= '9') goto yy253;
		goto yy156;
yy258:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::MINUS_EQUAL); }
yy260:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::DEC); }
yy262:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::PLUS_EQUAL); }
yy264:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::INC); }
yy266:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::MULT_EQUAL); }
yy268:
		++YYCURSOR;
		yych = *YYCURSOR;
yy269:
		if (yybm[0+yych] & 8) {
			goto yy268;
		}
		if (yych >= '\\') goto yy272;
yy270:
		++YYCURSOR;
yy271:
		{ yylen = cursor - s.yylex; }
		{
		std::string strtext(reinterpret_cast<const char*>(s.yylex+1), yylen-2);
		size_t found = 0;

		// Handle sequence char
		while (1) {
			found = strtext.find('\\', found);
			if (found == std::string::npos) {
				break;
			}
			if (s.yylex[0] == '"') {
				switch (strtext[found+1]) {
					case 'n': strtext.replace(found, 2, 1, '\n'); break;
					case 'r': strtext.replace(found, 2, 1, '\r'); break;
					case 't': strtext.replace(found, 2, 1, '\t'); break;
					case 'v': strtext.replace(found, 2, 1, '\v'); break;
					case '"': strtext.replace(found, 2, 1, '"'); break;
					case '\\': strtext.replace(found, 2, 1, '\\'); ++found; break;
					default: ++found; break;
				}
			} else {
				switch (strtext[found+1]) {
					case '\'': strtext.replace(found, 2, 1, '\''); break;
					default: ++found; break;
				}
			}
		}

		yylval->strlit = new ast::StringLit(CSTRING(strtext), *yyloc);

		RET(token::STR);
	}
yy272:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yybm[0+yych] & 8) {
			goto yy268;
		}
		if (yych >= '\\') goto yy272;
		yyaccept = 5;
		YYMARKER = ++YYCURSOR;
		yych = *YYCURSOR;
		if (yybm[0+yych] & 8) {
			goto yy268;
		}
		if (yych <= '[') goto yy270;
		goto yy272;
yy275:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::BW_AND_EQUAL); }
yy277:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::BOOLEAN_AND); }
yy279:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::MOD_EQUAL); }
yy281:
		++YYCURSOR;
		yych = *YYCURSOR;
yy282:
		if (yybm[0+yych] & 32) {
			goto yy281;
		}
		if (yych <= '[') goto yy270;
yy283:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yybm[0+yych] & 32) {
			goto yy281;
		}
		if (yych >= '\\') goto yy283;
		yyaccept = 5;
		YYMARKER = ++YYCURSOR;
		yych = *YYCURSOR;
		if (yybm[0+yych] & 32) {
			goto yy281;
		}
		if (yych <= '[') goto yy270;
		goto yy283;
yy286:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{ RET(token::NOT_EQUAL); }
yy288:
		++YYCURSOR;
		yych = *YYCURSOR;
yy289:
		if (yybm[0+yych] & 64) {
			goto yy288;
		}
		goto yy8;
yy290:
		++YYCURSOR;
		yych = *YYCURSOR;
yy291:
		if (yybm[0+yych] & 128) {
			goto yy290;
		}
		goto yy6;
	}
/* *********************************** */
yyc_ST_COMMENT:
	{
		static const unsigned char yybm[] = {
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64, 192,  32, 192,  64, 192,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			192,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
		};
		yych = *YYCURSOR;
		if (yych <= '\v') {
			if (yych <= 0x08) {
				if (yych <= 0x00) goto yy295;
				goto yy296;
			} else {
				if (yych == '\n') goto yy298;
				goto yy297;
			}
		} else {
			if (yych <= '\r') {
				if (yych <= '\f') goto yy296;
				goto yy297;
			} else {
				if (yych == ' ') goto yy297;
				goto yy296;
			}
		}
yy294:
		{ yylen = cursor - s.yylex; }
		{
		YYSETCONDITION(INITIAL);
		SKIP();
	}
yy295:
		yych = *++YYCURSOR;
		goto yy303;
yy296:
		yych = *++YYCURSOR;
		goto yy303;
yy297:
		yych = *++YYCURSOR;
		if (yybm[0+yych] & 128) {
			goto yy304;
		}
		if (yych == '\n') goto yy294;
		goto yy302;
yy298:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy301;
yy299:
		{ yylen = cursor - s.yylex; }
		{
		if (YYGETCONDITION() == yycST_COMMENT) {
			YYSETCONDITION(INITIAL);
		}
		yyloc->lines(yylen);
		yyloc->step();
		SKIP();
	}
yy300:
		++YYCURSOR;
		yych = *YYCURSOR;
yy301:
		if (yybm[0+yych] & 32) {
			goto yy300;
		}
		goto yy299;
yy302:
		++YYCURSOR;
		yych = *YYCURSOR;
yy303:
		if (yybm[0+yych] & 64) {
			goto yy302;
		}
		goto yy294;
yy304:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yybm[0+yych] & 128) {
			goto yy304;
		}
		if (yych == '\n') goto yy294;
		goto yy302;
	}
/* *********************************** */
yyc_ST_MULTILINE_COMMENT:
	{
		static const unsigned char yybm[] = {
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64, 192,  32, 192,  64, 192,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			192,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,   0,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
		};
		yych = *YYCURSOR;
		if (yych <= '\f') {
			if (yych <= '\t') {
				if (yych <= 0x00) goto yy308;
				if (yych <= 0x08) goto yy310;
				goto yy311;
			} else {
				if (yych <= '\n') goto yy312;
				if (yych <= '\v') goto yy311;
				goto yy310;
			}
		} else {
			if (yych <= ' ') {
				if (yych <= '\r') goto yy311;
				if (yych <= 0x1F) goto yy310;
				goto yy311;
			} else {
				if (yych == '*') goto yy314;
				goto yy310;
			}
		}
yy308:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy321;
yy309:
		{ yylen = cursor - s.yylex; }
		{ SKIP(); }
yy310:
		yych = *++YYCURSOR;
		goto yy321;
yy311:
		yych = *++YYCURSOR;
		if (yybm[0+yych] & 128) {
			goto yy322;
		}
		goto yy321;
yy312:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy319;
yy313:
		{ yylen = cursor - s.yylex; }
		{
		if (YYGETCONDITION() == yycST_COMMENT) {
			YYSETCONDITION(INITIAL);
		}
		yyloc->lines(yylen);
		yyloc->step();
		SKIP();
	}
yy314:
		++YYCURSOR;
		if ((yych = *YYCURSOR) == '/') goto yy316;
		{ yylen = cursor - s.yylex; }
		{ SKIP(); }
yy316:
		++YYCURSOR;
		{ yylen = cursor - s.yylex; }
		{
		YYSETCONDITION(INITIAL);
		SKIP();
	}
yy318:
		++YYCURSOR;
		yych = *YYCURSOR;
yy319:
		if (yybm[0+yych] & 32) {
			goto yy318;
		}
		goto yy313;
yy320:
		++YYCURSOR;
		yych = *YYCURSOR;
yy321:
		if (yybm[0+yych] & 64) {
			goto yy320;
		}
		goto yy309;
yy322:
		++YYCURSOR;
		yych = *YYCURSOR;
		if (yybm[0+yych] & 128) {
			goto yy322;
		}
		if (yych == '\n') goto yy309;
		if (yych == '*') goto yy309;
		goto yy320;
	}
}

}

} // clever
