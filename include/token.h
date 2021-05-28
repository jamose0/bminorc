#ifndef TOKEN_H
#define TOKEN_H

enum TokenType {
    T_EOF,
    T_ERR,
    T_COLON,
    T_SEMICOLON,
    T_COMMA,
    T_NUM,
    T_IDENT,
    /* Arithmetic operators */
    T_EQ,
    T_LBRACKET,
    T_RBRACKET,
    T_LBRACE,
    T_RBRACE,
    T_LPAREN,
    T_RPAREN,
    T_PLUS,
    T_MINUS,
    T_PLUSPLUS,
    T_MINUSMINUS,
    T_BANG,
    T_CAR,
    T_STAR,
    T_SLASH,
    T_MOD,
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
