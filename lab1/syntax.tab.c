/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "syntax.y"

    #include "lex.yy.c"
    struct TreeNode* GetRoot();
    struct TreeNode* root;

#line 76 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMI = 258,
    COMMA = 259,
    ASSIGNOP = 260,
    RELOP = 261,
    PLUS = 262,
    MINUS = 263,
    STAR = 264,
    DIV = 265,
    AND = 266,
    OR = 267,
    DOT = 268,
    NOT = 269,
    TYPE = 270,
    LP = 271,
    RP = 272,
    LB = 273,
    RB = 274,
    LC = 275,
    RC = 276,
    STRUCT = 277,
    RETURN = 278,
    IF = 279,
    ELSE = 280,
    WHILE = 281,
    ID = 282,
    INT = 283,
    FLOAT = 284,
    LOWER_THAN_ELSE = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "syntax.y"

    struct TreeNode* type_node;

#line 163 "syntax.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

#define YYUNDEFTOK  2
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    60,    63,    69,    75,    80,    86,    89,
      93,    97,   104,   108,   113,   121,   127,   130,   135,   140,
     144,   151,   155,   162,   168,   171,   175,   181,   186,   192,
     199,   203,   208,   212,   217,   221,   227,   235,   245,   253,
     256,   259,   262,   265,   268,   271,   275,   278,   284,   290,
     294,   298,   305,   309,   316,   322,   328,   334,   340,   346,
     352,   358,   364,   370,   375,   380,   387,   393,   400,   406,
     410,   414,   418,   421,   424,   427,   430,   433,   436,   439,
     442,   446,   452
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMI", "COMMA", "ASSIGNOP", "RELOP",
  "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT", "NOT", "TYPE", "LP",
  "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN", "IF", "ELSE", "WHILE",
  "ID", "INT", "FLOAT", "LOWER_THAN_ELSE", "$accept", "Program",
  "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "StructSpecifier",
  "OptTag", "Tag", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-33)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,   -53,   -17,    16,   -53,    -7,    22,   -53,    -3,     2,
     -53,   -53,   -53,    56,   -53,    31,   101,    73,     4,    -7,
      34,   -53,    -7,   -53,   185,    57,   -53,    51,    17,   -53,
      25,    62,    -7,   -53,    42,    96,   -53,    51,   102,    84,
     -53,   -53,   -53,    98,   106,   118,    79,   123,   131,   -53,
     -53,    43,   169,   169,   169,   169,   120,   122,   124,   -53,
     -53,   -53,   121,    42,   203,   -53,   126,   -53,    -7,   -53,
     -53,   -53,   169,   -53,    51,   -53,    97,    -4,   275,   217,
       5,   169,   165,   -53,   -53,   144,   -53,    71,    95,   100,
     104,   129,   133,   138,   162,    26,   169,   -53,   303,   -53,
     -53,   -53,   -53,   134,   289,   231,   -53,   246,   136,   -53,
     -53,   303,   -53,   346,   -53,    97,   -53,    97,   -53,    -4,
     -53,    -4,   -53,   329,   -53,   316,   -53,   -53,   260,    66,
      66,   -53,    66,   169,   -53,   -53,   125,   130,   -53,   -53,
      66,    66,   -53,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    12,    16,     0,     2,     3,     0,    13,    18,     0,
      15,     1,     4,     0,     6,    19,     0,    10,     0,    46,
       0,    24,    46,     9,     0,     0,     5,     0,     0,     7,
       0,     0,    46,    30,     0,     0,    23,     0,     0,    27,
       8,    19,    11,     0,     0,     0,    52,     0,    50,    14,
      47,     0,     0,     0,     0,     0,     0,     0,    69,    70,
      71,    34,     0,     0,     0,    25,    28,    22,     0,    21,
      20,    49,     0,    48,     0,    39,    63,    64,     0,     0,
       0,     0,     0,    29,    31,    45,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    53,    51,
      62,    42,    35,     0,     0,     0,    66,    82,     0,    41,
      73,    54,    72,    57,    76,    58,    77,    59,    78,    60,
      79,    61,    74,    55,    75,    56,    80,    68,     0,     0,
       0,    40,     0,     0,    65,    67,    43,    36,    38,    81,
       0,     0,    44,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   154,   -53,   137,     7,   -53,   -53,   -53,   -26,
     -53,   103,   -53,    41,   105,   211,    29,   -53,   110,   -53,
     -52,    36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    30,     7,     9,    10,    17,
      18,    38,    39,    61,    62,    63,    31,    32,    47,    48,
      64,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    77,    78,    79,    46,    20,   103,     6,     1,    95,
       8,    66,     6,    52,    96,     2,    11,   -17,    43,    53,
      98,    54,    19,    13,    22,    14,    45,   126,   104,   105,
     107,    37,    58,    59,    60,   111,   113,   115,   117,   119,
     121,   123,   125,    51,   128,    44,    75,    24,    46,    15,
      52,    34,    41,   127,    23,    33,    53,    20,    54,    29,
      40,    50,    22,   -32,    33,    55,    56,    51,    57,    58,
      59,    60,   110,    21,    52,    37,    22,    27,    41,    52,
      53,   107,    54,    49,    72,    53,    22,    54,    68,    55,
      56,    28,    57,    58,    59,    60,   112,    28,    58,    59,
      60,   114,    25,    52,    26,   116,    91,    92,    52,    53,
      95,    54,    52,    65,    53,    96,    54,    69,    53,    67,
      54,    71,    58,    59,    60,    70,    73,    58,    59,    60,
     118,    58,    59,    60,   120,    74,    80,    52,    81,   122,
      82,    52,    83,    53,    28,    54,    52,    53,   109,    54,
     140,   129,    53,   134,    54,   141,    58,    59,    60,    12,
      58,    59,    60,   124,    42,    58,    59,    60,    84,   139,
      52,    97,     0,    52,     0,     0,    53,    52,    54,    53,
       0,    54,   106,    53,    99,    54,    35,     0,     0,    58,
      59,    60,    58,    59,    60,     0,    58,    59,    60,     0,
       1,     0,    36,     0,    85,     0,    86,     2,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,   101,     0,
     102,    96,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     0,   131,     0,     0,    96,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,     0,   132,    96,
     133,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,    96,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    96,   135,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,     0,   100,    96,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   130,    96,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,    88,    89,    90,    91,    92,    93,     0,    95,
       0,     0,     0,     0,    96,    88,    89,    90,    91,    92,
     136,   137,    95,   138,     0,     0,     0,    96,     0,     0,
       0,   142,   143,    89,    90,    91,    92,     0,     0,    95,
       0,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
      52,    53,    54,    55,    30,     1,     1,     0,    15,    13,
      27,    37,     5,     8,    18,    22,     0,    20,     1,    14,
      72,    16,    20,     1,    20,     3,     1,     1,    80,    81,
      82,    24,    27,    28,    29,    87,    88,    89,    90,    91,
      92,    93,    94,     1,    96,    28,     3,    16,    74,    27,
       8,    22,    27,    27,    13,    21,    14,     1,    16,    18,
       3,    32,    20,    21,    21,    23,    24,     1,    26,    27,
      28,    29,     1,    17,     8,    68,    20,     4,    27,     8,
      14,   133,    16,    21,     5,    14,    20,    16,     4,    23,
      24,    18,    26,    27,    28,    29,     1,    18,    27,    28,
      29,     1,     1,     8,     3,     1,     9,    10,     8,    14,
      13,    16,     8,    17,    14,    18,    16,    19,    14,    17,
      16,     3,    27,    28,    29,    19,     3,    27,    28,    29,
       1,    27,    28,    29,     1,     4,    16,     8,    16,     1,
      16,     8,    21,    14,    18,    16,     8,    14,     4,    16,
      25,    17,    14,    17,    16,    25,    27,    28,    29,     5,
      27,    28,    29,     1,    27,    27,    28,    29,    63,   133,
       8,    68,    -1,     8,    -1,    -1,    14,     8,    16,    14,
      -1,    16,    17,    14,    74,    16,     1,    -1,    -1,    27,
      28,    29,    27,    28,    29,    -1,    27,    28,    29,    -1,
      15,    -1,    17,    -1,     1,    -1,     3,    22,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,     1,    -1,
       3,    18,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,     1,    -1,    -1,    18,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    17,    18,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    18,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    17,    18,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,     6,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    18,     6,     7,     8,     9,    10,
     129,   130,    13,   132,    -1,    -1,    -1,    18,    -1,    -1,
      -1,   140,   141,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    22,    32,    33,    34,    36,    37,    27,    38,
      39,     0,    33,     1,     3,    27,    35,    40,    41,    20,
       1,    17,    20,    44,    16,     1,     3,     4,    18,    44,
      36,    47,    48,    21,    47,     1,    17,    36,    42,    43,
       3,    27,    35,     1,    28,     1,    40,    49,    50,    21,
      47,     1,     8,    14,    16,    23,    24,    26,    27,    28,
      29,    44,    45,    46,    51,    17,    40,    17,     4,    19,
      19,     3,     5,     3,     4,     3,    51,    51,    51,    51,
      16,    16,    16,    21,    45,     1,     3,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    18,    42,    51,    49,
      17,     1,     3,     1,    51,    51,    17,    51,    52,     4,
       1,    51,     1,    51,     1,    51,     1,    51,     1,    51,
       1,    51,     1,    51,     1,    51,     1,    27,    51,    17,
      17,     1,    17,     4,    17,    19,    46,    46,    46,    52,
      25,    25,    46,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    34,    34,
      35,    35,    36,    36,    37,    37,    38,    38,    39,    40,
      40,    40,    41,    41,    41,    41,    42,    42,    43,    44,
      44,    45,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    52,    52
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     4,     3,
       1,     3,     1,     1,     5,     2,     0,     1,     1,     1,
       4,     4,     4,     3,     2,     4,     3,     1,     2,     4,
       2,     2,     0,     2,     1,     3,     5,     7,     5,     2,
       4,     3,     3,     5,     7,     2,     0,     2,     3,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     4,     3,     4,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 54 "syntax.y"
                     {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Program", "Program", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
        root = (yyval.type_node);
    }
