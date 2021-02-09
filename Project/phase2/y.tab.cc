/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FUNCTION = 258,
     BEGIN_PARAMS = 259,
     END_PARAMS = 260,
     BEGIN_LOCALS = 261,
     END_LOCALS = 262,
     BEGIN_BODY = 263,
     END_BODY = 264,
     INTEGER = 265,
     ARRAY = 266,
     OF = 267,
     IF = 268,
     THEN = 269,
     ENDIF = 270,
     ELSE = 271,
     WHILE = 272,
     DO = 273,
     FOR = 274,
     BEGINLOOP = 275,
     ENDLOOP = 276,
     CONTINUE = 277,
     READ = 278,
     WRITE = 279,
     AND = 280,
     OR = 281,
     NOT = 282,
     TRUE = 283,
     FALSE = 284,
     RETURN = 285,
     ADD = 286,
     SUB = 287,
     MULT = 288,
     DIV = 289,
     MOD = 290,
     EQ = 291,
     NEQ = 292,
     LT = 293,
     GT = 294,
     LTE = 295,
     GTE = 296,
     SEMICOLON = 297,
     COLON = 298,
     COMMA = 299,
     L_PAREN = 300,
     R_PAREN = 301,
     EQUAL = 302,
     L_SQUARE_BRACKET = 303,
     R_SQUARE_BRACKET = 304,
     ASSIGN = 305,
     IDENT = 306,
     NUMBER = 307,
     UMINUS = 308
   };
#endif
/* Tokens.  */
#define FUNCTION 258
#define BEGIN_PARAMS 259
#define END_PARAMS 260
#define BEGIN_LOCALS 261
#define END_LOCALS 262
#define BEGIN_BODY 263
#define END_BODY 264
#define INTEGER 265
#define ARRAY 266
#define OF 267
#define IF 268
#define THEN 269
#define ENDIF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define FOR 274
#define BEGINLOOP 275
#define ENDLOOP 276
#define CONTINUE 277
#define READ 278
#define WRITE 279
#define AND 280
#define OR 281
#define NOT 282
#define TRUE 283
#define FALSE 284
#define RETURN 285
#define ADD 286
#define SUB 287
#define MULT 288
#define DIV 289
#define MOD 290
#define EQ 291
#define NEQ 292
#define LT 293
#define GT 294
#define LTE 295
#define GTE 296
#define SEMICOLON 297
#define COLON 298
#define COMMA 299
#define L_PAREN 300
#define R_PAREN 301
#define EQUAL 302
#define L_SQUARE_BRACKET 303
#define R_SQUARE_BRACKET 304
#define ASSIGN 305
#define IDENT 306
#define NUMBER 307
#define UMINUS 308




