#ifndef TOKEN_H
#define TOKEN_H

enum TokenType {
    T_EOF,
    T_NUM,
    T_PLUS,
    T_COLON,
    T_WHILE,
    T_IDENT,
    T_ERR,
    /* Keywords */
    TK_ARRAY,
    TK_BOOLEAN,
    TK_CHAR,
    TK_ELSE,
    TK_FALSE,
    TK_FOR,
    TK_FUNCTION,
    TK_IF,
    TK_INTEGER,
    TK_PRINT,
    TK_RETURN,
    TK_STRING,
    TK_TRUE,
    TK_VOID,
    TK_WHILE,
};

#endif
