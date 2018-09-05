/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "linguagem.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <string.h>
	#include "variavel.c"
	#include "instrucao.c"
	#include "while.h"
	#include "ifelse.h"

	extern int yylineno;

	int yylex();
	int yyerror(char *s);

	Variavel *variaveis = NULL;
	Variavel *auxVar = NULL;
	Instrucao *instrucoes = NULL;
	Instrucao *auxInst = NULL;
	WhileCicle *whiles = NULL;
	WhileCicle *auxWhile = NULL; 
	IfElse *ifelses = NULL;
	IfElse *auxIfElse = NULL;

	int globalpointer;
	int nInst = 0;
	int nWhile = 0;
	int erro = 0;


#line 95 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    num = 258,
    var = 259,
    STRING = 260,
    MULT = 261,
    ADD = 262,
    SUB = 263,
    DIV = 264,
    REST = 265,
    GREATER = 266,
    LESSER = 267,
    EQUAL = 268,
    DIFFERENT = 269,
    LTE = 270,
    GTE = 271,
    AND = 272,
    OR = 273,
    NOT = 274,
    DECLARACOES = 275,
    GET = 276,
    GO = 277,
    STOP = 278,
    PUT = 279,
    WHILE = 280,
    IF = 281,
    ELSE = 282,
    ERRO = 283
  };
#endif
/* Tokens.  */
#define num 258
#define var 259
#define STRING 260
#define MULT 261
#define ADD 262
#define SUB 263
#define DIV 264
#define REST 265
#define GREATER 266
#define LESSER 267
#define EQUAL 268
#define DIFFERENT 269
#define LTE 270
#define GTE 271
#define AND 272
#define OR 273
#define NOT 274
#define DECLARACOES 275
#define GET 276
#define GO 277
#define STOP 278
#define PUT 279
#define WHILE 280
#define IF 281
#define ELSE 282
#define ERRO 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "linguagem.y" /* yacc.c:355  */
int numero; char *string; char *variavel;

#line 194 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 209 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

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
      33,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
       2,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    31,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    45,    46,    55,    56,    59,    82,   114,
     115,   124,   125,   128,   129,   130,   131,   132,   135,   135,
     170,   170,   232,   255,   255,   287,   294,   311,   313,   313,
     348,   349,   349,   384,   387,   400,   384,   432,   439,   446,
     453,   466,   473,   480,   489,   490,   497,   504,   511,   518,
     525,   528,   551,   551,   595
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "num", "var", "STRING", "MULT", "ADD",
  "SUB", "DIV", "REST", "GREATER", "LESSER", "EQUAL", "DIFFERENT", "LTE",
  "GTE", "AND", "OR", "NOT", "DECLARACOES", "GET", "GO", "STOP", "PUT",
  "WHILE", "IF", "ELSE", "ERRO", "';'", "'['", "']'", "'='", "'('", "')'",
  "'{'", "'}'", "$accept", "Prog", "Cabec", "Decs", "Dec", "Corpo",
  "Insts", "Inst", "Leitura", "$@1", "$@2", "Atrib", "$@3", "Escrita",
  "Condicao", "If", "$@4", "Else", "$@5", "Ciclo", "$@6", "$@7", "$@8",
  "ExpBool", "Exps", "Exp", "$@9", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    59,
      91,    93,    61,    40,    41,   123,   125
};
# endif

#define YYPACT_NINF -22

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-22)))

