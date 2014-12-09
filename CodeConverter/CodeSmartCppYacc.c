
/*  A Bison parser, made from codesmartcpp.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	AUTO	257
#define	DOUBLE	258
#define	INT	259
#define	STRUCT	260
#define	BREAK	261
#define	ELSE	262
#define	LONG	263
#define	SWITCH	264
#define	CASE	265
#define	ENUM	266
#define	REGISTER	267
#define	TYPEDEF	268
#define	CHAR	269
#define	EXTERN	270
#define	RETURN	271
#define	UNION	272
#define	CONST	273
#define	FLOAT	274
#define	SHORT	275
#define	UNSIGNED	276
#define	CONTINUE	277
#define	FOR	278
#define	SIGNED	279
#define	VOID	280
#define	DEFAULT	281
#define	GOTO	282
#define	SIZEOF	283
#define	VOLATILE	284
#define	DO	285
#define	IF	286
#define	STATIC	287
#define	WHILE	288
#define	NEW	289
#define	DELETE	290
#define	THIS	291
#define	OPERATOR	292
#define	CLASS	293
#define	PUBLIC	294
#define	PROTECTED	295
#define	PRIVATE	296
#define	VIRTUAL	297
#define	FRIEND	298
#define	INLINE	299
#define	OVERLOAD	300
#define	IDENTIFIER	301
#define	STRINGliteral	302
#define	FLOATINGconstant	303
#define	INTEGERconstant	304
#define	CHARACTERconstant	305
#define	OCTALconstant	306
#define	HEXconstant	307
#define	TYPEDEFname	308
#define	ARROW	309
#define	ICR	310
#define	DECR	311
#define	LS	312
#define	RS	313
#define	LE	314
#define	GE	315
#define	EQ	316
#define	NE	317
#define	ANDAND	318
#define	OROR	319
#define	ELLIPSIS	320
#define	CLCL	321
#define	DOTstar	322
#define	ARROWstar	323
#define	MULTassign	324
#define	DIVassign	325
#define	MODassign	326
#define	PLUSassign	327
#define	MINUSassign	328
#define	LSassign	329
#define	RSassign	330
#define	ANDassign	331
#define	ERassign	332
#define	ORassign	333

#line 1 "codesmartcpp.y"


    /* Copyright (C) 1989-1991 James A. Roskind, All rights reserved. 
    This grammar was developed  and  written  by  James  A.  Roskind. 
    Copying  of  this  grammar  description, as a whole, is permitted 
    providing this notice is intact and applicable  in  all  complete 
    copies.   Translations as a whole to other parser generator input 
    languages  (or  grammar  description  languages)   is   permitted 
    provided  that  this  notice is intact and applicable in all such 
    copies,  along  with  a  disclaimer  that  the  contents  are   a 
    translation.   The reproduction of derived text, such as modified 
    versions of this grammar, or the output of parser generators,  is 
    permitted,  provided  the  resulting  work includes the copyright 
    notice "Portions Copyright (c)  1989,  1990  James  A.  Roskind". 
    Derived products, such as compilers, translators, browsers, etc., 
    that  use  this  grammar,  must also provide the notice "Portions 
    Copyright  (c)  1989,  1990  James  A.  Roskind"  in   a   manner 
    appropriate  to  the  utility,  and in keeping with copyright law 
    (e.g.: EITHER displayed when first invoked/executed; OR displayed 
    continuously on display terminal; OR via placement in the  object 
    code  in  form  readable in a printout, with or near the title of 
    the work, or at the end of the file).  No royalties, licenses  or 
    commissions  of  any  kind are required to copy this grammar, its 
    translations, or derivative products, when the copies are made in 
    compliance with this notice. Persons or corporations that do make 
    copies in compliance with this notice may charge  whatever  price 
    is  agreeable  to  a  buyer, for such copies or derivative works. 
    THIS GRAMMAR IS PROVIDED ``AS IS'' AND  WITHOUT  ANY  EXPRESS  OR 
    IMPLIED  WARRANTIES,  INCLUDING,  WITHOUT LIMITATION, THE IMPLIED 
    WARRANTIES  OF  MERCHANTABILITY  AND  FITNESS  FOR  A  PARTICULAR 
    PURPOSE.

    James A. Roskind
    Independent Consultant
    516 Latania Palm Drive
    Indialantic FL, 32903
    (407)729-4348
    jar@hq.ileaf.com


    ---end of copyright notice---

MOTIVATION-

My  goal  is  to  see  software  developers  adopt  this grammar as a 
standard until such time as a better  standard  is  accessible.   The 
only  way  to  get it to become a standard, is to be sure that people 
know that derivations are based on a specific work.   The  intent  of 
releasing  this  grammar is to provide a publicly accessible standard 
grammar for C++.  The intent of the  copyright  notice  is  to  allow 
arbitrary  commercial  and non-commercial use of the grammar, as long 
as reference is given to the original standard.  Without reference to 
a specific standard, many alternative  grammars  would  develop.   By 
referring  to  the  standard,  this grammar is given publicity, which 
should lead to further use in compatible products and  systems.   The 
benefits  of  such  a  standard  to  commercial  products  (browsers, 
beautifiers, translators, compilers, ...) should be  obvious  to  the 
developers,  in  that  other compatible products will emerge, and the 
value of all conforming products  will  rise.   Most  developers  are 
aware  of  the  value  of  acquiring  a fairly complete grammar for a 
language, and the copyright notice  (and  the  resulting  affiliation 
with my work) should not be too high a price to pay.  By copyrighting 
this  grammar,  I have some minor control over what this standard is, 
and I can (hopefully) keep it from degrading without my approval.   I 
will  consistently  attempt  to  provide  upgraded  grammars that are 
compliant  with  the  current  art,  and  the  ANSI   C++   Committee 
recommendation  in  particular.   A developer is never prevented from 
modifying the grammar to improve it in  whatever  way  is  seen  fit.  
There  is  also  no  restriction on the sale of copies, or derivative 
works, providing the requests in the copyright notice are satisfied.

If you are not "copying" my work, but  are  rather  only  abstracting 
some  of  the  standard,  an acknowledgment with references to such a 
standard would be appreciated.  Specifically,  agreements  with  this 
standard  as  to  the  resolution  of otherwise ambiguous constructs, 
should be noted.

Simply put: "make whatever use you would like  of  the  grammar,  but 
include  the  ``portions  Copyright  ...''  as  a  reference  to this 
standard."


*/


/* Last modified 7/4/91, Version 2.0  */

/* File CPP5.Y is translated by YACC to Y.TAB.C */

/*  ACKNOWLEDGMENT: Without Bjarne Stroustrup and his many co-workers 
at Bell Labs, there would be no C++ Language for which to  provide  a 
syntax  description. Bjarne has also been especially helpful and open 
in discussions, and by permitting me to review  his  texts  prior  to 
their publication, allowed me a wonderful vantage point of clarity.

Without  the effort expended by the ANSI C standardizing committee, I 
would have been lost.  Although the ANSI C standard does not  include 
a  fully disambiguated syntax description, the committee has at least 
provided most of the disambiguating rules in  narratives.   This  C++ 
grammar  is intended to be a superset of an ANSI C compatible grammar 
that is provided in an related file.

Several reviewers have also  recently  critiqued  this  grammar,  the 
related  C  grammar,  and  or  assisted  in  discussions  during it's 
preparation.  These reviewers are certainly not responsible  for  the 
errors  I  have committed here, but they are responsible for allowing 
me  to  provide  fewer  errors.   These  colleagues  include:   Bruce 
Blodgett,  Mark Langley, Joe Fialli, Greg Perkins, Ron Guilmette, and 
Eric Krohn. */

/* Required fixes from last release :

done: 0) Allow direct call to destructors

done: 1) Allow placement of declarations in labeled statements.   The 
easiest  fix involves using a larger variance from the C grammar, and 
simply making "statement" include declarations.  Note that it  should 
also  be  legal  for  declarations  to  be  in  the  branches  of  if 
statements, as long as there is no other code in the block (I think).  
Consider:

        ...
        {
           if (0 == a)
                int b=5;
           else
                int c=4;
         }

1) template support: Not  done:  pending  syntax  specification  from 
ANSI.  (This looks like a major effort, as ANSI has decided to extend 
the  "TYPEDEFname"-feedback-to-the-lexer-hack  to  support   template 
names as a new kind of terminal token.)

2)  exception  handling:  Not done: pending syntax specification from 
ANSI (but it doesn't look hard)

done: 3) Support nested types, including identifier::name,  where  we 
realize  that  identifier was a hidden type.  Force the lexer to keep 
pace in this situation.   This  will  require  an  extension  of  the 
yacc-lex feedback loop.

done: 4) Support nested types even when derivations are used in class 
definitions.

5)  Provide  advanced  tutorial  on  YACC  conflicts:  almost done in 
documentation about machine generated documentation.

done: 6) Allow declaration specifiers to be left out of  declarations 
at file and structure scope so that operator conversion functions can 
be  declared and/or defined.  Note that checking to see that it was a 
function type that does not require declaration_specifiers is  now  a 
constraint  check,  and  not  a  syntax  issue.  Within function body 
scopes, declaration specifiers are required, and this is critical  to 
distinguishing expressions.


*/

#line 239 "codesmartcpp.y"

/*************** Includes and Defines *****************************/
#define YYDEBUG_LEXER_TEXT (yylval) /* our lexer loads this up each time.
     We are telling the graphical debugger
     where to find the spelling of the 
     tokens.*/
#define YYDEBUG 1        /* get the pretty debugging code to compile*/
#define YYSTYPE  char *  /* interface with flex: should be in header file */

/*************** Standard ytab.c continues here *********************/
#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		1257
#define	YYFLAG		-32768
#define	YYNTBASE	104

#define YYTRANSLATE(x) ((unsigned)(x) <= 333 ? yytranslate[x] : 289)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    91,     2,     2,     2,    86,    88,     2,    80,
    81,    84,    82,    97,    83,    94,    85,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    99,   101,    92,
   100,    93,    98,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    95,     2,    96,    87,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   102,    89,   103,    90,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     6,     8,    10,    12,    15,    17,    19,
    23,    25,    27,    29,    31,    33,    37,    39,    41,    43,
    45,    47,    49,    52,    56,    60,    61,    64,    67,    69,
    71,    73,    75,    77,    79,    81,    83,    85,    87,    89,
    91,    93,    95,    97,    99,   101,   103,   105,   107,   109,
   111,   113,   115,   117,   119,   121,   124,   127,   129,   131,
   133,   134,   136,   138,   143,   147,   152,   153,   158,   159,
   164,   167,   170,   174,   178,   183,   188,   193,   195,   197,
   202,   207,   212,   214,   218,   220,   223,   226,   229,   232,
   235,   238,   241,   244,   249,   251,   257,   266,   269,   275,
   277,   280,   284,   288,   289,   291,   294,   297,   300,   304,
   309,   310,   313,   317,   319,   324,   326,   329,   335,   340,
   342,   345,   347,   351,   355,   357,   361,   365,   369,   371,
   375,   379,   381,   385,   389,   391,   395,   399,   403,   407,
   409,   413,   417,   419,   423,   425,   429,   431,   435,   437,
   441,   443,   447,   449,   455,   457,   461,   463,   465,   467,
   469,   471,   473,   475,   477,   479,   481,   483,   485,   489,
   491,   492,   494,   497,   500,   503,   506,   509,   510,   515,
   516,   521,   522,   528,   531,   534,   538,   539,   544,   545,
   550,   551,   556,   557,   562,   563,   568,   569,   575,   578,
   581,   584,   587,   590,   594,   596,   598,   603,   609,   611,
   614,   617,   624,   632,   640,   648,   653,   659,   666,   674,
   676,   679,   682,   687,   693,   700,   708,   710,   712,   714,
   716,   718,   720,   722,   724,   727,   730,   732,   735,   737,
   739,   741,   743,   746,   749,   752,   755,   758,   761,   764,
   767,   770,   773,   776,   779,   782,   785,   788,   790,   793,
   796,   798,   801,   804,   807,   810,   813,   816,   819,   822,
   825,   828,   831,   834,   837,   839,   841,   843,   845,   847,
   849,   851,   853,   855,   857,   859,   861,   863,   865,   867,
   869,   871,   873,   875,   877,   879,   881,   887,   893,   896,
   901,   905,   909,   910,   913,   915,   919,   921,   925,   929,
   930,   932,   933,   935,   937,   939,   941,   943,   945,   947,
   948,   951,   954,   957,   960,   962,   964,   967,   970,   973,
   976,   979,   983,   987,   992,   995,   998,  1002,  1006,  1010,
  1014,  1016,  1021,  1024,  1027,  1030,  1033,  1036,  1040,  1044,
  1048,  1052,  1056,  1060,  1064,  1066,  1073,  1080,  1087,  1094,
  1099,  1104,  1111,  1118,  1125,  1132,  1137,  1142,  1144,  1150,
  1157,  1164,  1171,  1177,  1184,  1191,  1198,  1199,  1202,  1204,
  1205,  1210,  1213,  1214,  1219,  1224,  1229,  1232,  1234,  1237,
  1239,  1242,  1245,  1250,  1252,  1254,  1255,  1258,  1262,  1267,
  1273,  1278,  1281,  1285,  1290,  1294,  1296,  1299,  1302,  1306,
  1308,  1310,  1313,  1315,  1318,  1322,  1327,  1331,  1333,  1336,
  1338,  1341,  1343,  1346,  1349,  1352,  1354,  1357,  1360,  1363,
  1366,  1369,  1372,  1375,  1378,  1381,  1384,  1387,  1389,  1391,
  1393,  1395,  1397,  1400,  1403,  1406,  1409,  1412,  1413,  1415,
  1418,  1422,  1427,  1429,  1431,  1435,  1437,  1439,  1441,  1443,
  1445,  1447,  1449,  1453,  1458,  1462,  1466,  1468,  1471,  1472,
  1475,  1478,  1484,  1492,  1498,  1504,  1512,  1522,  1531,  1535,
  1538,  1541,  1545,  1547,  1549,  1550,  1553,  1555,  1557,  1559,
  1562,  1565,  1568,  1573,  1576,  1579,  1582,  1584,  1586,  1588,
  1591,  1595,  1599,  1603,  1607,  1611,  1615,  1619,  1620,  1624,
  1625,  1630,  1631,  1636,  1637,  1642,  1643,  1648,  1649,  1654,
  1655,  1660,  1661,  1666,  1669,  1671,  1676,  1681,  1684,  1687,
  1690,  1693,  1698,  1705,  1711,  1717,  1725,  1732,  1734,  1740,
  1746,  1752,  1758,  1764,  1771,  1778,  1785,  1792,  1799,  1806,
  1813,  1820,  1827,  1835,  1843,  1851,  1859,  1861,  1868,  1876,
  1883,  1891,  1898,  1906,  1907,  1909,  1912,  1916,  1921,  1925,
  1930,  1934,  1939,  1943,  1947,  1950,  1952,  1954,  1956,  1958,
  1960,  1962,  1965,  1967,  1969,  1972,  1975,  1979,  1984,  1986,
  1991,  1996,  2001,  2006,  2009,  2012,  2016,  2021,  2026,  2031,
  2035,  2039,  2041,  2043,  2045,  2048,  2051,  2054,  2058,  2063,
  2065,  2068,  2071,  2076,  2080,  2085,  2087,  2089,  2091,  2093,
  2095,  2097,  2099,  2102,  2106,  2111,  2113,  2115,  2118,  2121,
  2125,  2129,  2133,  2138,  2140,  2142,  2146,  2149,  2151,  2154,
  2157,  2161,  2163,  2165,  2166,  2169,  2171,  2173,  2176,  2178,
  2181,  2183,  2186,  2189,  2191,  2194,  2196,  2199,  2201,  2204,
  2206,  2209,  2212,  2214
};

