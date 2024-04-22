/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include "sym_tab.c"
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    #define YYSTYPE char*
    
    int type = -1;
    char *vval="~";
    int vtype=-1; 
    int scope = 0;
    int statementType = -1;
    char *temp;

    #define VARDEC 0
    #define ARRDEC 1
    #define EXP 2
    #define REXP 3
    #define POST 4
    #define PRE 5



    extern int yylineno;
    extern char *yytext;
    int yyerrstatus =0;
    
    void yyerror(const char *s);
    int yylex();
    int yywrap();


#line 105 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VOID = 258,                    /* VOID  */
    CHARACTER = 259,               /* CHARACTER  */
    PRINTFF = 260,                 /* PRINTFF  */
    SCANFF = 261,                  /* SCANFF  */
    INT = 262,                     /* INT  */
    FLOAT = 263,                   /* FLOAT  */
    CHAR = 264,                    /* CHAR  */
    FOR = 265,                     /* FOR  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    TRUE = 268,                    /* TRUE  */
    FALSE = 269,                   /* FALSE  */
    NUMBER = 270,                  /* NUMBER  */
    FLOAT_NUM = 271,               /* FLOAT_NUM  */
    ID = 272,                      /* ID  */
    LE = 273,                      /* LE  */
    GE = 274,                      /* GE  */
    EQ = 275,                      /* EQ  */
    NE = 276,                      /* NE  */
    GT = 277,                      /* GT  */
    LT = 278,                      /* LT  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    STR = 281,                     /* STR  */
    ADD = 282,                     /* ADD  */
    MULTIPLY = 283,                /* MULTIPLY  */
    DIVIDE = 284,                  /* DIVIDE  */
    SUBTRACT = 285,                /* SUBTRACT  */
    UNARY = 286,                   /* UNARY  */
    INCLUDE = 287,                 /* INCLUDE  */
    RETURN = 288,                  /* RETURN  */
    DO = 289,                      /* DO  */
    DOUBLE = 290,                  /* DOUBLE  */
    MAIN = 291,                    /* MAIN  */
    WHILE = 292,                   /* WHILE  */
    SWITCH = 293,                  /* SWITCH  */
    CASE = 294,                    /* CASE  */
    BREAK = 295,                   /* BREAK  */
    DEFAULT = 296                  /* DEFAULT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VOID 258
#define CHARACTER 259
#define PRINTFF 260
#define SCANFF 261
#define INT 262
#define FLOAT 263
#define CHAR 264
#define FOR 265
#define IF 266
#define ELSE 267
#define TRUE 268
#define FALSE 269
#define NUMBER 270
#define FLOAT_NUM 271
#define ID 272
#define LE 273
#define GE 274
#define EQ 275
#define NE 276
#define GT 277
#define LT 278
#define AND 279
#define OR 280
#define STR 281
#define ADD 282
#define MULTIPLY 283
#define DIVIDE 284
#define SUBTRACT 285
#define UNARY 286
#define INCLUDE 287
#define RETURN 288
#define DO 289
#define DOUBLE 290
#define MAIN 291
#define WHILE 292
#define SWITCH 293
#define CASE 294
#define BREAK 295
#define DEFAULT 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_CHARACTER = 4,                  /* CHARACTER  */
  YYSYMBOL_PRINTFF = 5,                    /* PRINTFF  */
  YYSYMBOL_SCANFF = 6,                     /* SCANFF  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_FLOAT = 8,                      /* FLOAT  */
  YYSYMBOL_CHAR = 9,                       /* CHAR  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_TRUE = 13,                      /* TRUE  */
  YYSYMBOL_FALSE = 14,                     /* FALSE  */
  YYSYMBOL_NUMBER = 15,                    /* NUMBER  */
  YYSYMBOL_FLOAT_NUM = 16,                 /* FLOAT_NUM  */
  YYSYMBOL_ID = 17,                        /* ID  */
  YYSYMBOL_LE = 18,                        /* LE  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_NE = 21,                        /* NE  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_LT = 23,                        /* LT  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_STR = 26,                       /* STR  */
  YYSYMBOL_ADD = 27,                       /* ADD  */
  YYSYMBOL_MULTIPLY = 28,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 29,                    /* DIVIDE  */
  YYSYMBOL_SUBTRACT = 30,                  /* SUBTRACT  */
  YYSYMBOL_UNARY = 31,                     /* UNARY  */
  YYSYMBOL_INCLUDE = 32,                   /* INCLUDE  */
  YYSYMBOL_RETURN = 33,                    /* RETURN  */
  YYSYMBOL_DO = 34,                        /* DO  */
  YYSYMBOL_DOUBLE = 35,                    /* DOUBLE  */
  YYSYMBOL_MAIN = 36,                      /* MAIN  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_SWITCH = 38,                    /* SWITCH  */
  YYSYMBOL_CASE = 39,                      /* CASE  */
  YYSYMBOL_BREAK = 40,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 41,                   /* DEFAULT  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '&'  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_50_ = 50,                       /* '='  */
  YYSYMBOL_51_ = 51,                       /* '['  */
  YYSYMBOL_52_ = 52,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_program = 54,                   /* program  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_headers = 56,                   /* headers  */
  YYSYMBOL_main = 57,                      /* main  */
  YYSYMBOL_datatype = 58,                  /* datatype  */
  YYSYMBOL_body = 59,                      /* body  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_control = 61,                   /* control  */
  YYSYMBOL_block = 62,                     /* block  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
  YYSYMBOL_for = 64,                       /* for  */
  YYSYMBOL_if = 65,                        /* if  */
  YYSYMBOL_while = 66,                     /* while  */
  YYSYMBOL_do = 67,                        /* do  */
  YYSYMBOL_switch = 68,                    /* switch  */
  YYSYMBOL_cases = 69,                     /* cases  */
  YYSYMBOL_case = 70,                      /* case  */
  YYSYMBOL_default = 71,                   /* default  */
  YYSYMBOL_else = 72,                      /* else  */
  YYSYMBOL_condition = 73,                 /* condition  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_declaration = 75,               /* declaration  */
  YYSYMBOL_76_4 = 76,                      /* $@4  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_array = 78,                     /* array  */
  YYSYMBOL_array_dec = 79,                 /* array_dec  */
  YYSYMBOL_80_6 = 80,                      /* $@6  */
  YYSYMBOL_81_7 = 81,                      /* $@7  */
  YYSYMBOL_dimensions = 82,                /* dimensions  */
  YYSYMBOL_arr_init = 83,                  /* arr_init  */
  YYSYMBOL_num_list = 84,                  /* num_list  */
  YYSYMBOL_list = 85,                      /* list  */
  YYSYMBOL_init = 86,                      /* init  */
  YYSYMBOL_expression = 87,                /* expression  */
  YYSYMBOL_e = 88,                         /* e  */
  YYSYMBOL_t = 89,                         /* t  */
  YYSYMBOL_f = 90,                         /* f  */
  YYSYMBOL_relop = 91,                     /* relop  */
  YYSYMBOL_value = 92,                     /* value  */
  YYSYMBOL_return = 93                     /* return  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,     2,
      44,    45,     2,     2,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    46,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    38,    41,    42,    45,    48,    49,    50,
      51,    52,    56,    57,    58,    59,    60,    61,    61,    65,
      66,    67,    68,    69,    72,    72,    73,    74,    78,    81,
      84,    87,    90,    93,    94,    97,    98,    99,   102,   103,
     108,   109,   112,   113,   114,   117,   118,   119,   120,   121,
     122,   125,   125,   140,   140,   157,   161,   161,   175,   175,
     191,   192,   195,   196,   199,   200,   201,   206,   207,   211,
     216,   221,   222,   225,   237,   249,   252,   264,   276,   279,
     280,   283,   284,   285,   286,   287,   288,   291,   300,   309,
     318,   341
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "CHARACTER",
  "PRINTFF", "SCANFF", "INT", "FLOAT", "CHAR", "FOR", "IF", "ELSE", "TRUE",
  "FALSE", "NUMBER", "FLOAT_NUM", "ID", "LE", "GE", "EQ", "NE", "GT", "LT",
  "AND", "OR", "STR", "ADD", "MULTIPLY", "DIVIDE", "SUBTRACT", "UNARY",
  "INCLUDE", "RETURN", "DO", "DOUBLE", "MAIN", "WHILE", "SWITCH", "CASE",
  "BREAK", "DEFAULT", "'{'", "'}'", "'('", "')'", "';'", "','", "'&'",
  "':'", "'='", "'['", "']'", "$accept", "program", "$@1", "headers",
  "main", "datatype", "body", "$@2", "control", "block", "$@3", "for",
  "if", "while", "do", "switch", "cases", "case", "default", "else",
  "condition", "statement", "declaration", "$@4", "$@5", "array",
  "array_dec", "$@6", "$@7", "dimensions", "arr_init", "num_list", "list",
  "init", "expression", "e", "t", "f", "relop", "value", "return", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   123,   125,    40,    41,    59,    44,    38,    58,
      61,    91,    93
};
#endif

#define YYPACT_NINF (-93)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -18,   -93,    24,   116,   -93,   -93,   -93,   -93,   -93,   -93,
     -18,   -16,    -5,   -93,     1,   228,     2,    11,    47,    51,
      52,    63,    80,   240,    64,    65,   -93,    90,   177,   -93,
     -93,   -93,   -93,   -93,   -93,    68,   -93,   -93,   -93,    84,
      85,    45,   304,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
      12,    12,   -93,   -93,   -93,    78,    70,   304,    12,   228,
     -33,   -93,     6,   228,    74,   -93,    73,    81,    88,   -93,
     -93,   -93,   -93,   -93,   -93,    82,    20,    12,    20,    19,
      44,   -93,   -93,    20,   228,    87,   -93,    91,   271,    95,
     102,   102,    89,    89,   108,   -93,   109,   117,   304,   240,
       6,   277,    12,    12,    12,    12,    12,   136,   304,   240,
      93,   -93,    12,   119,   -93,    12,   106,   106,   -93,   -93,
     151,   123,   160,   -93,   -93,    19,    44,    44,   -93,   -93,
     -93,   130,   -93,    35,    20,   159,   -93,    14,   135,   134,
     -93,   144,    45,   240,   -93,   145,    12,   146,   161,    18,
     102,    89,    12,   185,   157,   164,   -93,   -93,   141,   -93,
     -93,   156,    35,   -93,   119,   -93,   163,   265,   -93,   -93,
     -93,   240,   228,   228,   -93,   -93,    12,   -93,   228,   190,
     -93,   167,   -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     0,     0,     1,    10,     7,     8,     9,    11,
       4,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,    12,
      19,    21,    20,    22,    23,     0,    45,    46,     6,     0,
       0,     0,     0,    83,    84,    85,    86,    82,    81,    49,
       0,     0,    50,    24,    27,     0,     0,     0,     0,     0,
      51,    55,     0,    14,     0,    13,     0,     0,     0,    89,
      43,    44,    87,    88,    90,     0,     0,     0,    47,    72,
      75,    78,    80,    48,     0,     0,    26,     0,     0,     0,
      70,    70,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,    54,     0,    63,    63,    91,    15,
       0,     0,    41,    42,    79,    71,    73,    74,    76,    77,
      25,     0,    30,     0,    69,     0,    52,     0,     0,     0,
      59,     0,     0,     0,    29,     0,     0,     0,     0,    33,
      70,    61,    66,     0,     0,     0,    40,    31,     0,    37,
      32,     0,    35,    34,    68,    60,     0,    65,    56,    57,
      16,     0,     0,     0,    67,    62,    66,    28,    36,    38,
      64,     0,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,   -93,   216,   -93,   214,   -15,   -93,   -21,   -92,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,    96,   -93,   -93,
     -48,   -22,   -93,   -93,   -93,   -93,    67,   -93,   -93,   -87,
     101,    46,    59,   -83,   -47,   124,   -14,   -13,    -6,   -37,
     -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    15,    10,    11,    27,    63,    59,    29,    55,
      84,    30,    31,    32,    33,    34,   148,   162,   163,   144,
      75,    35,    36,    90,    91,    37,    61,    92,    93,   116,
     139,   166,   136,   113,   167,    79,    80,    81,   102,    82,
      64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    56,    54,    78,    83,    76,   117,   122,   114,    87,
      69,    88,   -53,   -53,     1,    51,    69,   132,   -56,    68,
      76,    72,    73,    74,     4,    94,    13,    72,    73,    74,
     101,    14,    43,    44,    45,    46,    47,    48,    43,    44,
      45,    46,    47,    48,    89,    16,   103,    38,     5,   104,
     121,   156,     6,     7,     8,    39,    77,   146,   147,   161,
     131,    76,    21,   123,   165,   134,   151,   164,   137,   107,
     100,    76,   105,   106,   146,   147,    22,    56,    54,   177,
       9,    43,    44,    45,    46,    47,    48,    56,    54,   126,
     127,    40,   128,   129,    49,    41,    42,    52,     5,   158,
      17,    18,     6,     7,     8,    19,    20,    60,    57,    58,
      66,    67,    21,    50,    65,    85,    86,    95,    96,     5,
     155,    56,    54,     6,     7,     8,    22,    99,    97,    23,
       9,   108,    24,    25,    98,   133,   109,    26,   111,     5,
     115,    17,    18,     6,     7,     8,    19,    20,     1,    56,
      54,     9,   112,    21,   118,   119,   138,   178,   179,    43,
      44,    45,    46,    47,    48,   120,   135,    22,   141,   142,
      23,     9,   143,    24,    25,   145,   150,   152,    26,   130,
       5,   153,    17,    18,     6,     7,     8,    19,    20,   154,
     172,   157,   159,     5,    21,    17,    18,     6,     7,     8,
      19,    20,   168,   170,   160,   173,   175,    21,    22,   171,
      62,    23,     9,   182,    24,    25,     3,    12,   140,    26,
     169,    22,   180,   174,    23,     9,   125,    24,    25,   149,
     181,     5,    26,    17,    18,     6,     7,     8,    19,    20,
       0,     0,     0,     5,     0,    21,     0,     6,     7,     8,
      19,    20,     0,     0,     0,     0,     0,    21,     0,    22,
       0,     0,    23,     9,     0,    24,    25,     0,     0,     0,
      26,    22,     0,     0,    23,     9,     0,    24,    25,     0,
       0,     0,    53,    43,    44,    45,    46,    47,    48,    43,
      44,    45,    46,    47,    48,    43,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,   176,     0,     0,     0,   110,    70,    71,    72,
      73,    74,   124
};

static const yytype_int16 yycheck[] =
{
      15,    23,    23,    50,    51,    42,    93,    99,    91,    57,
       4,    58,    45,    46,    32,    21,     4,   109,    51,    41,
      57,    15,    16,    17,     0,    62,    42,    15,    16,    17,
      77,    36,    18,    19,    20,    21,    22,    23,    18,    19,
      20,    21,    22,    23,    59,    44,    27,    45,     3,    30,
      98,   143,     7,     8,     9,    44,    44,    39,    40,    41,
     108,    98,    17,   100,   151,   112,    52,   150,   115,    84,
      76,   108,    28,    29,    39,    40,    31,    99,    99,   171,
      35,    18,    19,    20,    21,    22,    23,   109,   109,   103,
     104,    44,   105,   106,    31,    44,    44,    17,     3,   146,
       5,     6,     7,     8,     9,    10,    11,    17,    44,    44,
      26,    26,    17,    50,    46,    37,    46,    43,    45,     3,
     142,   143,   143,     7,     8,     9,    31,    45,    47,    34,
      35,    44,    37,    38,    46,    42,    45,    42,    43,     3,
      51,     5,     6,     7,     8,     9,    10,    11,    32,   171,
     171,    35,    50,    17,    46,    46,    50,   172,   173,    18,
      19,    20,    21,    22,    23,    48,    47,    31,    17,    46,
      34,    35,    12,    37,    38,    45,    17,    42,    42,    43,
       3,    47,     5,     6,     7,     8,     9,    10,    11,    45,
      49,    46,    46,     3,    17,     5,     6,     7,     8,     9,
      10,    11,    17,    46,    43,    49,    43,    17,    31,    45,
      33,    34,    35,    46,    37,    38,     0,     3,   117,    42,
     153,    31,   176,   164,    34,    35,   102,    37,    38,   133,
      40,     3,    42,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,     3,    -1,    17,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      42,    31,    -1,    -1,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    42,    18,    19,    20,    21,    22,    23,    18,
      19,    20,    21,    22,    23,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    45,    13,    14,    15,
      16,    17,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,    54,    56,     0,     3,     7,     8,     9,    35,
      56,    57,    58,    42,    36,    55,    44,     5,     6,    10,
      11,    17,    31,    34,    37,    38,    42,    58,    59,    61,
      64,    65,    66,    67,    68,    74,    75,    78,    45,    44,
      44,    44,    44,    18,    19,    20,    21,    22,    23,    31,
      50,    91,    17,    42,    61,    62,    74,    44,    44,    60,
      17,    79,    33,    59,    93,    46,    26,    26,    74,     4,
      13,    14,    15,    16,    17,    73,    92,    44,    87,    88,
      89,    90,    92,    87,    63,    37,    46,    73,    87,    59,
      76,    77,    80,    81,    92,    43,    45,    47,    46,    45,
      91,    87,    91,    27,    30,    28,    29,    59,    44,    45,
      45,    43,    50,    86,    86,    51,    82,    82,    46,    46,
      48,    73,    62,    92,    45,    88,    89,    89,    90,    90,
      43,    73,    62,    42,    87,    47,    85,    87,    50,    83,
      83,    17,    46,    12,    72,    45,    39,    40,    69,    70,
      17,    52,    42,    47,    45,    74,    62,    46,    87,    46,
      43,    41,    70,    71,    86,    82,    84,    87,    17,    79,
      46,    45,    49,    49,    85,    43,    47,    62,    59,    59,
      84,    40,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    55,    54,    56,    56,    57,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    60,    59,    61,
      61,    61,    61,    61,    63,    62,    62,    62,    64,    65,
      66,    67,    68,    69,    69,    70,    70,    70,    71,    71,
      72,    72,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    76,    75,    77,    75,    78,    80,    79,    81,    79,
      82,    82,    83,    83,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    88,    89,    89,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     7,     2,     1,     4,     1,     1,     1,
       1,     1,     1,     2,     2,     5,     8,     0,     4,     1,
       1,     1,     1,     1,     0,     4,     2,     1,     9,     6,
       5,     7,     7,     1,     2,     2,     4,     2,     3,     5,
       2,     0,     3,     1,     1,     1,     1,     3,     3,     2,
       2,     0,     5,     0,     4,     2,     0,     6,     0,     4,
       4,     3,     4,     0,     3,     1,     0,     4,     3,     2,
       0,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_STACK_PRINT (yyss, yyssp);

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 38 "parser.y"
                          {scope++;}
#line 1470 "y.tab.c"
    break;

  case 3: /* program: headers main '{' $@1 body return '}'  */