#line 1594 "syntax.tab.c"
    break;

  case 3:
#line 60 "syntax.y"
             {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ExtDefList", "ExtDefList", EMPTY);
    }
#line 1602 "syntax.tab.c"
    break;

  case 4:
#line 63 "syntax.y"
                       {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ExtDefList", "ExtDefList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1612 "syntax.tab.c"
    break;

  case 5:
#line 69 "syntax.y"
                                  {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ExtDef", "ExtDef", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1623 "syntax.tab.c"
    break;

  case 6:
#line 75 "syntax.y"
                    {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ExtDef", "ExtDef", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1633 "syntax.tab.c"
    break;

  case 7:
#line 80 "syntax.y"
                             {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ExtDef", "ExtDef", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1644 "syntax.tab.c"
    break;

  case 8:
#line 86 "syntax.y"
                                     {
        grammar_error = 1; yyerrok;
    }
#line 1652 "syntax.tab.c"
    break;

  case 9:
#line 89 "syntax.y"
                            {
        grammar_error = 1; yyerrok;
    }
#line 1660 "syntax.tab.c"
    break;

  case 10:
#line 93 "syntax.y"
                   {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ExtDecList", "ExtDecList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1669 "syntax.tab.c"
    break;

  case 11:
#line 97 "syntax.y"
                             {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ExtDecList", "ExtDecList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1680 "syntax.tab.c"
    break;

  case 12:
#line 104 "syntax.y"
                {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Specifier", "Specifier", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1689 "syntax.tab.c"
    break;

  case 13:
#line 108 "syntax.y"
                     {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Specifier", "Specifier", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1698 "syntax.tab.c"
    break;

  case 14:
#line 113 "syntax.y"
                                             {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "StructSpecifier", "StructSpecifier", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-4].type_node));
        AddSiblings((yyvsp[-4].type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1711 "syntax.tab.c"
    break;

  case 15:
#line 121 "syntax.y"
                {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "StructSpecifier", "StructSpecifier", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1721 "syntax.tab.c"
    break;

  case 16:
#line 127 "syntax.y"
         {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "OptTag", "OptTag", EMPTY);
    }
#line 1729 "syntax.tab.c"
    break;

  case 17:
#line 130 "syntax.y"
        {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "OptTag", "OptTag", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1738 "syntax.tab.c"
    break;

  case 18:
#line 135 "syntax.y"
        {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Tag", "Tag", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1747 "syntax.tab.c"
    break;

  case 19:
#line 140 "syntax.y"
           {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "VarDec", "VarDec", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1756 "syntax.tab.c"
    break;

  case 20:
#line 144 "syntax.y"
                       {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "VarDec", "VarDec", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1768 "syntax.tab.c"
    break;

  case 21:
#line 151 "syntax.y"
                         {
        grammar_error = 1;  yyerrok;
    }
#line 1776 "syntax.tab.c"
    break;

  case 22:
#line 155 "syntax.y"
                         {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "FunDec", "FunDec", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1788 "syntax.tab.c"
    break;

  case 23:
#line 162 "syntax.y"
              {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "FunDec", "FunDec", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1799 "syntax.tab.c"
    break;

  case 24:
#line 168 "syntax.y"
              {
        grammar_error = 1; yyerrok;
    }
#line 1807 "syntax.tab.c"
    break;

  case 25:
#line 171 "syntax.y"
                    {
        grammar_error = 1; yyerrok;
    }
#line 1815 "syntax.tab.c"
    break;

  case 26:
#line 175 "syntax.y"
                                {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "VarList", "VarList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1826 "syntax.tab.c"
    break;

  case 27:
#line 181 "syntax.y"
              {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "VarList", "VarList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1835 "syntax.tab.c"
    break;

  case 28:
#line 186 "syntax.y"
                           {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "ParamDec", "ParamDec", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1845 "syntax.tab.c"
    break;

  case 29:
#line 192 "syntax.y"
                               {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "CompSt", "CompSt", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1857 "syntax.tab.c"
    break;

  case 30:
#line 199 "syntax.y"
              {
        grammar_error = 1; yyerrok;
    }
#line 1865 "syntax.tab.c"
    break;

  case 31:
#line 203 "syntax.y"
                        {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "StmtList", "StmtList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1875 "syntax.tab.c"
    break;

  case 32:
#line 208 "syntax.y"
     {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "StmtList", "StmtList", EMPTY);
    }
#line 1883 "syntax.tab.c"
    break;

  case 33:
#line 212 "syntax.y"
               {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1893 "syntax.tab.c"
    break;

  case 34:
#line 217 "syntax.y"
            {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 1902 "syntax.tab.c"
    break;

  case 35:
#line 221 "syntax.y"
                     {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1913 "syntax.tab.c"
    break;

  case 36:
#line 227 "syntax.y"
                                             {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-4].type_node));
        AddSiblings((yyvsp[-4].type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1926 "syntax.tab.c"
    break;

  case 37:
#line 235 "syntax.y"
                                 {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-6].type_node));
        AddSiblings((yyvsp[-6].type_node), (yyvsp[-5].type_node));
        AddSiblings((yyvsp[-5].type_node), (yyvsp[-4].type_node));
        AddSiblings((yyvsp[-4].type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1941 "syntax.tab.c"
    break;

  case 38:
#line 245 "syntax.y"
                          {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-4].type_node));
        AddSiblings((yyvsp[-4].type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 1954 "syntax.tab.c"
    break;

  case 39:
#line 253 "syntax.y"
                {
        grammar_error = 1; yyerrok;
    }
#line 1962 "syntax.tab.c"
    break;

  case 40:
#line 256 "syntax.y"
                         {
        grammar_error = 1; yyerrok;
    }
#line 1970 "syntax.tab.c"
    break;

  case 41:
#line 259 "syntax.y"
                      {
        grammar_error = 1; yyerrok;
    }
#line 1978 "syntax.tab.c"
    break;

  case 42:
#line 262 "syntax.y"
                       {
        grammar_error = 1; yyerrok;
    }
#line 1986 "syntax.tab.c"
    break;

  case 43:
#line 265 "syntax.y"
                                               {
        grammar_error = 1; yyerrok;
    }
#line 1994 "syntax.tab.c"
    break;

  case 44:
#line 268 "syntax.y"
                                   {
        grammar_error = 1; yyerrok;
    }
#line 2002 "syntax.tab.c"
    break;

  case 45:
#line 271 "syntax.y"
               {
        grammar_error = 1; yyerrok;
    }
#line 2010 "syntax.tab.c"
    break;

  case 46:
#line 275 "syntax.y"
          {
    (yyval.type_node) = NewLexNode((yyloc).first_line, "DefList", "DefList", EMPTY);
    }
#line 2018 "syntax.tab.c"
    break;

  case 47:
#line 278 "syntax.y"
                 {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "DefList", "DefList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2028 "syntax.tab.c"
    break;

  case 48:
#line 284 "syntax.y"
                            {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Def", "Def", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2039 "syntax.tab.c"
    break;

  case 49:
#line 290 "syntax.y"
                          {
        grammar_error = 1; yyerrok;
    }
#line 2047 "syntax.tab.c"
    break;

  case 50:
#line 294 "syntax.y"
             {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "DecList", "DecList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 2056 "syntax.tab.c"
    break;

  case 51:
#line 298 "syntax.y"
                       {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "DecList", "DecList", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2067 "syntax.tab.c"
    break;

  case 52:
#line 305 "syntax.y"
            {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Dec", "Dec", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 2076 "syntax.tab.c"
    break;

  case 53:
#line 309 "syntax.y"
                         {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Dec", "Dec", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2087 "syntax.tab.c"
    break;

  case 54:
#line 316 "syntax.y"
                      {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2098 "syntax.tab.c"
    break;

  case 55:
#line 322 "syntax.y"
                 {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2109 "syntax.tab.c"
    break;

  case 56:
#line 328 "syntax.y"
                {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2120 "syntax.tab.c"
    break;

  case 57:
#line 334 "syntax.y"
                   {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2131 "syntax.tab.c"
    break;

  case 58:
#line 340 "syntax.y"
                  {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2142 "syntax.tab.c"
    break;

  case 59:
#line 346 "syntax.y"
                   {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2153 "syntax.tab.c"
    break;

  case 60:
#line 352 "syntax.y"
                  {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2164 "syntax.tab.c"
    break;

  case 61:
#line 358 "syntax.y"
                 {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2175 "syntax.tab.c"
    break;

  case 62:
#line 364 "syntax.y"
               {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2186 "syntax.tab.c"
    break;

  case 63:
#line 370 "syntax.y"
               {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2196 "syntax.tab.c"
    break;

  case 64:
#line 375 "syntax.y"
             {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2206 "syntax.tab.c"
    break;

  case 65:
#line 380 "syntax.y"
                   {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2218 "syntax.tab.c"
    break;

  case 66:
#line 387 "syntax.y"
              {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2229 "syntax.tab.c"
    break;

  case 67:
#line 393 "syntax.y"
                   {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-3].type_node));
        AddSiblings((yyvsp[-3].type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2241 "syntax.tab.c"
    break;

  case 68:
#line 400 "syntax.y"
                {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2252 "syntax.tab.c"
    break;

  case 69:
#line 406 "syntax.y"
        {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 2261 "syntax.tab.c"
    break;

  case 70:
#line 410 "syntax.y"
         {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 2270 "syntax.tab.c"
    break;

  case 71:
#line 414 "syntax.y"
           {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 2279 "syntax.tab.c"
    break;

  case 72:
#line 418 "syntax.y"
                     {
        grammar_error = 1; yyerrok;
    }
#line 2287 "syntax.tab.c"
    break;

  case 73:
#line 421 "syntax.y"
                        {
        grammar_error = 1; yyerrok;
    }
#line 2295 "syntax.tab.c"
    break;

  case 74:
#line 424 "syntax.y"
                   {
        grammar_error = 1; yyerrok;
    }
#line 2303 "syntax.tab.c"
    break;

  case 75:
#line 427 "syntax.y"
                  {
        grammar_error = 1; yyerrok;
    }
#line 2311 "syntax.tab.c"
    break;

  case 76:
#line 430 "syntax.y"
                    {
        grammar_error = 1; yyerrok;
    }
#line 2319 "syntax.tab.c"
    break;

  case 77:
#line 433 "syntax.y"
                     {
        grammar_error = 1; yyerrok;
    }
#line 2327 "syntax.tab.c"
    break;

  case 78:
#line 436 "syntax.y"
                    {
        grammar_error = 1; yyerrok;
    }
#line 2335 "syntax.tab.c"
    break;

  case 79:
#line 439 "syntax.y"
                   {
        grammar_error = 1; yyerrok;
    }
#line 2343 "syntax.tab.c"
    break;

  case 80:
#line 442 "syntax.y"
                   {
        grammar_error = 1; yyerrok;
    }
#line 2351 "syntax.tab.c"
    break;

  case 81:
#line 446 "syntax.y"
                     {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Args", "Args", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[-2].type_node));
        AddSiblings((yyvsp[-2].type_node), (yyvsp[-1].type_node));
        AddSiblings((yyvsp[-1].type_node), (yyvsp[0].type_node));
    }
#line 2362 "syntax.tab.c"
    break;

  case 82:
#line 452 "syntax.y"
         {
        (yyval.type_node) = NewLexNode((yyloc).first_line, "Args", "Args", GRAM_UNIT);
        AddChild((yyval.type_node), (yyvsp[0].type_node));
    }
#line 2371 "syntax.tab.c"
    break;


#line 2375 "syntax.tab.c"

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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
#line 457 "syntax.y"

yyerror(char *msg) {
    grammar_error = 1;
    if(lexical_error != yylineno) {
        printf("Error type B at line %d: %s, near \'%s\'\n", yylineno, msg, yytext);
    }
}
struct TreeNode* GetRoot()
{
    return root;
}