static const short yyrhs[] = {    50,
     0,    49,     0,    52,     0,    53,     0,    51,     0,    48,
     0,   105,    48,     0,   281,     0,   282,     0,    80,   106,
    81,     0,   284,     0,   285,     0,    37,     0,   104,     0,
   105,     0,    80,   142,    81,     0,   172,     0,   169,     0,
   174,     0,   176,     0,    54,     0,   287,     0,    38,   111,
     0,    38,   165,   110,     0,    38,   108,   110,     0,     0,
   274,   110,     0,   273,   110,     0,    82,     0,    83,     0,
    84,     0,    85,     0,    86,     0,    87,     0,    88,     0,
    89,     0,    90,     0,    91,     0,    92,     0,    93,     0,
    58,     0,    59,     0,    64,     0,    65,     0,    55,     0,
    69,     0,    94,     0,    68,     0,    56,     0,    57,     0,
    60,     0,    61,     0,    62,     0,    63,     0,   141,     0,
    80,    81,     0,    95,    96,     0,    35,     0,    36,     0,
    97,     0,     0,   165,     0,   107,     0,   113,    95,   142,
    96,     0,   113,    80,    81,     0,   113,    80,   117,    81,
     0,     0,   113,   114,    94,   116,     0,     0,   113,   115,
    55,   116,     0,   113,    56,     0,   113,    57,     0,    54,
    80,    81,     0,   287,    80,    81,     0,    54,    80,   117,
    81,     0,   287,    80,   117,    81,     0,   176,    80,   140,
    81,     0,   281,     0,   282,     0,   176,    67,    90,   176,
     0,   164,    67,    90,   164,     0,   165,    67,    90,   165,
     0,   140,     0,   117,    97,   140,     0,   113,     0,    56,
   118,     0,    57,   118,     0,   273,   125,     0,    83,   125,
     0,    82,   125,     0,    90,   125,     0,    91,   125,     0,
    29,   118,     0,    29,    80,   214,    81,     0,   119,     0,
   120,    80,   214,    81,   124,     0,   120,    80,   117,    81,
    80,   214,    81,   124,     0,   120,   121,     0,   120,    80,
   117,    81,   121,     0,    35,     0,   280,    35,     0,   165,
   122,   124,     0,   108,   122,   124,     0,     0,   123,     0,
   273,   122,     0,   274,   122,     0,    95,    96,     0,    95,
   142,    96,     0,   123,    95,   142,    96,     0,     0,    80,
    81,     0,    80,   117,    81,     0,   118,     0,    80,   214,
    81,   125,     0,   125,     0,   127,   126,     0,   127,    95,
   142,    96,   126,     0,   127,    95,    96,   126,     0,    36,
     0,   280,    36,     0,   126,     0,   128,    68,   126,     0,
   128,    69,   126,     0,   128,     0,   129,    84,   128,     0,
   129,    85,   128,     0,   129,    86,   128,     0,   129,     0,
   130,    82,   129,     0,   130,    83,   129,     0,   130,     0,
   131,    58,   130,     0,   131,    59,   130,     0,   131,     0,
   132,    92,   131,     0,   132,    93,   131,     0,   132,    60,
   131,     0,   132,    61,   131,     0,   132,     0,   133,    62,
   132,     0,   133,    63,   132,     0,   133,     0,   134,    88,
   133,     0,   134,     0,   135,    87,   134,     0,   135,     0,
   136,    89,   135,     0,   136,     0,   137,    64,   136,     0,
   137,     0,   138,    65,   137,     0,   138,     0,   138,    98,
   142,    99,   139,     0,   139,     0,   118,   141,   140,     0,
   100,     0,    70,     0,    71,     0,    72,     0,    73,     0,
    74,     0,    75,     0,    76,     0,    77,     0,    78,     0,
    79,     0,   140,     0,   142,    97,   140,     0,   139,     0,
     0,   142,     0,   150,   101,     0,   146,   101,     0,   170,
   101,     0,   172,   101,     0,   171,   101,     0,     0,   164,
   262,   147,   215,     0,     0,   165,   262,   148,   215,     0,
     0,   146,    97,   262,   149,   215,     0,   164,   160,     0,
   165,   160,     0,   146,    97,   160,     0,     0,   162,   254,
   151,   215,     0,     0,   163,   254,   152,   215,     0,     0,
   176,   254,   153,   215,     0,     0,    54,   254,   154,   215,
     0,     0,   287,   254,   155,   215,     0,     0,   150,    97,
   254,   156,   215,     0,   162,   157,     0,   163,   157,     0,
   176,   157,     0,    54,   157,     0,   287,   157,     0,   150,
    97,   157,     0,   161,     0,   158,     0,   261,    80,   117,
    81,     0,   261,   269,    80,   117,    81,     0,   159,     0,
   273,   157,     0,   274,   157,     0,    80,   259,    81,    80,
   117,    81,     0,    80,   259,    81,   269,    80,   117,    81,
     0,    80,   261,   269,    81,    80,   117,    81,     0,    80,
    54,   269,    81,    80,   117,    81,     0,    54,    80,   117,
    81,     0,    54,   269,    80,   117,    81,     0,    80,   257,
    81,    80,   117,    81,     0,    80,   257,    81,   269,    80,
   117,    81,     0,   161,     0,   273,   160,     0,   274,   160,
     0,   106,    80,   117,    81,     0,   106,   269,    80,   117,
    81,     0,    80,   263,    81,    80,   117,    81,     0,    80,
   263,    81,   269,    80,   117,    81,     0,   168,     0,   170,
     0,   173,     0,   169,     0,   172,     0,   171,     0,   174,
     0,   175,     0,   165,   175,     0,   164,   166,     0,   167,
     0,   165,   167,     0,   175,     0,   167,     0,    19,     0,
    30,     0,   164,   176,     0,   169,   175,     0,   176,   175,
     0,   168,   166,     0,   168,   176,     0,   165,   176,     0,
   176,   176,     0,   176,   167,     0,   169,   167,     0,   169,
   176,     0,   164,   178,     0,   164,   177,     0,   172,   175,
     0,   171,   175,     0,   170,   166,     0,   177,     0,   165,
   177,     0,   171,   167,     0,   178,     0,   165,   178,     0,
   172,   167,     0,   164,    54,     0,   164,   287,     0,   174,
   175,     0,    54,   175,     0,   287,   175,     0,   173,   166,
     0,   165,    54,     0,   165,   287,     0,    54,   167,     0,
   287,   167,     0,   174,   167,     0,    16,     0,    14,     0,
    33,     0,     3,     0,    13,     0,    44,     0,    46,     0,
    45,     0,    43,     0,     5,     0,    15,     0,    21,     0,
     9,     0,    20,     0,     4,     0,    25,     0,    22,     0,
    26,     0,   179,     0,   200,     0,   180,     0,   201,     0,
   180,   181,   102,   188,   103,     0,   187,   181,   102,   188,
   103,     0,   187,   277,     0,   278,   276,   187,   277,     0,
   278,   187,   277,     0,   276,   187,   277,     0,     0,    99,
   182,     0,   183,     0,   182,    97,   183,     0,   288,     0,
    43,   185,   288,     0,   186,   184,   288,     0,     0,    43,
     0,     0,   186,     0,    40,     0,    42,     0,    41,     0,
     6,     0,    18,     0,    39,     0,     0,   188,   189,     0,
   191,   101,     0,   190,   101,     0,   186,    99,     0,   234,
     0,   247,     0,   172,   101,     0,   171,   101,     0,   262,
   101,     0,   173,   101,     0,   170,   101,     0,   165,   262,
   195,     0,   164,   262,   195,     0,   190,    97,   262,   195,
     0,   165,   198,     0,   164,   198,     0,   190,    97,   198,
     0,   163,   254,   195,     0,   176,   254,   195,     0,   287,
   254,   195,     0,   192,     0,   191,    97,   254,   195,     0,
   163,   196,     0,   176,   196,     0,    54,   196,     0,   287,
   196,     0,   162,   196,     0,   191,    97,   196,     0,    54,
   262,   195,     0,    54,   256,   195,     0,    54,   261,   195,
     0,   162,   262,   195,     0,   162,   256,   195,     0,   162,
   261,   195,     0,   193,     0,    54,   273,    80,   261,    81,
   195,     0,    54,   274,    80,   261,    81,   195,     0,    54,
   273,    80,    54,    81,   195,     0,    54,   274,    80,    54,
    81,   195,     0,    54,   273,   259,   195,     0,    54,   274,
   259,   195,     0,   162,   273,    80,   261,    81,   195,     0,
   162,   274,    80,   261,    81,   195,     0,   162,   273,    80,
    54,    81,   195,     0,   162,   274,    80,    54,    81,   195,
     0,   162,   273,   259,   195,     0,   162,   274,   259,   195,
     0,   194,     0,    54,    80,   259,    81,   195,     0,    54,
    80,   261,   269,    81,   195,     0,    54,    80,    54,   269,
    81,   195,     0,    54,    80,   259,    81,   269,   195,     0,
   162,    80,   259,    81,   195,     0,   162,    80,   261,   269,
    81,   195,     0,   162,    80,    54,   269,    81,   195,     0,
   162,    80,   259,    81,   269,   195,     0,     0,   100,    52,
     0,   198,     0,     0,    54,   197,    99,   143,     0,    99,
   143,     0,     0,   262,   199,    99,   143,     0,   202,   102,
   203,   103,     0,   201,   102,   203,   103,     0,   202,   277,
     0,    12,     0,   280,    12,     0,   204,     0,   204,    97,
     0,   205,   206,     0,   204,    97,   205,   206,     0,    47,
     0,    54,     0,     0,   100,   143,     0,    80,    81,   112,
     0,    80,   214,    81,   112,     0,    80,   214,   216,    81,
   112,     0,    80,   209,    81,   112,     0,    80,    81,     0,
    80,   214,    81,     0,    80,   214,   216,    81,     0,    80,
   209,    81,     0,   211,     0,   211,   210,     0,   214,   210,
     0,   214,   216,   210,     0,    66,     0,    66,     0,    97,
    66,     0,   213,     0,   213,   216,     0,   214,    97,   212,
     0,   214,   216,    97,   212,     0,   211,    97,   212,     0,
   214,     0,   214,   216,     0,   213,     0,   213,   216,     0,
   162,     0,   162,   268,     0,   162,   262,     0,   162,   256,
     0,   164,     0,   164,   268,     0,   164,   262,     0,   163,
   262,     0,   163,   256,     0,   176,   262,     0,   176,   256,
     0,    54,   262,     0,    54,   256,     0,   287,   262,     0,
   287,   256,     0,   165,   262,     0,   163,     0,   176,     0,
    54,     0,   287,     0,   165,     0,   163,   268,     0,   176,
   268,     0,    54,   268,     0,   287,   268,     0,   165,   268,
     0,     0,   216,     0,   100,   217,     0,   102,   218,   103,
     0,   102,   218,    97,   103,     0,   140,     0,   217,     0,
   218,    97,   217,     0,   220,     0,   221,     0,   224,     0,
   225,     0,   226,     0,   227,     0,   145,     0,   228,    99,
   219,     0,    11,   143,    99,   219,     0,    27,    99,   219,
     0,   102,   223,   103,     0,   145,     0,   222,   145,     0,
     0,   223,   219,     0,   144,   101,     0,    32,    80,   142,
    81,   219,     0,    32,    80,   142,    81,   219,     8,   219,
     0,    10,    80,   142,    81,   219,     0,    34,    80,   144,
    81,   219,     0,    31,   219,    34,    80,   142,    81,   101,
     0,    24,    80,   144,   101,   144,   101,   144,    81,   219,
     0,    24,    80,   145,   144,   101,   144,    81,   219,     0,
    28,   228,   101,     0,    23,   101,     0,     7,   101,     0,
    17,   144,   101,     0,    47,     0,    54,     0,     0,   229,
   230,     0,   232,     0,   233,     0,   145,     0,   231,   232,
     0,   231,   233,     0,   231,   145,     0,   231,   102,   229,
   103,     0,    16,    48,     0,   262,   101,     0,   246,   101,
     0,   234,     0,   235,     0,   245,     0,   262,   221,     0,
   162,   254,   221,     0,   163,   254,   221,     0,   176,   254,
   221,     0,    54,   254,   221,     0,   287,   254,   221,     0,
   164,   262,   221,     0,   165,   262,   221,     0,     0,   265,
   236,   244,     0,     0,   162,   265,   237,   244,     0,     0,
   163,   265,   238,   244,     0,     0,   176,   265,   239,   244,
     0,     0,    54,   265,   240,   244,     0,     0,   287,   265,
   241,   244,     0,     0,   164,   265,   242,   244,     0,     0,
   165,   265,   243,   244,     0,   222,   221,     0,   221,     0,
   287,   207,   251,   221,     0,   162,   207,   251,   221,     0,
   287,   207,     0,   162,   207,     0,   162,   248,     0,    54,
   248,     0,    80,    81,   112,   101,     0,    80,   214,   216,
    81,   112,   101,     0,    80,   209,    81,   112,   101,     0,
    80,    81,   112,   251,   221,     0,    80,   214,   216,    81,
   112,   251,   221,     0,    80,   209,    81,   112,   251,   221,
     0,   249,     0,    80,   163,    81,   112,   101,     0,    80,
   176,    81,   112,   101,     0,    80,    54,    81,   112,   101,
     0,    80,   287,    81,   112,   101,     0,    80,   165,    81,
   112,   101,     0,    80,   163,   268,    81,   112,   101,     0,
    80,   176,   268,    81,   112,   101,     0,    80,   287,   268,
    81,   112,   101,     0,    80,   165,   268,    81,   112,   101,
     0,    80,   163,    81,   112,   251,   221,     0,    80,   176,
    81,   112,   251,   221,     0,    80,    54,    81,   112,   251,
   221,     0,    80,   287,    81,   112,   251,   221,     0,    80,
   165,    81,   112,   251,   221,     0,    80,   163,   268,    81,
   112,   251,   221,     0,    80,   176,   268,    81,   112,   251,
   221,     0,    80,   287,   268,    81,   112,   251,   221,     0,
    80,   165,   268,    81,   112,   251,   221,     0,   250,     0,
    80,    54,   271,    81,   112,   101,     0,    80,    54,   271,
    81,   112,   251,   221,     0,    80,    54,   272,    81,   112,
   101,     0,    80,    54,   272,    81,   112,   251,   221,     0,
    80,    54,   269,    81,   112,   101,     0,    80,    54,   269,
    81,   112,   251,   221,     0,     0,   252,     0,    99,   253,
     0,   252,    97,   253,     0,    47,    80,   117,    81,     0,
    47,    80,    81,     0,    54,    80,   117,    81,     0,    54,
    80,    81,     0,   287,    80,   117,    81,     0,   287,    80,
    81,     0,    80,   117,    81,     0,    80,    81,     0,   262,
     0,   255,     0,   259,     0,   261,     0,   256,     0,    54,
     0,    54,   269,     0,   257,     0,   258,     0,   273,   256,
     0,   274,   256,     0,    80,   257,    81,     0,    80,   257,
    81,   269,     0,   260,     0,   273,    80,   261,    81,     0,
   274,    80,   261,    81,     0,   273,    80,    54,    81,     0,
   274,    80,    54,    81,     0,   273,   259,     0,   274,   259,
     0,    80,   259,    81,     0,    80,   261,   269,    81,     0,
    80,    54,   269,    81,     0,    80,   259,    81,   269,     0,
    80,    54,    81,     0,    80,   261,    81,     0,   263,     0,
   106,     0,   264,     0,   273,   262,     0,   274,   262,     0,
   106,   269,     0,    80,   263,    81,     0,    80,   263,    81,
   269,     0,   266,     0,   273,   265,     0,   274,   265,     0,
   106,    80,   117,    81,     0,    80,   265,    81,     0,    80,
   265,    81,   267,     0,   270,     0,   208,     0,   271,     0,
   272,     0,   269,     0,   270,     0,   207,     0,    95,    96,
     0,    95,   143,    96,     0,   270,    95,   143,    96,     0,
   273,     0,   274,     0,   273,   268,     0,   274,   268,     0,
    80,   271,    81,     0,    80,   272,    81,     0,    80,   269,
    81,     0,    80,   271,    81,   269,     0,    84,     0,    88,
     0,   276,    84,   112,     0,   273,   165,     0,   277,     0,
   187,   277,     0,   275,    67,     0,   276,   275,    67,     0,
    47,     0,    54,     0,     0,   279,    67,     0,   278,     0,
   276,     0,   278,   276,     0,    47,     0,   276,    47,     0,
   283,     0,   276,   283,     0,    90,    54,     0,   109,     0,
   278,   281,     0,   281,     0,   278,   282,     0,   282,     0,
   276,    54,     0,   286,     0,   278,   286,     0,   278,    54,
     0,    54,     0,   287,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   307,   309,   313,   314,   315,   318,   320,   360,   362,   363,
   389,   391,   392,   393,   394,   395,   426,   428,   429,   431,
   432,   433,   441,   443,   444,   458,   460,   461,   466,   468,
   469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
   479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
   489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
   511,   513,   532,   534,   535,   536,   537,   537,   538,   538,
   539,   540,   543,   544,   545,   546,   547,   565,   567,   568,
   570,   571,   574,   576,   579,   581,   582,   583,   584,   585,
   586,   587,   588,   589,   590,   611,   616,   621,   623,   629,
   631,   634,   638,   646,   648,   649,   650,   653,   655,   656,
   659,   661,   662,   665,   667,   672,   674,   675,   677,   682,
   684,   689,   691,   692,   695,   697,   698,   699,   702,   704,
   705,   708,   710,   711,   714,   716,   717,   718,   719,   722,
   724,   725,   728,   730,   733,   735,   738,   740,   743,   745,
   748,   750,   753,   756,   760,   762,   765,   767,   768,   769,
   770,   771,   772,   773,   774,   775,   776,   779,   781,   784,
   790,   792,   809,   811,   812,   814,   815,   838,   840,   840,
   841,   841,   843,   843,   844,   845,   853,   855,   855,   856,
   856,   857,   857,   858,   858,   859,   859,   861,   861,   862,
   863,   864,   865,   866,   892,   894,   895,   897,   901,   902,
   903,   906,   910,   913,   916,   921,   924,   927,   930,   935,
   937,   938,   947,   950,   953,   956,   961,   963,   964,   967,
   969,   970,   972,   975,   977,   978,   981,   983,   986,   988,
   991,   993,   996,   998,   999,  1000,  1001,  1004,  1006,  1007,
  1008,  1009,  1012,  1014,  1015,  1016,  1017,  1020,  1023,  1024,
  1027,  1029,  1030,  1033,  1035,  1037,  1038,  1039,  1041,  1044,
  1046,  1048,  1049,  1051,  1079,  1081,  1082,  1083,  1084,  1085,
  1086,  1087,  1088,  1091,  1093,  1094,  1095,  1096,  1097,  1098,
  1099,  1100,  1103,  1105,  1108,  1110,  1126,  1128,  1146,  1148,
  1149,  1150,  1153,  1155,  1158,  1160,  1163,  1165,  1166,  1169,
  1171,  1174,  1176,  1179,  1181,  1182,  1185,  1187,  1188,  1197,
  1199,  1202,  1204,  1206,  1208,  1209,  1211,  1212,  1213,  1218,
  1220,  1224,  1228,  1231,  1234,  1235,  1237,  1248,  1250,  1252,
  1253,  1254,  1256,  1257,  1258,  1259,  1260,  1262,  1273,  1275,
  1276,  1278,  1279,  1280,  1282,  1293,  1296,  1298,  1300,  1302,
  1304,  1307,  1309,  1311,  1313,  1315,  1317,  1320,  1331,  1334,
  1336,  1338,  1341,  1343,  1345,  1347,  1354,  1356,  1370,  1372,
  1372,  1383,  1385,  1385,  1388,  1390,  1404,  1408,  1410,  1413,
  1415,  1428,  1430,  1434,  1436,  1439,  1441,  1449,  1451,  1452,
  1454,  1478,  1480,  1481,  1482,  1485,  1487,  1488,  1489,  1490,
  1493,  1495,  1498,  1500,  1501,  1502,  1503,  1515,  1517,  1518,
  1519,  1569,  1571,  1572,  1573,  1575,  1576,  1577,  1579,  1580,
  1582,  1583,  1585,  1586,  1588,  1589,  1591,  1594,  1596,  1597,
  1598,  1599,  1601,  1602,  1603,  1604,  1605,  1608,  1610,  1613,
  1617,  1619,  1620,  1623,  1625,  1631,  1633,  1634,  1635,  1636,
  1637,  1638,  1641,  1643,  1644,  1652,  1656,  1658,  1661,  1663,
  1666,  1670,  1672,  1673,  1676,  1678,  1680,  1683,  1687,  1689,
  1690,  1691,  1698,  1700,  1707,  1709,  1712,  1714,  1715,  1716,
  1717,  1718,  1719,  1722,  1732,  1740,  1743,  1745,  1746,  1767,
  1769,  1771,  1773,  1775,  1777,  1779,  1780,  1790,  1793,  1793,
  1795,  1795,  1797,  1797,  1799,  1799,  1801,  1801,  1803,  1803,
  1805,  1805,  1807,  1809,  1811,  1834,  1838,  1846,  1850,  1874,
  1876,  1888,  1890,  1891,  1892,  1894,  1896,  1899,  1918,  1921,
  1924,  1927,  1930,  1934,  1937,  1943,  1946,  1951,  1954,  1957,
  1960,  1963,  1967,  1970,  1975,  1979,  1983,  1997,  2002,  2006,
  2010,  2015,  2019,  2025,  2027,  2030,  2032,  2035,  2037,  2039,
  2040,  2041,  2042,  2044,  2045,  2048,  2050,  2053,  2055,  2056,
  2059,  2061,  2062,  2073,  2075,  2076,  2079,  2081,  2090,  2092,
  2093,  2094,  2095,  2096,  2097,  2100,  2102,  2103,  2105,  2113,
  2115,  2118,  2120,  2130,  2132,  2133,  2136,  2138,  2139,  2142,
  2144,  2145,  2168,  2170,  2171,  2174,  2176,  2179,  2181,  2182,
  2185,  2187,  2190,  2192,  2193,  2196,  2198,  2199,  2200,  2203,
  2205,  2206,  2207,  2210,  2212,  2215,  2217,  2242,  2244,  2248,
  2250,  2263,  2265,  2268,  2270,  2272,  2274,  2275,  2285,  2287,
  2290,  2292,  2295,  2297,  2313,  2315,  2318,  2320,  2330,  2334,
  2336,  2337,  2340,  2342
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","AUTO","DOUBLE",
"INT","STRUCT","BREAK","ELSE","LONG","SWITCH","CASE","ENUM","REGISTER","TYPEDEF",
"CHAR","EXTERN","RETURN","UNION","CONST","FLOAT","SHORT","UNSIGNED","CONTINUE",
"FOR","SIGNED","VOID","DEFAULT","GOTO","SIZEOF","VOLATILE","DO","IF","STATIC",
"WHILE","NEW","DELETE","THIS","OPERATOR","CLASS","PUBLIC","PROTECTED","PRIVATE",
"VIRTUAL","FRIEND","INLINE","OVERLOAD","IDENTIFIER","STRINGliteral","FLOATINGconstant",
"INTEGERconstant","CHARACTERconstant","OCTALconstant","HEXconstant","TYPEDEFname",
"ARROW","ICR","DECR","LS","RS","LE","GE","EQ","NE","ANDAND","OROR","ELLIPSIS",
"CLCL","DOTstar","ARROWstar","MULTassign","DIVassign","MODassign","PLUSassign",
"MINUSassign","LSassign","RSassign","ANDassign","ERassign","ORassign","'('",
"')'","'+'","'-'","'*'","'/'","'%'","'^'","'&'","'|'","'~'","'!'","'<'","'>'",
"'.'","'['","']'","','","'?'","':'","'='","';'","'{'","'}'","constant","string_literal_list",
"paren_identifier_declarator","primary_expression","non_elaborating_type_specifier",
"operator_function_name","operator_function_ptr_opt","any_operator","type_qualifier_list_opt",
"postfix_expression","@1","@2","member_name","argument_expression_list","unary_expression",
"allocation_expression","global_opt_scope_opt_operator_new","operator_new_type",
"operator_new_declarator_opt","operator_new_array_declarator","operator_new_initializer_opt",
"cast_expression","deallocation_expression","global_opt_scope_opt_delete","point_member_expression",
"multiplicative_expression","additive_expression","shift_expression","relational_expression",
"equality_expression","AND_expression","exclusive_OR_expression","inclusive_OR_expression",
"logical_AND_expression","logical_OR_expression","conditional_expression","assignment_expression",
"assignment_operator","comma_expression","constant_expression","comma_expression_opt",
"declaration","default_declaring_list","@3","@4","@5","declaring_list","@6",
"@7","@8","@9","@10","@11","constructed_declarator","constructed_paren_typedef_declarator",
"constructed_parameter_typedef_declarator","constructed_identifier_declarator",
"nonunary_constructed_identifier_declarator","declaration_specifier","type_specifier",
"declaration_qualifier_list","type_qualifier_list","declaration_qualifier","type_qualifier",
"basic_declaration_specifier","basic_type_specifier","sue_declaration_specifier",
"sue_type_specifier_elaboration","sue_type_specifier","typedef_declaration_specifier",
"typedef_type_specifier","storage_class","basic_type_name","elaborated_type_name_elaboration",
"elaborated_type_name","aggregate_name_elaboration","aggregate_name","derivation_opt",
"derivation_list","parent_class","virtual_opt","access_specifier_opt","access_specifier",
"aggregate_key","member_declaration_list_opt","member_declaration","member_default_declaring_list",
"member_declaring_list","member_conflict_declaring_item","member_conflict_paren_declaring_item",
"member_conflict_paren_postfix_declaring_item","member_pure_opt","bit_field_declarator",
"@12","bit_field_identifier_declarator","@13","enum_name_elaboration","enum_name",
"global_opt_scope_opt_enum_key","enumerator_list","enumerator_list_no_trailing_comma",
"enumerator_name","enumerator_value_opt","parameter_type_list","old_parameter_type_list",
"named_parameter_type_list","comma_opt_ellipsis","parameter_list","parameter_declaration",
"non_casting_parameter_declaration","type_name","initializer_opt","initializer",
"initializer_group","initializer_list","statement","labeled_statement","compound_statement",
"declaration_list","statement_list_opt","expression_statement","selection_statement",
"iteration_statement","jump_statement","label","translation_unit","external_definition",
"linkage_specifier","function_declaration","function_definition","new_function_definition",
"old_function_definition","@14","@15","@16","@17","@18","@19","@20","@21","old_function_body",
"constructor_function_definition","constructor_function_declaration","constructor_function_in_class",
"constructor_parameter_list_and_body","constructor_conflicting_parameter_list_and_body",
"constructor_conflicting_typedef_declarator","constructor_init_list_opt","constructor_init_list",
"constructor_init","declarator","typedef_declarator","parameter_typedef_declarator",
"clean_typedef_declarator","clean_postfix_typedef_declarator","paren_typedef_declarator",
"postfix_paren_typedef_declarator","simple_paren_typedef_declarator","identifier_declarator",
"unary_identifier_declarator","postfix_identifier_declarator","old_function_declarator",
"postfix_old_function_declarator","old_postfixing_abstract_declarator","abstract_declarator",
"postfixing_abstract_declarator","array_abstract_declarator","unary_abstract_declarator",
"postfix_abstract_declarator","asterisk_or_ampersand","unary_modifier","scoping_name",
"scope","tag_name","global_scope","@22","global_or_scope","scope_opt_identifier",
"scope_opt_complex_name","complex_name","global_opt_scope_opt_identifier","global_opt_scope_opt_complex_name",
"scoped_typedefname","global_or_scoped_typedefname","global_opt_scope_opt_typedefname", NULL
};
#endif

static const short yyr1[] = {     0,
   104,   104,   104,   104,   104,   105,   105,   106,   106,   106,
   107,   107,   107,   107,   107,   107,   108,   108,   108,   108,
   108,   108,   109,   109,   109,   110,   110,   110,   111,   111,
   111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
   111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
   111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
   112,   112,   113,   113,   113,   113,   114,   113,   115,   113,
   113,   113,   113,   113,   113,   113,   113,   116,   116,   116,
   116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
   118,   118,   118,   118,   118,   119,   119,   119,   119,   120,
   120,   121,   121,   122,   122,   122,   122,   123,   123,   123,
   124,   124,   124,   125,   125,   126,   126,   126,   126,   127,
   127,   128,   128,   128,   129,   129,   129,   129,   130,   130,
   130,   131,   131,   131,   132,   132,   132,   132,   132,   133,
   133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
   138,   138,   139,   139,   140,   140,   141,   141,   141,   141,
   141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
   144,   144,   145,   145,   145,   145,   145,   147,   146,   148,
   146,   149,   146,   146,   146,   146,   151,   150,   152,   150,
   153,   150,   154,   150,   155,   150,   156,   150,   150,   150,
   150,   150,   150,   150,   157,   157,   157,   157,   157,   157,
   157,   158,   158,   158,   158,   159,   159,   159,   159,   160,
   160,   160,   161,   161,   161,   161,   162,   162,   162,   163,
   163,   163,   163,   164,   164,   164,   165,   165,   166,   166,
   167,   167,   168,   168,   168,   168,   168,   169,   169,   169,
   169,   169,   170,   170,   170,   170,   170,   171,   171,   171,
   172,   172,   172,   173,   173,   173,   173,   173,   173,   174,
   174,   174,   174,   174,   175,   175,   175,   175,   175,   175,
   175,   175,   175,   176,   176,   176,   176,   176,   176,   176,
   176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
   180,   180,   181,   181,   182,   182,   183,   183,   183,   184,
   184,   185,   185,   186,   186,   186,   187,   187,   187,   188,
   188,   189,   189,   189,   189,   189,   189,   189,   189,   189,
   189,   190,   190,   190,   190,   190,   190,   191,   191,   191,
   191,   191,   191,   191,   191,   191,   191,   191,   192,   192,
   192,   192,   192,   192,   192,   193,   193,   193,   193,   193,
   193,   193,   193,   193,   193,   193,   193,   193,   194,   194,
   194,   194,   194,   194,   194,   194,   195,   195,   196,   197,
   196,   198,   199,   198,   200,   200,   201,   202,   202,   203,
   203,   204,   204,   205,   205,   206,   206,   207,   207,   207,
   207,   208,   208,   208,   208,   209,   209,   209,   209,   209,
   210,   210,   211,   211,   211,   211,   211,   212,   212,   212,
   212,   213,   213,   213,   213,   213,   213,   213,   213,   213,
   213,   213,   213,   213,   213,   213,   213,   214,   214,   214,
   214,   214,   214,   214,   214,   214,   214,   215,   215,   216,
   217,   217,   217,   218,   218,   219,   219,   219,   219,   219,
   219,   219,   220,   220,   220,   221,   222,   222,   223,   223,
   224,   225,   225,   225,   226,   226,   226,   226,   227,   227,
   227,   227,   228,   228,   229,   229,   230,   230,   230,   230,
   230,   230,   230,   231,   232,   232,   233,   233,   233,   234,
   234,   234,   234,   234,   234,   234,   234,   236,   235,   237,
   235,   238,   235,   239,   235,   240,   235,   241,   235,   242,
   235,   243,   235,   244,   244,   245,   245,   246,   246,   247,
   247,   248,   248,   248,   248,   248,   248,   248,   249,   249,
   249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
   249,   249,   249,   249,   249,   249,   249,   250,   250,   250,
   250,   250,   250,   251,   251,   252,   252,   253,   253,   253,
   253,   253,   253,   253,   253,   254,   254,   255,   255,   255,
   256,   256,   256,   257,   257,   257,   258,   258,   259,   259,
   259,   259,   259,   259,   259,   260,   260,   260,   260,   261,
   261,   262,   262,   263,   263,   263,   264,   264,   264,   265,
   265,   265,   266,   266,   266,   267,   267,   268,   268,   268,
   269,   269,   270,   270,   270,   271,   271,   271,   271,   272,
   272,   272,   272,   273,   273,   274,   274,   275,   275,   276,
   276,   277,   277,   279,   278,   280,   280,   280,   281,   281,
   282,   282,   283,   283,   284,   284,   285,   285,   286,   287,
   287,   287,   288,   288
};

static const short yyr2[] = {     0,
     1,     1,     1,     1,     1,     1,     2,     1,     1,     3,
     1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
     1,     1,     2,     3,     3,     0,     2,     2,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
     0,     1,     1,     4,     3,     4,     0,     4,     0,     4,
     2,     2,     3,     3,     4,     4,     4,     1,     1,     4,
     4,     4,     1,     3,     1,     2,     2,     2,     2,     2,
     2,     2,     2,     4,     1,     5,     8,     2,     5,     1,
     2,     3,     3,     0,     1,     2,     2,     2,     3,     4,
     0,     2,     3,     1,     4,     1,     2,     5,     4,     1,
     2,     1,     3,     3,     1,     3,     3,     3,     1,     3,
     3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
     3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
     1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
     0,     1,     2,     2,     2,     2,     2,     0,     4,     0,
     4,     0,     5,     2,     2,     3,     0,     4,     0,     4,
     0,     4,     0,     4,     0,     4,     0,     5,     2,     2,
     2,     2,     2,     3,     1,     1,     4,     5,     1,     2,
     2,     6,     7,     7,     7,     4,     5,     6,     7,     1,
     2,     2,     4,     5,     6,     7,     1,     1,     1,     1,
     1,     1,     1,     1,     2,     2,     1,     2,     1,     1,
     1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
     1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     5,     5,     2,     4,
     3,     3,     0,     2,     1,     3,     1,     3,     3,     0,
     1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
     2,     2,     2,     2,     1,     1,     2,     2,     2,     2,
     2,     3,     3,     4,     2,     2,     3,     3,     3,     3,
     1,     4,     2,     2,     2,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     1,     6,     6,     6,     6,     4,
     4,     6,     6,     6,     6,     4,     4,     1,     5,     6,
     6,     6,     5,     6,     6,     6,     0,     2,     1,     0,
     4,     2,     0,     4,     4,     4,     2,     1,     2,     1,
     2,     2,     4,     1,     1,     0,     2,     3,     4,     5,
     4,     2,     3,     4,     3,     1,     2,     2,     3,     1,
     1,     2,     1,     2,     3,     4,     3,     1,     2,     1,
     2,     1,     2,     2,     2,     1,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
     1,     1,     2,     2,     2,     2,     2,     0,     1,     2,
     3,     4,     1,     1,     3,     1,     1,     1,     1,     1,
     1,     1,     3,     4,     3,     3,     1,     2,     0,     2,
     2,     5,     7,     5,     5,     7,     9,     8,     3,     2,
     2,     3,     1,     1,     0,     2,     1,     1,     1,     2,
     2,     2,     4,     2,     2,     2,     1,     1,     1,     2,
     3,     3,     3,     3,     3,     3,     3,     0,     3,     0,
     4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
     4,     0,     4,     2,     1,     4,     4,     2,     2,     2,
     2,     4,     6,     5,     5,     7,     6,     1,     5,     5,
     5,     5,     5,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     7,     7,     7,     7,     1,     6,     7,     6,
     7,     6,     7,     0,     1,     2,     3,     4,     3,     4,
     3,     4,     3,     3,     2,     1,     1,     1,     1,     1,
     1,     2,     1,     1,     2,     2,     3,     4,     1,     4,
     4,     4,     4,     2,     2,     3,     4,     4,     4,     3,
     3,     1,     1,     1,     2,     2,     2,     3,     4,     1,
     2,     2,     4,     3,     4,     1,     1,     1,     1,     1,
     1,     1,     2,     3,     4,     1,     1,     2,     2,     3,
     3,     3,     4,     1,     1,     3,     2,     1,     2,     2,
     3,     1,     1,     0,     2,     1,     1,     2,     1,     2,
     1,     2,     2,     1,     2,     1,     2,     1,     2,     1,
     2,     2,     1,     1
};

static const short yydefact[] = {   485,
   644,   278,   289,   284,   317,   287,   388,   279,   276,   285,
   275,   318,   241,   288,   286,   291,   290,   292,   242,   277,
   644,   319,   283,   280,   282,   281,   649,   643,     0,   634,
   635,     0,   603,   654,   489,     0,     0,     0,     0,   644,
   644,   237,   227,   230,   228,   232,   231,   229,   233,   234,
     0,   258,   261,   293,   295,   303,   294,   296,     0,   486,
   644,   487,   488,   497,   498,   499,     0,     0,   602,   604,
   508,   610,     0,     0,     0,   647,   638,   646,     0,     0,
     8,     9,   651,   660,     0,   494,    58,    59,   642,    21,
    45,    49,    50,    41,    42,    51,    52,    53,    54,    43,
    44,    48,    46,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,     0,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    47,     0,    60,   157,
    26,    23,    55,    26,    18,    17,    19,    20,   295,     0,
   296,     0,   647,    22,   275,   581,     0,   603,   202,   206,
   209,   205,   272,   267,     0,   193,   577,   580,   583,   584,
   578,   589,   579,   576,   516,     0,     0,     0,   643,     0,
     0,     0,   653,   644,   644,   622,   607,   621,     0,   174,
     0,   173,   644,   199,   529,   187,   510,   200,   189,   512,
   264,     0,   184,   220,   236,   240,   239,   243,   254,   253,
   178,   520,     0,     0,   265,   270,   185,   238,   235,   248,
   259,   262,   180,   522,   271,   246,   247,   251,   244,   252,
   175,   257,   177,   260,   256,   176,   263,   255,   269,   274,
   266,   201,   250,   245,   249,   191,   514,   644,     0,     0,
   299,     0,     0,   387,   485,   492,   490,   491,   496,   495,
   469,   500,   644,   637,   605,   611,   606,   612,   640,   650,
   659,    61,     0,     0,   652,   662,     0,   648,   661,   645,
   389,   203,   273,   268,   528,   195,   518,    56,    57,    25,
    26,    26,     0,    24,   647,   644,   582,   643,     0,     0,
     0,     0,     0,     0,     0,   644,   607,   639,   448,   504,
   644,     0,   644,     0,   210,   585,   594,     0,     0,   211,
   586,   595,    10,   608,   614,   644,   100,   120,    13,     6,
     2,     1,     5,     3,     4,   440,   644,   644,   410,   644,
    61,   644,   644,   644,   644,    14,    15,    63,    85,     0,
   114,    95,   644,   116,   122,   644,   125,   129,   132,   135,
   140,   143,   145,   147,   149,   151,   153,   155,    83,   422,
   438,   426,   442,   228,   232,   231,   439,     0,   406,   413,
     0,   644,   647,   646,     0,   656,   658,    11,    12,   441,
   643,   623,   114,   170,     0,     0,   647,   646,     0,     0,
   644,     0,   603,   186,   182,     0,     0,     0,   204,   197,
     0,     0,   440,   439,   441,   644,     0,   565,   448,   501,
   644,   448,   502,   644,   448,   506,   644,   221,   222,   448,
   507,   644,   448,   503,   644,   314,   316,   315,   312,   663,
   304,   305,   310,     0,     0,   664,   307,   320,   320,   394,
   395,     0,   390,   396,     0,   644,   171,   643,   467,     0,
     0,   644,   644,     0,   525,   644,   509,     0,   636,    62,
   302,   641,   301,     0,     0,   448,   505,   644,    28,    27,
     0,   644,   644,   600,     0,   643,     0,     0,     0,   587,
   596,   601,     0,   608,   581,     0,     0,     0,   644,   644,
   194,   449,     0,   644,   517,   643,     0,   643,     0,   609,
   644,   617,   615,   616,   644,    93,     0,   644,   603,   434,
   433,   445,   620,   618,   619,   626,   627,   644,    86,    87,
   440,   168,     0,   438,   442,   230,   232,   231,   233,   439,
     0,   441,   398,    90,    89,   653,    91,    92,     7,    71,
    72,   644,   644,     0,     0,   613,   644,   644,   644,   104,
    98,   104,   644,   117,   644,   644,   644,   644,   644,   644,
   644,   644,   644,   644,   644,   644,   644,   644,   644,   644,
   644,   644,   644,   644,   644,   644,   425,   424,   423,   430,
   429,   443,   644,   428,   427,   626,   627,   437,   447,   644,
   432,   431,   444,    61,   411,   644,   407,   414,    61,   644,
   408,     0,    88,   648,   655,   657,   101,   121,   644,   436,
   435,   446,   644,   624,   644,   648,   644,     0,     0,     0,
     0,     0,   644,   448,     0,     0,     0,   448,     0,     0,
   620,   642,   643,   644,   566,     0,   527,   644,   188,   511,
   190,   513,   179,   521,   181,   523,   192,   515,   644,   313,
   644,   311,   644,   644,   644,   386,   391,   644,   392,   385,
   493,     0,     0,   644,   171,     0,     0,     0,     0,   171,
     0,     0,   649,   484,   466,   172,     0,   462,     0,   470,
   456,   457,   458,   459,   460,   461,     0,     0,   193,   187,
   189,   178,   180,   191,   468,   524,   195,   300,   526,   196,
   519,   216,     0,   440,   598,     0,   587,   596,     0,   644,
   588,   644,   599,   597,   644,   609,   582,   643,     0,   643,
     0,   613,     0,   644,   453,   450,   207,     0,   592,   590,
   593,   591,   402,     0,     0,     0,   644,    73,     0,     0,
     0,     0,   626,   656,   658,   628,   629,   644,   626,   627,
    16,   644,   644,   644,   644,   644,    65,     0,     0,     0,
     0,    84,   156,     0,     0,   644,   111,   105,   104,   104,
   111,   644,     0,   123,   124,   126,   127,   128,   130,   131,
   133,   134,   138,   139,   136,   137,   141,   142,   144,   146,
   148,   150,   152,     0,     0,   401,   412,   417,   420,   418,
   399,   415,    61,   644,   409,    74,     0,    73,    74,   625,
     0,   183,     0,     0,   198,   644,   644,   575,     0,   644,
   567,   308,   306,   309,   643,   297,     0,     0,   644,   644,
   228,   232,   231,   229,     0,     0,   321,     0,     0,   341,
   355,   368,   325,   326,     0,     0,   298,   396,   397,   481,
   644,     0,     0,   480,   171,   171,   483,   484,     0,     0,
   644,   171,   644,   471,   644,   171,   644,   217,   644,   598,
   588,   599,   597,     0,   644,     0,   644,   644,     0,   644,
   592,   590,   593,   591,   224,   454,     0,   208,   405,   403,
     0,    94,     0,    75,   632,   630,   631,   581,   647,   644,
   626,   169,   115,    66,    64,    68,     0,     0,     0,     0,
    78,    79,    70,   644,   111,   108,     0,   644,   103,   644,
   106,   107,   102,   119,   644,   644,    77,   421,   419,   400,
   416,    76,   223,   569,     0,   571,     0,   574,   573,     0,
   581,   644,   644,   345,   379,   531,   538,   557,     0,   377,
   377,   377,     0,     0,   644,   347,   530,     0,   377,   377,
   377,     0,     0,   343,   377,   579,   576,   336,   377,   335,
   377,   331,   328,   327,   330,   344,   377,   324,     0,   323,
     0,   322,   329,   346,   377,   393,     0,   171,   482,   643,
     0,   171,   465,   479,     0,     0,     0,   643,   644,   644,
   463,     0,   218,     0,   212,     0,     0,   225,     0,   644,
   451,   404,    61,   633,   644,     0,     0,     0,   644,    99,
    96,   109,   112,     0,     0,   118,   154,   568,   570,   572,
     0,   440,    61,   438,   442,   439,     0,     0,     0,     0,
   441,   382,     0,   350,   351,   349,     0,     0,   377,     0,
   377,   440,     0,     0,   353,   354,   352,     0,   377,     0,
   377,   338,   333,   332,   339,   337,   377,   348,   377,   340,
   171,   464,   171,     0,   644,   171,   171,   643,   644,   215,
   219,   213,   214,   226,   452,   455,     0,     0,     0,   440,
   439,     0,   441,   113,   110,   644,    61,   620,   618,   619,
   564,    61,   443,    61,   447,    61,   444,    61,     0,   377,
     0,    61,   446,   378,   644,   643,     0,   360,   643,     0,
   361,   620,   377,     0,   643,     0,   366,   643,     0,   367,
   334,   342,   474,     0,   171,     0,   472,   475,     0,   643,
    81,     0,    82,    80,   111,   381,   564,    61,    61,    61,
   532,     0,   564,    61,   564,    61,   564,    61,   564,    61,
   369,   377,   377,   564,    61,   384,   377,   377,   377,   377,
    61,   373,   377,   377,   377,   377,   377,   377,   171,     0,
     0,   171,    97,   541,     0,   564,   371,   564,   564,   535,
   539,     0,   564,   543,     0,   564,   540,     0,   564,   534,
     0,   564,   372,   370,   542,     0,   564,   358,   356,   359,
   357,   375,   376,   374,   364,   362,   365,   363,     0,   171,
   476,   473,   550,   562,     0,   558,     0,   560,     0,   548,
   544,     0,   552,   547,     0,   549,   545,     0,   537,   533,
     0,   551,   546,     0,   171,   478,   563,   559,   561,   553,
   556,   554,   536,   555,   477,     0,     0
};