/* Copy the first part of user declarations.  */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1 "mini_l.yy"
{
int ival;
char* cval;
}
/* Line 193 of yacc.c.  */
#line 208 "y.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 221 "y.tab.cc"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    20,    33,    34,    38,    42,
      46,    55,    67,    71,    80,    92,    94,    98,   102,   105,
     109,   112,   116,   120,   126,   134,   140,   147,   161,   164,
     167,   169,   172,   176,   190,   192,   196,   198,   203,   211,
     213,   217,   219,   223,   227,   232,   234,   237,   239,   242,
     246,   251,   255,   260,   262,   264,   266,   268,   270,   272,
     274,   278,   282,   284,   288,   292,   296,   298,   301,   303,
     306,   310,   315,   320,   324,   326,   330
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    -1,    55,    56,    -1,     3,    51,    42,
       4,    57,     5,     6,    57,     7,     8,    60,     9,    -1,
       3,    51,     1,     4,    57,     5,     6,    57,     7,     8,
      60,     9,    -1,    -1,    57,    58,    42,    -1,    57,    58,
       1,    -1,    59,    43,    10,    -1,    59,    43,    11,    48,
      52,    49,    12,    10,    -1,    59,    43,    11,    48,    52,
      49,    48,    52,    49,    12,    10,    -1,    59,     1,    10,
      -1,    59,     1,    11,    48,    52,    49,    12,    10,    -1,
      59,     1,    11,    48,    52,    49,    48,    52,    49,    12,
      10,    -1,    51,    -1,    59,    44,    51,    -1,    59,     1,
      51,    -1,    61,    42,    -1,    60,    61,    42,    -1,    61,
       1,    -1,    60,    61,     1,    -1,    63,    50,    68,    -1,
      13,    64,    14,    60,    15,    -1,    13,    64,    14,    60,
      16,    60,    15,    -1,    17,    64,    20,    60,    21,    -1,
      18,    20,    60,    21,    17,    64,    -1,    19,    63,    50,
      52,    42,    64,    42,    63,    50,    68,    20,    60,    21,
      -1,    23,    62,    -1,    24,    62,    -1,    22,    -1,    30,
      68,    -1,    63,     1,    68,    -1,    19,    63,     1,    52,
       1,    64,     1,    63,     1,    68,    20,    60,    21,    -1,
      63,    -1,    62,    44,    63,    -1,    51,    -1,    51,    48,
      68,    49,    -1,    51,    48,    68,    49,    48,    68,    49,
      -1,    65,    -1,    64,    26,    65,    -1,    66,    -1,    65,
      25,    66,    -1,    68,    67,    68,    -1,    27,    68,    67,
      68,    -1,    28,    -1,    27,    28,    -1,    29,    -1,    27,
      29,    -1,    45,    64,    46,    -1,    27,    45,    64,    46,
      -1,    68,     1,    68,    -1,    27,    68,     1,    68,    -1,
      36,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    69,    -1,    68,    31,    69,    -1,    68,    32,
      69,    -1,    70,    -1,    69,    33,    70,    -1,    69,    34,
      70,    -1,    69,    35,    70,    -1,    63,    -1,    32,    63,
      -1,    52,    -1,    32,    52,    -1,    45,    68,    46,    -1,
      32,    45,    68,    46,    -1,    51,    45,    71,    46,    -1,
      51,    45,    46,    -1,    68,    -1,    71,    44,    68,    -1,
      71,     1,    68,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    28,    30,    35,    40,    41,    42,    44,
      45,    47,    49,    50,    51,    53,    54,    55,    57,    58,
      59,    60,    62,    63,    64,    65,    66,    67,    69,    70,
      71,    72,    73,    74,    76,    77,    79,    80,    81,    84,
      85,    87,    88,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   101,   102,   103,   104,   105,   106,   108,
     109,   110,   112,   113,   114,   115,   117,   118,   119,   120,
     121,   122,   123,   124,   126,   127,   128
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOR",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT",
  "TRUE", "FALSE", "RETURN", "ADD", "SUB", "MULT", "DIV", "MOD", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "EQUAL", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "ASSIGN", "IDENT", "NUMBER", "UMINUS", "$accept", "program", "function",
  "Declarations", "DeclarationDef", "identifier", "Statements",
  "StatementDef", "Var_loop", "Var", "Bool_Exp", "Relation_And_Expr",
  "Relation_Expr", "Comp", "Expression", "Mutiplicative_Expr", "Term",
  "Expression_loop", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    57,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,    12,     0,     3,     3,     3,
       8,    11,     3,     8,    11,     1,     3,     3,     2,     3,
       2,     3,     3,     5,     7,     5,     6,    13,     2,     2,
       1,     2,     3,    13,     1,     3,     1,     4,     7,     1,
       3,     1,     3,     3,     4,     1,     2,     1,     2,     3,
       4,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     1,     2,
       3,     4,     4,     3,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,     0,     0,     6,     6,
       0,     0,     0,    15,     0,     0,     0,     6,     8,     7,
       0,     0,     0,     6,     0,    12,     0,    17,     9,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,    45,    47,     0,     0,
      36,    68,    66,     0,    39,    41,     0,    59,    62,     0,
       0,     0,    28,    34,    29,     0,    31,     0,     5,     0,
      20,    18,     0,     0,     0,     0,     0,     0,     4,    46,
      48,     0,     0,     0,    69,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    19,    32,    22,    13,     0,    10,     0,
       0,     0,     0,     0,    49,    70,    73,    74,     0,     0,
      40,    42,    51,    60,    61,    43,    63,    64,    65,     0,
       0,     0,     0,    35,    37,     0,     0,    50,    52,    44,
      71,     0,     0,    72,    23,     0,    25,     0,     0,     0,
       0,     0,     0,    76,    75,     0,    26,     0,     0,     0,
      14,    11,    24,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,    10,    14,    15,    49,    50,    72,    62,
      63,    64,    65,   111,    66,    67,    68,   138
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int16 yypact[] =
{
     -44,    21,   -44,   -35,   -44,    26,    38,    43,   -44,   -44,
      -3,    -1,    69,   -44,    39,    27,    82,   -44,   -44,   -44,
      15,   187,    46,   -44,     5,   -44,    51,   -44,   -44,    56,
     -44,    13,   106,    71,    81,   161,   297,   140,   151,   297,
     301,   301,   183,   122,   -44,   122,   122,   129,   165,   153,
      40,     4,    24,    64,   169,    73,   -44,   -44,    -6,   301,
     115,   -44,   -44,    84,   198,   -44,   178,   172,   -44,   124,
     297,     7,   182,   -44,   182,   129,   180,   129,   -44,    42,
     -44,   -44,   129,   129,   226,   195,   238,   199,   -44,   -44,
     -44,   301,   193,   129,   -44,   -44,     3,    54,   176,   297,
     301,   301,   129,   129,   129,   -44,   -44,   -44,   -44,   -44,
     -44,   129,   129,   129,   129,   297,    98,   204,   212,   122,
       6,   104,   -44,   -44,   180,   180,   -44,   201,   -44,   219,
      63,   129,   129,    99,   -44,   -44,   -44,   180,    16,   222,
     198,   -44,   180,   172,   172,   180,   -44,   -44,   -44,   236,
     255,   276,   237,   -44,   230,   269,   271,   -44,   180,   180,
     -44,   129,   129,   -44,   -44,   297,   -44,   301,   301,   301,
     129,   282,   284,   180,   180,   252,   272,    18,   -12,   136,
     -44,   -44,   -44,   122,   122,   -44,   292,   245,   129,   129,
     164,   170,   297,   297,   267,   283,   -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   117,   -44,   -44,   -38,   -43,   253,   -36,
     -26,   208,   210,   217,   -24,   139,   149,   -44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      51,    54,    12,    51,    16,    82,    79,    71,   117,    73,
      73,    79,    32,    51,   100,    69,     5,   161,    51,   183,
      35,     2,    95,    76,     3,    25,    26,     6,    20,   100,
     184,    92,   116,    96,    51,    97,    84,   103,   104,    93,
      18,    80,     8,   122,   100,    48,    94,     9,    13,   134,
      13,   120,   135,   121,    83,   102,    13,   118,   124,   125,
     162,   139,   163,    51,    13,   130,    27,    97,     7,   133,
      21,    22,    85,    79,   137,    17,    86,   149,   142,    51,
      51,    19,    81,   153,   123,   103,   104,   145,    23,   100,
     105,   106,   107,   108,   109,   110,    79,    30,    99,    33,
     135,    89,    90,    51,    34,    58,    79,   158,   159,   157,
     100,    40,    87,    51,    36,    41,    42,    43,    91,   150,
      44,    45,    46,    37,    60,    61,    11,   175,    47,    51,
     103,   104,    79,    38,    24,   103,   104,   173,   174,    51,
      31,   176,   177,   178,   115,   160,   179,   186,   187,    48,
     100,    79,    79,   154,   194,   195,    51,    51,    51,    51,
      98,    58,    78,    77,   190,   191,    40,   103,   104,    39,
      41,    42,    43,    48,    75,    44,    45,    46,    88,   102,
      60,    61,    40,    47,   192,   185,    41,    42,    43,    52,
     193,    44,    45,    46,   131,   103,   104,    28,    29,    47,
      53,   103,   104,    70,    48,   112,   113,   114,    58,   103,
     104,   103,   104,    77,   105,   106,   107,   108,   109,   110,
      48,    75,   136,   101,   103,   104,   119,    60,    61,   105,
     106,   107,   108,   109,   110,    40,   126,   164,   165,    41,
      42,    43,   143,   144,    44,    45,    46,   127,   128,    40,
     155,   129,    47,    41,    42,    43,   151,   166,    44,    45,
      46,   146,   147,   148,   152,    40,    47,   182,   156,    41,
      42,    43,   167,    48,    44,    45,    46,   168,   170,   169,
      40,   171,    47,   172,    41,    42,    43,    48,   196,    44,
      45,    46,   180,   188,   181,   189,    40,    47,   100,    74,
      41,    42,    43,    48,   197,    44,    45,    46,   140,   132,
      40,   141,     0,    47,    41,    42,    43,     0,    48,    44,
      45,    46,     0,     0,     0,     0,     0,    47,    55,    56,
      57,     0,     0,    58,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,    48,     0,
       0,     0,    60,    61
};