#define YYTABLE_NINF -53

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -8,    -2,    21,    -4,   -19,    -2,   -22,   -22,    18,   -22,
     -22,    24,   -22,     6,    29,     1,   -22,    -5,   104,   -22,
     -22,   -22,   -22,   -22,     9,   -22,    14,     4,    10,    22,
     -22,    23,    30,     4,    48,   -22,    27,    13,   -22,   -22,
     -22,   -22,    44,    62,    11,    45,    49,    50,   -22,    41,
      11,    11,    11,    11,    11,   -22,    13,    11,    51,   125,
      52,   -22,   -22,    58,   -22,    11,    11,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,     4,     4,     4,     4,
       4,     4,    18,    77,    59,    80,    78,    79,    92,    92,
      92,    92,    92,    92,    -1,     4,    54,   -22,    81,    18,
     -22,    86,   -22,    18,     5,   -22,    18,   -22,    84,   -22
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     9,     0,     4,     5,     1,     0,     2,
       7,     0,     6,    23,     0,     0,    33,     0,     0,    11,
      17,    13,    14,    15,    30,    16,     0,     0,     0,    18,
      54,    51,     0,     0,     0,    44,     0,     0,    10,    12,
      31,    27,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     8,    22,     0,    19,     0,     0,    50,    45,    46,
      47,    48,    49,    34,    43,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,     0,     0,    53,     0,     0,
      32,     0,    21,     0,     0,    24,    35,    29,     0,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,   -22,   -22,   108,   -22,   -21,   -18,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,    28,   -14,    53,   -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     5,     6,     9,    18,    19,    20,    45,
      46,    21,    28,    22,    23,    24,    87,    41,    60,    25,
      36,    86,   108,    58,    59,    35,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      39,    34,     4,    13,    30,    31,    32,    30,    31,    13,
      10,    11,     1,    43,    30,    31,    30,    31,     8,    49,
      14,     7,    13,    15,    16,    17,    14,    26,    37,    15,
      16,    17,    57,    29,    33,   100,    40,    33,    27,    14,
      44,   107,    15,    16,    17,    42,    33,    50,    51,    52,
      53,    54,   -20,   -52,    50,    51,    52,    53,    54,    48,
      56,    94,    88,    89,    90,    91,    92,    93,    50,    51,
      52,    53,    54,    61,    64,    67,    39,    55,   104,    65,
      66,   101,   106,   102,    73,    75,    39,    82,    39,    83,
      96,    62,    50,    51,    52,    53,    54,    63,    50,    51,
      52,    53,    54,    68,    69,    70,    71,    72,    13,    95,
      74,    97,    98,    12,    99,   105,   103,     0,    84,    85,
     109,     0,     0,     0,     0,    14,     0,    38,    15,    16,
      17,    50,    51,    52,    53,    54,    76,    77,    78,    79,
      80,    81
};