#line 38 "parser.y"
                                                     {scope--;}
#line 1476 "y.tab.c"
    break;

  case 7: /* datatype: INT  */
#line 48 "parser.y"
               {type = _INT;}
#line 1482 "y.tab.c"
    break;

  case 8: /* datatype: FLOAT  */
#line 49 "parser.y"
        {type = _FLOAT;}
#line 1488 "y.tab.c"
    break;

  case 9: /* datatype: CHAR  */
#line 50 "parser.y"
        {type = _CHAR;}
#line 1494 "y.tab.c"
    break;

  case 10: /* datatype: VOID  */
#line 51 "parser.y"
        {type = _VOID;}
#line 1500 "y.tab.c"
    break;

  case 11: /* datatype: DOUBLE  */
#line 52 "parser.y"
         {type = _DOUBLE;}
#line 1506 "y.tab.c"
    break;

  case 17: /* $@2: %empty  */
#line 61 "parser.y"
       {scope++;}
#line 1512 "y.tab.c"
    break;

  case 18: /* body: '{' $@2 body '}'  */
#line 61 "parser.y"
                           {scope--;}
#line 1518 "y.tab.c"
    break;

  case 24: /* $@3: %empty  */
#line 72 "parser.y"
           {scope++;}
#line 1524 "y.tab.c"
    break;

  case 25: /* block: '{' $@3 body '}'  */