static const short yydefgoto[] = {   336,
   337,   509,   338,   550,    34,   280,   132,   533,   339,   544,
   545,   906,   739,   341,   342,   343,   551,   767,   768,   919,
   344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
   354,   355,   356,   357,   358,   522,   133,   676,   385,   677,
   678,    36,   415,   420,   624,    37,   409,   412,   423,   299,
   466,   628,   149,   150,   151,   193,   152,   360,   361,   362,
   363,   195,    42,    43,    44,   364,   365,   366,    48,    49,
    50,   386,    52,    53,    54,    55,   239,   431,   432,   653,
   649,   433,   155,   654,   837,   838,   839,   840,   841,   842,
  1044,   944,  1031,   945,  1047,    57,    58,    59,   442,   443,
   444,   659,   176,   502,   368,   601,   369,   798,   370,   371,
   491,   492,   726,   887,   680,   681,   682,   456,   447,   683,
   684,   685,   686,   687,     1,    60,    61,    62,    63,    64,
    65,   253,   411,   414,   425,   303,   468,   417,   422,   457,
    66,    67,   844,   946,   947,   948,   407,   408,   635,   689,
   157,   158,   159,   160,   161,   162,   163,   164,    69,    70,
   172,    72,   503,   512,   513,   178,   514,   515,   372,   627,
    75,   168,    77,   388,    79,   389,   376,   377,    83,   378,
   379,    84,   390,   437
};

static const short yypact[] = {-32768,
 10914,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    77,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  8920,-32768,-32768,-32768,-32768,-32768,    70,  6737,  1168,-32768,
-32768,    -7,    66,-32768,-32768,   213,   615,  3182,  3945, 13349,
 13402,-32768,  8521,  8521,   689,  1152,  1387,  2804,  2804,-32768,
 13561,-32768,-32768,-32768,   142,    59,-32768,   128,    -4,-32768,
  6981,-32768,-32768,-32768,-32768,-32768,    41,   505,-32768,-32768,
-32768,-32768,   393,  1168,    92,   161,-32768,   464,   229,   297,
-32768,-32768,-32768,-32768,  7823,-32768,-32768,-32768,-32768,    40,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   263,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   269,-32768,-32768,
   755,-32768,-32768,  5127,  1602,    57,    57,  1602,-32768,   117,
-32768,   117,   851,    57,-32768,   286,  4216,   129,-32768,-32768,
-32768,-32768,-32768,-32768,   117,   256,-32768,-32768,-32768,-32768,
-32768,-32768,   191,-32768,-32768,  2158,  4310,   310,-32768,   530,
   289,   303,-32768, 10970,  9747,-32768,-32768,   311,  4354,-32768,
  4462,-32768, 12821,-32768,   339,   256,-32768,-32768,   256,-32768,
   347,  1168,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   256,-32768,  2741,  4734,-32768,   347,-32768,-32768,-32768,-32768,
-32768,-32768,   256,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   256,-32768,  1044,   317,   325,
   396,   254,   254,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  3133,    57,-32768,-32768,-32768,-32768,-32768,    70,
   347,    57,   117,   408,-32768,   347,   117,   851,-32768,-32768,
-32768,-32768,-32768,-32768,   339,   256,-32768,-32768,-32768,-32768,
  1516,   755,   349,-32768,   643, 10970,   386,   578,  4820,   406,
   416,   590,   444,  2755,  4900, 10970,   453,-32768,   439,-32768,
 10970,   465,  3133,  4979,-32768,-32768,-32768,   191,  5283,-32768,
-32768,-32768,-32768,   261,   415,  8091,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  4427, 12908, 12908,-32768, 11236,
    57, 12996, 12996, 13084, 12996,-32768,   627,-32768,   547,   -30,
  1671,-32768,  7167,-32768,-32768, 10821,   283,   293,   605,   708,
    91,   768,   550,   560,   589,   636,   -12,-32768,-32768,  1934,
  1934, 10276, 10364,  2804,  2804,  2804, 10505,   626,   -43,   439,
   121, 12996,   250,   354,    -3,-32768,-32768,-32768,-32768,  7413,
   630,-32768,-32768,-32768,   622,   659,   250,   354,   989,   666,
 12644,  5435,   520,-32768,-32768,  2926,  4354,  5454,-32768,-32768,
  3179,  5585,  2341, 10558,  7512,   109,   256,   653,   439,-32768,
  3133,   439,-32768,  3133,   439,-32768,  3133,-32768,-32768,   439,
-32768,  3133,   439,-32768,  3133,-32768,-32768,-32768,   474,   347,
   660,-32768,   733,   851,   464,-32768,-32768,-32768,-32768,-32768,
-32768,   676,   703,   686,   715,  6511,  8619,  7945,-32768,  4462,
  4462, 13455, 13508, 13614,-32768,  3133,-32768,  7945,-32768,    57,
   396,-32768,   396,   117,   256,   439,-32768,  3133,-32768,-32768,
    20, 12644, 13772,-32768,   731,   578,   743,   746,   590,   548,
   565,-32768,   765,   596,   355,  5623,  5658,    42, 12644,  8832,
-32768,-32768,    47, 12644,-32768,   603,   702,   712,   745,-32768,
 13830,-32768,-32768,   311, 11236,-32768,   803,  9194,   261,-32768,
-32768,-32768,-32768,-32768,-32768,  2095,  1934, 12644,-32768,-32768,
  1791,-32768,    79,   897,  3037,  1602,    57,    57,    57,  5258,
   771,  2458,-32768,-32768,-32768,   131,-32768,-32768,-32768,-32768,
-32768, 11588, 12644,   773,   815,-32768, 12644, 12644, 11236,  1285,
-32768,  3366,  9835,-32768, 12644, 12644, 12644, 12644, 12644, 12644,
 12644, 12644, 12644, 12644, 12644, 12644, 12644, 12644, 12644, 12644,
 12644, 12644, 12644, 12644, 12644, 10012,-32768,-32768,-32768,-32768,
-32768,-32768, 10100,-32768,-32768,  2183,  2558,-32768,-32768,  9287,
-32768,-32768,-32768,    57,-32768, 13888,-32768,-32768,    57, 13888,
-32768,   146,-32768,   250,-32768,-32768,-32768,-32768,  9380,-32768,
-32768,-32768, 11676,-32768, 12644,   250, 11764,   785,  5435,   778,
  3509,  5435, 10970,   439,  5696,  3708,  5715,   439,  5772,  5786,
   731,   809,   812, 11852,-32768,   824,-32768,   109,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   929,-32768,
  1044,-32768,   929,  4687,  5554,-32768,   254, 12644,-32768,-32768,
-32768,   794,   827, 12644, 11940,   813,   841,   830,   259,  8741,
   846,   853,   -15,  4074,-32768,   848,   837,-32768, 13667,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   863,  8411,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   396,-32768,-32768,
-32768,-32768,   104,  6205,   886,   893,   261,   261,   901, 10970,
   909, 10970,   915,   928, 10970,   936,-32768,   802,   842,   889,
   922,   616,   126,  8832,-32768,-32768,-32768,   139,   601,   609,
   601,   609,-32768,   950,   125,   960,  9287,    81,   193,   971,
   974,   977, 10645,   940,   947,-32768,-32768,  9473,  2651,   897,
-32768, 12644,  7278,  9566, 12996,  9659,-32768,   194,  1053,  7661,
  7661,-32768,-32768,   195,   982,  9923,   999,   993,    50,  1285,
   999, 12644,  1056,-32768,-32768,   283,   283,   283,   293,   293,
   605,   605,   708,   708,   708,   708,    91,    91,   768,   550,
   560,   589,   636,   134,  1022,-32768,-32768,-32768,   439,   439,
-32768,-32768,    57, 13888,-32768,    81,   262,-32768,-32768,-32768,
   321,-32768,  5889,  5956,-32768, 12028, 12116,-32768,   323, 12204,
-32768,-32768,-32768,-32768,  1931,-32768,   757,  1241,  9018,  9106,
  1470,  1507,  1652,  1674,  8250,   998,-32768,   623,   640,-32768,
-32768,-32768,-32768,-32768,  1074,  2022,-32768,   686,-32768,-32768,
 12644,  1038,  1011,-32768, 11148,  8741,-32768,-32768,  1019,  1123,
 12644, 11940, 12292,-32768, 12732,  8741, 12380,-32768, 12644,-32768,
-32768,-32768,-32768,   328, 12644,   367, 12644, 12644,   379, 12644,
-32768,-32768,-32768,-32768,-32768,-32768,   100,-32768,-32768,-32768,
   151,-32768,   153,-32768,-32768,   261,-32768,   418,   161,  9566,
 10733,-32768,-32768,-32768,-32768,-32768,  2271,  3287,  1076,   910,
-32768,-32768,-32768,  8044,   999,-32768,  1083, 12468,-32768, 12644,
-32768,-32768,-32768,-32768, 12644, 12644,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   387,-32768,   397,-32768,-32768,   399,
   296, 13173, 12644,-32768,-32768,-32768,-32768,-32768,   256,   167,
   177,   -27,  3802,  6031, 13261,-32768,-32768,   256,   167,   177,
   -27,  4181,  6088,-32768,   218,-32768,  1062,-32768,   930,-32768,
   930,-32768,-32768,-32768,-32768,-32768,   218,-32768,  1324,-32768,
  1241,-32768,-32768,-32768,   218,-32768,   424,  8741,-32768, 13720,
  1063, 11940,-32768,-32768,  1093,   425,  1096,   956, 11324, 12556,
-32768,   438,-32768,   456,-32768,   512,   524,-32768,   532,  3921,
-32768,-32768, 11500,-32768, 11059,  1098,  1102,  1128,  6680,-32768,
-32768,-32768,-32768,   554,  1103,-32768,-32768,-32768,-32768,-32768,
  1122,  6012,    57,  1809, 10188, 10452,  1142,    12,  1146,   590,
  6839,-32768,  1176,-32768,-32768,-32768,  1133,  6091,   496,  6274,
   599,  6012,  1153,   590,-32768,-32768,-32768,  6385,   496,  6408,
   599,-32768,-32768,-32768,-32768,-32768,  1109,-32768,  1136,-32768,
  8741,-32768, 11940,  1139, 12644,  8741,  8741,  1448, 11412,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  2804,    57,  1297,  2372,
  5339,  1156,  2651,-32768,-32768, 12644,    69,  1160,  1162,  1170,
   629,    57,  1179,    57,  1180,    57,  1183,    57,   206,   544,
  1184,    57,  1187,-32768, 12644,   973,  1001,-32768,  1013,  1021,
-32768,  1188,   544,  1190,  1030,  1047,-32768,  1049,  1051,-32768,
-32768,-32768,-32768,  1171, 11940,   559,  1265,-32768,   893,  2394,
  2804,  2804,    57,-32768,   999,-32768,   673,    75,    57,    57,
-32768,   256,   690,    57,   700,    57,   709,    57,   750,    57,
-32768,   810,   832,   857,    57,-32768,   850,   871,   878,   959,
    75,-32768,   810,   832,   850,   871,   878,   959, 11940,  1197,
  1181,  8741,-32768,-32768,   256,   970,-32768,  1016,  1034,-32768,
-32768,   256,  1037,-32768,   256,  1046,-32768,   256,  1057,-32768,
   256,  1068,-32768,-32768,-32768,   256,  1071,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1203,  8741,
-32768,-32768,-32768,-32768,   256,-32768,   256,-32768,   256,-32768,
-32768,   256,-32768,-32768,   256,-32768,-32768,   256,-32768,-32768,
   256,-32768,-32768,   256,  8741,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1290,-32768
};

static const short yypgoto[] = {-32768,
-32768,  7448,-32768,  1275,-32768,   -86,-32768,   127,-32768,-32768,
-32768,   536,  2041,  5816,-32768,-32768,   385,  -541,-32768,  -765,
  -269,  -342,-32768,    29,   642,   649,   320,   645,   730,   734,
   732,   735,   736,-32768,  -156,  7863,   968,  -136,  -353,  -543,
   209,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   655,-32768,-32768,   -11,     1,  2419,  1378,  1004,
  1537,   -14,  5360,-32768,   -13,  2561,  3063,  1713,   562,    -6,
   214,   737,   -16,   -24,-32768,   -20,  1255,-32768,   664,-32768,
-32768,  -415,  2215,   877,-32768,-32768,-32768,-32768,-32768,-32768,
  3876,  -791,-32768,  -802,-32768,-32768,   -18,    -8,  1085,-32768,
   678,   488,    11,-32768,  -499,  -364,-32768,  -588,  -578,   426,
  -330,  -309,  -717,-32768,  -397,-32768,  3369,-32768,-32768,-32768,
-32768,-32768,-32768,   669,  1099,-32768,-32768,  1280,  1284,   571,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -282,
-32768,-32768,-32768,   522,-32768,-32768,  -192,-32768,   713,     7,
-32768,  4905,  4026,-32768,  7258,-32768,  3193,  7569,  3806,-32768,
    80,-32768,-32768,  3335,  5508,  1032,   370,   611,  4128,  4931,
   -19,    -1,    15,  2688,-32768,  1253,  6278,  6759,   -66,-32768,
-32768,   -52,  3161,  -558
};


#define	YYLAST		13954