static const yytype_int16 yycheck[] =
{
      36,    39,     5,    39,     5,     1,    49,    43,     1,    45,
      46,    54,     7,    49,    26,    41,    51,     1,    54,     1,
       7,     0,    58,    47,     3,    10,    11,     1,     1,    26,
      42,    55,    70,    59,    70,    59,    12,    31,    32,    45,
       1,     1,     4,     1,    26,    51,    52,     4,    51,    46,
      51,    75,    46,    77,    50,     1,    51,    50,    82,    83,
      44,    99,    46,    99,    51,    91,    51,    91,    42,    93,
      43,    44,    48,   116,    98,     6,    12,   115,   102,   115,
     116,    42,    42,   119,    42,    31,    32,   111,     6,    26,
      36,    37,    38,    39,    40,    41,   139,    51,    14,    48,
      46,    28,    29,   139,    48,    32,   149,   131,   132,    46,
      26,    13,    48,   149,     8,    17,    18,    19,    45,    21,
      22,    23,    24,    52,    51,    52,     9,   165,    30,   165,
      31,    32,   175,    52,    17,    31,    32,   161,   162,   175,
      23,   167,   168,   169,    20,    46,   170,   183,   184,    51,
      26,   194,   195,    49,   192,   193,   192,   193,   194,   195,
      45,    32,     9,    48,   188,   189,    13,    31,    32,     8,
      17,    18,    19,    51,    45,    22,    23,    24,     9,     1,
      51,    52,    13,    30,    20,    49,    17,    18,    19,    49,
      20,    22,    23,    24,     1,    31,    32,    10,    11,    30,
      49,    31,    32,    20,    51,    33,    34,    35,    32,    31,
      32,    31,    32,    48,    36,    37,    38,    39,    40,    41,
      51,    45,    46,    25,    31,    32,    44,    51,    52,    36,
      37,    38,    39,    40,    41,    13,    10,    15,    16,    17,
      18,    19,   103,   104,    22,    23,    24,    52,    10,    13,
      49,    52,    30,    17,    18,    19,    52,    21,    22,    23,
      24,   112,   113,   114,    52,    13,    30,    15,    49,    17,
      18,    19,    17,    51,    22,    23,    24,     1,    48,    42,
      13,    12,    30,    12,    17,    18,    19,    51,    21,    22,
      23,    24,    10,     1,    10,    50,    13,    30,    26,    46,
      17,    18,    19,    51,    21,    22,    23,    24,   100,    92,
      13,   101,    -1,    30,    17,    18,    19,    -1,    51,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    27,    28,
      29,    -1,    -1,    32,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    51,    -1,
      -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,     0,     3,    56,    51,     1,    42,     4,     4,
      57,    57,     5,    51,    58,    59,     5,     6,     1,    42,
       1,    43,    44,     6,    57,    10,    11,    51,    10,    11,
      51,    57,     7,    48,    48,     7,     8,    52,    52,     8,
      13,    17,    18,    19,    22,    23,    24,    30,    51,    60,
      61,    63,    49,    49,    60,    27,    28,    29,    32,    45,
      51,    52,    63,    64,    65,    66,    68,    69,    70,    64,
      20,    63,    62,    63,    62,    45,    68,    48,     9,    61,
       1,    42,     1,    50,    12,    48,    12,    48,     9,    28,
      29,    45,    68,    45,    52,    63,    64,    68,    45,    14,
      26,    25,     1,    31,    32,    36,    37,    38,    39,    40,
      41,    67,    33,    34,    35,    20,    60,     1,    50,    44,
      68,    68,     1,    42,    68,    68,    10,    52,    10,    52,
      64,     1,    67,    68,    46,    46,    46,    68,    71,    60,
      65,    66,    68,    69,    69,    68,    70,    70,    70,    60,
      21,    52,    52,    63,    49,    49,    49,    46,    68,    68,
      46,     1,    44,    46,    15,    16,    21,    17,     1,    42,
      48,    12,    12,    68,    68,    60,    64,    64,    64,    68,
      10,    10,    15,     1,    42,    49,    63,    63,     1,    50,
      68,    68,    20,    20,    60,    60,    21,    21
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 27 "mini_l.yy"
    {cout <<"program -> epsilon\n";;}
    break;

  case 3:
#line 28 "mini_l.yy"
    {cout <<"program -> program -> function\n";;}
    break;

  case 4:
#line 34 "mini_l.yy"
    {cout <<"function -> FUNCTION IDENT " <<(yyvsp[(2) - (12)].cval) " SEMICOLON BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY\n";;}
    break;

  case 6:
#line 40 "mini_l.yy"
    {cout <<"Declarations -> epsilon\n";;}
    break;

  case 7:
#line 41 "mini_l.yy"
    {cout <<"Declarations -> Declarations DeclarationDef SEMICOLON\n";;}
    break;

  case 9:
#line 44 "mini_l.yy"
    {cout <<"DeclarationDef -> identifier COLON INTEGER\n";;}
    break;

  case 10:
#line 46 "mini_l.yy"
    {cout <<"DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER " <<(yyvsp[(5) - (8)].ival) <<" R_SQUARE_BRACKET OF INTEGER\n";;}
    break;

  case 11:
#line 48 "mini_l.yy"
    {cout <<"DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER " <<(yyvsp[(5) - (11)].ival) <<"R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER " <<(yyvsp[(8) - (11)].ival) <<"R_SQUARE_BRACKET OF INTEGER\n";;}
    break;

  case 15:
#line 53 "mini_l.yy"
    {cout <<"identifier -> IDENT " <<(yyvsp[(1) - (1)].cval) <<"\n";;}
    break;

  case 16:
#line 54 "mini_l.yy"
    {cout <<"identifier -> identifier COMMA IDENT " <<(yyvsp[(3) - (3)].cval) <<"\n";;}
    break;

  case 18:
#line 57 "mini_l.yy"
    {cout <<"Statements -> StatementDef SEMICOLON\n";}
    break;

  case 19:
#line 58 "mini_l.yy"
    {cout <<"Statements -> Statements StatementDef SEMICOLON\n";;}
    break;

  case 22:
#line 62 "mini_l.yy"
    {cout <<"StatementDef -> Var ASSIGN Expression\n";;}
    break;

  case 23:
#line 63 "mini_l.yy"
    {cout <<"StatementDef -> IF Bool_Exp THEN Statements ENDIF\n";;}
    break;

  case 24:
#line 64 "mini_l.yy"
    {cout <<"StatementDef -> IF Bool_Exp THEN Statements ELSE Statements ENDIF\n";;}
    break;

  case 25:
#line 65 "mini_l.yy"
    {cout <<"StatementDef -> WHILE Bool_Exp BEGINLOOP Statements ENDLOOP\n";;}
    break;

  case 26:
#line 66 "mini_l.yy"
    {cout <<"StatementDef -> DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp\n";;}
    break;

  case 27:
#line 68 "mini_l.yy"
    {cout <<"StatementDef -> FOR Var ASSIGN NUMBER SEMICOLON Bool_Exp SEMICOLON Var ASSIGN Expression BEGINLOOP Statements ENDLOOP\n";;}
    break;

  case 28:
#line 69 "mini_l.yy"
    {cout <<"StatementDef -> READ Var_loop\n";;}
    break;

  case 29:
#line 70 "mini_l.yy"
    {cout <<"StatementDef -> WRITE Var_loop\n";;}
    break;

  case 30:
#line 71 "mini_l.yy"
    {cout <<"StatementDef -> CONTINUE\n";;}
    break;

  case 31:
#line 72 "mini_l.yy"
    {cout <<"StatementDef -> RETURN Expression\n";;}
    break;

  case 34:
#line 76 "mini_l.yy"
    {cout <<"Var_loop -> Var\n";;}
    break;

  case 35:
#line 77 "mini_l.yy"
    {cout <<"Var_loop -> Var_loop COMMA Var\n";;}
    break;

  case 36:
#line 79 "mini_l.yy"
    {cout <<"Var -> IDENT " <<(yyvsp[(1) - (1)].cval) <<"\n";;}
    break;

  case 37:
#line 80 "mini_l.yy"
    {cout <<"Var -> IDENT " <<(yyvsp[(1) - (4)].cval) <<" L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n";;}
    break;

  case 38:
#line 82 "mini_l.yy"
    {cout <<"Var -> IDENT " <<(yyvsp[(1) - (7)].cval) <<" L_SQUARE_BRACKET Expression R_SQUARE_BRACKET L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n";;}
    break;

  case 39:
#line 84 "mini_l.yy"
    {cout <<"Bool_Exp -> Relation_And_Expr\n";;}
    break;

  case 40:
#line 85 "mini_l.yy"
    {cout <<"Bool_Exp -> Bool_Exp OR Relation_And_Expr\n";;}
    break;

  case 41:
#line 87 "mini_l.yy"
    {cout <<"Relation_And_Expr -> Relation_Expr\n";;}
    break;

  case 42:
#line 88 "mini_l.yy"
    {cout <<"Relation_And_Expr -> Relation_And_Expr AND Relation_Expr\n";;}
    break;

  case 43:
#line 90 "mini_l.yy"
    {cout <<"Relation_Expr -> Expression Comp Expression\n";;}
    break;

  case 44:
#line 91 "mini_l.yy"
    {cout <<"Relation_Expr -> NOT Expression Comp Expression\n";;}
    break;

  case 45:
#line 92 "mini_l.yy"
    {cout <<"Relation_Expr -> TRUE\n";;}
    break;

  case 46:
#line 93 "mini_l.yy"
    {cout <<"Relation_Expr -> NOT TRUE\n";;}
    break;

  case 47:
#line 94 "mini_l.yy"
    {cout <<"Relation_Expr -> FALSE\n";;}
    break;

  case 48:
#line 95 "mini_l.yy"
    {cout <<"Relation_Expr -> NOT FALSE\n";;}
    break;

  case 49:
#line 96 "mini_l.yy"
    {cout <<"Relation_Expr -> L_PAREN Bool_Exp R_PAREN\n";;}
    break;

  case 50:
#line 97 "mini_l.yy"
    {cout <<"Relation_Expr -> NOT L_PAREN Bool_Exp R_PAREN\n";;}
    break;

  case 53:
#line 101 "mini_l.yy"
    {cout <<"Comp -> EQ\n";;}
    break;

  case 54:
#line 102 "mini_l.yy"
    {cout <<"Comp -> NEQ\n";;}
    break;

  case 55:
#line 103 "mini_l.yy"
    {cout <<"Comp -> LT\n";;}
    break;

  case 56:
#line 104 "mini_l.yy"
    {cout <<"Comp -> GT\n";;}
    break;

  case 57:
#line 105 "mini_l.yy"
    {cout <<"Comp -> LTE\n";;}
    break;

  case 58:
#line 106 "mini_l.yy"
    {cout <<"Comp -> GTE\n";;}
    break;

  case 59:
#line 108 "mini_l.yy"
    {cout <<"Expression -> Mutiplicative_Expr\n";;}
    break;

  case 60:
#line 109 "mini_l.yy"
    {cout <<"Expression -> Mutiplicative_Expr ADD Mutiplicative_Expr\n";;}
    break;

  case 61:
#line 110 "mini_l.yy"
    {cout <<"Expression -> Mutiplicative_Expr SUB Mutiplicative_Expr\n";;}
    break;

  case 62:
#line 112 "mini_l.yy"
    {cout <<"Mutiplicative_Expr -> Term\n";;}
    break;

  case 63:
#line 113 "mini_l.yy"
    {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr MULT Term\n";;}
    break;

  case 64:
#line 114 "mini_l.yy"
    {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr DIV Term\n";;}
    break;

  case 65:
#line 115 "mini_l.yy"
    {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr MOD Term\n";;}
    break;

  case 66:
#line 117 "mini_l.yy"
    {cout <<"Term -> Var\n";;}
    break;

  case 67:
#line 118 "mini_l.yy"
    {cout <<"Term -> SUB Var\n";;}
    break;

  case 68:
#line 119 "mini_l.yy"
    {cout <<"Term -> NUMBER " <<(yyvsp[(1) - (1)].ival) <<"\n";;}
    break;

  case 69:
#line 120 "mini_l.yy"
    {cout <<"Term -> SUB NUMBER " (yyvsp[(2) - (2)].ival) <<"\n";;}
    break;

  case 70:
#line 121 "mini_l.yy"
    {cout <<"Term -> L_PAREN Expression R_PAREN\n";;}
    break;

  case 71:
#line 122 "mini_l.yy"
    {cout <<"Term -> SUB L_PAREN Expression R_PAREN\n";;}
    break;

  case 72:
#line 123 "mini_l.yy"
    {printf("Term -> IDENT %s L_PAREN Expression_loop R_PAREN\n", (yyvsp[(1) - (4)].cval));;}
    break;

  case 73:
#line 124 "mini_l.yy"
    {cout <<"Term -> IDENT " <<(yyvsp[(1) - (3)].cval) <<" L_PAREN /* epsilon */ R_PAREN\n";;}
    break;

  case 74:
#line 126 "mini_l.yy"
    {cout <<"Expression_loop -> Expression\n";;}
    break;

  case 75:
#line 127 "mini_l.yy"
    {cout <<"Expression_loop -> Expression_loop COMMA Expression\n";;}
    break;


/* Line 1267 of yacc.c.  */
#line 1920 "y.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 130 "mini_l.yy"


int main(int argc, char **argv) {
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m) {
	//std::cerr << l << ": " << m << std::endl;
	cout <<l <<": " <<m <<endl;
}

void yyerror(const char *msg) {
   cout <<"** Line " <<x <<", position " <<y <<": " <<msg <<"\n";
}