#line 72 "parser.y"
                               {scope--;}
#line 1530 "y.tab.c"
    break;

  case 45: /* statement: declaration  */
#line 117 "parser.y"
                        { statementType = VARDEC;}
#line 1536 "y.tab.c"
    break;

  case 46: /* statement: array  */
#line 118 "parser.y"
        {statementType = ARRDEC;}
#line 1542 "y.tab.c"
    break;

  case 47: /* statement: ID '=' expression  */
#line 119 "parser.y"
                     {statementType = EXP;}
#line 1548 "y.tab.c"
    break;

  case 48: /* statement: ID relop expression  */
#line 120 "parser.y"
                       {statementType = REXP;}
#line 1554 "y.tab.c"
    break;

  case 49: /* statement: ID UNARY  */
#line 121 "parser.y"
            {statementType=POST;}
#line 1560 "y.tab.c"
    break;

  case 50: /* statement: UNARY ID  */
#line 122 "parser.y"
            {statementType=PRE;}
#line 1566 "y.tab.c"
    break;

  case 51: /* $@4: %empty  */
#line 125 "parser.y"
                           {
                                if(check_sym_tab(yyvsp[0]))	//if variable is in table then variable is being re-declared
				                {
					                printf("Variable %s already declared\n",yyvsp[-1]);
					                yyerror(yyvsp[-1]);
				                }
				                else
				                {
				                    insert_symbol(yyvsp[0],size(type),type,yylineno,scope);
				                    insert_val(yyvsp[0],vval,yylineno);
				                    vval="~";	//revert to default for checking
				                    type=-1;
				                }
                                temp = yyvsp[0];
                            }