static const short yytable[] = {    76,
   139,   734,   141,   554,   597,   923,   886,   135,   271,   265,
   771,   802,   142,   650,   137,   200,   212,   799,   384,   143,
   495,   799,   595,   199,   211,   269,   968,   970,   216,   207,
   222,   607,   608,   229,   156,   956,   964,   618,    76,    76,
   194,   194,    89,   976,   186,   189,   173,   284,   185,   169,
   546,  -642,   574,   596,   984,     5,   264,   236,    13,    76,
   598,   602,   534,   535,   537,   538,   547,    12,    13,    19,
   241,  -383,  1043,   244,  -576,    13,   268,   595,   639,    19,
    71,   641,   465,  -483,   643,   575,    19,    13,    22,   645,
   822,   276,   647,    13,   824,   275,    89,   243,    19,    13,
   702,   265,   603,   169,    19,    89,  -643,   165,   600,   212,
    19,   490,   169,   139,     5,   141,   547,   187,   190,   202,
   214,   853,   722,   264,    86,   142,    12,   727,   640,   283,
   237,   642,   285,    30,   644,   700,  -642,    31,   547,   646,
    71,   249,   648,   547,   766,   174,   -61,    22,   264,  1021,
   564,   565,   256,   258,   241,   632,   244,   238,   259,   751,
   175,   -61,   633,    89,   277,  -600,     5,   394,  -600,   298,
   169,  -377,   373,   387,  1043,   752,  1066,   -61,    12,   194,
   -61,    76,   566,   567,   868,   701,   595,   400,   634,  1068,
   595,   418,   419,   523,   469,   470,  1010,  -643,    21,    22,
   547,   599,  1011,   194,   194,   890,   885,   260,   296,    35,
   613,   595,   774,   775,   261,   931,   595,   600,   595,   888,
   490,   600,   547,   175,   490,   799,   803,   921,   922,   242,
   752,  1012,   926,  1013,   384,   547,   434,   805,   836,   836,
   238,   154,   804,  -303,   262,   256,   258,   804,   264,   600,
    32,   143,   490,   197,   209,     5,   197,   219,   197,   225,
   228,   197,   231,   264,   234,   264,  1043,    12,  -580,   246,
   301,   595,   860,   894,   904,   914,  1043,   461,  -579,   283,
   283,   463,   256,   258,   373,   175,  1160,    21,    22,   547,
   547,   547,  1086,   812,   373,   270,   260,   815,   274,   373,
   440,   143,   804,   261,   849,   857,   265,   441,   271,   179,
   852,   991,   858,   180,   387,     5,   526,  1043,   997,   251,
   265,   269,   139,   529,   141,   387,   387,    12,   373,   135,
   387,   387,   387,   387,   142,   269,   137,   200,   212,    32,
   473,   143,   932,   278,   387,   199,   211,    21,    22,   222,
   555,   556,  -643,   264,     5,   175,   260,   251,   547,     5,
    76,    76,  -643,   169,   279,   286,    12,   264,   523,   314,
   387,    12,   604,   256,   258,   473,   557,   558,   559,  1183,
   175,   523,   269,   315,   418,   419,   616,    22,   459,   387,
   175,    21,    22,   262,  -380,    89,   194,   194,     5,    32,
    27,   933,   169,   938,   434,   391,   759,   266,  1003,   143,
    12,    13,   143,  -643,   264,   143,   773,   547,   438,   547,
   143,  -643,    19,   143,   547,   891,   439,   200,   212,   924,
    21,    22,   262,   434,   473,   199,   211,   406,   794,    27,
  -564,   207,  1037,    32,    76,   373,   169,  1005,  1074,   175,
    76,    76,   194,   194,   143,  1037,   690,   691,   993,  1008,
   694,   449,  -639,   547,   697,   472,   143,  1028,  1001,     5,
   387,   143,    29,   603,   462,   547,    30,  1029,   698,  1030,
    31,    12,    32,   547,  -643,   903,   480,   387,   387,   928,
   929,   526,   387,   547,   501,   547,   481,  1015,   529,   143,
   212,   384,    22,   373,  1071,  1076,    76,   384,   211,   175,
    89,   449,   175,   426,   427,   428,   387,   266,  1080,   283,
   752,   752,   283,   285,   484,    71,   805,   212,   283,  1134,
   283,   139,   489,   141,   547,   526,  1081,   265,   490,   154,
   387,   387,   529,   142,   494,   387,   387,   373,   283,   265,
   285,   387,   547,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   387,    76,   197,   209,   197,   225,   228,
   234,    76,  1026,   602,   264,   776,   777,   778,    76,  1042,
  1072,  1180,  1082,   274,   143,  1043,   264,  -594,   143,   623,
   523,   -69,   540,   541,  1083,   250,   251,    76,   547,   174,
   313,   387,  1084,   387,   175,   387,   154,   234,   274,   449,
   547,   373,   449,   473,   175,   449,   542,   710,   547,   917,
   449,   603,   387,   449,  1094,  1219,   434,   570,   175,  1181,
   -67,   543,   175,  1043,   712,  -596,   571,   434,     5,   434,
   547,   434,    76,    76,    35,   752,   387,   473,   474,   175,
    12,   154,   387,   387,   695,   197,   209,   234,   373,   473,
   482,   274,   175,  1133,   539,   715,   449,   572,  1137,  1138,
  -600,    22,   473,   729,   175,   694,   560,   561,  -601,    89,
   175,     2,   184,   188,   697,  -600,   261,   175,  1043,   573,
  -595,     8,     9,  -601,   145,   232,   594,    13,   373,   613,
   373,   181,  -223,   373,   987,   182,  -223,   614,    19,   979,
   796,    20,   387,   980,   996,   801,   262,   406,  1109,  1151,
   603,    23,    24,    25,    26,    76,   981,    51,   615,   272,
   982,   899,  1146,   903,   805,   617,    76,   283,   283,   638,
   387,   285,    76,   387,    76,   531,   651,   138,   910,   910,
     5,  1166,     5,   523,   387,   562,   563,   283,   283,  1027,
   387,   406,    12,  1184,    12,   652,   198,   210,   656,   217,
   220,   473,   730,  1025,  1222,   658,   384,   235,   406,   221,
  1191,   473,   731,    22,    21,    22,   175,    51,   406,   657,
  1194,    89,   143,    27,   200,   212,   175,   406,   169,  1197,
   941,   705,   199,   211,   387,   387,   222,   660,   387,   229,
   305,   310,  1246,   707,   473,   732,   708,    76,    76,   568,
   569,   949,   265,   958,   965,   399,   955,   607,    30,   175,
    30,   977,    31,   265,    31,   714,    32,  1255,   406,   387,
  1200,   755,   985,   373,   373,   943,     5,   473,   313,   387,
   387,   899,   523,   899,   373,   899,   760,   387,    12,   761,
   210,   220,   175,   387,   235,   387,   387,   741,   387,   264,
   810,   473,   881,   783,   784,   785,   786,   154,   816,    22,
   264,   817,   234,   139,   850,   141,   175,    89,    76,   899,
   135,   274,     5,   820,   261,   142,   851,   137,  1152,  1043,
   367,  -599,   143,   854,    12,     5,   387,   154,   387,   404,
   855,   473,   882,   387,   387,   861,   735,    12,   856,   930,
   736,  1043,   862,  -597,     5,    22,   175,   864,  1136,   384,
    76,   387,   523,    89,   752,   741,    12,    21,    22,  1043,
   169,  -592,   741,    76,  1185,   406,   260,  1205,   384,   741,
  1192,   866,  1195,   169,  1198,   869,  1201,    22,   473,   883,
  1043,  1206,  -590,   870,   765,    89,   753,  1043,   741,  -593,
    30,   873,   430,   175,    31,   526,   373,  1069,   875,   454,
   387,   175,   529,  1225,   877,  1227,  1229,    76,   899,    32,
  1232,   473,   884,  1235,    40,   526,  1238,   878,   387,  1241,
   212,   387,   529,   373,  1244,   880,   175,   143,   211,    -8,
    -8,   800,   367,   607,   608,   800,    -9,    -9,  -383,  1043,
   889,   251,   367,    76,    -8,  1015,   474,   367,   154,   454,
   892,    -9,   197,   209,   197,   225,   228,   197,   234,     5,
   175,   895,   473,  1167,   896,   305,   310,   897,  1043,   274,
  -591,    12,   915,   992,    40,   526,   530,   175,   406,   373,
  1224,   387,   529,   387,   373,   373,   283,    76,   918,   138,
   473,  1168,    22,   426,   427,   428,   429,   920,   283,   283,
    89,   283,   473,  1169,   387,   175,   978,   430,   198,   210,
   473,  1170,   927,   235,   184,   188,   741,   175,   232,   473,
  1175,   989,   272,   387,   406,   175,  1226,   741,   742,   994,
   197,   209,   741,   741,   175,   741,   473,  1176,   473,  1177,
   473,  1178,   406,   387,  1228,   406,   988,  1231,   283,   801,
   235,   175,  1018,   175,   406,   175,  1234,   454,   905,   752,
   454,   925,   752,   454,     2,   406,   995,  1237,   454,  1101,
  -383,   454,   893,  1073,     8,     9,   406,   145,  1240,   406,
    13,  1243,  1075,     5,   983,   251,  1077,   387,  1022,   752,
   373,    19,    51,   679,    20,    12,   742,  1087,   198,   210,
   235,  1088,   454,   742,    23,    24,    25,    26,  1095,   752,
   742,   779,   780,   154,   454,    21,    22,  -383,  1043,   404,
   781,   782,   787,   788,    27,   834,   834,  1089,   373,   742,
  1096,   169,  1108,  1147,   843,   843,  1110,  1114,  1153,   800,
  1155,  1115,  1157,  1123,  1159,  1043,  1145,   404,  1164,  1135,
  1148,   530,  1149,   373,   367,   154,     5,    29,   209,   234,
  1150,    30,   223,    80,   274,    31,   452,    32,    12,  1154,
  1156,   210,   220,  1158,  1163,   154,   235,  1165,  1171,   741,
  1174,  1179,  1182,    80,  1186,  1188,  1189,  1220,    21,    22,
  1193,  1221,  1196,  1245,  1199,   530,  1202,    27,   210,  1257,
     5,  1207,    80,    80,   941,   131,   913,  1186,  1020,   789,
     3,     4,    12,   791,   790,     6,   452,   792,   548,   793,
   240,    10,   404,    80,   823,   655,    14,    15,    16,   404,
   625,    17,    18,    22,    30,   893,   367,   445,    31,     5,
    32,    89,   404,   232,   848,   986,   404,   859,   169,   943,
   247,    12,   272,   446,   248,   367,   504,   742,   957,     0,
   821,     0,     0,     0,   197,   209,     0,     0,   742,   367,
     0,    21,    22,   742,   742,     0,   742,  1038,    30,     0,
    27,     0,    31,     0,     0,     0,     0,   169,    39,   766,
  1038,     0,     0,     0,     0,     0,    80,     0,     0,     2,
   835,   835,     0,     0,     0,     0,     0,     0,     0,     8,
     9,  1099,   145,   619,     0,    13,   679,    30,     0,     0,
     0,    31,     0,    32,   452,   235,    19,   452,     0,    20,
   452,  1099,   943,     0,   531,   452,   375,     0,   452,    23,
    24,    25,    26,     0,     0,    80,     0,     0,    39,     0,
     0,     0,     0,     0,  1092,     0,   367,     0,   367,    40,
   452,   367,     0,     5,     0,     0,     0,     0,     0,   452,
     0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
     0,   452,     2,   367,     0,     0,     0,    19,     0,     0,
     0,     0,     8,     9,   367,   145,    22,   226,    13,   404,
   367,     0,   367,     0,    89,     0,   909,   909,     0,    19,
     0,   169,    20,     0,   531,    80,     0,     0,     0,     2,
   742,     0,    23,    24,    25,    26,     0,     0,     0,     8,
     9,     5,   145,     0,     0,    13,     0,   748,   474,     0,
     0,    30,     0,    12,    13,    31,    19,    41,   375,    20,
   404,     0,   175,     0,     0,    19,     0,     0,   375,    23,
    24,    25,    26,   375,    22,    80,     0,   134,     0,     0,
     0,     0,    89,     0,     0,   198,   210,     0,   507,   169,
   972,   235,     0,     0,     0,     0,     0,     0,     0,   507,
   507,     0,   375,     0,   507,   507,   507,   507,     0,     0,
     0,   679,   679,     0,     0,    80,     0,    41,     0,    30,
     0,     0,   679,    31,     0,     3,     4,   973,     0,   254,
     6,     0,     0,     0,    80,    80,    10,     0,     0,     0,
    13,    14,    15,    16,   507,     0,    17,    18,     0,     0,
   451,    19,     0,     0,     0,     0,   367,     0,     0,     0,
     0,     0,  1100,     0,     0,     0,     0,     0,     0,     0,
   138,     0,     0,     0,     2,     0,     0,   829,   829,     0,
     0,     0,  1100,    80,     8,     9,    80,   145,     0,    80,
    13,     0,     0,   452,    80,     0,     2,    80,  1036,     0,
   451,    19,     0,     0,    20,     0,     8,     9,     0,   145,
     0,  1036,    13,     0,    23,    24,    25,    26,    80,   375,
     0,     0,   254,    19,    80,    80,    20,   524,    80,     0,
     0,     0,     0,    47,     0,     0,    23,    24,    25,    26,
    80,     0,     0,     0,   679,    80,     0,     0,     0,     0,
     0,     0,     0,   136,     0,   530,     0,     0,     0,   254,
   104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     0,   367,   974,    80,     0,  1091,     0,   375,     0,     0,
   375,     0,     0,   907,   907,     0,     0,     0,     0,     0,
   130,   210,   235,    47,   975,     0,     0,    80,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   451,   453,
     0,   451,     0,     0,   451,     0,     5,     0,   460,   451,
     0,   375,   451,     0,    80,     0,     0,   679,    12,    13,
     0,     0,   679,   679,     5,   530,     0,   254,     0,     0,
    19,     0,     0,    39,   451,  1144,    12,   235,    80,    22,
   254,     0,     0,   451,     0,    80,     0,    89,     0,   453,
     0,     0,   375,     0,   169,   451,    21,    22,    80,     0,
     0,     0,    80,     0,     0,    27,     0,  -643,   452,   452,
     0,   375,   485,     0,     0,     0,   525,   460,     0,   452,
   748,     0,     0,     0,    30,   375,     0,     0,    31,   552,
     0,     0,   524,     0,     0,   175,     0,     0,   576,  1102,
     0,     0,    30,     0,     0,     0,    31,     0,    32,     0,
     0,     0,     0,   175,     0,     0,    80,    80,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   679,     0,
     0,     0,   375,     0,     0,     0,   524,     0,     0,     0,
     0,     0,   254,     2,     0,     0,     5,   254,     0,     5,
     0,     0,     0,     8,     9,     0,   145,   453,    12,    13,
   453,    12,     0,   453,     0,     0,   679,     0,   453,     0,
    19,   453,   375,    20,   375,    47,     0,   375,    21,    22,
     0,    21,    22,    23,    24,    25,    26,    27,     0,     0,
    27,   679,    41,   453,   941,     0,     0,   485,     0,   375,
     0,   452,   453,     0,     0,   507,     0,     0,     0,     0,
   375,     0,     0,     0,   453,    80,   375,   507,   375,     0,
   942,     0,     0,   576,    30,    47,     0,    30,    31,     0,
    32,    31,     0,    32,     2,     0,     0,     5,   175,   943,
     0,   828,   828,     0,     8,     9,     0,   145,     0,    12,
    13,   525,   528,     0,     0,     0,     0,   451,     0,     0,
     0,    19,   254,     0,    20,   136,    80,     0,     0,    21,
    22,     0,     0,     0,    23,    24,    25,    26,    27,     0,
     0,     0,     0,     0,   452,   941,     0,     0,     0,   452,
   452,    80,    80,     0,     0,   525,     0,     0,     0,     0,
  1141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     5,   625,     0,     0,     0,    30,     0,   375,   375,    31,
     0,    32,    12,    13,     0,     0,     0,     0,   375,     0,
   943,     0,   254,    47,    19,     0,    47,     0,     0,    47,
   460,     0,    21,    22,    47,   460,     0,    47,     0,     0,
     0,    27,     0,     0,     0,     0,     0,     0,   485,     0,
     0,     0,   375,   507,     0,     0,     0,   254,    47,    47,
     0,     0,   254,     5,     0,     0,    80,     0,    47,     0,
     0,     0,     0,     0,   576,    12,    13,     0,    30,     0,
    47,     0,    31,     0,    32,   452,     0,    19,     5,   175,
   830,   830,     0,     0,    80,    21,    22,     0,     0,     0,
    12,    13,     0,     0,    27,     0,   453,    80,     0,     0,
     0,   146,    19,     0,   340,    56,     0,   528,     0,     0,
    21,    22,     0,   452,     0,     0,     0,     0,     0,    27,
     0,     0,   451,   451,     0,   140,   169,   304,     0,     0,
   375,    30,     0,   451,     0,    31,     0,    32,   452,     0,
     0,   375,   507,     0,    56,    56,     0,     0,     0,     0,
     0,   528,   583,     0,     0,   507,    30,   375,     0,     0,
    31,    80,    32,     2,   460,    56,     0,   175,     0,   254,
     0,     0,     0,     8,     9,   254,   145,    80,     0,    13,
   263,     0,   267,     0,     0,     0,   908,   908,     0,     0,
    19,     0,     0,    20,     0,   254,     0,     0,     0,     0,
     0,     0,     0,    23,    24,    25,    26,     0,     0,  1034,
     0,     0,     0,   375,     0,     0,   471,     0,   375,   375,
     0,   375,  1034,     0,     0,     0,   488,  1016,     0,   460,
     0,   493,   460,     2,     0,     0,     5,     0,   140,     0,
     0,     0,     0,     8,     9,     0,   145,   263,    12,    13,
     0,     0,     0,     0,     0,   451,   833,   833,     0,     0,
    19,     0,     0,    20,     0,     0,   524,     5,    21,    22,
     0,     0,    47,    23,    24,    25,    26,    27,    56,    12,
    13,   453,   453,     0,   485,     0,   524,    56,     0,     5,
     0,    19,   453,     0,     0,     0,     0,  -643,     0,     0,
    22,    12,    13,     0,     0,     0,     0,     0,    89,    38,
   576,   474,     0,    19,    30,   169,     0,     0,    31,     0,
    32,     0,    22,     0,   375,   175,     0,   254,  -643,     0,
    89,     0,     0,     0,     0,     0,     0,   169,   451,     0,
   552,   753,     0,   451,   451,    30,   524,     0,     0,    31,
     0,     0,     0,     5,     0,     0,   175,    56,     0,     0,
     0,     0,   375,   748,   881,    12,    13,    30,  1035,    38,
     0,    31,   464,     0,     0,     0,     0,    19,   175,   254,
     0,  1035,     0,     0,     0,     0,    22,   375,   254,   263,
    56,     0,     0,     0,    89,     0,     0,     0,     0,     0,
    56,   169,   703,     0,     0,    56,     0,    56,     0,     0,
     0,     0,     0,     0,   453,     0,     0,     0,     0,   723,
     0,     0,     0,     0,   728,   525,   254,   756,     0,     0,
     0,    30,     0,     0,    56,    31,     0,     0,     0,   460,
     0,     0,   175,     0,     0,   525,     0,   140,     0,   451,
     0,    45,     0,     5,     0,     0,     0,    47,    47,   460,
     0,     0,     0,     0,     0,    12,    56,    56,    47,     0,
     0,     0,   758,     0,     0,     0,     0,   263,   267,   764,
     0,     0,     0,     0,     0,    21,    22,   451,     0,     0,
     0,     0,     0,     0,    27,     0,     0,   453,     0,     0,
     0,   169,   453,   453,     0,   525,     0,     0,     0,     0,
     0,    45,   451,  1142,  1143,    56,   136,     0,    56,     0,
     0,    56,     0,   460,     0,     0,    56,   583,   460,    56,
   460,    30,   460,     0,   460,    31,     0,    32,   460,   807,
     0,     0,   175,     0,     0,     0,     5,   807,     0,     0,
    56,    56,     0,   811,     0,     0,    56,    56,    12,    13,
    56,   450,     0,     0,   819,     0,     0,     0,     0,     0,
    19,     0,    56,     0,   460,   460,   460,    56,    78,    22,
   460,     0,   460,     0,   460,     0,   460,    89,     0,     0,
    47,   460,     0,     0,   169,     0,     0,   460,    78,     0,
     0,   528,     0,     0,     0,    56,     0,     0,   453,    56,
     0,   450,    56,     0,     0,     0,     0,    78,    78,     0,
   753,   528,     0,     0,    30,     0,     0,     0,    31,    56,
     0,     0,     0,     0,     0,   175,     5,     0,    78,     0,
   874,     0,   876,     0,     0,   879,   453,     0,    12,    13,
     5,     0,     0,    56,     0,     0,   140,     0,     0,     0,
    19,     0,    12,    13,     0,     0,     0,     0,    21,    22,
     0,   453,     0,    47,    19,     0,     0,    27,    47,    47,
    56,   528,    21,    22,   169,     0,   807,    56,     0,     0,
     0,    27,     0,     0,    56,     0,     2,     0,   485,     0,
    56,     0,     0,    45,    56,     0,     8,     9,   464,   145,
   192,    78,    13,    56,    30,     0,     0,     0,    31,   450,
    32,     0,   450,    19,   486,   450,    20,    56,    30,     0,
   450,     0,    31,   450,    32,     0,    23,    24,    25,    26,
     0,     0,     0,     0,     0,     0,   935,   937,     0,     0,
   940,   374,     0,    45,    38,   450,     0,     0,    56,    56,
    78,     0,     0,     0,   450,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    56,     0,   450,     0,     0,     0,
     0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   807,     0,  1002,
     0,     0,     0,     0,     0,  1004,     0,  1006,  1007,     0,
  1009,     0,     0,     0,    56,   435,    56,     0,     0,    56,
     0,     5,    47,     0,     0,     0,     0,     0,     0,     0,
    78,     0,     0,    12,    13,     0,     0,     0,     0,     0,
     0,    56,     0,     0,     0,    19,     0,    47,  1024,     0,
     0,     0,    56,    21,    22,     0,     0,    56,    56,     0,
    56,    45,    27,   374,    45,     0,     0,    45,     0,   169,
     0,     0,    45,   374,     0,    45,     0,     0,   374,     0,
    78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   392,    45,    45,     0,    30,
     0,     0,     0,    31,     0,    32,    45,   374,    56,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
    78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     3,     4,     5,    56,    56,     6,     0,     0,     7,    78,
    78,    10,     0,     0,    12,    13,    14,    15,    16,     0,
     0,    17,    18,    46,     0,     0,    19,     0,     0,    56,
    56,     0,   827,   827,     0,    22,     0,     0,     0,     0,
    56,     0,     0,    89,     0,     0,     0,     0,   450,     0,
   206,     0,     0,   435,     0,     0,     0,     0,    78,     0,
     0,    78,     0,  -644,    78,     0,     0,     0,     0,    78,
     0,     0,    78,     0,    56,     0,   753,     0,     0,     0,
    30,     0,     0,    46,    31,     0,     0,     0,   140,     0,
     0,   175,     0,    78,   374,     2,     3,     4,     5,    78,
    78,     6,     0,    78,     7,     8,     9,    10,   145,     0,
    12,    13,    14,    15,    16,    78,    56,    17,    18,     0,
    78,    85,    19,     0,     0,    20,     0,     0,     0,    56,
     0,    22,     0,     0,     0,    23,    24,    25,    26,    89,
     0,   144,     0,     0,     5,     0,   448,     5,    78,     0,
     0,     0,   374,     0,     0,   374,    12,    13,     0,    12,
   205,   215,    56,     0,     0,     0,     0,     0,    19,     0,
     0,     0,    78,    56,   831,   831,    21,    22,     0,    21,
    22,    85,     0,     0,     0,    27,     0,     0,    27,    56,
    45,     0,   146,    56,   251,   146,   374,     0,     0,    78,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
     0,     0,     0,     0,     0,     0,     0,     0,   629,     0,
     0,   183,    30,    78,     0,    30,    31,     0,    32,    31,
    78,    32,     0,   450,   450,     0,     0,   374,     0,     0,
     0,     0,     0,    78,   450,    56,     0,    78,     0,     2,
    56,    56,     0,    56,   215,     0,   374,     0,     0,     8,
     9,     0,   145,     0,     0,    13,     0,     0,     0,     0,
   374,     0,     0,     0,     0,    46,    19,     0,     0,    20,
     0,     0,     0,     0,     0,   435,     0,     0,     0,    23,
    24,    25,    26,     0,   380,     0,   435,     0,   435,   292,
   435,    78,    78,   405,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1017,     0,     0,     0,   374,   308,   308,
     0,     0,     0,     0,     0,    46,     0,     0,     0,     3,
     4,     5,     0,     0,     6,   292,     0,     7,     0,     0,
    10,     0,     0,    12,    13,    14,    15,    16,     0,     0,
    17,    18,   527,     0,     0,    19,    56,   374,   436,   374,
     0,     0,   374,     0,    22,     0,   450,     0,     0,     0,
     0,     0,    89,   458,     0,    45,    45,     0,     0,   206,
     0,     0,     0,     0,   374,     0,    45,     0,     0,     0,
     0,     0,  -644,     0,    56,   374,   252,     0,     0,     0,
    78,   374,     0,   374,     0,     0,   380,     0,     0,    30,
     0,     0,     0,    31,     0,     0,   380,     0,     0,    56,
   766,   380,     0,   458,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    46,     0,     0,    46,     0,     0,    46,
     0,   479,     0,     0,    46,     0,     0,    46,     0,   450,
   532,    78,     0,     0,   450,   450,   497,     0,     0,     0,
     0,   499,     0,   144,     0,     0,     0,     0,    46,    46,
     0,     0,     0,     0,     5,     0,    78,    78,    46,     0,
     0,     0,   205,   215,   300,     0,    12,    13,     0,     0,
    46,     0,     0,     0,     0,     0,     0,     0,    19,     0,
     0,     0,   374,   374,     0,     0,    21,    22,    45,     0,
     0,     0,     0,   374,   410,    27,     0,   413,     0,     0,
     0,     0,   169,     0,     0,     0,   636,   527,     0,   416,
     0,   458,     0,     0,   458,     0,     0,   458,     0,     0,
     0,   421,   458,     0,     0,   458,     0,   374,   619,     0,
   292,     0,    30,   308,   308,     0,    31,     0,    32,     0,
   450,    78,     0,     0,   424,     0,    85,   688,     0,     0,
     0,   527,   205,   215,     0,     0,   458,     0,     0,     0,
     0,   455,     0,     0,     0,     0,     0,     0,   458,    78,
     0,    45,     0,   405,     0,     0,    45,    45,   450,     0,
     0,     0,    78,     0,   467,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   405,     0,   450,     0,   532,     0,     0,   380,     0,
     0,   455,     0,     0,     0,   374,     0,     0,   719,   721,
     0,     0,     0,     0,     0,   215,   374,     0,     0,     0,
     0,     0,     0,     0,   579,   582,   585,   589,     0,     0,
     0,   593,   374,     0,     0,     0,    78,     0,     0,   532,
     0,     0,   215,     5,   612,     0,   832,   832,     0,     0,
     0,     0,    78,     0,     0,    12,    13,     0,     0,     0,
     0,     0,    46,     0,     0,     0,   405,    19,   593,   612,
     0,     0,    45,   405,     0,    21,    22,     0,     0,     0,
   380,     0,     0,     0,    27,     0,   405,     0,   374,     0,
   405,   485,     0,   374,   374,     0,   374,     0,     0,   380,
     0,     0,     0,     0,     0,   637,     0,     0,     0,   455,
    45,     0,   455,   380,     0,   455,     0,   813,     0,     0,
   455,    30,     0,   455,     0,    31,     0,    32,   636,     0,
     0,     0,     0,     0,     0,    45,     0,     5,     0,   436,
     0,   436,     0,   436,   846,   846,     0,   479,     0,    12,
    13,   497,   499,     0,   696,     0,     0,     0,     0,     0,
   688,    19,     0,   699,   171,     0,   455,     0,     0,    21,
    22,     0,     0,     0,     0,     0,     0,     0,    27,     0,
   746,   747,     0,     0,     0,   485,     0,     0,   582,   589,
     0,     0,     0,     0,   593,     0,   612,     0,     0,   374,
   380,     0,   380,     0,     0,   380,     0,     0,     0,     0,
     0,  1048,     0,     0,     0,    30,     0,     0,     0,    31,
     0,    32,     0,     0,     0,     0,     0,   380,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   374,   380,     0,
     0,     0,     0,   405,   380,     0,   380,    46,    46,     0,
   746,   747,     0,     0,     3,     4,     5,     0,    46,     6,
     0,     0,   374,     0,     0,    10,     0,     0,    12,     0,
    14,    15,    16,     0,     0,    17,    18,     0,     0,   316,
     5,     0,   293,     0,     0,   317,   318,   319,    21,    22,
     0,     0,    12,     0,   405,     0,     0,    27,   320,   321,
   322,   323,   324,   325,   381,     0,   327,   328,     0,     0,
     0,     0,    21,    22,     0,     0,     0,     0,   293,   205,
   215,    27,     0,     0,     0,     0,     0,   293,   146,     0,
   330,     0,   332,   333,    30,   719,   721,     0,    31,     0,
   334,   335,     0,     0,     0,   688,   688,   951,     0,   960,
   966,     0,   724,  1085,   147,     0,   688,   966,    30,     0,
     0,     0,    31,     0,    32,     0,     0,     0,   966,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    46,     0,     0,     0,     0,   292,     0,   292,     0,   292,
   380,   527,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   144,     0,     2,   746,     0,     5,
     0,   527,     0,   746,   747,     0,     8,     9,     0,   145,
     0,    12,    13,     0,   171,     0,     0,     0,     0,     0,
     0,     0,  1041,    19,     0,     0,    20,     0,     0,   293,
     0,    21,    22,     0,   293,  1041,    23,    24,    25,    26,
    27,     0,     0,     0,     0,     0,     0,   146,    73,     0,
     0,     0,     0,    46,  1040,     0,     0,     0,    46,    46,
  -643,   527,     0,     0,     0,     0,     0,  1054,   688,     0,
     0,     0,     0,   863,     0,   166,    73,    30,     0,   532,
     0,    31,     0,    32,     0,   166,   166,   203,   203,     0,
     0,     0,   290,   966,     0,   380,     0,     0,   166,  1093,
     0,     0,     0,     0,     0,     0,     5,     0,    73,     0,
     0,   479,     0,     0,     0,   215,     0,   293,    12,    13,
    73,    73,     0,   293,     0,     0,     0,     0,   290,     0,
    19,     0,   166,   252,     0,     0,     0,     0,    21,    22,
     0,     5,     0,     0,     0,     0,     0,    27,     0,     0,
     0,   688,     0,    12,   485,   746,   688,   688,     0,   532,
  1117,     0,  1120,     0,    46,     0,     0,     0,     0,     0,
  1126,     0,  1129,    21,    22,     0,     0,     0,   281,     0,
  1058,   281,    27,     0,    30,     0,     0,     0,    31,   288,
    32,   719,     0,     0,   294,     0,     0,     0,     0,     0,
     0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
     0,   171,   171,   166,   166,   289,     0,     0,     0,    30,
     0,     0,     0,    31,     0,    32,   396,    46,   401,     0,
   294,     0,     0,   171,   477,     5,     0,   300,     0,    73,
     0,     0,     0,     0,     0,     0,   410,    12,     0,   290,
   203,   203,     0,   413,   290,     0,     0,   416,     0,   421,
     0,     0,   688,     0,     0,   424,     0,    21,    22,     0,
     0,     0,     0,   467,     0,     0,    27,     0,     0,     5,
     0,     0,     0,   146,     0,     0,     0,     0,  1103,  1105,
  1107,    12,     0,     0,     0,  1113,     0,     0,     0,     0,
   688,   171,     0,     0,     0,     0,     0,     0,   171,   309,
     0,    21,    22,    30,     0,   171,     0,    31,     0,    32,
    27,     0,     0,     0,     0,   688,     0,   169,   281,   281,
     0,     0,     0,     0,   171,     0,   294,     0,     0,     0,
     0,   294,   294,   290,   171,   593,     0,   612,     0,     2,
   171,   294,     5,   392,   293,   293,   294,    30,     0,     8,
     9,    31,   145,    32,    12,    13,     0,     0,     0,     0,
     0,     0,     0,   516,     0,     0,    19,     0,     0,    20,
     0,     0,     0,     0,    21,    22,     0,     5,     0,    23,
    24,    25,    26,    27,     0,     0,     0,     0,     0,    12,
   485,     0,     0,     0,     0,     0,     0,   516,   516,   586,
   586,     0,     0,  -643,   516,     0,     0,     0,     0,    21,
    22,     0,     0,     0,     0,     0,   508,   516,    27,     0,
    30,   477,   477,     0,    31,   146,    32,     0,     0,   621,
  1190,   175,     0,   396,   396,   626,     0,     0,   401,   401,
   516,   516,   516,   477,     0,     0,     0,     0,     0,     0,
     0,   398,   171,     0,     0,    30,     0,     0,     0,    31,
     0,    32,     0,  1223,     0,     0,     0,     0,     0,     0,
  1230,     0,     0,  1233,     0,     0,  1236,     0,     0,  1239,
     0,     0,     0,    73,  1242,   401,     0,   401,   401,   396,
   396,   401,     0,     0,     0,   401,     0,     0,     0,     0,
     0,     0,     0,  1247,     0,  1248,     0,  1249,     0,     0,
  1250,   477,     0,  1251,     0,     0,  1252,     0,     0,  1253,
     0,     0,  1254,   294,   294,   477,     0,     0,   171,   171,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   477,   743,     0,     0,     0,     0,
     0,     0,     0,   516,   516,     0,     0,     0,   749,     0,
   477,   749,   749,     0,   290,   290,     0,   749,     0,   749,
     0,     0,     0,     0,     0,     0,     0,     0,   293,     0,
   293,     0,   293,     0,     0,     0,     0,   769,     0,   769,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
     3,     4,     5,     0,     0,     6,     0,     0,     7,     8,
     9,    10,   145,   516,    12,    13,    14,    15,    16,     0,
   586,    17,    18,   586,   586,     0,    19,   743,     0,    20,
     0,     0,     0,     0,    21,    22,   426,   427,   428,    23,
    24,    25,    26,    27,     0,     0,   743,     0,     0,     5,
   825,     0,     0,     0,     0,     0,   621,   171,   621,   621,
     0,    12,   626,   626,   626,     0,   626,   626,     0,     0,
   171,     0,   477,     0,     0,     0,   619,     0,     0,     0,
    30,    21,    22,     0,    31,     0,    32,     0,     0,     0,
    27,   621,   621,     0,     0,     0,     0,   169,     0,   826,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   401,     0,     0,   171,     0,   401,     0,     0,     0,
     0,     0,     0,   192,     0,   401,     0,    30,     0,     0,
     0,    31,     0,    32,     0,     5,  1045,  1046,     0,     0,
     0,   516,     0,     0,  1055,  1056,  1057,    12,   477,   477,
  1062,     0,     0,     0,  1063,     0,  1064,     0,     0,     0,
     0,     0,  1065,   171,     0,   171,     0,    21,    22,     0,
  1070,     0,     0,   171,   743,   171,    27,     0,     0,     0,
   743,     0,     0,   476,     0,   901,   749,   749,     0,     0,
   749,   901,     0,   901,   171,     0,     0,     0,   290,     0,
   290,     0,   290,     0,     0,     0,   769,   769,     0,   289,
     0,     0,     0,    30,     0,     5,     0,    31,     0,    32,
     0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
     0,     0,     0,     0,  1118,     0,  1121,     0,     0,     0,
     0,    74,     0,     0,  1127,     0,  1130,    21,    22,     0,
   626,   626,  1131,     0,  1132,     0,    27,     0,     0,     0,
     0,     0,   953,   485,   962,   626,   621,   621,   167,    74,
     0,     0,   626,     0,     0,     0,     0,   477,   167,   167,
   204,   204,     0,   626,     0,     0,     0,     0,     0,   487,
   477,   167,     0,    30,     5,  1161,     0,    31,     0,    32,
  1000,    74,  1000,     0,  1000,     0,    12,     0,  1172,     0,
     0,     0,     0,    74,    74,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   167,    21,    22,     0,     0,
     0,     0,     0,  1187,   477,    27,     0,   901,   901,     0,
     0,     0,   496,     0,     0,     0,     0,  1203,  1204,     0,
     0,     0,  1208,  1209,  1210,  1211,  1212,     0,  1213,  1214,
  1215,  1216,  1217,  1218,     0,     0,     0,     0,   289,     0,
     0,   282,    30,     0,   282,     0,    31,     0,    32,   626,
   306,   311,     0,   477,     0,   477,     0,   295,     0,     0,
   626,   626,   626,   477,     0,   477,     0,     0,     0,   626,
   626,     0,     0,     0,     0,     0,   167,   167,     0,     0,
     0,     0,     0,     0,   477,     0,   621,     0,   626,   397,
     0,   402,     0,   295,     0,     0,     0,   401,     0,     0,
     0,     0,    74,     0,     0,     0,  1000,  1000,     0,     0,
     3,     4,     5,   204,   204,     6,     0,     0,     7,     0,
     0,    10,     0,     0,    12,    13,    14,    15,    16,     0,
     0,    17,    18,     0,     0,     0,    19,     0,     0,   516,
     0,   516,   586,   516,     0,    22,     0,     0,   516,     0,
     0,     0,     0,    89,     0,   626,     0,   626,     0,   516,
   206,     0,     0,     0,     0,   626,     0,   626,     0,     0,
     0,     0,     0,  -644,     0,     0,     0,     0,   306,   311,
     0,     0,     0,     0,     0,   749,  1000,     0,     0,     0,
    30,   282,   282,     0,    31,     0,     0,   749,   749,   295,
   749,     0,     0,     0,   295,   295,     0,     0,     0,     0,
   510,     0,     0,     0,   295,     0,     0,     0,     0,   295,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   517,     0,     0,     0,
     0,     3,     4,     5,   577,   580,     6,   749,     0,     0,
     0,   591,    10,     0,     0,    12,    13,    14,    15,    16,
     0,     0,    17,    18,   610,     0,     0,    19,     5,     0,
   517,   517,   587,   587,     0,     0,    22,   517,     0,     0,
    12,     0,     0,     0,    89,   306,   311,   510,   591,   610,
   517,   169,     0,     0,     0,     0,     0,     0,     0,     0,
    21,    22,   622,     0,     0,     0,   397,   397,     0,    27,
     0,   402,   402,   517,   517,   517,   498,   754,     0,     0,
     0,    30,     3,     4,     5,    31,     0,     6,     0,     0,
     0,     0,   175,    10,     0,     0,    12,    13,    14,    15,
    16,     0,   289,    17,    18,     0,    30,     0,    19,     0,
    31,     0,    32,     0,     0,     0,    74,    22,   402,     0,
   402,   402,   397,   397,   402,    89,     0,   153,   402,     0,
     0,     0,   169,     0,     0,     0,     0,     0,     0,   196,
   208,     0,   196,   218,   196,   224,   227,   196,   230,     0,
   233,     0,     0,     0,     0,     0,   295,   295,   753,     0,
   306,   311,    30,     0,     0,     0,    31,     0,     0,     0,
     0,     0,     0,   175,     0,     0,     0,     0,   517,     0,
     5,     0,     0,     0,   273,     0,   517,   517,     0,   153,
     0,   750,    12,     0,   750,   750,     0,     0,     0,     5,
   750,     0,   750,     0,     0,     0,     0,     0,     0,     0,
     0,    12,    21,    22,     0,     0,     0,     0,     0,     0,
   770,    27,   770,     0,     0,     0,     0,     0,   169,     0,
     0,    21,    22,   208,   218,   227,   230,   233,     0,     0,
    27,     0,     0,   273,     0,     0,   517,   288,     0,     0,
     0,     0,     0,   587,   619,     0,   587,   587,    30,     0,
   517,     0,    31,     0,    32,     0,     0,     0,     0,     0,
   306,   311,     0,   625,     0,     0,     0,    30,     0,   517,
   177,    31,     0,    32,     0,     0,     0,     0,     0,   622,
     0,   622,   622,     0,     0,     0,     2,     3,     4,     5,
     0,     0,     6,     0,     0,     7,     8,     9,    10,   145,
     0,    12,    13,    14,    15,    16,     0,     0,    17,    18,
     0,     0,     0,    19,   622,   622,    20,     0,     0,     0,
     5,    21,    22,   426,   427,   428,    23,    24,    25,    26,
    27,     0,    12,     0,   402,     0,     0,   825,   510,   402,
     0,     0,     0,   208,     0,     0,     0,     0,   402,     0,
     0,     0,    21,    22,     0,     0,     0,     0,     5,     0,
     0,    27,     0,   619,   517,     0,     0,    30,   146,     0,
    12,    31,     0,    32,     0,     0,     0,   306,     0,     0,
     0,     0,     0,   287,     0,   297,   847,     0,     0,     0,
    21,    22,     0,     5,   630,     0,     0,   517,    30,    27,
   302,     0,    31,   517,    32,    12,   718,   177,   750,   750,
   750,     0,     0,   750,   750,   153,   750,     0,     0,     0,
     0,     0,     0,     0,     0,    21,    22,     0,     0,   770,
   770,     5,   289,     0,    27,     0,    30,     0,     0,     0,
    31,   720,    32,    12,     0,     0,     0,     0,     0,     0,
     5,   196,   208,   196,   224,   227,   233,     0,     0,   950,
     0,   959,    12,    21,    22,     0,     0,   289,     0,   273,
     0,    30,    27,     0,     0,    31,     0,    32,     0,   476,
     0,     0,    21,    22,     0,   954,     0,   963,     0,   622,
   622,    27,   153,   233,   273,     0,     0,     0,   485,     0,
     0,     0,     0,     0,     0,   625,     0,     5,     0,    30,
     0,     0,     0,    31,     0,    32,     0,     0,     0,    12,
     0,     5,     0,     0,   814,   475,     0,     0,    30,   483,
     0,     0,    31,    12,    32,     0,     0,   153,     0,    21,
    22,   196,   208,   233,     0,   302,     0,   273,    27,   208,
     0,   500,     0,    21,    22,   496,     0,     0,     0,     0,
   750,   750,    27,     0,     0,     0,     0,     0,     0,   498,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   625,     0,     0,     0,    30,     0,   306,   311,    31,
     0,    32,     0,     0,     0,   625,   306,   311,     0,    30,
     0,     0,     0,    31,     0,    32,     0,     0,     0,     0,
   153,     0,     0,     0,   208,   218,   224,   227,   230,   233,
     0,   273,     0,     0,     5,     0,     0,     0,     0,     0,
   297,     0,     0,     0,   306,     0,    12,     0,     0,   622,
   631,   208,     0,     0,     0,     0,     0,     0,     0,     0,
   402,     0,     0,     0,     0,     0,    21,    22,     0,     0,
     0,     0,     0,     0,     0,    27,   510,     0,   580,     0,
   591,     0,   718,     0,     0,   610,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   510,     0,     0,     0,
     0,     5,   517,     0,   517,   587,   517,     0,   625,     0,
     0,   517,    30,    12,     0,     0,    31,     0,    32,     0,
     0,     0,   517,   706,     0,     0,   709,   711,   713,     0,
   383,   716,   717,    21,    22,     0,     0,     0,     0,     0,
     0,     0,    27,   475,   483,   475,   483,     0,   750,   720,
     0,     0,     0,     0,     2,   740,   177,     5,     0,     0,
   750,   750,     0,   750,     8,     9,     0,   145,     0,    12,
    13,     0,     0,   153,     0,   625,     5,     0,   233,    30,
     0,    19,     0,    31,    20,    32,     0,   273,    12,    21,
    22,     0,     0,     0,    23,    24,    25,    26,    27,     0,
     0,     0,     0,   153,     0,   485,     0,     0,    21,    22,
   750,     0,     0,     0,     0,     0,     0,    27,  -643,     0,
     0,     0,     0,   740,   485,     0,     0,     0,     0,     0,
   740,   576,  1097,     5,     0,    30,     5,   740,     0,    31,
     0,    32,     0,     0,     0,    12,   175,     0,    12,     0,
  1050,     0,     0,     0,    30,     0,   740,     0,    31,     0,
    32,     0,     0,     0,     0,    21,    22,   177,    21,    22,
     0,   506,     0,     0,    27,     0,     0,    27,     0,     0,
     0,   485,   519,   520,  1116,     0,     0,   383,   383,   383,
   383,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   383,     0,     0,     0,     0,     0,  1060,     0,     0,
   625,    30,     0,     0,    30,    31,     0,    32,    31,     0,
    32,     0,     0,     0,   153,     0,     0,   383,   196,   208,
   196,   224,   227,   196,   233,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   273,   383,     2,     0,     0,
     5,     0,     0,     0,   871,   872,     0,     8,     9,     0,
   145,     0,    12,    13,     0,   706,   709,   706,   709,     0,
     0,     0,     0,     0,    19,     0,     0,    20,     0,     0,
     0,     0,    21,    22,   740,     0,     0,    23,    24,    25,
    26,    27,     0,     0,     0,   740,     0,     0,   485,     0,
   740,   740,     0,   740,     0,     0,   196,   208,     0,     0,
     0,  -643,     0,     0,     0,     0,     0,     0,    81,     5,
     0,     0,     0,     0,   576,     0,     0,     0,    30,     0,
     0,    12,    31,     0,    32,     0,     0,     0,     0,   175,
     0,     0,     0,     0,     0,    81,    81,     0,     0,     0,
     0,    21,    22,     0,     0,    81,    81,    81,    81,     0,
    27,     0,     0,     0,     0,     0,     0,  1119,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
    81,    81,     0,   625,     0,     0,     0,    30,     0,     0,
     0,    31,    81,    32,     0,     0,     0,     0,     0,     0,
   383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
   383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     5,   153,     0,     0,   208,   233,     0,     0,     0,     0,
   273,     0,    12,  1014,     0,   717,     0,   740,     0,     0,
     0,   153,     0,     5,     0,     0,     0,     0,     0,     0,
     0,     0,    21,    22,    81,    12,     0,     0,     0,     0,
     0,    27,     0,     0,     0,     0,     0,   153,  1125,     0,
     0,     0,     0,    81,    81,    21,    22,     0,   717,   153,
   233,     0,   273,     0,    27,     0,    81,     0,    81,     0,
    81,  1128,     0,     0,   625,     0,     0,     0,    30,    81,
     0,     0,    31,   383,    32,     0,     0,     0,     0,   383,
    81,    81,     0,     0,     0,     0,     0,   625,     0,     0,
     0,    30,     0,     0,     0,    31,     0,    32,     0,   153,
   196,   208,   208,     0,     0,   475,     0,     0,     0,     0,
     0,     0,     0,     2,     3,     4,     5,     0,     0,     6,
     0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
    14,    15,    16,     0,     0,    17,    18,     0,     0,  1098,
    19,     0,     0,    20,     0,     0,     0,  1111,    21,    22,
     0,     0,     0,    23,    24,    25,    26,    27,   383,  1122,
     0,  1124,     0,     0,    28,     0,    81,     0,     0,     0,
   383,    81,    81,     0,     0,     0,     0,     0,     0,     0,
     0,    81,     0,     0,     0,  1139,    81,   383,     0,     0,
    29,     0,     0,     0,    30,     0,     0,     0,    31,     0,
    32,     0,     0,    81,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   661,     0,     0,     0,  1162,     0,     0,
     0,     0,     0,   706,   709,     0,   706,   709,     0,     0,
  1173,     0,   706,   709,     0,   706,   709,    81,    81,    81,
    81,     0,     0,     0,    81,     0,     0,  1139,     0,     0,
     0,   605,     0,     0,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,   605,     0,     0,     0,    81,
     0,     0,     0,    81,    81,    81,     0,     0,    81,    81,
    81,    81,    81,     3,     4,     5,     0,     0,     6,     0,
     0,     7,     0,     0,    10,     0,     0,    12,    13,    14,
    15,    16,     0,     0,    17,    18,     0,     0,     0,    19,
     0,     0,     0,     0,     0,     0,   383,     0,    22,     0,
     0,     0,     0,    81,     0,    81,    89,    81,    81,    81,
    81,    81,     0,  1090,     0,    81,     0,     0,     0,     2,
   383,   383,     5,     0,     0,     0,     0,     0,     0,     8,
     9,     0,   145,     0,    12,    13,     0,     0,   383,    82,
     0,     0,     0,    81,    81,     0,    19,     0,     0,    20,
     0,     0,     0,     0,    21,    22,     0,     0,     0,    23,
    24,    25,    26,    27,     0,   744,    82,    82,     0,     0,
   146,     0,     0,    81,    81,     0,    82,    82,    82,    82,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
     0,     0,     0,     0,     0,   383,   147,     0,     0,    82,
    30,     0,     0,     0,    31,     0,    32,     0,   383,     0,
     0,    82,    82,     0,     0,     0,     0,     0,     0,     0,
     0,     2,     0,    82,     5,     0,     0,     0,     0,     0,
     0,     8,     9,    81,   145,     0,    12,    13,     0,     0,
    81,     0,     0,    81,    81,     0,     0,   744,    19,     0,
     0,    20,     0,     0,     0,     0,    21,    22,     0,     0,
     0,    23,    24,    25,    26,    27,   744,     0,     0,     0,
     0,     0,   485,     0,     0,     0,    81,     0,    81,    81,
     0,     0,    81,    81,    81,    82,    81,    81,     0,     0,
     0,   383,     0,     0,     0,     0,     0,     0,   576,  1112,
     0,     0,    30,     0,    82,    82,    31,     0,    32,     0,
   383,    81,    81,   175,     0,     0,     0,    82,     0,    82,
     0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
    82,    81,     0,     0,     0,     0,    81,     0,     0,     0,
     0,    82,    82,     0,     0,    81,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    81,     0,     2,     3,     4,     5,     0,     0,     6,
     0,     0,     7,     8,     9,    10,   145,     0,    12,    13,
    14,    15,    16,     0,     0,    17,    18,     0,     0,     0,
    19,     0,     0,    20,   744,     0,     0,     0,    21,    22,
   744,     0,     0,    23,    24,    25,    26,    27,     0,     0,
     0,     0,     0,     0,    28,     0,     0,   911,   911,     0,
     0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
     0,     0,    82,    82,     0,     0,     0,     0,     0,     0,
    29,     0,    82,     0,    30,     0,     0,    82,    31,     0,
    32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   245,     0,    82,     0,     0,     0,     0,     0,
    81,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    81,     0,    81,    81,    81,    81,     0,     0,
     0,     0,    81,     0,     0,     0,     0,     0,    82,    82,
    82,    82,     0,    81,     0,    82,     0,     0,     0,     0,
     0,     0,   606,     0,     0,     0,     0,     0,    82,     0,
   744,     0,   744,     0,   744,     0,   606,     0,     0,     0,
    82,     0,     0,     0,    82,    82,    82,     0,     0,    82,
    82,    82,    82,    82,     0,     0,     0,     0,     0,     0,
     3,     4,     5,     0,     0,     6,     0,     0,     7,     0,
     0,    10,     0,     0,    12,    13,    14,    15,    16,     0,
     0,    17,    18,     0,     0,     0,    19,     0,     0,     0,
     0,     0,     0,     0,    82,    22,    82,     0,    82,    82,
    82,    82,    82,    89,     0,     0,    82,     0,     0,    81,
    90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    81,    81,    81,     0,     0,     0,     0,     0,     0,    81,
    81,     0,     0,     0,    82,    82,   549,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    81,     0,    81,     0,
     0,     0,     0,     0,     0,     0,   745,    81,     0,     0,
     0,     0,     0,     0,    82,    82,   744,   744,     0,     0,
     2,     3,     4,     5,     0,     0,     6,     0,     0,     7,
     8,     9,    10,   145,     0,    12,    13,    14,    15,    16,
     0,     0,    17,    18,     0,     0,     0,    19,     0,    81,
    20,    81,    81,    81,     0,     0,    22,     0,    81,     0,
    23,    24,    25,    26,    89,    81,     0,    81,     0,    81,
     0,   704,     0,     0,    82,    81,     0,    81,     0,     0,
     0,    82,     0,   329,    82,    82,     0,     0,   745,     0,
     0,     0,     0,     0,     0,     0,   744,   753,   331,     0,
     0,    30,     0,     0,     0,    31,     0,   745,     0,     0,
     0,     0,   175,     0,     0,     0,     0,    82,     0,    82,
    82,     0,     0,    82,    82,    82,     0,    82,    82,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   291,     0,     0,     0,     0,     0,
     0,     0,    82,    82,     0,     2,     0,     0,     5,     0,
     0,     0,     0,   307,   312,     8,     9,     0,   145,     0,
    12,    13,    82,     0,     0,     0,     0,    82,     0,     0,
   291,     0,    19,     0,     0,    20,    82,     0,    33,     0,
    21,    22,     0,     0,     0,    23,    24,    25,    26,    27,
     0,     0,    82,     0,     0,     0,   485,     0,     0,     0,
     0,     0,     0,     0,     0,   148,   170,     0,     0,     0,
     0,     0,     0,     0,     0,   148,   148,   148,   148,     0,
     0,     0,   609,     0,     0,   745,    30,     0,   148,     0,
    31,   745,    32,     0,     0,     0,     0,   175,    33,     0,
     0,     0,     0,     0,     2,     0,     0,     5,   912,   912,
    33,    33,     0,     0,     8,     9,     0,   145,     0,    12,
    13,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,    19,     0,     0,    20,     0,   478,     0,     0,    21,
    22,   307,   312,     0,    23,    24,    25,    26,    27,     0,
     0,   291,     0,     0,     0,   485,   291,     0,     0,    68,
     0,    82,    82,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    82,     0,    82,    82,    82,    82,     0,
     0,   576,     0,    82,   170,    30,     0,     0,     0,    31,
     0,    32,     0,     0,    82,     0,   175,     0,   201,   213,
     0,     0,     0,   148,   148,     0,     0,     0,     0,     0,
     0,   745,     0,   745,     0,   745,   393,     0,   393,    68,
   170,     0,     0,     0,     0,     0,     0,     0,     0,   170,
     0,   255,   257,     0,     0,     0,     0,     0,     0,     0,
   148,   148,     0,     0,     0,   291,     0,     0,   307,   312,
     0,     0,     0,     2,     3,     4,     5,     0,     0,     6,
     0,     0,     0,     8,     9,    10,   145,     0,    12,    13,
    14,    15,    16,     0,     0,    17,    18,     0,     0,     0,
    19,     0,     0,    20,     0,     0,     0,     0,    21,    22,
    82,     0,     0,    23,    24,    25,    26,    27,     0,     0,
     0,    82,    82,    82,   169,     0,     0,     0,     0,     0,
    82,    82,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   255,   257,   170,    82,     0,    82,
     0,    33,    33,   478,   478,     0,     0,   395,    82,     0,
    32,   170,     0,     0,     0,     0,   170,   745,   745,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   255,   257,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    82,     0,    82,    82,    82,     0,     0,     0,     0,    82,
     0,     0,     0,     0,     0,     0,    82,     0,    82,     0,
    82,     0,     0,     0,     0,     0,    82,     0,    82,     0,
     0,     0,     0,     0,     0,     2,     0,     0,     5,     0,
     0,     0,     0,     0,     0,     8,     9,   745,   145,   620,
    12,    13,     0,   393,   393,   620,     0,     0,   393,   393,
     0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
    21,    22,   255,   257,     0,    23,    24,    25,    26,    27,
     0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
     0,     0,   478,   307,   312,     0,   291,   291,     0,     0,
     0,     0,     0,    33,   511,   393,     0,   393,   393,   393,
   393,   393,   183,     0,     0,   393,    30,     0,     0,     0,
    31,     0,    32,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   578,   581,
   584,   588,     0,   170,   170,   592,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     2,   611,     0,
     5,     0,     0,     0,     0,   620,     0,     8,     9,     0,
   145,     0,    12,    13,   255,   257,     0,     0,     0,   255,
   257,   511,   592,   611,    19,     0,     0,    20,     0,     0,
     0,     0,    21,    22,     0,     0,     0,    23,    24,    25,
    26,    27,     0,     0,     0,     0,     0,     0,   146,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    68,     0,     0,     0,     0,     0,
   692,   693,     0,   620,   398,     0,     0,     0,    30,     0,
   620,     0,    31,     0,    32,     0,   359,   620,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
     0,     0,     6,     0,     0,     7,   620,     0,    10,     0,
     0,    12,    13,    14,    15,    16,   620,     0,    17,    18,
   478,   478,   620,    19,     0,     0,   620,   620,     0,     0,
     0,     0,    22,     0,   255,   257,     0,     0,     0,     0,
    89,     0,     0,     0,     3,     4,     5,    90,     0,     6,
     0,     0,     0,     0,     0,    10,     0,     0,    12,     0,
    14,    15,    16,     0,     0,    17,    18,     0,     0,   316,
   291,   393,   291,  1019,   291,   317,   393,   319,    21,    22,
     0,     0,     0,     0,     0,   393,     0,    27,   320,   321,
   322,   323,   324,   325,   381,     0,   327,   328,   359,     0,
     0,     0,     0,     0,   255,   257,     0,     0,   359,     0,
     0,     0,     0,   359,     0,     0,     0,     0,     0,     0,
   505,     0,   332,   333,    30,     0,     0,     0,    31,     0,
   334,   335,     0,     0,   620,     0,     0,     0,     0,   255,
   257,     0,     0,     0,   255,   257,     0,     0,     0,  1039,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1049,  1051,  1053,     0,     0,     0,     0,     0,     0,  1059,
  1061,     0,   845,   845,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     2,     3,     4,     5,   478,   307,     6,     0,
   620,   620,     8,     9,    10,   145,     0,    12,    13,    14,
    15,    16,   511,     0,    17,    18,     0,     0,     0,    19,
     0,     0,    20,     0,     0,     0,     0,    21,    22,     0,
     0,     0,    23,    24,    25,    26,    27,     0,     0,     0,
     0,     0,     0,   941,     0,   478,     0,   478,     0,     0,
   620,   255,   620,     0,   620,   478,     0,   478,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   625,
     0,     0,     0,    30,   359,     0,   478,    31,     0,    32,
     0,     0,     0,     0,     0,     0,     0,     0,   943,     0,
     0,   359,   725,     0,     0,     0,   359,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   620,
     0,     0,     0,   952,     0,   961,   967,   969,   971,     0,
     0,     0,   620,   967,   359,     0,     0,     0,     0,   762,
   763,   359,     0,     2,   967,     0,     5,     0,     0,     0,
     0,     0,     0,     8,     9,     0,   145,     0,    12,    13,
     0,     0,     0,     0,     0,     0,     0,   393,     0,     0,
    19,     0,     0,    20,     0,     0,   620,     0,    21,    22,
     0,     0,   795,    23,    24,    25,    26,    27,     0,     0,
     0,     0,     0,     0,   146,     0,     0,     0,     0,     0,
     0,   359,     0,     0,     0,   359,     0,   795,     0,   359,
     0,     0,     0,     0,     0,   359,     0,     0,     0,     0,
   867,     0,     0,     0,    30,   620,   359,   620,    31,     0,
    32,     0,     0,     0,     0,   620,     0,   620,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   255,   257,     2,     3,     4,   620,     0,     0,     6,
   255,   257,     0,     8,     9,    10,   145,     0,     0,    13,
    14,    15,    16,     0,     0,    17,    18,  1067,     0,   967,
    19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    23,    24,    25,    26,     0,   255,     0,
     0,     0,   359,     0,   359,     0,     0,   359,     0,     0,
     0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   511,     0,   581,   588,   592,     0,     0,     0,     0,   611,
   359,     0,     0,     0,   902,     0,   795,     0,   359,     0,
   511,     2,     3,     4,     5,   662,     0,     6,   663,   664,
     7,     8,     9,    10,   145,   665,    12,    13,    14,    15,
    16,   666,   667,    17,    18,   668,   669,   316,    19,   670,
   671,    20,   672,   317,   318,   319,    21,    22,     0,     0,
     0,    23,    24,    25,    26,   673,   320,   321,   322,   323,
   324,   325,   674,     0,   327,   328,     0,     0,   359,   359,
     0,     0,   359,     0,     0,  -644,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   330,     0,
   332,   333,    30,     0,     0,     0,    31,     0,   334,   335,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   251,   675,     0,     0,     0,   359,     0,   795,     0,   359,
     0,   359,     0,     0,     0,     0,     0,   359,     0,   359,
   359,     0,   359,     2,     3,     4,     5,   662,     0,     6,
   663,   664,     7,     8,     9,    10,   145,   665,    12,    13,
    14,    15,    16,   666,   667,    17,    18,   668,   669,   316,
    19,   670,   671,    20,   672,   317,   318,   319,    21,    22,
   359,     0,     0,    23,    24,    25,    26,   673,   320,   321,
   322,   323,   324,   325,   674,     0,   327,   328,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -644,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   330,     0,   332,   333,    30,     0,     0,     0,    31,     0,
   334,   335,     0,     0,     0,     3,     4,     5,     0,     0,
     6,     0,   251,     0,     0,     0,    10,     0,     0,    12,
     0,    14,    15,    16,     0,     0,    17,    18,     0,     0,
   316,     0,     0,     0,     0,     0,   317,   318,   319,    21,
    22,     0,   725,     0,     0,     0,     0,   359,    27,   320,
   321,   322,   323,   324,   325,   381,     0,   327,   328,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   330,     0,   332,   333,    30,     0,     0,     0,    31,
     0,   334,   335,     3,     4,     5,     0,     0,     6,     0,
     0,     7,     0,   724,    10,     0,     0,    12,    13,    14,
    15,    16,     0,     0,    17,    18,     0,     0,     0,    19,
     0,     0,     0,     0,    87,    88,     0,     0,    22,     0,
     0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
     0,     0,     0,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,     0,     0,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
   124,   125,   126,   127,   128,     0,   129,     0,     0,   130,
     2,     3,     4,     5,     0,     0,     6,     0,     0,     7,
     8,     9,    10,   145,     0,    12,    13,    14,    15,    16,
     0,     0,    17,    18,     0,     0,     0,    19,     0,     0,
    20,     0,     0,     0,     0,    21,    22,     0,     0,     0,
    23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
     0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   619,     0,     0,
     0,    30,     0,     0,     0,    31,     0,    32,     2,     3,
     4,     5,     0,     0,     6,     0,   943,     7,     8,     9,
    10,   145,     0,    12,    13,    14,    15,    16,     0,     0,
    17,    18,     0,     0,     0,    19,     0,     0,    20,     0,
     0,     0,     0,    21,    22,     0,     0,     0,    23,    24,
    25,    26,    27,     0,     0,     0,     0,     0,     0,   206,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   619,     0,     0,     0,    30,
     0,     0,     0,    31,     0,    32,     2,     3,     4,     5,
     0,     0,     6,     0,   943,     7,     8,     9,    10,   145,
     0,    12,    13,    14,    15,    16,     0,     0,    17,    18,
     0,     0,   316,    19,     0,     0,    20,     0,   317,   318,
   319,    21,    22,     0,     0,     0,    23,    24,    25,    26,
    27,   320,   321,   322,   323,   324,   325,   326,     0,   327,
   328,     0,     0,     0,     0,     0,     0,     0,     0,   329,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   737,   738,   332,   333,    30,     0,     0,
     0,    31,     0,   334,   335,     0,     0,     0,   175,     2,
     3,     4,     5,     0,     0,     6,     0,     0,     7,     8,
     9,    10,   145,     0,    12,    13,    14,    15,    16,     0,
     0,    17,    18,     0,     0,   316,    19,     0,     0,    20,
     0,   317,   318,   319,    21,    22,     0,     0,     0,    23,
    24,    25,    26,    27,   320,   321,   322,   323,   324,   325,
   326,     0,   327,   328,     0,     0,     0,     0,     0,     0,
     0,     0,   329,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   737,   331,   332,   333,
    30,     0,     0,     0,    31,     0,   334,   335,     0,     0,
     0,   175,     2,     3,     4,     5,     0,     0,     6,     0,
     0,     7,     8,     9,    10,   145,     0,    12,    13,    14,
    15,    16,     0,     0,    17,    18,     0,     0,   316,    19,
     0,     0,    20,     0,   317,   318,   319,    21,    22,     0,
     0,     0,    23,    24,    25,    26,    27,   320,   321,   322,
   323,   324,   325,   326,     0,   327,   328,     0,     0,     0,
     0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   737,
   806,   332,   333,    30,     0,     0,     0,    31,     0,   334,
   335,     0,     0,     0,   175,     2,     3,     4,     5,     0,
     0,     6,     0,     0,     7,     8,     9,    10,   145,     0,
    12,    13,    14,    15,    16,     0,     0,    17,    18,     0,
     0,   316,    19,     0,     0,    20,     0,   317,   318,   319,
    21,    22,     0,     0,     0,    23,    24,    25,    26,    27,
   320,   321,   322,   323,   324,   325,   326,     0,   327,   328,
     0,     0,     0,     0,     0,     0,     0,     0,   329,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   900,   738,   332,   333,    30,     0,     0,     0,
    31,     0,   334,   335,     0,     0,     0,   175,     2,     3,
     4,     5,     0,     0,     6,     0,     0,     7,     8,     9,
    10,   145,     0,    12,    13,    14,    15,    16,     0,     0,
    17,    18,     0,     0,   316,    19,     0,     0,    20,     0,
   317,   318,   319,    21,    22,     0,     0,     0,    23,    24,
    25,    26,    27,   320,   321,   322,   323,   324,   325,   326,
     0,   327,   328,     0,     0,     0,     0,     0,     0,     0,
     0,   329,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   900,   331,   332,   333,    30,
     0,     0,     0,    31,     0,   334,   335,     0,     0,     0,
   175,     2,     3,     4,     5,     0,     0,     6,     0,     0,
     7,     8,     9,    10,   145,     0,    12,    13,    14,    15,
    16,     0,     0,    17,    18,     0,     0,   316,    19,     0,
     0,    20,     0,   317,   318,   319,    21,    22,     0,     0,
     0,    23,    24,    25,    26,    27,   320,   321,   322,   323,
   324,   325,   326,     0,   327,   328,     0,     0,     0,     0,
     0,     0,     0,     0,   329,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   900,   806,
   332,   333,    30,     0,     0,     0,    31,     0,   334,   335,
     3,     4,     5,   175,     0,     6,     0,     0,     0,     0,
     0,    10,     0,     0,    12,     0,    14,    15,    16,     0,
     0,    17,    18,     0,     0,   316,     0,     0,     0,     0,
     0,   317,   318,   319,    21,    22,     0,     0,     0,     0,
     0,     0,     0,    27,   320,   321,   322,   323,   324,   325,
   381,     0,   327,   328,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   330,     0,   332,   333,
    30,     0,     0,     0,    31,     0,   334,   335,     3,     4,
     5,     0,   382,     6,     0,     0,     0,     0,     0,    10,
     0,     0,    12,     0,    14,    15,    16,     0,     0,    17,
    18,     0,     0,   316,     0,     0,     0,     0,     0,   317,
   318,   319,    21,    22,     0,     0,     0,     0,     0,     0,
     0,    27,   320,   321,   322,   323,   324,   325,   381,     0,
   327,   328,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   330,     0,   332,   333,    30,     0,
     0,     0,    31,     0,   334,   335,     3,     4,     5,     0,
   772,     6,     0,     0,     0,     0,     0,    10,     0,     0,
    12,     0,    14,    15,    16,     0,     0,    17,    18,     0,
     0,   316,     0,     0,     0,     0,     0,   317,   318,   319,
    21,    22,     0,     0,     0,     0,     0,     0,     0,    27,
   320,   321,   322,   323,   324,   325,   381,     0,   327,   328,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   330,     0,   332,   333,    30,     0,     0,     0,
    31,     0,   334,   335,     2,     3,     4,     5,   916,     0,
     6,     0,     0,     7,     8,     9,    10,   145,     0,    12,
    13,    14,    15,    16,     0,     0,    17,    18,     0,     0,
     0,    19,     0,     0,    20,     0,     0,     0,     0,    21,
    22,     0,     0,     0,    23,    24,    25,    26,    27,     0,
     0,     0,     0,     0,     0,   704,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   329,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   576,   331,     0,     0,    30,     0,     0,     0,    31,
     0,    32,     2,     3,     4,     5,   175,     0,     6,     0,
     0,     7,     8,     9,    10,   145,     0,    12,    13,    14,
    15,    16,     0,     0,    17,    18,     0,     0,     0,    19,
     0,     0,    20,     0,     0,     0,     0,    21,    22,     0,
     0,     0,    23,    24,    25,    26,    27,     0,     0,     0,
     0,     0,     0,   704,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   583,
   331,     0,     0,    30,     0,     0,     0,    31,     0,    32,
     2,     3,     4,     5,   175,     0,     6,     0,     0,     7,
     8,     9,    10,   145,     0,    12,    13,    14,    15,    16,
     0,     0,    17,    18,     0,     0,     0,    19,     0,     0,
    20,     0,     0,     0,     0,    21,    22,     0,     0,     0,
    23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
     0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -644,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   583,  1104,     0,
     0,    30,     0,     0,     0,    31,     0,    32,     2,     3,
     4,     5,   175,     0,     6,     0,     0,     7,     8,     9,
    10,   145,     0,    12,    13,    14,    15,    16,     0,     0,
    17,    18,     0,     0,     0,    19,     0,     0,    20,     0,
     0,     0,     0,    21,    22,     0,     0,     0,    23,    24,
    25,    26,    27,     0,     0,     0,     0,     0,     0,   191,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -644,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   583,     0,     0,     0,    30,
     0,     0,     0,    31,     0,    32,     2,     3,     4,     5,
   175,     0,     6,     0,     0,     7,     8,     9,    10,   145,
     0,    12,    13,    14,    15,    16,     0,     0,    17,    18,
     0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
     0,    21,    22,     0,     0,     0,    23,    24,    25,    26,
    27,     0,     0,     0,     0,     0,     0,   206,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -644,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   583,     0,     0,     0,    30,     0,     0,
     0,    31,     0,    32,     2,     3,     4,     5,   175,     0,
     6,     0,     0,     0,     8,     9,    10,   145,     0,    12,
    13,    14,    15,    16,     0,     0,    17,    18,     0,     0,
     0,    19,     0,     0,    20,     0,     0,     0,     0,    21,
    22,     0,     0,     0,    23,    24,    25,    26,    27,     0,
     0,     0,     0,     0,     0,   485,     0,     2,     3,     4,
     5,     0,     0,     6,     0,     0,     0,     8,     9,    10,
   145,     0,    12,    13,    14,    15,    16,     0,     0,    17,
    18,   576,  1106,     0,    19,    30,     0,    20,     0,    31,
     0,    32,    21,    22,     0,     0,   175,    23,    24,    25,
    26,    27,     0,     0,     0,     0,     0,     0,   485,     0,
     2,     3,     4,     5,     0,     0,     6,     0,     0,     0,
     8,     9,    10,   145,     0,    12,    13,    14,    15,    16,
     0,     0,    17,    18,   590,     0,     0,    19,    30,     0,
    20,     0,    31,     0,    32,    21,    22,     0,     0,   175,
    23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
     0,   485,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   576,     0,     0,
     0,    30,     0,     0,     0,    31,     0,    32,     3,     4,
     5,     0,   175,     6,     0,     0,     0,     0,     0,    10,
     0,     0,    12,    13,    14,    15,    16,     0,     0,    17,
    18,     0,     0,   316,    19,     0,     0,     0,     0,   317,
     0,   319,    21,    22,     0,     0,     0,     0,     0,     0,
     0,    27,   320,   321,   322,   323,   324,   325,   898,     0,
   327,   328,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -644,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   737,     0,   332,   333,    30,     0,
     0,     0,    31,     0,   334,   335,     3,     4,     5,   175,
     0,     6,     0,     0,     0,     0,     0,    10,     0,     0,
    12,    13,    14,    15,    16,     0,     0,    17,    18,     0,
     0,   316,    19,     0,     0,     0,     0,   317,     0,   319,
    21,    22,     0,     0,     0,     0,     0,     0,     0,    27,
   320,   321,   322,   323,   324,   325,   381,     0,   327,   328,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -644,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   900,     0,   332,   333,    30,     0,     0,     0,
    31,     0,   334,   335,     3,     4,     5,   175,     0,     6,
     0,     0,     0,     0,     0,    10,     0,     0,    12,     0,
    14,    15,    16,     0,     0,    17,    18,     0,     0,   316,
     0,     0,     0,     0,     0,   317,   318,   319,    21,    22,
     0,     0,     0,     0,     0,     0,     0,    27,   320,   321,
   322,   323,   324,   325,   381,     0,   327,   328,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   330,     0,   332,   333,    30,     0,     0,     0,    31,     0,
   334,   335,     0,  1256,     0,   553,     2,     3,     4,     5,
     0,     0,     6,     0,     0,     7,     8,     9,    10,    11,
     0,    12,    13,    14,    15,    16,     0,     0,    17,    18,
     0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
     0,    21,    22,     0,     0,     0,    23,    24,    25,    26,
    27,     0,     0,     0,     0,     0,     0,    28,     0,     0,
     0,     0,     2,     3,     4,     5,     0,     0,     6,     0,
     0,     7,     8,     9,    10,   145,     0,    12,    13,    14,
    15,    16,     0,    29,    17,    18,     0,    30,   316,    19,
     0,    31,    20,    32,   317,   318,   319,    21,    22,     0,
     0,     0,    23,    24,    25,    26,    27,   320,   321,   322,
   323,   324,   325,   326,     0,   327,   328,     0,     0,     0,
     0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   330,
   331,   332,   333,    30,     0,     0,     0,    31,     0,   334,
   335,     2,     3,     4,     5,     0,     0,     6,     0,     0,
     7,     8,     9,    10,   145,     0,    12,    13,    14,    15,
    16,     0,     0,    17,    18,     0,     0,   316,    19,     0,
     0,    20,     0,   317,   318,   319,    21,    22,     0,     0,
     0,    23,    24,    25,    26,    27,   320,   321,   322,   323,
   324,   325,   326,     0,   327,   328,     0,     0,     0,     0,
     0,     0,     0,     0,   329,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   330,   738,
   332,   333,    30,     0,     0,     0,    31,     0,   334,   335,
     2,     3,     4,     5,     0,     0,     6,     0,     0,     7,
     8,     9,    10,   145,     0,    12,    13,    14,    15,    16,
     0,     0,    17,    18,     0,     0,   316,    19,     0,     0,
    20,     0,   317,   318,   319,    21,    22,     0,     0,     0,
    23,    24,    25,    26,    27,   320,   321,   322,   323,   324,
   325,   990,     0,   327,   328,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -644,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   330,     0,   332,
   333,    30,     0,     0,     0,    31,     0,   334,   335,     3,
     4,     5,     0,     0,     6,     0,     0,     7,     0,     0,
    10,     0,     0,    12,    13,    14,    15,    16,     0,     0,
    17,    18,     0,     0,   316,    19,     0,     0,     0,     0,
   317,   318,   319,    21,    22,     0,     0,     0,     0,     0,
     0,     0,    27,   320,   321,   322,   323,   324,   325,   521,
     0,   327,   328,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   330,     0,   332,   333,    30,
     0,     0,     0,    31,     0,   334,   335,     3,     4,     5,
     0,     0,     6,     0,     0,     7,     0,     0,    10,     0,
     0,    12,    13,    14,    15,    16,     0,     0,    17,    18,
     0,     0,   316,    19,     0,     0,     0,     0,   317,   318,
   319,    21,    22,     0,     0,     0,     0,     0,     0,     0,
    27,   320,   321,   322,   323,   324,   325,  1078,     0,   327,
   328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   999,     0,   332,   333,    30,     0,     0,
     0,    31,     0,   334,   335,     3,     4,     5,     0,     0,
     6,     0,     0,     7,     0,     0,    10,     0,     0,    12,
    13,    14,    15,    16,     0,     0,    17,    18,     0,     0,
   316,    19,     0,     0,     0,     0,   317,   318,   319,    21,
    22,     0,     0,     0,     0,     0,     0,     0,    27,   320,
   321,   322,   323,   324,   325,  1140,     0,   327,   328,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   999,     0,   332,   333,    30,     0,     0,     0,    31,
     0,   334,   335,     3,     4,     5,     0,     0,     6,     0,
     0,     0,     0,     0,    10,     0,     0,    12,    13,    14,
    15,    16,     0,     0,    17,    18,     0,     0,   316,    19,
     0,     0,     0,     0,   317,     0,   319,    21,    22,     0,
     0,     0,     0,     0,     0,     0,    27,   320,   321,   322,
   323,   324,   325,   381,     0,   327,   328,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -644,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   330,
     0,   332,   333,    30,     0,     0,     0,    31,     0,   334,
   335,     3,     4,     5,     0,     0,     6,     0,     0,     0,
     0,     0,    10,     0,     0,    12,     0,    14,    15,    16,
     0,     0,    17,    18,     0,     0,   316,     0,     0,     0,
     0,     0,   317,   318,   319,    21,    22,     0,     0,     0,
     0,     0,     0,     0,    27,   320,   321,   322,   323,   324,
   325,   381,     0,   327,   328,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   330,   757,   332,
   333,    30,     0,     0,     0,    31,     0,   334,   335,     3,
     4,     5,     0,     0,     6,     0,     0,     0,     0,     0,
    10,     0,     0,    12,     0,    14,    15,    16,     0,     0,
    17,    18,     0,     0,   316,     0,     0,     0,     0,     0,
   317,   318,   319,    21,    22,     0,     0,     0,     0,     0,
     0,     0,    27,   320,   321,   322,   323,   324,   325,   381,
     0,   327,   328,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   330,   808,   332,   333,    30,
     0,     0,     0,    31,     0,   334,   335,     3,     4,     5,
     0,     0,     6,     0,     0,     0,     0,     0,    10,     0,
     0,    12,     0,    14,    15,    16,     0,     0,    17,    18,
     0,     0,   316,     0,     0,     0,     0,     0,   317,   318,
   319,    21,    22,     0,     0,     0,     0,     0,     0,     0,
    27,   320,   321,   322,   323,   324,   325,   381,     0,   327,
   328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   330,   809,   332,   333,    30,     0,     0,
     0,    31,     0,   334,   335,     3,     4,     5,     0,     0,
     6,     0,     0,     0,     0,     0,    10,     0,     0,    12,
     0,    14,    15,    16,     0,     0,    17,    18,     0,     0,
   316,     0,     0,     0,     0,     0,   317,   318,   319,    21,
    22,     0,     0,     0,     0,     0,     0,     0,    27,   320,
   321,   322,   323,   324,   325,   381,     0,   327,   328,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   330,   818,   332,   333,    30,     0,     0,     0,    31,
     0,   334,   335,     3,     4,     5,     0,     0,     6,     0,
     0,     0,     0,     0,    10,     0,     0,    12,     0,    14,
    15,    16,     0,     0,    17,    18,     0,     0,   316,     0,
     0,     0,     0,     0,   317,   318,   319,    21,    22,     0,
     0,     0,     0,     0,     0,     0,    27,   320,   321,   322,
   323,   324,   325,   381,     0,   327,   328,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -644,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   330,
     0,   332,   333,    30,     0,     0,     0,    31,     0,   334,
   335,     3,     4,     5,     0,     0,     6,     0,     0,     0,
     0,     0,    10,     0,     0,    12,     0,    14,    15,    16,
     0,     0,    17,    18,     0,     0,   316,     0,     0,     0,
     0,     0,   317,   318,   319,    21,    22,     0,     0,     0,
     0,     0,     0,     0,    27,   320,   321,   322,   323,   324,
   325,   381,     0,   327,   328,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   330,   934,   332,
   333,    30,     0,     0,     0,    31,     0,   334,   335,     3,
     4,     5,     0,     0,     6,     0,     0,     0,     0,     0,
    10,     0,     0,    12,     0,    14,    15,    16,     0,     0,
    17,    18,     0,     0,   316,     0,     0,     0,     0,     0,
   317,   318,   319,    21,    22,     0,     0,     0,     0,     0,
     0,     0,    27,   320,   321,   322,   323,   324,   325,   381,
     0,   327,   328,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   330,   936,   332,   333,    30,
     0,     0,     0,    31,     0,   334,   335,     3,     4,     5,
     0,     0,     6,     0,     0,     0,     0,     0,    10,     0,
     0,    12,     0,    14,    15,    16,     0,     0,    17,    18,
     0,     0,   316,     0,     0,     0,     0,     0,   317,   318,
   319,    21,    22,     0,     0,     0,     0,     0,     0,     0,
    27,   320,   321,   322,   323,   324,   325,   381,     0,   327,
   328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   330,   939,   332,   333,    30,     0,     0,
     0,    31,     0,   334,   335,     3,     4,     5,     0,     0,
     6,     0,     0,     0,     0,     0,    10,     0,     0,    12,
     0,    14,    15,    16,     0,     0,    17,    18,     0,     0,
   316,     0,     0,     0,     0,     0,   317,   318,   319,    21,
    22,     0,     0,     0,     0,     0,     0,     0,    27,   320,
   321,   322,   323,   324,   325,   998,     0,   327,   328,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   999,   808,   332,   333,    30,     0,     0,     0,    31,
     0,   334,   335,     3,     4,     5,     0,     0,     6,     0,
     0,     0,     0,     0,    10,     0,     0,    12,     0,    14,
    15,    16,     0,     0,    17,    18,     0,     0,   316,     0,
     0,     0,     0,     0,   317,   318,   319,    21,    22,     0,
     0,     0,     0,     0,     0,     0,    27,   320,   321,   322,
   323,   324,   325,   998,     0,   327,   328,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   999,
   809,   332,   333,    30,     0,     0,     0,    31,     0,   334,
   335,     3,     4,     5,     0,     0,     6,     0,     0,     0,
     0,     0,    10,     0,     0,    12,     0,    14,    15,    16,
     0,     0,    17,    18,     0,     0,   316,     0,     0,     0,
     0,     0,   317,   318,   319,    21,    22,     0,     0,     0,
     0,     0,     0,     0,    27,   320,   321,   322,   323,   324,
   325,   381,     0,   327,   328,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   330,  1023,   332,
   333,    30,     0,     0,     0,    31,     0,   334,   335,     3,
     4,     5,     0,     0,     6,     0,     0,     0,     0,     0,
    10,     0,     0,    12,    13,    14,    15,    16,     0,     0,
    17,    18,     0,     0,   316,    19,     0,     0,     0,     0,
   317,     0,   319,    21,    22,     0,     0,     0,     0,     0,
     0,     0,    27,   320,   321,   322,   323,   324,   325,   898,
     0,   327,   328,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1079,     0,   332,   333,    30,
     0,     0,     0,    31,     0,   334,   335,     3,     4,     5,
     0,     0,     6,     0,     0,     0,     0,     0,    10,     0,
     0,    12,     0,    14,    15,    16,     0,     0,    17,    18,
     0,     0,   316,     0,     0,     0,     0,     0,   317,   318,
   319,    21,    22,     0,     0,     0,     0,     0,     0,     0,
    27,   320,   321,   322,   323,   324,   325,   381,     0,   327,
   328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   330,     0,   332,   333,    30,     0,     0,
     0,    31,     0,   334,   335,     3,     4,     5,     0,     0,
     6,     0,     0,     0,     0,     0,    10,     0,     0,    12,
     0,    14,    15,    16,     0,     0,    17,    18,     0,     0,
   316,     0,     0,     0,     0,     0,   317,   318,   319,    21,
    22,     0,     0,     0,     0,     0,     0,     0,    27,   320,
   321,   322,   323,   324,   325,   998,     0,   327,   328,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   999,     0,   332,   333,    30,     0,     0,     0,    31,
     0,   334,   335,     2,     3,     4,     5,     0,     0,     6,
     0,     0,     7,     8,     9,    10,   145,     0,    12,    13,
    14,    15,    16,     0,     0,    17,    18,     0,     0,     0,
    19,     0,     0,    20,     0,     0,     0,     0,    21,    22,
     0,     0,     0,    23,    24,    25,    26,    27,     0,     0,
     0,     0,     0,     0,   403,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   289,   331,     0,     0,    30,     0,     0,     0,    31,     0,
    32,     3,     4,     5,     0,     0,     6,     0,     0,     0,
     0,     0,    10,     0,     0,    12,     0,    14,    15,    16,
     0,     0,    17,    18,     0,     0,   316,     0,     0,     0,
     0,     0,   317,     0,   319,    21,    22,     0,     0,     0,
     0,     0,     0,     0,    27,   320,   321,   322,   323,   324,
   325,   381,     0,   327,   328,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   518,     0,   332,
   333,    30,     0,     0,     0,    31,     0,   334,   335,     3,
     4,     5,     0,     0,     6,     0,     0,     0,     0,     0,
    10,     0,     0,    12,     0,    14,    15,    16,     0,     0,
    17,    18,     0,     0,   316,     0,     0,     0,     0,     0,
   317,     0,   319,    21,    22,     0,     0,     0,     0,     0,
     0,     0,    27,   320,   321,   322,   323,   324,   325,   381,
     0,   327,   328,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   330,     0,   332,   333,    30,
     0,     0,     0,    31,     0,   334,   335,     3,     4,     5,
     0,     0,     6,     0,     0,     0,     0,     0,    10,     0,
     0,    12,     0,    14,    15,    16,     0,     0,    17,    18,
     0,     0,   316,     0,     0,     0,     0,     0,   317,     0,
   319,    21,    22,     0,     0,     0,     0,     0,     0,     0,
    27,   320,   321,   322,   323,   324,   325,   536,     0,   327,
   328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   330,     0,   332,   333,    30,     0,     0,
     0,    31,     0,   334,   335,     2,     3,     4,     5,     0,
     0,     6,     0,     0,     7,     8,     9,    10,   145,     0,
    12,    13,    14,    15,    16,     0,     0,    17,    18,     0,
     0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
    21,    22,     0,     0,     0,    23,    24,    25,    26,    27,
     0,     0,     0,     0,     0,     0,  1032,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   329,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   625,  1033,     0,     0,    30,     0,     0,     0,
    31,     0,    32,     2,     3,     4,     5,     0,     0,     6,
     0,     0,     7,     8,     9,    10,   145,     0,    12,    13,
    14,    15,    16,     0,     0,    17,    18,     0,     0,     0,
    19,     0,     0,    20,     0,     0,     0,     0,    21,    22,
     0,     0,     0,    23,    24,    25,    26,    27,     0,     0,
     0,     0,     0,     0,  1052,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   625,  1033,     0,     0,    30,     0,     0,     0,    31,     0,
    32,     2,     3,     4,     5,     0,     0,     6,     0,     0,
     7,     8,     9,    10,   145,     0,    12,    13,    14,    15,
    16,     0,     0,    17,    18,     0,     0,     0,    19,     0,
     0,    20,     0,     0,     0,     0,    21,    22,     0,     0,
     0,    23,    24,    25,    26,    27,     0,     0,     0,     0,
     0,     0,   191,     0,     2,     3,     4,     5,     0,     0,
     6,     0,     0,     7,     8,     9,    10,   145,     0,    12,
    13,    14,    15,    16,     0,     0,    17,    18,   192,     0,
     0,    19,    30,     0,    20,     0,    31,     0,    32,    21,
    22,     0,     0,     0,    23,    24,    25,    26,    27,     0,
     0,     0,     0,     0,     0,   206,     0,     2,     3,     4,
     5,     0,     0,     6,     0,     0,     7,     8,     9,    10,
   145,     0,    12,    13,    14,    15,    16,     0,     0,    17,
    18,   192,     0,     0,    19,    30,     0,    20,     0,    31,
     0,    32,    21,    22,     0,     0,     0,    23,    24,    25,
    26,    27,     0,     0,     0,     0,     0,     0,   191,     0,
     2,     3,     4,     5,     0,     0,     6,     0,     0,     7,
     8,     9,    10,   145,     0,    12,    13,    14,    15,    16,
     0,     0,    17,    18,   392,     0,     0,    19,    30,     0,
    20,     0,    31,     0,    32,    21,    22,     0,     0,     0,
    23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
     0,   206,     0,     2,     3,     4,     5,     0,     0,     6,
     0,     0,     0,     8,     9,    10,   145,     0,    12,    13,
    14,    15,    16,     0,     0,    17,    18,   392,     0,     0,
    19,    30,     0,    20,     0,    31,     0,    32,    21,    22,
     0,     0,     0,    23,    24,    25,    26,    27,     0,     0,
     0,     0,     0,     0,   146,     0,     2,     3,     4,     5,
     0,     0,     6,     0,     0,     0,     8,     9,    10,   145,
     0,    12,    13,    14,    15,    16,     0,     0,    17,    18,
   147,     0,     0,    19,    30,     0,    20,     0,    31,     0,
    32,    21,    22,     0,     0,     0,    23,    24,    25,    26,
    27,     0,     0,     0,     0,     0,     0,   146,     0,     2,
     3,     4,     5,     0,     0,     6,     0,     0,     0,     8,
     9,    10,   145,     0,    12,    13,    14,    15,    16,     0,
     0,    17,    18,   398,     0,     0,    19,    30,     0,    20,
     0,    31,     0,    32,    21,    22,     0,     0,     0,    23,
    24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
   146,     0,     2,     0,     0,     5,     0,     0,     0,     0,
     0,     0,     8,     9,     0,   145,     0,    12,    13,     0,
     0,     0,     0,     0,     0,     0,   865,     0,     0,    19,
    30,     0,    20,     0,    31,     0,    32,    21,    22,     0,
     0,     0,    23,    24,    25,    26,    27,     0,     0,     0,
     0,     0,     0,   146,     2,     3,     4,     5,     0,     0,
     6,     0,     0,     7,     8,     9,    10,   145,     0,    12,
    13,    14,    15,    16,     0,     0,    17,    18,     0,   863,
     0,    19,     0,    30,    20,     0,     0,    31,     0,    32,
    22,     0,     0,     0,    23,    24,    25,    26,    89,     0,
     0,     0,     0,     0,     0,   704,     0,     0,     0,     0,
     0,     0,     2,     3,     4,     5,     0,   329,     6,     0,
     0,     7,     8,     9,    10,   145,     0,    12,    13,    14,
    15,    16,   331,     0,    17,    18,     0,     0,     0,    19,
     0,     0,    20,     0,     0,     0,     0,     0,    22,     0,
     0,     0,    23,    24,    25,    26,    89,     0,     0,     0,
     0,     0,     0,   704,     0,     0,     0,     0,     0,     0,
     2,     3,     4,     5,     0,   329,     6,     0,     0,     7,
     8,     9,    10,   145,     0,    12,    13,    14,    15,    16,
   733,     0,    17,    18,     0,     0,     0,    19,     0,     0,
    20,     0,     0,     0,     0,     0,    22,     0,     0,     0,
    23,    24,    25,    26,    89,     0,     0,     0,     0,     0,
     0,   704,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   797
};

