/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.yy" /* yacc.c:339  */


#line 69 "y.tab.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.hh".  */
#ifndef YY_YY_Y_TAB_HH_INCLUDED
# define YY_YY_Y_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 5 "mini_l.yy" /* yacc.c:355  */


#include <list>
#include <string>
#include <functional>
	/* define the sturctures using as types for non-terminals */

	/* end the structures for non-terminal types */

#line 109 "y.tab.cc" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "mini_l.yy" /* yacc.c:355  */

int ival;
char* cval;

#line 181 "y.tab.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "y.tab.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 16 "mini_l.yy" /* yacc.c:359  */

#include <iostream>
#include "y.tab.hh"

	/* you may need these header files
	 * add more header file if you need more
	 */
#include <sstream>
#include <map>
#include <regex>
#include <set>

using namespace std;

yy::parser::symbol_type yylex();
	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */

	/* end of your code */

#line 221 "y.tab.cc" /* yacc.c:359  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    67,    69,    74,    79,    80,    81,    83,
      84,    86,    88,    89,    90,    92,    93,    94,    96,    97,
      98,    99,   101,   102,   103,   104,   105,   106,   108,   109,
     110,   111,   112,   113,   115,   116,   118,   119,   120,   123,
     124,   126,   127,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   140,   141,   142,   143,   144,   145,   147,
     148,   149,   151,   152,   153,   154,   156,   157,   158,   159,
     160,   161,   162,   163,   165,   166,   167
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS",
  "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY",
  "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO",
  "FOR", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR",
  "NOT", "TRUE", "FALSE", "RETURN", "ADD", "SUB", "MULT", "DIV", "MOD",
  "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "EQUAL", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "ASSIGN", "IDENT", "NUMBER", "UMINUS", "$accept", "program", "function",
  "Declarations", "DeclarationDef", "identifier", "Statements",
  "StatementDef", "Var_loop", "Var", "Bool_Exp", "Relation_And_Expr",
  "Relation_Expr", "Comp", "Expression", "Mutiplicative_Expr", "Term",
  "Expression_loop", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   117,   -44,   -44,   -38,   -43,   253,   -36,
     -26,   208,   210,   217,   -24,   139,   149,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,    10,    14,    15,    49,    50,    72,    62,
      63,    64,    65,   111,    66,    67,    68,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 66 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"program -> epsilon\n";}