#line 1586 "y.tab.c"
    break;

  case 53: /* $@5: %empty  */
#line 140 "parser.y"
              {
                    if(check_sym_tab(yyvsp[0]))	//if variable is in table then variable is being re-declared
				    {
					    printf("Variable %s already declared\n",yyvsp[-1]);
					    yyerror(yyvsp[0]);
				    }
				    else
				    {
				        insert_symbol(yyvsp[0],size(type),type,yylineno,scope);
				        insert_val(yyvsp[0],vval,yylineno);
				        vval="~";	//revert to default for checking
				        type=-1;
				    }
                }
#line 1605 "y.tab.c"
    break;

  case 56: /* $@6: %empty  */
#line 161 "parser.y"
             {
                    if(check_sym_tab(yyvsp[0]))	//if variable is in table then variable is being re-declared
				    {
					    printf("Variable %s already declared\n",yyvsp[0]);
					    yyerror(yyvsp[0]);
				    }
				    else
				    {
				        insert_symbol(yyvsp[0],size(type),type,yylineno,scope);
				        insert_val(yyvsp[0],vval,yylineno);
				        vval="~";	//revert to default for checking
				        type=-1;
				    }
            }
#line 1624 "y.tab.c"
    break;

  case 58: /* $@7: %empty  */
#line 175 "parser.y"
    {
                    if(check_sym_tab(yyvsp[0]))	//if variable is in table then variable is being re-declared
				    {
					    printf("Variable %s already declared\n",yyvsp[0]);
					    yyerror(yyvsp[0]);
				    }
				    else
				    {
				        insert_symbol(yyvsp[0],size(type),type,yylineno,scope);
				        insert_val(yyvsp[0],vval,yylineno);
				        vval="~";	//revert to default for checking
				        type=-1;
				    }
    }