static const short yycheck[] = {     1,
    21,   501,    21,   346,   369,   771,   724,    21,    12,    76,
   552,   600,    21,   429,    21,    40,    41,   596,   175,    21,
   303,   600,    66,    40,    41,    78,   829,   830,    43,    41,
    45,    35,    36,    48,    28,   827,   828,   391,    40,    41,
    40,    41,    47,   835,    38,    39,    54,   134,    38,    54,
    81,    67,    65,    97,   846,     6,    76,    51,    19,    61,
   370,   371,   332,   333,   334,   335,    97,    18,    19,    30,
    56,    99,   100,    59,   102,    19,    78,    66,   409,    30,
     1,   412,   275,    99,   415,    98,    30,    19,    39,   420,
   649,    85,   423,    19,   653,    85,    47,   102,    30,    19,
    81,   168,   372,    54,    30,    47,    67,    28,    97,   134,
    30,   100,    54,   134,     6,   134,    97,    38,    39,    40,
    41,   665,    81,   143,    48,   134,    18,    81,   411,   131,
    51,   414,   134,    84,   417,   466,    67,    88,    97,   422,
    61,   101,   425,    97,    95,    80,    66,    39,   168,   915,
    60,    61,    73,    74,   140,    47,   142,    99,    67,    81,
    95,    81,    54,    47,    85,    97,     6,   179,   100,   155,
    54,    97,   174,   175,   100,    97,   979,    97,    18,   179,
   100,   183,    92,    93,    81,   468,    66,   181,    80,   981,
    66,   203,   204,   330,   281,   282,    97,    67,    38,    39,
    97,    81,   103,   203,   204,    81,    81,    47,    80,     1,
    80,    66,   555,   556,    54,   804,    66,    97,    66,    81,
   100,    97,    97,    95,   100,   804,    81,   769,   770,   102,
    97,    81,    99,    81,   391,    97,   238,   602,   654,   655,
    99,    28,    97,   102,    84,   166,   167,    97,   268,    97,
    90,   253,   100,    40,    41,     6,    43,    44,    45,    46,
    47,    48,    49,   283,    51,   285,   100,    18,   102,    61,
    80,    66,   670,    81,    81,    81,   100,   263,   102,   281,
   282,   267,   203,   204,   286,    95,    81,    38,    39,    97,
    97,    97,  1010,   624,   296,    67,    47,   628,    85,   301,
    47,   303,    97,    54,   658,    47,   373,    54,    12,    97,
   664,   855,    54,   101,   316,     6,   330,   100,   862,   102,
   387,   374,   343,   330,   343,   327,   328,    18,   330,   343,
   332,   333,   334,   335,   343,   388,   343,   362,   363,    90,
    80,   343,    81,    81,   346,   362,   363,    38,    39,   364,
    68,    69,    67,   373,     6,    95,    47,   102,    97,     6,
   362,   363,    67,    54,    96,    80,    18,   387,   505,    81,
   372,    18,   374,   294,   295,    80,    84,    85,    86,  1145,
    95,   518,   435,    81,   396,   397,   388,    39,   262,   391,
    95,    38,    39,    84,    99,    47,   396,   397,     6,    90,
    47,    81,    54,    81,   406,    95,   543,    54,    81,   411,
    18,    19,   414,    67,   434,   417,   553,    97,   102,    97,
   422,    67,    30,   425,    97,   735,   102,   452,   453,   772,
    38,    39,    84,   435,    80,   452,   453,    99,   575,    47,
   102,   453,   942,    90,   446,   447,    54,    81,   992,    95,
   452,   453,   452,   453,   456,   955,   450,   451,   856,    81,
   454,   253,    67,    97,   458,    80,   468,    81,   866,     6,
   472,   473,    80,   743,    67,    97,    84,    81,   464,    81,
    88,    18,    90,    97,    67,   755,    81,   489,   490,   799,
   800,   505,   494,    97,    80,    97,    81,    80,   505,   501,
   525,   658,    39,   505,    81,    81,   508,   664,   525,    95,
    47,   303,    95,    40,    41,    42,   518,    54,    81,   521,
    97,    97,   524,   525,    81,   446,   891,   552,   530,  1073,
   532,   552,    80,   552,    97,   549,    81,   604,   100,   326,
   542,   543,   549,   552,    80,   547,   548,   549,   550,   616,
   552,   553,    97,   555,   556,   557,   558,   559,   560,   561,
   562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
   572,   573,   574,   575,   576,   362,   363,   364,   365,   366,
   367,   583,   925,   893,   604,   557,   558,   559,   590,   943,
   988,  1135,    81,   380,   596,   100,   616,   102,   600,    80,
   737,    55,    56,    57,    81,   101,   102,   609,    97,    80,
    81,   613,    81,   615,    95,   617,   403,   404,   405,   411,
    97,   623,   414,    80,    95,   417,    80,    80,    97,   766,
   422,   901,   634,   425,    81,  1179,   638,    88,    95,    81,
    94,    95,    95,   100,    80,   102,    87,   649,     6,   651,
    97,   653,   654,   655,   446,    97,   658,    80,    81,    95,
    18,   448,   664,   665,   456,   452,   453,   454,   670,    80,
    81,   458,    95,  1071,    48,    80,   468,    89,  1076,  1077,
    80,    39,    80,    81,    95,   679,    82,    83,    80,    47,
    95,     3,    38,    39,   688,    95,    54,    95,   100,    64,
   102,    13,    14,    95,    16,    51,    81,    19,   710,    80,
   712,    97,    97,   715,   851,   101,   101,    96,    30,    97,
   594,    33,   724,   101,   861,   599,    84,    99,  1038,   101,
  1000,    43,    44,    45,    46,   737,    97,     1,    80,    85,
   101,   743,  1096,  1013,  1109,    80,   748,   749,   750,    97,
   752,   753,   754,   755,   756,   330,    97,    21,   760,   761,
     6,  1115,     6,   900,   766,    58,    59,   769,   770,   926,
   772,    99,    18,   101,    18,    43,    40,    41,   103,    43,
    44,    80,    81,   920,  1182,   100,   943,    51,    99,   101,
   101,    80,    81,    39,    38,    39,    95,    61,    99,    97,
   101,    47,   804,    47,   829,   830,    95,    99,    54,   101,
    54,    81,   829,   830,   816,   817,   831,   103,   820,   834,
   166,   167,  1220,    81,    80,    81,    81,   829,   830,    62,
    63,   825,   899,   827,   828,   181,    80,    35,    84,    95,
    84,   835,    88,   910,    88,    81,    90,  1245,    99,   851,
   101,    81,   846,   855,   856,    99,     6,    80,    81,   861,
   862,   863,   999,   865,   866,   867,    94,   869,    18,    55,
   134,   135,    95,   875,   138,   877,   878,   508,   880,   899,
    96,    80,    81,   564,   565,   566,   567,   674,    80,    39,
   910,    80,   679,   914,   101,   914,    95,    47,   900,   901,
   914,   688,     6,    80,    54,   914,    80,   914,  1101,   100,
   174,   102,   914,   101,    18,     6,   918,   704,   920,   183,
    80,    80,    81,   925,   926,    80,   501,    18,    99,   803,
   505,   100,    80,   102,     6,    39,    95,   101,  1075,  1096,
   942,   943,  1079,    47,    97,   576,    18,    38,    39,   100,
    54,   102,   583,   955,  1147,    99,    47,   101,  1115,   590,
  1153,    99,  1155,    54,  1157,    80,  1159,    39,    80,    81,
   100,  1164,   102,    81,   549,    47,    80,   100,   609,   102,
    84,    81,    54,    95,    88,   999,   988,   981,    80,   253,
   992,    95,   999,  1186,    80,  1188,  1189,   999,  1000,    90,
  1193,    80,    81,  1196,     1,  1019,  1199,    80,  1010,  1202,
  1035,  1013,  1019,  1015,  1207,    80,    95,  1019,  1035,    80,
    81,   596,   286,    35,    36,   600,    80,    81,    99,   100,
    81,   102,   296,  1035,    95,    80,    81,   301,   825,   303,
    81,    95,   829,   830,   831,   832,   833,   834,   835,     6,
    95,    81,    80,    81,    81,   401,   402,    81,   100,   846,
   102,    18,    81,   855,    61,  1079,   330,    95,    99,  1071,
   101,  1073,  1079,  1075,  1076,  1077,  1078,  1079,    80,   343,
    80,    81,    39,    40,    41,    42,    43,    95,  1090,  1091,
    47,  1093,    80,    81,  1096,    95,    99,    54,   362,   363,
    80,    81,    81,   367,   450,   451,   737,    95,   454,    80,
    81,   101,   458,  1115,    99,    95,   101,   748,   508,   101,
   907,   908,   753,   754,    95,   756,    80,    81,    80,    81,
    80,    81,    99,  1135,   101,    99,    99,   101,  1140,  1013,
   404,    95,    67,    95,    99,    95,   101,   411,    96,    97,
   414,    96,    97,   417,     3,    99,    34,   101,   422,  1033,
    99,   425,   737,   101,    13,    14,    99,    16,   101,    99,
    19,   101,    80,     6,   101,   102,    81,  1179,    96,    97,
  1182,    30,   446,   447,    33,    18,   576,    90,   452,   453,
   454,    90,   456,   583,    43,    44,    45,    46,    96,    97,
   590,   560,   561,   990,   468,    38,    39,    99,   100,   473,
   562,   563,   568,   569,    47,   654,   655,    90,  1220,   609,
    99,    54,    81,  1097,   654,   655,    81,    52,  1102,   804,
  1104,    99,  1106,    81,  1108,   100,    81,   501,  1112,   101,
    81,   505,    81,  1245,   508,  1032,     6,    80,  1035,  1036,
    81,    84,   101,     1,  1041,    88,   253,    90,    18,    81,
    81,   525,   526,    81,    81,  1052,   530,    81,    81,   900,
    81,   101,     8,    21,  1148,  1149,  1150,    81,    38,    39,
  1154,   101,  1156,    81,  1158,   549,  1160,    47,   552,     0,
     6,  1165,    40,    41,    54,    21,   761,  1171,   914,   570,
     4,     5,    18,   572,   571,     9,   303,   573,   341,   574,
    56,    15,   576,    61,   651,   439,    20,    21,    22,   583,
    80,    25,    26,    39,    84,   900,   590,   243,    88,     6,
    90,    47,   596,   679,   657,   848,   600,   669,    54,    99,
    61,    18,   688,   245,    61,   609,   315,   737,   827,    -1,
   638,    -1,    -1,    -1,  1141,  1142,    -1,    -1,   748,   623,
    -1,    38,    39,   753,   754,    -1,   756,   942,    84,    -1,
    47,    -1,    88,    -1,    -1,    -1,    -1,    54,     1,    95,
   955,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,     3,
   654,   655,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,  1032,    16,    80,    -1,    19,   670,    84,    -1,    -1,
    -1,    88,    -1,    90,   411,   679,    30,   414,    -1,    33,
   417,  1052,    99,    -1,   999,   422,   174,    -1,   425,    43,
    44,    45,    46,    -1,    -1,   183,    -1,    -1,    61,    -1,
    -1,    -1,    -1,    -1,  1019,    -1,   710,    -1,   712,   446,
   447,   715,    -1,     6,    -1,    -1,    -1,    -1,    -1,   456,
    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
    -1,   468,     3,   737,    -1,    -1,    -1,    30,    -1,    -1,
    -1,    -1,    13,    14,   748,    16,    39,   101,    19,   753,
   754,    -1,   756,    -1,    47,    -1,   760,   761,    -1,    30,
    -1,    54,    33,    -1,  1079,   253,    -1,    -1,    -1,     3,
   900,    -1,    43,    44,    45,    46,    -1,    -1,    -1,    13,
    14,     6,    16,    -1,    -1,    19,    -1,    80,    81,    -1,
    -1,    84,    -1,    18,    19,    88,    30,     1,   286,    33,
   804,    -1,    95,    -1,    -1,    30,    -1,    -1,   296,    43,
    44,    45,    46,   301,    39,   303,    -1,    21,    -1,    -1,
    -1,    -1,    47,    -1,    -1,   829,   830,    -1,   316,    54,
   101,   835,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
   328,    -1,   330,    -1,   332,   333,   334,   335,    -1,    -1,
    -1,   855,   856,    -1,    -1,   343,    -1,    61,    -1,    84,
    -1,    -1,   866,    88,    -1,     4,     5,   101,    -1,    73,
     9,    -1,    -1,    -1,   362,   363,    15,    -1,    -1,    -1,
    19,    20,    21,    22,   372,    -1,    25,    26,    -1,    -1,
   253,    30,    -1,    -1,    -1,    -1,   900,    -1,    -1,    -1,
    -1,    -1,  1032,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   914,    -1,    -1,    -1,     3,    -1,    -1,   654,   655,    -1,
    -1,    -1,  1052,   411,    13,    14,   414,    16,    -1,   417,
    19,    -1,    -1,   670,   422,    -1,     3,   425,   942,    -1,
   303,    30,    -1,    -1,    33,    -1,    13,    14,    -1,    16,
    -1,   955,    19,    -1,    43,    44,    45,    46,   446,   447,
    -1,    -1,   166,    30,   452,   453,    33,   330,   456,    -1,
    -1,    -1,    -1,     1,    -1,    -1,    43,    44,    45,    46,
   468,    -1,    -1,    -1,   988,   473,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    21,    -1,   999,    -1,    -1,    -1,   203,
    70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    -1,  1015,   101,   501,    -1,  1019,    -1,   505,    -1,    -1,
   508,    -1,    -1,   760,   761,    -1,    -1,    -1,    -1,    -1,
   100,  1035,  1036,    61,   101,    -1,    -1,   525,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,   253,
    -1,   414,    -1,    -1,   417,    -1,     6,    -1,   262,   422,
    -1,   549,   425,    -1,   552,    -1,    -1,  1071,    18,    19,
    -1,    -1,  1076,  1077,     6,  1079,    -1,   281,    -1,    -1,
    30,    -1,    -1,   446,   447,  1089,    18,  1091,   576,    39,
   294,    -1,    -1,   456,    -1,   583,    -1,    47,    -1,   303,
    -1,    -1,   590,    -1,    54,   468,    38,    39,   596,    -1,
    -1,    -1,   600,    -1,    -1,    47,    -1,    67,   855,   856,
    -1,   609,    54,    -1,    -1,    -1,   330,   331,    -1,   866,
    80,    -1,    -1,    -1,    84,   623,    -1,    -1,    88,   343,
    -1,    -1,   505,    -1,    -1,    95,    -1,    -1,    80,    81,
    -1,    -1,    84,    -1,    -1,    -1,    88,    -1,    90,    -1,
    -1,    -1,    -1,    95,    -1,    -1,   654,   655,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1182,    -1,
    -1,    -1,   670,    -1,    -1,    -1,   549,    -1,    -1,    -1,
    -1,    -1,   396,     3,    -1,    -1,     6,   401,    -1,     6,
    -1,    -1,    -1,    13,    14,    -1,    16,   411,    18,    19,
   414,    18,    -1,   417,    -1,    -1,  1220,    -1,   422,    -1,
    30,   425,   710,    33,   712,   253,    -1,   715,    38,    39,
    -1,    38,    39,    43,    44,    45,    46,    47,    -1,    -1,
    47,  1245,   446,   447,    54,    -1,    -1,    54,    -1,   737,
    -1,   988,   456,    -1,    -1,   743,    -1,    -1,    -1,    -1,
   748,    -1,    -1,    -1,   468,   753,   754,   755,   756,    -1,
    80,    -1,    -1,    80,    84,   303,    -1,    84,    88,    -1,
    90,    88,    -1,    90,     3,    -1,    -1,     6,    95,    99,
    -1,   654,   655,    -1,    13,    14,    -1,    16,    -1,    18,
    19,   505,   330,    -1,    -1,    -1,    -1,   670,    -1,    -1,
    -1,    30,   516,    -1,    33,   343,   804,    -1,    -1,    38,
    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,
    -1,    -1,    -1,    -1,  1071,    54,    -1,    -1,    -1,  1076,
  1077,   829,   830,    -1,    -1,   549,    -1,    -1,    -1,    -1,
  1087,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     6,    80,    -1,    -1,    -1,    84,    -1,   855,   856,    88,
    -1,    90,    18,    19,    -1,    -1,    -1,    -1,   866,    -1,
    99,    -1,   586,   411,    30,    -1,   414,    -1,    -1,   417,
   594,    -1,    38,    39,   422,   599,    -1,   425,    -1,    -1,
    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
    -1,    -1,   900,   901,    -1,    -1,    -1,   621,   446,   447,
    -1,    -1,   626,     6,    -1,    -1,   914,    -1,   456,    -1,
    -1,    -1,    -1,    -1,    80,    18,    19,    -1,    84,    -1,
   468,    -1,    88,    -1,    90,  1182,    -1,    30,     6,    95,
   654,   655,    -1,    -1,   942,    38,    39,    -1,    -1,    -1,
    18,    19,    -1,    -1,    47,    -1,   670,   955,    -1,    -1,
    -1,    54,    30,    -1,   174,     1,    -1,   505,    -1,    -1,
    38,    39,    -1,  1220,    -1,    -1,    -1,    -1,    -1,    47,
    -1,    -1,   855,   856,    -1,    21,    54,    80,    -1,    -1,
   988,    84,    -1,   866,    -1,    88,    -1,    90,  1245,    -1,
    -1,   999,  1000,    -1,    40,    41,    -1,    -1,    -1,    -1,
    -1,   549,    80,    -1,    -1,  1013,    84,  1015,    -1,    -1,
    88,  1019,    90,     3,   738,    61,    -1,    95,    -1,   743,
    -1,    -1,    -1,    13,    14,   749,    16,  1035,    -1,    19,
    76,    -1,    78,    -1,    -1,    -1,   760,   761,    -1,    -1,
    30,    -1,    -1,    33,    -1,   769,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    43,    44,    45,    46,    -1,    -1,   942,
    -1,    -1,    -1,  1071,    -1,    -1,   286,    -1,  1076,  1077,
    -1,  1079,   955,    -1,    -1,    -1,   296,    67,    -1,   803,
    -1,   301,   806,     3,    -1,    -1,     6,    -1,   134,    -1,
    -1,    -1,    -1,    13,    14,    -1,    16,   143,    18,    19,
    -1,    -1,    -1,    -1,    -1,   988,   654,   655,    -1,    -1,
    30,    -1,    -1,    33,    -1,    -1,   999,     6,    38,    39,
    -1,    -1,   670,    43,    44,    45,    46,    47,   174,    18,
    19,   855,   856,    -1,    54,    -1,  1019,   183,    -1,     6,
    -1,    30,   866,    -1,    -1,    -1,    -1,    67,    -1,    -1,
    39,    18,    19,    -1,    -1,    -1,    -1,    -1,    47,     1,
    80,    81,    -1,    30,    84,    54,    -1,    -1,    88,    -1,
    90,    -1,    39,    -1,  1182,    95,    -1,   901,    67,    -1,
    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,  1071,    -1,
   914,    80,    -1,  1076,  1077,    84,  1079,    -1,    -1,    88,
    -1,    -1,    -1,     6,    -1,    -1,    95,   253,    -1,    -1,
    -1,    -1,  1220,    80,    81,    18,    19,    84,   942,    61,
    -1,    88,   268,    -1,    -1,    -1,    -1,    30,    95,   953,
    -1,   955,    -1,    -1,    -1,    -1,    39,  1245,   962,   285,
   286,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
   296,    54,   472,    -1,    -1,   301,    -1,   303,    -1,    -1,
    -1,    -1,    -1,    -1,   988,    -1,    -1,    -1,    -1,   489,
    -1,    -1,    -1,    -1,   494,   999,  1000,    80,    -1,    -1,
    -1,    84,    -1,    -1,   330,    88,    -1,    -1,    -1,  1013,
    -1,    -1,    95,    -1,    -1,  1019,    -1,   343,    -1,  1182,
    -1,     1,    -1,     6,    -1,    -1,    -1,   855,   856,  1033,
    -1,    -1,    -1,    -1,    -1,    18,   362,   363,   866,    -1,
    -1,    -1,   542,    -1,    -1,    -1,    -1,   373,   374,   549,
    -1,    -1,    -1,    -1,    -1,    38,    39,  1220,    -1,    -1,
    -1,    -1,    -1,    -1,    47,    -1,    -1,  1071,    -1,    -1,
    -1,    54,  1076,  1077,    -1,  1079,    -1,    -1,    -1,    -1,
    -1,    61,  1245,  1087,  1088,   411,   914,    -1,   414,    -1,
    -1,   417,    -1,  1097,    -1,    -1,   422,    80,  1102,   425,
  1104,    84,  1106,    -1,  1108,    88,    -1,    90,  1112,   609,
    -1,    -1,    95,    -1,    -1,    -1,     6,   617,    -1,    -1,
   446,   447,    -1,   623,    -1,    -1,   452,   453,    18,    19,
   456,   253,    -1,    -1,   634,    -1,    -1,    -1,    -1,    -1,
    30,    -1,   468,    -1,  1148,  1149,  1150,   473,     1,    39,
  1154,    -1,  1156,    -1,  1158,    -1,  1160,    47,    -1,    -1,
   988,  1165,    -1,    -1,    54,    -1,    -1,  1171,    21,    -1,
    -1,   999,    -1,    -1,    -1,   501,    -1,    -1,  1182,   505,
    -1,   303,   508,    -1,    -1,    -1,    -1,    40,    41,    -1,
    80,  1019,    -1,    -1,    84,    -1,    -1,    -1,    88,   525,
    -1,    -1,    -1,    -1,    -1,    95,     6,    -1,    61,    -1,
   710,    -1,   712,    -1,    -1,   715,  1220,    -1,    18,    19,
     6,    -1,    -1,   549,    -1,    -1,   552,    -1,    -1,    -1,
    30,    -1,    18,    19,    -1,    -1,    -1,    -1,    38,    39,
    -1,  1245,    -1,  1071,    30,    -1,    -1,    47,  1076,  1077,
   576,  1079,    38,    39,    54,    -1,   756,   583,    -1,    -1,
    -1,    47,    -1,    -1,   590,    -1,     3,    -1,    54,    -1,
   596,    -1,    -1,   253,   600,    -1,    13,    14,   604,    16,
    80,   134,    19,   609,    84,    -1,    -1,    -1,    88,   411,
    90,    -1,   414,    30,    80,   417,    33,   623,    84,    -1,
   422,    -1,    88,   425,    90,    -1,    43,    44,    45,    46,
    -1,    -1,    -1,    -1,    -1,    -1,   816,   817,    -1,    -1,
   820,   174,    -1,   303,   446,   447,    -1,    -1,   654,   655,
   183,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   670,    -1,   468,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1182,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   867,    -1,   869,
    -1,    -1,    -1,    -1,    -1,   875,    -1,   877,   878,    -1,
   880,    -1,    -1,    -1,   710,   238,   712,    -1,    -1,   715,
    -1,     6,  1220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   253,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
    -1,   737,    -1,    -1,    -1,    30,    -1,  1245,   918,    -1,
    -1,    -1,   748,    38,    39,    -1,    -1,   753,   754,    -1,
   756,   411,    47,   286,   414,    -1,    -1,   417,    -1,    54,
    -1,    -1,   422,   296,    -1,   425,    -1,    -1,   301,    -1,
   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,   446,   447,    -1,    84,
    -1,    -1,    -1,    88,    -1,    90,   456,   330,   804,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,    -1,
   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     4,     5,     6,   829,   830,     9,    -1,    -1,    12,   362,
   363,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
    -1,    25,    26,     1,    -1,    -1,    30,    -1,    -1,   855,
   856,    -1,   654,   655,    -1,    39,    -1,    -1,    -1,    -1,
   866,    -1,    -1,    47,    -1,    -1,    -1,    -1,   670,    -1,
    54,    -1,    -1,   406,    -1,    -1,    -1,    -1,   411,    -1,
    -1,   414,    -1,    67,   417,    -1,    -1,    -1,    -1,   422,
    -1,    -1,   425,    -1,   900,    -1,    80,    -1,    -1,    -1,
    84,    -1,    -1,    61,    88,    -1,    -1,    -1,   914,    -1,
    -1,    95,    -1,   446,   447,     3,     4,     5,     6,   452,
   453,     9,    -1,   456,    12,    13,    14,    15,    16,    -1,
    18,    19,    20,    21,    22,   468,   942,    25,    26,    -1,
   473,     1,    30,    -1,    -1,    33,    -1,    -1,    -1,   955,
    -1,    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,
    -1,    21,    -1,    -1,     6,    -1,    54,     6,   501,    -1,
    -1,    -1,   505,    -1,    -1,   508,    18,    19,    -1,    18,
    40,    41,   988,    -1,    -1,    -1,    -1,    -1,    30,    -1,
    -1,    -1,   525,   999,   654,   655,    38,    39,    -1,    38,
    39,    61,    -1,    -1,    -1,    47,    -1,    -1,    47,  1015,
   670,    -1,    54,  1019,   102,    54,   549,    -1,    -1,   552,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1035,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
    -1,    80,    84,   576,    -1,    84,    88,    -1,    90,    88,
   583,    90,    -1,   855,   856,    -1,    -1,   590,    -1,    -1,
    -1,    -1,    -1,   596,   866,  1071,    -1,   600,    -1,     3,
  1076,  1077,    -1,  1079,   134,    -1,   609,    -1,    -1,    13,
    14,    -1,    16,    -1,    -1,    19,    -1,    -1,    -1,    -1,
   623,    -1,    -1,    -1,    -1,   253,    30,    -1,    -1,    33,
    -1,    -1,    -1,    -1,    -1,   638,    -1,    -1,    -1,    43,
    44,    45,    46,    -1,   174,    -1,   649,    -1,   651,   147,
   653,   654,   655,   183,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    67,    -1,    -1,    -1,   670,   166,   167,
    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,     4,
     5,     6,    -1,    -1,     9,   183,    -1,    12,    -1,    -1,
    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
    25,    26,   330,    -1,    -1,    30,  1182,   710,   238,   712,
    -1,    -1,   715,    -1,    39,    -1,   988,    -1,    -1,    -1,
    -1,    -1,    47,   253,    -1,   855,   856,    -1,    -1,    54,
    -1,    -1,    -1,    -1,   737,    -1,   866,    -1,    -1,    -1,
    -1,    -1,    67,    -1,  1220,   748,    68,    -1,    -1,    -1,
   753,   754,    -1,   756,    -1,    -1,   286,    -1,    -1,    84,
    -1,    -1,    -1,    88,    -1,    -1,   296,    -1,    -1,  1245,
    95,   301,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   411,    -1,    -1,   414,    -1,    -1,   417,
    -1,   289,    -1,    -1,   422,    -1,    -1,   425,    -1,  1071,
   330,   804,    -1,    -1,  1076,  1077,   304,    -1,    -1,    -1,
    -1,   309,    -1,   343,    -1,    -1,    -1,    -1,   446,   447,
    -1,    -1,    -1,    -1,     6,    -1,   829,   830,   456,    -1,
    -1,    -1,   362,   363,   156,    -1,    18,    19,    -1,    -1,
   468,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
    -1,    -1,   855,   856,    -1,    -1,    38,    39,   988,    -1,
    -1,    -1,    -1,   866,   186,    47,    -1,   189,    -1,    -1,
    -1,    -1,    54,    -1,    -1,    -1,   406,   505,    -1,   201,
    -1,   411,    -1,    -1,   414,    -1,    -1,   417,    -1,    -1,
    -1,   213,   422,    -1,    -1,   425,    -1,   900,    80,    -1,
   398,    -1,    84,   401,   402,    -1,    88,    -1,    90,    -1,
  1182,   914,    -1,    -1,   236,    -1,   446,   447,    -1,    -1,
    -1,   549,   452,   453,    -1,    -1,   456,    -1,    -1,    -1,
    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,   468,   942,
    -1,  1071,    -1,   473,    -1,    -1,  1076,  1077,  1220,    -1,
    -1,    -1,   955,    -1,   276,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   501,    -1,  1245,    -1,   505,    -1,    -1,   508,    -1,
    -1,   303,    -1,    -1,    -1,   988,    -1,    -1,   486,   487,
    -1,    -1,    -1,    -1,    -1,   525,   999,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   360,   361,   362,   363,    -1,    -1,
    -1,   367,  1015,    -1,    -1,    -1,  1019,    -1,    -1,   549,
    -1,    -1,   552,     6,   380,    -1,   654,   655,    -1,    -1,
    -1,    -1,  1035,    -1,    -1,    18,    19,    -1,    -1,    -1,
    -1,    -1,   670,    -1,    -1,    -1,   576,    30,   404,   405,
    -1,    -1,  1182,   583,    -1,    38,    39,    -1,    -1,    -1,
   590,    -1,    -1,    -1,    47,    -1,   596,    -1,  1071,    -1,
   600,    54,    -1,  1076,  1077,    -1,  1079,    -1,    -1,   609,
    -1,    -1,    -1,    -1,    -1,   407,    -1,    -1,    -1,   411,
  1220,    -1,   414,   623,    -1,   417,    -1,    80,    -1,    -1,
   422,    84,    -1,   425,    -1,    88,    -1,    90,   638,    -1,
    -1,    -1,    -1,    -1,    -1,  1245,    -1,     6,    -1,   649,
    -1,   651,    -1,   653,   654,   655,    -1,   625,    -1,    18,
    19,   629,   630,    -1,   456,    -1,    -1,    -1,    -1,    -1,
   670,    30,    -1,   465,    29,    -1,   468,    -1,    -1,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
   516,   517,    -1,    -1,    -1,    54,    -1,    -1,   524,   525,
    -1,    -1,    -1,    -1,   530,    -1,   532,    -1,    -1,  1182,
   710,    -1,   712,    -1,    -1,   715,    -1,    -1,    -1,    -1,
    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,
    -1,    90,    -1,    -1,    -1,    -1,    -1,   737,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1220,   748,    -1,
    -1,    -1,    -1,   753,   754,    -1,   756,   855,   856,    -1,
   586,   587,    -1,    -1,     4,     5,     6,    -1,   866,     9,
    -1,    -1,  1245,    -1,    -1,    15,    -1,    -1,    18,    -1,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,
     6,    -1,   147,    -1,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    18,    -1,   804,    -1,    -1,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,
    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,   183,   829,
   830,    47,    -1,    -1,    -1,    -1,    -1,   192,    54,    -1,
    80,    -1,    82,    83,    84,   813,   814,    -1,    88,    -1,
    90,    91,    -1,    -1,    -1,   855,   856,   825,    -1,   827,
   828,    -1,   102,   103,    80,    -1,   866,   835,    84,    -1,
    -1,    -1,    88,    -1,    90,    -1,    -1,    -1,   846,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   988,    -1,    -1,    -1,    -1,   863,    -1,   865,    -1,   867,
   900,   999,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   914,    -1,     3,   743,    -1,     6,
    -1,  1019,    -1,   749,   750,    -1,    13,    14,    -1,    16,
    -1,    18,    19,    -1,   289,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   942,    30,    -1,    -1,    33,    -1,    -1,   304,
    -1,    38,    39,    -1,   309,   955,    43,    44,    45,    46,
    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,     1,    -1,
    -1,    -1,    -1,  1071,   942,    -1,    -1,    -1,  1076,  1077,
    67,  1079,    -1,    -1,    -1,    -1,    -1,   955,   988,    -1,
    -1,    -1,    -1,    80,    -1,    28,    29,    84,    -1,   999,
    -1,    88,    -1,    90,    -1,    38,    39,    40,    41,    -1,
    -1,    -1,   147,   981,    -1,  1015,    -1,    -1,    51,  1019,
    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    61,    -1,
    -1,   999,    -1,    -1,    -1,  1035,    -1,   392,    18,    19,
    73,    74,    -1,   398,    -1,    -1,    -1,    -1,   183,    -1,
    30,    -1,    85,   845,    -1,    -1,    -1,    -1,    38,    39,
    -1,     6,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
    -1,  1071,    -1,    18,    54,   901,  1076,  1077,    -1,  1079,
  1048,    -1,  1050,    -1,  1182,    -1,    -1,    -1,    -1,    -1,
  1058,    -1,  1060,    38,    39,    -1,    -1,    -1,   131,    -1,
    80,   134,    47,    -1,    84,    -1,    -1,    -1,    88,    54,
    90,  1079,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   486,   487,   166,   167,    80,    -1,    -1,    -1,    84,
    -1,    -1,    -1,    88,    -1,    90,   179,  1245,   181,    -1,
   183,    -1,    -1,   508,   289,     6,    -1,   949,    -1,   192,
    -1,    -1,    -1,    -1,    -1,    -1,   958,    18,    -1,   304,
   203,   204,    -1,   965,   309,    -1,    -1,   969,    -1,   971,
    -1,    -1,  1182,    -1,    -1,   977,    -1,    38,    39,    -1,
    -1,    -1,    -1,   985,    -1,    -1,    47,    -1,    -1,     6,
    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,  1034,  1035,
  1036,    18,    -1,    -1,    -1,  1041,    -1,    -1,    -1,    -1,
  1220,   576,    -1,    -1,    -1,    -1,    -1,    -1,   583,    80,
    -1,    38,    39,    84,    -1,   590,    -1,    88,    -1,    90,
    47,    -1,    -1,    -1,    -1,  1245,    -1,    54,   281,   282,
    -1,    -1,    -1,    -1,   609,    -1,   289,    -1,    -1,    -1,
    -1,   294,   295,   398,   619,  1091,    -1,  1093,    -1,     3,
   625,   304,     6,    80,   629,   630,   309,    84,    -1,    13,
    14,    88,    16,    90,    18,    19,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   326,    -1,    -1,    30,    -1,    -1,    33,
    -1,    -1,    -1,    -1,    38,    39,    -1,     6,    -1,    43,
    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    18,
    54,    -1,    -1,    -1,    -1,    -1,    -1,   360,   361,   362,
   363,    -1,    -1,    67,   367,    -1,    -1,    -1,    -1,    38,
    39,    -1,    -1,    -1,    -1,    -1,    80,   380,    47,    -1,
    84,   486,   487,    -1,    88,    54,    90,    -1,    -1,   392,
  1152,    95,    -1,   396,   397,   398,    -1,    -1,   401,   402,
   403,   404,   405,   508,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,   737,    -1,    -1,    84,    -1,    -1,    -1,    88,
    -1,    90,    -1,  1185,    -1,    -1,    -1,    -1,    -1,    -1,
  1192,    -1,    -1,  1195,    -1,    -1,  1198,    -1,    -1,  1201,
    -1,    -1,    -1,   446,  1206,   448,    -1,   450,   451,   452,
   453,   454,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1225,    -1,  1227,    -1,  1229,    -1,    -1,
  1232,   576,    -1,  1235,    -1,    -1,  1238,    -1,    -1,  1241,
    -1,    -1,  1244,   486,   487,   590,    -1,    -1,   813,   814,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   609,   508,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   516,   517,    -1,    -1,    -1,   521,    -1,
   625,   524,   525,    -1,   629,   630,    -1,   530,    -1,   532,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   863,    -1,
   865,    -1,   867,    -1,    -1,    -1,    -1,   550,    -1,   552,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,
    14,    15,    16,   576,    18,    19,    20,    21,    22,    -1,
   583,    25,    26,   586,   587,    -1,    30,   590,    -1,    33,
    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    -1,    -1,   609,    -1,    -1,     6,
    54,    -1,    -1,    -1,    -1,    -1,   619,   942,   621,   622,
    -1,    18,   625,   626,   627,    -1,   629,   630,    -1,    -1,
   955,    -1,   737,    -1,    -1,    -1,    80,    -1,    -1,    -1,
    84,    38,    39,    -1,    88,    -1,    90,    -1,    -1,    -1,
    47,   654,   655,    -1,    -1,    -1,    -1,    54,    -1,   103,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   674,    -1,    -1,   999,    -1,   679,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    -1,   688,    -1,    84,    -1,    -1,
    -1,    88,    -1,    90,    -1,     6,   951,   952,    -1,    -1,
    -1,   704,    -1,    -1,   959,   960,   961,    18,   813,   814,
   965,    -1,    -1,    -1,   969,    -1,   971,    -1,    -1,    -1,
    -1,    -1,   977,  1048,    -1,  1050,    -1,    38,    39,    -1,
   985,    -1,    -1,  1058,   737,  1060,    47,    -1,    -1,    -1,
   743,    -1,    -1,    54,    -1,   748,   749,   750,    -1,    -1,
   753,   754,    -1,   756,  1079,    -1,    -1,    -1,   863,    -1,
   865,    -1,   867,    -1,    -1,    -1,   769,   770,    -1,    80,
    -1,    -1,    -1,    84,    -1,     6,    -1,    88,    -1,    90,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
    -1,    -1,    -1,    -1,  1049,    -1,  1051,    -1,    -1,    -1,
    -1,     1,    -1,    -1,  1059,    -1,  1061,    38,    39,    -1,
   813,   814,  1067,    -1,  1069,    -1,    47,    -1,    -1,    -1,
    -1,    -1,   825,    54,   827,   828,   829,   830,    28,    29,
    -1,    -1,   835,    -1,    -1,    -1,    -1,   942,    38,    39,
    40,    41,    -1,   846,    -1,    -1,    -1,    -1,    -1,    80,
   955,    51,    -1,    84,     6,  1110,    -1,    88,    -1,    90,
   863,    61,   865,    -1,   867,    -1,    18,    -1,  1123,    -1,
    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    85,    38,    39,    -1,    -1,
    -1,    -1,    -1,  1148,   999,    47,    -1,   900,   901,    -1,
    -1,    -1,    54,    -1,    -1,    -1,    -1,  1162,  1163,    -1,
    -1,    -1,  1167,  1168,  1169,  1170,  1171,    -1,  1173,  1174,
  1175,  1176,  1177,  1178,    -1,    -1,    -1,    -1,    80,    -1,
    -1,   131,    84,    -1,   134,    -1,    88,    -1,    90,   942,
   166,   167,    -1,  1048,    -1,  1050,    -1,   147,    -1,    -1,
   953,   954,   955,  1058,    -1,  1060,    -1,    -1,    -1,   962,
   963,    -1,    -1,    -1,    -1,    -1,   166,   167,    -1,    -1,
    -1,    -1,    -1,    -1,  1079,    -1,   979,    -1,   981,   179,
    -1,   181,    -1,   183,    -1,    -1,    -1,   990,    -1,    -1,
    -1,    -1,   192,    -1,    -1,    -1,   999,  1000,    -1,    -1,
     4,     5,     6,   203,   204,     9,    -1,    -1,    12,    -1,
    -1,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,  1032,
    -1,  1034,  1035,  1036,    -1,    39,    -1,    -1,  1041,    -1,
    -1,    -1,    -1,    47,    -1,  1048,    -1,  1050,    -1,  1052,
    54,    -1,    -1,    -1,    -1,  1058,    -1,  1060,    -1,    -1,
    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,   294,   295,
    -1,    -1,    -1,    -1,    -1,  1078,  1079,    -1,    -1,    -1,
    84,   281,   282,    -1,    88,    -1,    -1,  1090,  1091,   289,
  1093,    -1,    -1,    -1,   294,   295,    -1,    -1,    -1,    -1,
   326,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,
    -1,     4,     5,     6,   360,   361,     9,  1140,    -1,    -1,
    -1,   367,    15,    -1,    -1,    18,    19,    20,    21,    22,
    -1,    -1,    25,    26,   380,    -1,    -1,    30,     6,    -1,
   360,   361,   362,   363,    -1,    -1,    39,   367,    -1,    -1,
    18,    -1,    -1,    -1,    47,   401,   402,   403,   404,   405,
   380,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    38,    39,   392,    -1,    -1,    -1,   396,   397,    -1,    47,
    -1,   401,   402,   403,   404,   405,    54,    80,    -1,    -1,
    -1,    84,     4,     5,     6,    88,    -1,     9,    -1,    -1,
    -1,    -1,    95,    15,    -1,    -1,    18,    19,    20,    21,
    22,    -1,    80,    25,    26,    -1,    84,    -1,    30,    -1,
    88,    -1,    90,    -1,    -1,    -1,   446,    39,   448,    -1,
   450,   451,   452,   453,   454,    47,    -1,    28,   458,    -1,
    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    40,
    41,    -1,    43,    44,    45,    46,    47,    48,    49,    -1,
    51,    -1,    -1,    -1,    -1,    -1,   486,   487,    80,    -1,
   516,   517,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,
    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,   508,    -1,
     6,    -1,    -1,    -1,    85,    -1,   516,   517,    -1,    90,
    -1,   521,    18,    -1,   524,   525,    -1,    -1,    -1,     6,
   530,    -1,   532,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    18,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
   550,    47,   552,    -1,    -1,    -1,    -1,    -1,    54,    -1,
    -1,    38,    39,   134,   135,   136,   137,   138,    -1,    -1,
    47,    -1,    -1,   144,    -1,    -1,   576,    54,    -1,    -1,
    -1,    -1,    -1,   583,    80,    -1,   586,   587,    84,    -1,
   590,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,
   626,   627,    -1,    80,    -1,    -1,    -1,    84,    -1,   609,
    33,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,   619,
    -1,   621,   622,    -1,    -1,    -1,     3,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    -1,    30,   654,   655,    33,    -1,    -1,    -1,
     6,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    -1,    18,    -1,   674,    -1,    -1,    54,   704,   679,
    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,   688,    -1,
    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,     6,    -1,
    -1,    47,    -1,    80,   704,    -1,    -1,    84,    54,    -1,
    18,    88,    -1,    90,    -1,    -1,    -1,   743,    -1,    -1,
    -1,    -1,    -1,   146,    -1,   148,   103,    -1,    -1,    -1,
    38,    39,    -1,     6,    80,    -1,    -1,   737,    84,    47,
   163,    -1,    88,   743,    90,    18,    54,   170,   748,   749,
   750,    -1,    -1,   753,   754,   326,   756,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,   769,
   770,     6,    80,    -1,    47,    -1,    84,    -1,    -1,    -1,
    88,    54,    90,    18,    -1,    -1,    -1,    -1,    -1,    -1,
     6,   362,   363,   364,   365,   366,   367,    -1,    -1,   825,
    -1,   827,    18,    38,    39,    -1,    -1,    80,    -1,   380,
    -1,    84,    47,    -1,    -1,    88,    -1,    90,    -1,    54,
    -1,    -1,    38,    39,    -1,   825,    -1,   827,    -1,   829,
   830,    47,   403,   404,   405,    -1,    -1,    -1,    54,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    -1,     6,    -1,    84,
    -1,    -1,    -1,    88,    -1,    90,    -1,    -1,    -1,    18,
    -1,     6,    -1,    -1,    80,   288,    -1,    -1,    84,   292,
    -1,    -1,    88,    18,    90,    -1,    -1,   448,    -1,    38,
    39,   452,   453,   454,    -1,   308,    -1,   458,    47,   460,
    -1,   314,    -1,    38,    39,    54,    -1,    -1,    -1,    -1,
   900,   901,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,    -1,    -1,    -1,    84,    -1,   953,   954,    88,
    -1,    90,    -1,    -1,    -1,    80,   962,   963,    -1,    84,
    -1,    -1,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,
   521,    -1,    -1,    -1,   525,   526,   527,   528,   529,   530,
    -1,   532,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
   393,    -1,    -1,    -1,  1000,    -1,    18,    -1,    -1,   979,
   403,   552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   990,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    47,  1032,    -1,  1034,    -1,
  1036,    -1,    54,    -1,    -1,  1041,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1052,    -1,    -1,    -1,
    -1,     6,  1032,    -1,  1034,  1035,  1036,    -1,    80,    -1,
    -1,  1041,    84,    18,    -1,    -1,    88,    -1,    90,    -1,
    -1,    -1,  1052,   476,    -1,    -1,   479,   480,   481,    -1,
   175,   484,   485,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    47,   496,   497,   498,   499,    -1,  1078,    54,
    -1,    -1,    -1,    -1,     3,   508,   509,     6,    -1,    -1,
  1090,  1091,    -1,  1093,    13,    14,    -1,    16,    -1,    18,
    19,    -1,    -1,   674,    -1,    80,     6,    -1,   679,    84,
    -1,    30,    -1,    88,    33,    90,    -1,   688,    18,    38,
    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,
    -1,    -1,    -1,   704,    -1,    54,    -1,    -1,    38,    39,
  1140,    -1,    -1,    -1,    -1,    -1,    -1,    47,    67,    -1,
    -1,    -1,    -1,   576,    54,    -1,    -1,    -1,    -1,    -1,
   583,    80,    81,     6,    -1,    84,     6,   590,    -1,    88,
    -1,    90,    -1,    -1,    -1,    18,    95,    -1,    18,    -1,
    80,    -1,    -1,    -1,    84,    -1,   609,    -1,    88,    -1,
    90,    -1,    -1,    -1,    -1,    38,    39,   620,    38,    39,
    -1,   316,    -1,    -1,    47,    -1,    -1,    47,    -1,    -1,
    -1,    54,   327,   328,    54,    -1,    -1,   332,   333,   334,
   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   346,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
    80,    84,    -1,    -1,    84,    88,    -1,    90,    88,    -1,
    90,    -1,    -1,    -1,   825,    -1,    -1,   372,   829,   830,
   831,   832,   833,   834,   835,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   846,   391,     3,    -1,    -1,
     6,    -1,    -1,    -1,   707,   708,    -1,    13,    14,    -1,
    16,    -1,    18,    19,    -1,   718,   719,   720,   721,    -1,
    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
    -1,    -1,    38,    39,   737,    -1,    -1,    43,    44,    45,
    46,    47,    -1,    -1,    -1,   748,    -1,    -1,    54,    -1,
   753,   754,    -1,   756,    -1,    -1,   907,   908,    -1,    -1,
    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,     1,     6,
    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,
    -1,    18,    88,    -1,    90,    -1,    -1,    -1,    -1,    95,
    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
    -1,    38,    39,    -1,    -1,    38,    39,    40,    41,    -1,
    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    51,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   990,
    73,    74,    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,
    -1,    88,    85,    90,    -1,    -1,    -1,    -1,    -1,    -1,
   555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
   565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     6,  1032,    -1,    -1,  1035,  1036,    -1,    -1,    -1,    -1,
  1041,    -1,    18,   896,    -1,   898,    -1,   900,    -1,    -1,
    -1,  1052,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    38,    39,   147,    18,    -1,    -1,    -1,    -1,
    -1,    47,    -1,    -1,    -1,    -1,    -1,  1078,    54,    -1,
    -1,    -1,    -1,   166,   167,    38,    39,    -1,   941,  1090,
  1091,    -1,  1093,    -1,    47,    -1,   179,    -1,   181,    -1,
   183,    54,    -1,    -1,    80,    -1,    -1,    -1,    84,   192,
    -1,    -1,    88,   658,    90,    -1,    -1,    -1,    -1,   664,
   203,   204,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
    -1,    84,    -1,    -1,    -1,    88,    -1,    90,    -1,  1140,
  1141,  1142,  1143,    -1,    -1,   998,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,  1032,
    30,    -1,    -1,    33,    -1,    -1,    -1,  1040,    38,    39,
    -1,    -1,    -1,    43,    44,    45,    46,    47,   743,  1052,
    -1,  1054,    -1,    -1,    54,    -1,   289,    -1,    -1,    -1,
   755,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   304,    -1,    -1,    -1,  1078,   309,   772,    -1,    -1,
    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    -1,
    90,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   103,    -1,    -1,    -1,  1110,    -1,    -1,
    -1,    -1,    -1,  1116,  1117,    -1,  1119,  1120,    -1,    -1,
  1123,    -1,  1125,  1126,    -1,  1128,  1129,   360,   361,   362,
   363,    -1,    -1,    -1,   367,    -1,    -1,  1140,    -1,    -1,
    -1,   374,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,   392,
    -1,    -1,    -1,   396,   397,   398,    -1,    -1,   401,   402,
   403,   404,   405,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    12,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
    -1,    -1,    -1,    -1,    -1,    -1,   901,    -1,    39,    -1,
    -1,    -1,    -1,   446,    -1,   448,    47,   450,   451,   452,
   453,   454,    -1,    54,    -1,   458,    -1,    -1,    -1,     3,
   925,   926,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,    -1,    16,    -1,    18,    19,    -1,    -1,   943,     1,
    -1,    -1,    -1,   486,   487,    -1,    30,    -1,    -1,    33,
    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,
    44,    45,    46,    47,    -1,   508,    28,    29,    -1,    -1,
    54,    -1,    -1,   516,   517,    -1,    38,    39,    40,    41,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
    -1,    -1,    -1,    -1,    -1,  1000,    80,    -1,    -1,    61,
    84,    -1,    -1,    -1,    88,    -1,    90,    -1,  1013,    -1,
    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     3,    -1,    85,     6,    -1,    -1,    -1,    -1,    -1,
    -1,    13,    14,   576,    16,    -1,    18,    19,    -1,    -1,
   583,    -1,    -1,   586,   587,    -1,    -1,   590,    30,    -1,
    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
    -1,    43,    44,    45,    46,    47,   609,    -1,    -1,    -1,
    -1,    -1,    54,    -1,    -1,    -1,   619,    -1,   621,   622,
    -1,    -1,   625,   626,   627,   147,   629,   630,    -1,    -1,
    -1,  1096,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
    -1,    -1,    84,    -1,   166,   167,    88,    -1,    90,    -1,
  1115,   654,   655,    95,    -1,    -1,    -1,   179,    -1,   181,
    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   192,   674,    -1,    -1,    -1,    -1,   679,    -1,    -1,    -1,
    -1,   203,   204,    -1,    -1,   688,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   704,    -1,     3,     4,     5,     6,    -1,    -1,     9,
    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
    30,    -1,    -1,    33,   737,    -1,    -1,    -1,    38,    39,
   743,    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,
    -1,    -1,    -1,    -1,    54,    -1,    -1,   760,   761,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,
    -1,    -1,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,
    80,    -1,   304,    -1,    84,    -1,    -1,   309,    88,    -1,
    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   102,    -1,   326,    -1,    -1,    -1,    -1,    -1,
   813,   814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   825,    -1,   827,   828,   829,   830,    -1,    -1,
    -1,    -1,   835,    -1,    -1,    -1,    -1,    -1,   360,   361,
   362,   363,    -1,   846,    -1,   367,    -1,    -1,    -1,    -1,
    -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,   380,    -1,
   863,    -1,   865,    -1,   867,    -1,   388,    -1,    -1,    -1,
   392,    -1,    -1,    -1,   396,   397,   398,    -1,    -1,   401,
   402,   403,   404,   405,    -1,    -1,    -1,    -1,    -1,    -1,
     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
    -1,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   446,    39,   448,    -1,   450,   451,
   452,   453,   454,    47,    -1,    -1,   458,    -1,    -1,   942,
    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   953,   954,   955,    -1,    -1,    -1,    -1,    -1,    -1,   962,
   963,    -1,    -1,    -1,   486,   487,    80,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   979,    -1,   981,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   508,   990,    -1,    -1,
    -1,    -1,    -1,    -1,   516,   517,   999,  1000,    -1,    -1,
     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
    13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,  1032,
    33,  1034,  1035,  1036,    -1,    -1,    39,    -1,  1041,    -1,
    43,    44,    45,    46,    47,  1048,    -1,  1050,    -1,  1052,
    -1,    54,    -1,    -1,   576,  1058,    -1,  1060,    -1,    -1,
    -1,   583,    -1,    66,   586,   587,    -1,    -1,   590,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1079,    80,    81,    -1,
    -1,    84,    -1,    -1,    -1,    88,    -1,   609,    -1,    -1,
    -1,    -1,    95,    -1,    -1,    -1,    -1,   619,    -1,   621,
   622,    -1,    -1,   625,   626,   627,    -1,   629,   630,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   654,   655,    -1,     3,    -1,    -1,     6,    -1,
    -1,    -1,    -1,   166,   167,    13,    14,    -1,    16,    -1,
    18,    19,   674,    -1,    -1,    -1,    -1,   679,    -1,    -1,
   183,    -1,    30,    -1,    -1,    33,   688,    -1,     1,    -1,
    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,
    -1,    -1,   704,    -1,    -1,    -1,    54,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    -1,
    -1,    -1,    80,    -1,    -1,   737,    84,    -1,    51,    -1,
    88,   743,    90,    -1,    -1,    -1,    -1,    95,    61,    -1,
    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,   760,   761,
    73,    74,    -1,    -1,    13,    14,    -1,    16,    -1,    18,
    19,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    30,    -1,    -1,    33,    -1,   289,    -1,    -1,    38,
    39,   294,   295,    -1,    43,    44,    45,    46,    47,    -1,
    -1,   304,    -1,    -1,    -1,    54,   309,    -1,    -1,     1,
    -1,   813,   814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   825,    -1,   827,   828,   829,   830,    -1,
    -1,    80,    -1,   835,   147,    84,    -1,    -1,    -1,    88,
    -1,    90,    -1,    -1,   846,    -1,    95,    -1,    40,    41,
    -1,    -1,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,
    -1,   863,    -1,   865,    -1,   867,   179,    -1,   181,    61,
   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   203,   204,    -1,    -1,    -1,   398,    -1,    -1,   401,   402,
    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
    -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,    19,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
   942,    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,
    -1,   953,   954,   955,    54,    -1,    -1,    -1,    -1,    -1,
   962,   963,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   166,   167,   289,   979,    -1,   981,
    -1,   294,   295,   486,   487,    -1,    -1,   179,   990,    -1,
    90,   304,    -1,    -1,    -1,    -1,   309,   999,  1000,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1032,    -1,  1034,  1035,  1036,    -1,    -1,    -1,    -1,  1041,
    -1,    -1,    -1,    -1,    -1,    -1,  1048,    -1,  1050,    -1,
  1052,    -1,    -1,    -1,    -1,    -1,  1058,    -1,  1060,    -1,
    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,    -1,
    -1,    -1,    -1,    -1,    -1,    13,    14,  1079,    16,   392,
    18,    19,    -1,   396,   397,   398,    -1,    -1,   401,   402,
    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,
    38,    39,   294,   295,    -1,    43,    44,    45,    46,    47,
    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
    -1,    -1,   625,   626,   627,    -1,   629,   630,    -1,    -1,
    -1,    -1,    -1,   446,   326,   448,    -1,   450,   451,   452,
   453,   454,    80,    -1,    -1,   458,    84,    -1,    -1,    -1,
    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,   361,
   362,   363,    -1,   486,   487,   367,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   380,    -1,
     6,    -1,    -1,    -1,    -1,   508,    -1,    13,    14,    -1,
    16,    -1,    18,    19,   396,   397,    -1,    -1,    -1,   401,
   402,   403,   404,   405,    30,    -1,    -1,    33,    -1,    -1,
    -1,    -1,    38,    39,    -1,    -1,    -1,    43,    44,    45,
    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,
   452,   453,    -1,   576,    80,    -1,    -1,    -1,    84,    -1,
   583,    -1,    88,    -1,    90,    -1,   174,   590,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    12,   609,    -1,    15,    -1,
    -1,    18,    19,    20,    21,    22,   619,    -1,    25,    26,
   813,   814,   625,    30,    -1,    -1,   629,   630,    -1,    -1,
    -1,    -1,    39,    -1,   516,   517,    -1,    -1,    -1,    -1,
    47,    -1,    -1,    -1,     4,     5,     6,    54,    -1,     9,
    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    -1,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,
   863,   674,   865,    80,   867,    35,   679,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,   688,    -1,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,    56,    57,   286,    -1,
    -1,    -1,    -1,    -1,   586,   587,    -1,    -1,   296,    -1,
    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,    -1,
    80,    -1,    82,    83,    84,    -1,    -1,    -1,    88,    -1,
    90,    91,    -1,    -1,   737,    -1,    -1,    -1,    -1,   621,
   622,    -1,    -1,    -1,   626,   627,    -1,    -1,    -1,   942,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   953,   954,   955,    -1,    -1,    -1,    -1,    -1,    -1,   962,
   963,    -1,   654,   655,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     3,     4,     5,     6,   999,  1000,     9,    -1,
   813,   814,    13,    14,    15,    16,    -1,    18,    19,    20,
    21,    22,   704,    -1,    25,    26,    -1,    -1,    -1,    30,
    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,
    -1,    -1,    -1,    54,    -1,  1048,    -1,  1050,    -1,    -1,
   863,   743,   865,    -1,   867,  1058,    -1,  1060,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
    -1,    -1,    -1,    84,   472,    -1,  1079,    88,    -1,    90,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
    -1,   489,   490,    -1,    -1,    -1,   494,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   942,
    -1,    -1,    -1,   825,    -1,   827,   828,   829,   830,    -1,
    -1,    -1,   955,   835,   542,    -1,    -1,    -1,    -1,   547,
   548,   549,    -1,     3,   846,    -1,     6,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    -1,    16,    -1,    18,    19,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   990,    -1,    -1,
    30,    -1,    -1,    33,    -1,    -1,   999,    -1,    38,    39,
    -1,    -1,   590,    43,    44,    45,    46,    47,    -1,    -1,
    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
    -1,   609,    -1,    -1,    -1,   613,    -1,   615,    -1,   617,
    -1,    -1,    -1,    -1,    -1,   623,    -1,    -1,    -1,    -1,
    80,    -1,    -1,    -1,    84,  1048,   634,  1050,    88,    -1,
    90,    -1,    -1,    -1,    -1,  1058,    -1,  1060,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   953,   954,     3,     4,     5,  1079,    -1,    -1,     9,
   962,   963,    -1,    13,    14,    15,    16,    -1,    -1,    19,
    20,    21,    22,    -1,    -1,    25,    26,   979,    -1,   981,
    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    43,    44,    45,    46,    -1,  1000,    -1,
    -1,    -1,   710,    -1,   712,    -1,    -1,   715,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   724,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1032,    -1,  1034,  1035,  1036,    -1,    -1,    -1,    -1,  1041,
   748,    -1,    -1,    -1,   752,    -1,   754,    -1,   756,    -1,
  1052,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    -1,    56,    57,    -1,    -1,   816,   817,
    -1,    -1,   820,    -1,    -1,    67,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   102,   103,    -1,    -1,    -1,   863,    -1,   865,    -1,   867,
    -1,   869,    -1,    -1,    -1,    -1,    -1,   875,    -1,   877,
   878,    -1,   880,     3,     4,     5,     6,     7,    -1,     9,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   918,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    80,    -1,    82,    83,    84,    -1,    -1,    -1,    88,    -1,
    90,    91,    -1,    -1,    -1,     4,     5,     6,    -1,    -1,
     9,    -1,   102,    -1,    -1,    -1,    15,    -1,    -1,    18,
    -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
    39,    -1,  1010,    -1,    -1,    -1,    -1,  1015,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,    56,    57,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,    -1,    82,    83,    84,    -1,    -1,    -1,    88,
    -1,    90,    91,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    12,    -1,   102,    15,    -1,    -1,    18,    19,    20,
    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    -1,    -1,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
    13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
    -1,    84,    -1,    -1,    -1,    88,    -1,    90,     3,     4,
     5,     6,    -1,    -1,     9,    -1,    99,    12,    13,    14,
    15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,    44,
    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
    -1,    -1,    -1,    88,    -1,    90,     3,     4,     5,     6,
    -1,    -1,     9,    -1,    99,    12,    13,    14,    15,    16,
    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
    -1,    88,    -1,    90,    91,    -1,    -1,    -1,    95,     3,
     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,
    14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
    -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
    84,    -1,    -1,    -1,    88,    -1,    90,    91,    -1,    -1,
    -1,    95,     3,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
    81,    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,
    91,    -1,    -1,    -1,    95,     3,     4,     5,     6,    -1,
    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
    18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
    -1,    29,    30,    -1,    -1,    33,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,    -1,
    88,    -1,    90,    91,    -1,    -1,    -1,    95,     3,     4,
     5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,
    15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
    -1,    -1,    -1,    88,    -1,    90,    91,    -1,    -1,    -1,
    95,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
    12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
    22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
    -1,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,
     4,     5,     6,    95,    -1,     9,    -1,    -1,    -1,    -1,
    -1,    15,    -1,    -1,    18,    -1,    20,    21,    22,    -1,
    -1,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
    84,    -1,    -1,    -1,    88,    -1,    90,    91,     4,     5,
     6,    -1,    96,     9,    -1,    -1,    -1,    -1,    -1,    15,
    -1,    -1,    18,    -1,    20,    21,    22,    -1,    -1,    25,
    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    -1,
    -1,    -1,    88,    -1,    90,    91,     4,     5,     6,    -1,
    96,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
    18,    -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,
    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
    48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    80,    -1,    82,    83,    84,    -1,    -1,    -1,
    88,    -1,    90,    91,     3,     4,     5,     6,    96,    -1,
     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    88,
    -1,    90,     3,     4,     5,     6,    95,    -1,     9,    -1,
    -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,
    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
    81,    -1,    -1,    84,    -1,    -1,    -1,    88,    -1,    90,
     3,     4,     5,     6,    95,    -1,     9,    -1,    -1,    12,
    13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
    -1,    84,    -1,    -1,    -1,    88,    -1,    90,     3,     4,
     5,     6,    95,    -1,     9,    -1,    -1,    12,    13,    14,
    15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,    44,
    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
    -1,    -1,    -1,    88,    -1,    90,     3,     4,     5,     6,
    95,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
    -1,    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,
    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,
    -1,    88,    -1,    90,     3,     4,     5,     6,    95,    -1,
     9,    -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,
    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    -1,     3,     4,     5,
     6,    -1,    -1,     9,    -1,    -1,    -1,    13,    14,    15,
    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
    26,    80,    81,    -1,    30,    84,    -1,    33,    -1,    88,
    -1,    90,    38,    39,    -1,    -1,    95,    43,    44,    45,
    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
    13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
    -1,    -1,    25,    26,    80,    -1,    -1,    30,    84,    -1,
    33,    -1,    88,    -1,    90,    38,    39,    -1,    -1,    95,
    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
    -1,    84,    -1,    -1,    -1,    88,    -1,    90,     4,     5,
     6,    -1,    95,     9,    -1,    -1,    -1,    -1,    -1,    15,
    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
    26,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    35,
    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    -1,
    -1,    -1,    88,    -1,    90,    91,     4,     5,     6,    95,
    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
    18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
    -1,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,    37,
    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
    48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    80,    -1,    82,    83,    84,    -1,    -1,    -1,
    88,    -1,    90,    91,     4,     5,     6,    95,    -1,     9,
    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    -1,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,
    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    80,    -1,    82,    83,    84,    -1,    -1,    -1,    88,    -1,
    90,    91,    -1,     0,    -1,    95,     3,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
    -1,    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,
    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
    -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
    21,    22,    -1,    80,    25,    26,    -1,    84,    29,    30,
    -1,    88,    33,    90,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
    81,    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,
    91,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
    12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
    22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
    -1,    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,
    -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,
     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
    13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,
    33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,     4,
     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
    -1,    -1,    -1,    88,    -1,    90,    91,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    -1,    82,    83,    84,    -1,    -1,
    -1,    88,    -1,    90,    91,     4,     5,     6,    -1,    -1,
     9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    18,
    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
    29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,    56,    57,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,    -1,    82,    83,    84,    -1,    -1,    -1,    88,
    -1,    90,    91,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
    -1,    -1,    -1,    -1,    35,    -1,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
    -1,    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,
    91,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
    -1,    -1,    15,    -1,    -1,    18,    -1,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,
    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,     4,
     5,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
    15,    -1,    -1,    18,    -1,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
    -1,    -1,    -1,    88,    -1,    90,    91,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,
    -1,    18,    -1,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
    -1,    88,    -1,    90,    91,     4,     5,     6,    -1,    -1,
     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,
    -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,    56,    57,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,    81,    82,    83,    84,    -1,    -1,    -1,    88,
    -1,    90,    91,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    -1,    20,
    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,
    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
    -1,    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,
    91,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
    -1,    -1,    15,    -1,    -1,    18,    -1,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,
    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,     4,
     5,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
    15,    -1,    -1,    18,    -1,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
    -1,    -1,    -1,    88,    -1,    90,    91,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,
    -1,    18,    -1,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
    -1,    88,    -1,    90,    91,     4,     5,     6,    -1,    -1,
     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,
    -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,    56,    57,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,    81,    82,    83,    84,    -1,    -1,    -1,    88,
    -1,    90,    91,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    -1,    20,
    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,
    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
    81,    82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,
    91,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
    -1,    -1,    15,    -1,    -1,    18,    -1,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,
    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,     4,
     5,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
    35,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
    -1,    -1,    -1,    88,    -1,    90,    91,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,
    -1,    18,    -1,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    -1,    82,    83,    84,    -1,    -1,
    -1,    88,    -1,    90,    91,     4,     5,     6,    -1,    -1,
     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,
    -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,    56,    57,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    80,    -1,    82,    83,    84,    -1,    -1,    -1,    88,
    -1,    90,    91,     3,     4,     5,     6,    -1,    -1,     9,
    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,
    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    88,    -1,
    90,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
    -1,    -1,    15,    -1,    -1,    18,    -1,    20,    21,    22,
    -1,    -1,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,
    -1,    -1,    35,    -1,    37,    38,    39,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
    83,    84,    -1,    -1,    -1,    88,    -1,    90,    91,     4,
     5,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
    15,    -1,    -1,    18,    -1,    20,    21,    22,    -1,    -1,
    25,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
    35,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
    -1,    -1,    -1,    88,    -1,    90,    91,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,
    -1,    18,    -1,    20,    21,    22,    -1,    -1,    25,    26,
    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,
    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    -1,    82,    83,    84,    -1,    -1,
    -1,    88,    -1,    90,    91,     3,     4,     5,     6,    -1,
    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
    18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,
    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,
    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,
    88,    -1,    90,     3,     4,     5,     6,    -1,    -1,     9,
    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,
    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    88,    -1,
    90,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
    12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
    -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
    -1,    -1,    54,    -1,     3,     4,     5,     6,    -1,    -1,
     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
    19,    20,    21,    22,    -1,    -1,    25,    26,    80,    -1,
    -1,    30,    84,    -1,    33,    -1,    88,    -1,    90,    38,
    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    -1,     3,     4,     5,
     6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
    26,    80,    -1,    -1,    30,    84,    -1,    33,    -1,    88,
    -1,    90,    38,    39,    -1,    -1,    -1,    43,    44,    45,
    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
    13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
    -1,    -1,    25,    26,    80,    -1,    -1,    30,    84,    -1,
    33,    -1,    88,    -1,    90,    38,    39,    -1,    -1,    -1,
    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
    -1,    54,    -1,     3,     4,     5,     6,    -1,    -1,     9,
    -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,    19,
    20,    21,    22,    -1,    -1,    25,    26,    80,    -1,    -1,
    30,    84,    -1,    33,    -1,    88,    -1,    90,    38,    39,
    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,
    -1,    -1,    -1,    -1,    54,    -1,     3,     4,     5,     6,
    -1,    -1,     9,    -1,    -1,    -1,    13,    14,    15,    16,
    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
    80,    -1,    -1,    30,    84,    -1,    33,    -1,    88,    -1,
    90,    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,
    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,     3,
     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,    13,
    14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
    -1,    25,    26,    80,    -1,    -1,    30,    84,    -1,    33,
    -1,    88,    -1,    90,    38,    39,    -1,    -1,    -1,    43,
    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
    54,    -1,     3,    -1,    -1,     6,    -1,    -1,    -1,    -1,
    -1,    -1,    13,    14,    -1,    16,    -1,    18,    19,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    30,
    84,    -1,    33,    -1,    88,    -1,    90,    38,    39,    -1,
    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,
    -1,    -1,    -1,    54,     3,     4,     5,     6,    -1,    -1,
     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    80,
    -1,    30,    -1,    84,    33,    -1,    -1,    88,    -1,    90,
    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
    -1,    -1,     3,     4,     5,     6,    -1,    66,     9,    -1,
    -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
    21,    22,    81,    -1,    25,    26,    -1,    -1,    -1,    30,
    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
    -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,
    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
     3,     4,     5,     6,    -1,    66,     9,    -1,    -1,    12,
    13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
    81,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    66
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */


#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc)
#include <alloca.h>
#else /* not sparc */
#if (defined (MSDOS) || defined(WIN32)) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#define YYLEX		yylex(&yylval, &yylloc)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif


#line 169 "bison.simple"
int
yyparse()
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
#ifdef YYLSP_NEEDED
		 &yyls1, size * sizeof (*yylsp),
#endif
		 &yystacksize);

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 67:
#line 537 "codesmartcpp.y"
{;
    break;}