#line 1456 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"program -> program -> function\n";}
#line 1462 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 73 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"function -> FUNCTION IDENT " <<(yyvsp[-10].cval) " SEMICOLON BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY\n";}
#line 1468 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Declarations -> epsilon\n";}
#line 1474 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Declarations -> Declarations DeclarationDef SEMICOLON\n";}
#line 1480 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 83 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"DeclarationDef -> identifier COLON INTEGER\n";}
#line 1486 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 85 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER " <<(yyvsp[-3].ival) <<" R_SQUARE_BRACKET OF INTEGER\n";}
#line 1492 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 87 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER " <<(yyvsp[-6].ival) <<"R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER " <<(yyvsp[-3].ival) <<"R_SQUARE_BRACKET OF INTEGER\n";}
#line 1498 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 92 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"identifier -> IDENT " <<(yyvsp[0].cval) <<"\n";}
#line 1504 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 93 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"identifier -> identifier COMMA IDENT " <<(yyvsp[0].cval) <<"\n";}
#line 1510 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 96 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Statements -> StatementDef SEMICOLON\n"}
#line 1516 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Statements -> Statements StatementDef SEMICOLON\n";}
#line 1522 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> Var ASSIGN Expression\n";}
#line 1528 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 102 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> IF Bool_Exp THEN Statements ENDIF\n";}
#line 1534 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> IF Bool_Exp THEN Statements ELSE Statements ENDIF\n";}
#line 1540 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 104 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> WHILE Bool_Exp BEGINLOOP Statements ENDLOOP\n";}
#line 1546 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 105 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp\n";}
#line 1552 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> FOR Var ASSIGN NUMBER SEMICOLON Bool_Exp SEMICOLON Var ASSIGN Expression BEGINLOOP Statements ENDLOOP\n";}
#line 1558 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> READ Var_loop\n";}
#line 1564 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 109 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> WRITE Var_loop\n";}
#line 1570 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 110 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> CONTINUE\n";}
#line 1576 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 111 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"StatementDef -> RETURN Expression\n";}
#line 1582 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 115 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Var_loop -> Var\n";}
#line 1588 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 116 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Var_loop -> Var_loop COMMA Var\n";}
#line 1594 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 118 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Var -> IDENT " <<(yyvsp[0].cval) <<"\n";}
#line 1600 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 119 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Var -> IDENT " <<(yyvsp[-3].cval) <<" L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n";}
#line 1606 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 121 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Var -> IDENT " <<(yyvsp[-6].cval) <<" L_SQUARE_BRACKET Expression R_SQUARE_BRACKET L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n";}
#line 1612 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 123 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Bool_Exp -> Relation_And_Expr\n";}
#line 1618 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 124 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Bool_Exp -> Bool_Exp OR Relation_And_Expr\n";}
#line 1624 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 126 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_And_Expr -> Relation_Expr\n";}
#line 1630 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 127 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_And_Expr -> Relation_And_Expr AND Relation_Expr\n";}
#line 1636 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 129 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> Expression Comp Expression\n";}
#line 1642 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 130 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> NOT Expression Comp Expression\n";}
#line 1648 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 131 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> TRUE\n";}
#line 1654 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 132 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> NOT TRUE\n";}
#line 1660 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 133 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> FALSE\n";}
#line 1666 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 134 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> NOT FALSE\n";}
#line 1672 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> L_PAREN Bool_Exp R_PAREN\n";}
#line 1678 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 136 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Relation_Expr -> NOT L_PAREN Bool_Exp R_PAREN\n";}
#line 1684 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 140 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Comp -> EQ\n";}
#line 1690 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 141 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Comp -> NEQ\n";}
#line 1696 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 142 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Comp -> LT\n";}
#line 1702 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 143 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Comp -> GT\n";}
#line 1708 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Comp -> LTE\n";}
#line 1714 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Comp -> GTE\n";}
#line 1720 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 147 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Expression -> Mutiplicative_Expr\n";}
#line 1726 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 148 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Expression -> Mutiplicative_Expr ADD Mutiplicative_Expr\n";}
#line 1732 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 149 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Expression -> Mutiplicative_Expr SUB Mutiplicative_Expr\n";}
#line 1738 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 151 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Mutiplicative_Expr -> Term\n";}
#line 1744 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr MULT Term\n";}
#line 1750 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr DIV Term\n";}
#line 1756 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr MOD Term\n";}
#line 1762 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 156 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Term -> Var\n";}
#line 1768 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 157 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Term -> SUB Var\n";}
#line 1774 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 158 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Term -> NUMBER " <<(yyvsp[0].ival) <<"\n";}
#line 1780 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 159 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Term -> SUB NUMBER " (yyvsp[0].ival) <<"\n";}
#line 1786 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 160 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Term -> L_PAREN Expression R_PAREN\n";}
#line 1792 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 161 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Term -> SUB L_PAREN Expression R_PAREN\n";}
#line 1798 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 162 "mini_l.yy" /* yacc.c:1646  */
    {printf("Term -> IDENT %s L_PAREN Expression_loop R_PAREN\n", (yyvsp[-3].cval));}
#line 1804 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 163 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Term -> IDENT " <<(yyvsp[-2].cval) <<" L_PAREN /* epsilon */ R_PAREN\n";}
#line 1810 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 165 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Expression_loop -> Expression\n";}
#line 1816 "y.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 166 "mini_l.yy" /* yacc.c:1646  */
    {cout <<"Expression_loop -> Expression_loop COMMA Expression\n";}
#line 1822 "y.tab.cc" /* yacc.c:1646  */
    break;


#line 1826 "y.tab.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 169 "mini_l.yy" /* yacc.c:1906  */


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