#line 1643 "y.tab.c"
    break;

  case 69: /* init: '=' expression  */
#line 211 "parser.y"
                      {
                insert_val(temp,vval,yylineno);
				vval="~";		//to make sure previous values aren't inserted into other identifiers
				type=-1;
    }
#line 1653 "y.tab.c"
    break;

  case 72: /* expression: e  */
#line 222 "parser.y"
    {vval = yyvsp[0];}
#line 1659 "y.tab.c"
    break;

  case 73: /* e: e ADD t  */
#line 225 "parser.y"
            { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])+atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])+atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1676 "y.tab.c"
    break;

  case 74: /* e: e SUBTRACT t  */
#line 237 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])-atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])-atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1693 "y.tab.c"
    break;

  case 75: /* e: t  */
#line 249 "parser.y"
    {yyval=yyvsp[0];}
#line 1699 "y.tab.c"
    break;

  case 76: /* t: t MULTIPLY f  */
#line 252 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])*atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])*atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1716 "y.tab.c"
    break;

  case 77: /* t: t DIVIDE f  */
#line 264 "parser.y"
             { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])/atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])/atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1733 "y.tab.c"
    break;

  case 78: /* t: f  */
#line 276 "parser.y"
    {yyval=yyvsp[0];}
#line 1739 "y.tab.c"
    break;

  case 87: /* value: NUMBER  */