static const yytype_int8 yycheck[] =
{
      18,    15,     4,     4,     3,     4,     5,     3,     4,     4,
      29,    30,    20,    27,     3,     4,     3,     4,    22,    33,
      21,     0,     4,    24,    25,    26,    21,     3,    33,    24,
      25,    26,    19,     4,    33,    36,    27,    33,    32,    21,
      30,    36,    24,    25,    26,    31,    33,     6,     7,     8,
       9,    10,    30,    30,     6,     7,     8,     9,    10,    29,
      33,    82,    76,    77,    78,    79,    80,    81,     6,     7,
       8,     9,    10,    29,    29,    34,    94,    29,    99,    30,
      30,    95,   103,    29,    56,    34,   104,    35,   106,    31,
      31,    29,     6,     7,     8,     9,    10,    44,     6,     7,
       8,     9,    10,    50,    51,    52,    53,    54,     4,    32,
      57,    31,    34,     5,    35,    29,    35,    -1,    65,    66,
      36,    -1,    -1,    -1,    -1,    21,    -1,    23,    24,    25,
      26,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    38,    39,     4,    40,    41,     0,    22,    42,
      29,    30,    41,     4,    21,    24,    25,    26,    43,    44,
      45,    48,    50,    51,    52,    56,     3,    32,    49,     4,
       3,     4,     5,    33,    61,    62,    57,    33,    23,    44,
      27,    54,    31,    61,    30,    46,    47,    63,    29,    61,
       6,     7,     8,     9,    10,    29,    33,    19,    60,    61,
      55,    29,    29,    62,    29,    30,    30,    34,    62,    62,
      62,    62,    62,    60,    62,    34,    11,    12,    13,    14,
      15,    16,    35,    31,    62,    62,    58,    53,    61,    61,
      61,    61,    61,    61,    43,    32,    31,    31,    34,    35,
      36,    61,    29,    35,    43,    29,    43,    36,    59,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    41,    41,    42,
      42,    43,    43,    44,    44,    44,    44,    44,    46,    45,
      47,    45,    48,    49,    48,    50,    50,    51,    53,    52,
      54,    55,    54,    57,    58,    59,    56,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    62,    63,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     2,     2,     5,     0,
       3,     1,     2,     1,     1,     1,     1,     1,     0,     4,
       0,     7,     4,     0,     8,     3,     3,     2,     0,     8,
       0,     0,     5,     0,     0,     0,    10,     3,     3,     3,
       3,     3,     3,     2,     1,     3,     3,     3,     3,     3,
       3,     1,     0,     5,     1
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
        case 4:
#line 46 "linguagem.y" /* yacc.c:1646  */
    {
	  				auxInst = malloc(sizeof(struct instrucao));
	  				auxInst->endr = nInst++;
	  				auxInst->nome = strdup("start");

	  				instrucoes = addInst(auxInst, instrucoes);
	  			  }
#line 1369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 59 "linguagem.y" /* yacc.c:1646  */
    { int endr;
				endr = endrVar((yyvsp[-1].variavel), variaveis);
				if(endr == -1) //Se não existir
				{
					auxVar = malloc(sizeof(struct variavel));
					auxVar->endr = globalpointer++;
					auxVar->nome = strdup((yyvsp[-1].variavel));
					auxVar->init = 0;

					variaveis = addVar(auxVar, variaveis);

					auxInst = malloc(sizeof(struct instrucao));
					auxInst->endr = nInst++;
					auxInst->nome = strdup("pushi 0");
					
					instrucoes = addInst(auxInst, instrucoes);
				}
				else
				{
					erro = 1;
					fprintf(stdout, "Linha %d: Variável %s já está declarada!\n", yylineno, (yyvsp[-1].variavel));
				}	
			  }
#line 1397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 82 "linguagem.y" /* yacc.c:1646  */
    {
							int endr;
							endr = endrVar((yyvsp[-4].variavel), variaveis);

							if(endr == -1) //Se não existir
							{
								auxVar = malloc(sizeof(struct variavel));
								auxVar->endr = globalpointer;
								auxVar->nome = strdup((yyvsp[-4].variavel));
								auxVar->init = 0;

								variaveis = addVar(auxVar, variaveis);

								char buffer[50];
								sprintf(buffer, "pushn %d", (yyvsp[-2].numero));

								auxInst = malloc(sizeof(struct instrucao));
								auxInst->endr = nInst++;
								auxInst->nome = strdup(buffer);

								instrucoes = addInst(auxInst, instrucoes);

								globalpointer += (yyvsp[-2].numero);
							}
							else
							{
								erro = 1;
								fprintf(stdout, "Linha %d: Variável %s já está declarada!\n", yylineno, (yyvsp[-4].variavel));
							}
						  }
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 115 "linguagem.y" /* yacc.c:1646  */
    {
	  					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("stop");

	  					instrucoes = addInst(auxInst, instrucoes);
	  				  }
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 135 "linguagem.y" /* yacc.c:1646  */
    {
					int endr;
					endr = endrVar((yyvsp[0].variavel), variaveis);

					if(endr == -1) //Se não existir
					{
						erro = 1;
						fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, (yyvsp[0].variavel));
					}
					else
					{
						varInit((yyvsp[0].variavel), variaveis); // Se existir, marca-se como inicializada

						auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("read");

	  					instrucoes = addInst(auxInst, instrucoes);

	  					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("atoi");

	  					instrucoes = addInst(auxInst, instrucoes);

	  					char buffer[50];
	  					sprintf(buffer, "storeg %d", endr);

	  					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup(buffer);

	  					instrucoes = addInst(auxInst, instrucoes);
					}
				  }
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 170 "linguagem.y" /* yacc.c:1646  */
    {
        			int endr;
					endr = endrVar((yyvsp[0].variavel), variaveis);

					if(endr == -1) //Se não existir
					{
						erro = 1;
						fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, (yyvsp[0].variavel));
					}
					else
					{
						varInit((yyvsp[0].variavel), variaveis); // Se existir, marca-se como inicializada

						char buffer[50];

						sprintf(buffer, "pushgp");

						auxInst = malloc(sizeof(struct instrucao));
					  	auxInst->endr = nInst++;
					  	auxInst->nome = strdup(buffer);

						instrucoes = addInst(auxInst, instrucoes);

						sprintf(buffer, "pushi %d", endr);

						auxInst = malloc(sizeof(struct instrucao));
					  	auxInst->endr = nInst++;
					  	auxInst->nome = strdup(buffer);

						instrucoes = addInst(auxInst, instrucoes);

						sprintf(buffer, "padd");

						auxInst = malloc(sizeof(struct instrucao));
					  	auxInst->endr = nInst++;
					  	auxInst->nome = strdup(buffer);

						instrucoes = addInst(auxInst, instrucoes);

					}
        		  }
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 210 "linguagem.y" /* yacc.c:1646  */
    {
    		  						
        		  						auxInst = malloc(sizeof(struct instrucao));
					  					auxInst->endr = nInst++;
					  					auxInst->nome = strdup("read");

					  					instrucoes = addInst(auxInst, instrucoes);

					  					auxInst = malloc(sizeof(struct instrucao));
					  					auxInst->endr = nInst++;
					  					auxInst->nome = strdup("atoi");

					  					instrucoes = addInst(auxInst, instrucoes);

					  					auxInst = malloc(sizeof(struct instrucao));
					  					auxInst->endr = nInst++;
					  					auxInst->nome = strdup("storen");

					  					instrucoes = addInst(auxInst, instrucoes);
        		  					}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 232 "linguagem.y" /* yacc.c:1646  */
    {
							int endr;
							endr = endrVar((yyvsp[-3].variavel), variaveis);

							if(endr == -1) //Se não existir
							{
								erro = 1;
								fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, (yyvsp[-3].variavel));
							}
							else
							{
								varInit((yyvsp[-3].variavel), variaveis); // Se existir, marca-se como inicializada

								char buffer[50];
								sprintf(buffer, "storeg %d", endr);

								auxInst = malloc(sizeof(struct instrucao));
	  							auxInst->endr = nInst++; 
	  							auxInst->nome = strdup(buffer);

								instrucoes = addInst(auxInst, instrucoes);
							}
						 }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 255 "linguagem.y" /* yacc.c:1646  */
    {
				int endr;
				endr = endrVar((yyvsp[0].variavel), variaveis);

				if(endr == -1) //Se não existir
				{
					erro = 1;
					fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, (yyvsp[0].variavel));
				}
				else
				{
					varInit((yyvsp[0].variavel), variaveis); // Se existir, marca-se como inicializada

					char buffer[10];
					sprintf(buffer, "pushi %d", endr);

					auxInst = malloc(sizeof(struct instrucao));
	  				auxInst->endr = nInst++;
	  				auxInst->nome = strdup(buffer);

					instrucoes = addInst(auxInst, instrucoes);
				}
	  		}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 278 "linguagem.y" /* yacc.c:1646  */
    {
	  								auxInst = malloc(sizeof(struct instrucao));
	  								auxInst->endr = nInst++;
	  								auxInst->nome = "storen";

	  								instrucoes = addInst(auxInst, instrucoes);
	  							  }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 287 "linguagem.y" /* yacc.c:1646  */
    {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("writei");

		     			instrucoes = addInst(auxInst, instrucoes);
					   }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 294 "linguagem.y" /* yacc.c:1646  */
    {
							char buffer[1024];
							sprintf(buffer, "pushs \"%s\"", (yyvsp[-1].string));
							
			     			auxInst = malloc(sizeof(struct instrucao));
				  			auxInst->endr = nInst++;
				  			auxInst->nome = strdup(buffer);

			     			instrucoes = addInst(auxInst, instrucoes);
			     			auxInst = malloc(sizeof(struct instrucao));
			     			auxInst->endr = nInst++;
			     			auxInst->nome = strdup("writes");

			     			instrucoes = addInst(auxInst, instrucoes);
     		   			}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 313 "linguagem.y" /* yacc.c:1646  */
    {
							auxIfElse = malloc(sizeof(struct ifelse));
							auxIfElse->endr = nInst;
							auxIfElse->prox = ifelses;
							ifelses = auxIfElse;

							auxInst = malloc(sizeof(struct ifelse));
							auxInst->endr = nInst++;
							auxInst->nome = strdup("");
							auxInst->prox = instrucoes;
							instrucoes = auxInst;
						}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 325 "linguagem.y" /* yacc.c:1646  */
    {
					auxInst = instrucoes;
					int flag = 0;
					while(auxInst && flag == 0)
					{
						if(auxInst->endr == ifelses->endr)
						{
							flag = 1;
						}
						else
							auxInst = auxInst->prox;
					}

					char buffer[50];
					sprintf(buffer, "jz i%d", nInst+1);
					auxInst->nome = strdup(buffer);

					auxIfElse = ifelses->prox;
					free(ifelses);
					ifelses = auxIfElse;
				  }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 349 "linguagem.y" /* yacc.c:1646  */
    {
	 			auxIfElse = malloc(sizeof(struct ifelse));
				auxIfElse->endr = nInst;
				auxIfElse->prox = ifelses;
				ifelses = auxIfElse;

				auxInst = malloc(sizeof(struct ifelse));
				auxInst->endr = nInst++;
				auxInst->nome = strdup("");
				auxInst->prox = instrucoes;
				instrucoes = auxInst;
	 		}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 361 "linguagem.y" /* yacc.c:1646  */
    {
	 					auxInst = instrucoes;
						int flag = 0;
						while(auxInst && flag == 0)
						{
							if(auxInst->endr == ifelses->endr)
							{
								flag = 1;
							}
							else
								auxInst = auxInst->prox;
						}

						char buffer[50];
						sprintf(buffer, "jump i%d", nInst);
						auxInst->nome = strdup(buffer);

						auxIfElse = ifelses->prox;
						free(ifelses);
						ifelses = auxIfElse;
	 			   }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 384 "linguagem.y" /* yacc.c:1646  */
    {
				nWhile = nInst;
			  }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 387 "linguagem.y" /* yacc.c:1646  */
    {
						auxWhile = malloc(sizeof(struct whilecicle));
						auxWhile->endr_inicio = nWhile;
						auxWhile->endr_fim = nInst;
						auxWhile->prox = whiles;
						whiles = auxWhile;

						auxInst = malloc(sizeof(struct instrucao));
						auxInst->endr = nInst++;
						auxInst->nome = strdup("");

						instrucoes = addInst(auxInst, instrucoes);
					}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 400 "linguagem.y" /* yacc.c:1646  */
    {
						auxInst = instrucoes;
						int flag = 0, endr_i;
						while(auxInst && flag == 0)
						{
							if(auxInst->endr == whiles->endr_fim)
							{
								flag = 1;
								endr_i = whiles->endr_inicio;
							}
							else
								auxInst = auxInst->prox;
						}

						char buffer[50];
						sprintf(buffer, "jz i%d", nInst+1); // Endereço depois do ciclo while
						auxInst->nome = strdup(buffer);

						auxWhile = whiles->prox;
						free(whiles);
						whiles = auxWhile;

						sprintf(buffer, "jump i%d", endr_i);
						auxInst = malloc(sizeof(struct instrucao));
						auxInst->endr = nInst++;
						auxInst->nome = strdup(buffer);
						instrucoes = addInst(auxInst, instrucoes);

					  }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 432 "linguagem.y" /* yacc.c:1646  */
    {
				     			auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("sup");

				     			instrucoes = addInst(auxInst, instrucoes);
						 	}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 439 "linguagem.y" /* yacc.c:1646  */
    {
				     			auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("inf");

				     			instrucoes = addInst(auxInst, instrucoes);
			     		   }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 446 "linguagem.y" /* yacc.c:1646  */
    {
							auxInst = malloc(sizeof(struct instrucao));
						  	auxInst->endr = nInst++;
						  	auxInst->nome = strdup("equal");

					   		instrucoes = addInst(auxInst, instrucoes);
						  }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 453 "linguagem.y" /* yacc.c:1646  */
    {
								auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("equal");

				     			instrucoes = addInst(auxInst, instrucoes);

				     			auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("not");

				     			instrucoes = addInst(auxInst, instrucoes);
							  }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 466 "linguagem.y" /* yacc.c:1646  */
    {
							auxInst = malloc(sizeof(struct instrucao));
				  			auxInst->endr = nInst++;
				  			auxInst->nome = strdup("infeq");

			     			instrucoes = addInst(auxInst, instrucoes);
						}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 473 "linguagem.y" /* yacc.c:1646  */
    {
							auxInst = malloc(sizeof(struct instrucao));
						  	auxInst->endr = nInst++;
						  	auxInst->nome = strdup("supeq");

					   		instrucoes = addInst(auxInst, instrucoes);
						}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 480 "linguagem.y" /* yacc.c:1646  */
    {
	     			auxInst = malloc(sizeof(struct instrucao));
		  			auxInst->endr = nInst++;
		  			auxInst->nome = strdup("not");

	     			instrucoes = addInst(auxInst, instrucoes);
     		   	  }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 490 "linguagem.y" /* yacc.c:1646  */
    {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("mul");

		     			instrucoes = addInst(auxInst, instrucoes);
	     		   	 }
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 497 "linguagem.y" /* yacc.c:1646  */
    {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("add");

		     			instrucoes = addInst(auxInst, instrucoes);
     		   		}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 504 "linguagem.y" /* yacc.c:1646  */
    {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("sub");

		     			instrucoes = addInst(auxInst, instrucoes);
     		   		}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 511 "linguagem.y" /* yacc.c:1646  */
    {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("div");

		     			instrucoes = addInst(auxInst, instrucoes);
     		   		}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 518 "linguagem.y" /* yacc.c:1646  */
    {
     					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("mod");

     					instrucoes = addInst(auxInst, instrucoes);
     		   		 }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 528 "linguagem.y" /* yacc.c:1646  */
    {
			int endr;
			endr = endrVar((yyvsp[0].variavel), variaveis);

			if(endr == -1) //Se não existir
			{
				erro = 1;
				fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, (yyvsp[0].variavel));
			}
			else
			{
				varInit((yyvsp[0].variavel), variaveis); // Se existir, marca-se como inicializada

				char buffer[50];
				sprintf(buffer, "pushg %d", endr);

				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);
			}
		  }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 551 "linguagem.y" /* yacc.c:1646  */
    {
			int endr;
			endr = endrVar((yyvsp[0].variavel), variaveis);

			if(endr == -1) //Se não existir
			{
				erro = 1;
				fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, (yyvsp[0].variavel));
			}
			else
			{
				varInit((yyvsp[0].variavel), variaveis); // Se existir, marca-se como inicializada

				char buffer[50];

				sprintf(buffer, "pushgp");
				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);

				sprintf(buffer, "pushi %d", endr);
				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);

				sprintf(buffer, "padd");
				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);
			}
		  }
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 588 "linguagem.y" /* yacc.c:1646  */
    {
				 	auxInst = malloc(sizeof(struct instrucao));
				  	auxInst->endr = nInst++;
				  	auxInst->nome = strdup("loadn");

				 	instrucoes = addInst(auxInst, instrucoes);
	 			 }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 595 "linguagem.y" /* yacc.c:1646  */
    {
			char buffer[50];
			sprintf(buffer, "pushi %d", (yyvsp[0].numero));

			auxInst = malloc(sizeof(struct instrucao));
		  	auxInst->endr = nInst++;
		  	auxInst->nome = strdup(buffer);

			instrucoes = addInst(auxInst, instrucoes);
		 }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2052 "y.tab.c" /* yacc.c:1646  */
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
#line 608 "linguagem.y" /* yacc.c:1906  */


int yyerror(char *s)
{
	printf("erro:%s\n", s);
	return 0;
}

int main(int argc, char* argv[])
{

	yyparse();
	int i, count = 0;
	auxInst = instrucoes;
	while(auxInst)
	{
		count++;
		auxInst = auxInst->prox;
	}

	char** insts;
	insts = malloc(count*sizeof(char*));
	for(i = 0; i < count; i++, instrucoes= instrucoes->prox)
	{
		char buffer[1024];
		sprintf(buffer, "i%d: %s\n", instrucoes->endr, instrucoes->nome);

		insts[count-1- i] = strdup(buffer);
	}


	if(erro == 0)
	{
		for(i = 0; i < count; i++)
		{
			printf("%s", insts[i]);
		}
	}
	else printf("Frase incorreta!\n");



	return 0;	
}