case 69:
#line 538 "codesmartcpp.y"
{;
    break;}
case 175:
#line 812 "codesmartcpp.y"
{ /* this is constraint error, as it
                                        includes a storage class!?!*/ ;
    break;}
case 178:
#line 839 "codesmartcpp.y"
{;
    break;}
case 180:
#line 840 "codesmartcpp.y"
{;
    break;}
case 182:
#line 841 "codesmartcpp.y"
{;
    break;}
case 187:
#line 854 "codesmartcpp.y"
{;
    break;}
case 189:
#line 855 "codesmartcpp.y"
{;
    break;}
case 191:
#line 856 "codesmartcpp.y"
{;
    break;}
case 193:
#line 857 "codesmartcpp.y"
{;
    break;}
case 195:
#line 858 "codesmartcpp.y"
{;
    break;}
case 197:
#line 859 "codesmartcpp.y"
{;
    break;}
case 380:
#line 1372 "codesmartcpp.y"
{;
    break;}
case 383:
#line 1385 "codesmartcpp.y"
{;
    break;}
case 508:
#line 1791 "codesmartcpp.y"
{;
    break;}
case 510:
#line 1793 "codesmartcpp.y"
{;
    break;}
case 512:
#line 1795 "codesmartcpp.y"
{;
    break;}
case 514:
#line 1797 "codesmartcpp.y"
{;
    break;}
case 516:
#line 1799 "codesmartcpp.y"
{;
    break;}
case 518:
#line 1801 "codesmartcpp.y"
{;
    break;}
case 520:
#line 1803 "codesmartcpp.y"
{;
    break;}
case 522:
#line 1805 "codesmartcpp.y"
{;
    break;}
case 644:
#line 2269 "codesmartcpp.y"
{ /*scan for upcoming name in file scope */ ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 442 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  for (x = 0; x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = 0; x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 2345 "codesmartcpp.y"

yyerror(char*string)
{
    printf("parser error: %s\n", string);
}


main()
{
    yyparse();
}