#line 291 "parser.y"
              {    
    yyval=strdup(yyvsp[0]); 
    			vtype=type_check(yyvsp[0]);
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror(yyvsp[0]);
			}
 }
#line 1753 "y.tab.c"
    break;

  case 88: /* value: FLOAT_NUM  */
#line 300 "parser.y"
            {
     yyval=strdup(yyvsp[0]); 
    			vtype=type_check(yyvsp[0]);
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror(yyvsp[0]);
			}
}
#line 1767 "y.tab.c"
    break;

  case 89: /* value: CHARACTER  */
#line 309 "parser.y"
            {
    yyval=strdup(yyvsp[0]); 
    			vtype=1;
			if(vtype!=type)		//checks for matching type
			{
				printf("Mismatch type\n");	
				yyerror(yyvsp[0]);
			}
}
#line 1781 "y.tab.c"
    break;

  case 90: /* value: ID  */
#line 318 "parser.y"
     {
        if(check_sym_tab(yyvsp[0]))		//check if variable is in symbol table
			{
				char* check=retrieve_val(yyvsp[0]);
				if(check=="~")		//if variable has no value then can't be used for assignment
				{
					printf("Variable %s not initialised",yyvsp[0]);
					yyerror(yyvsp[0]);
				}
				else
				{	
					yyval=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)	//checks for matching type
					{
						printf("Mismatch type\n");
						yyerror(yyvsp[0]);
					}	
				}
	}
}
#line 1807 "y.tab.c"
    break;


#line 1811 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 344 "parser.y"


int main() {
    t=init_table();
    yyparse();
    display_sym_tab();
    return 0;
}


//panic mode recovery


void yyerror(const char* msg) {
    static int panic_count = 0; 
    if(panic_count>5)
    return;

    while (1) {
        int token = yylex();
        if (token == ';' || token == '}' || token == ')') {
            yyerrok; 
            panic_count++;
            yyparse(); 
            break;
        }
        else if(token == 0)
        {
            return;
        }
    }
}



