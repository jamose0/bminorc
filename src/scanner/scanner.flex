%{
#include "token.h"
#include "scanner/utilities.h"
%}
DIGIT   [0-9]
LETTER  [a-zA-Z]
%%
(" "|\n|\t)
"//".*
\"(.)*\"    { stringClean(yytext); return T_STRING; }

";"     { return T_SEMICOLON; }
"="     { return T_EQ; }
":"     { return T_COLON; }
"["     { return T_LBRACKET; }
"]"     { return T_RBRACKET; }
"{"     { return T_LBRACE; }
"}"     { return T_RBRACE; }
"("     { return T_LPAREN; }
")"     { return T_RPAREN; }
","     { return T_COMMA; }
"+"     { return T_PLUS; }
"-"     { return T_MINUS; }
"++"    { return T_PLUSPLUS; }
"--"    { return T_MINUSMINUS; }
"!"     { return T_BANG; }
"^"     { return T_CAR; }
"*"     { return T_STAR; }
"/"     { return T_SLASH; }
"%"     { return T_MOD; }
"<"     { return T_LE; }
">"     { return T_GR; }
"=="    { return T_EQEQ; }
"!="    { return T_BANGEQ; }
"<="    { return T_LEQ; }
">="    { return T_GEQ; }
"&&"    { return T_AND; }
"||"    { return T_OR; }
array       { return TK_ARRAY; }
boolean     { return TK_BOOLEAN; }
char        { return TK_CHAR; }
else        { return TK_ELSE; }
false       { return TK_FALSE; }
for         { return TK_FOR; }
function    { return TK_FUNCTION; }
if          { return TK_IF; }
integer     { return TK_INTEGER; }
print       { return TK_PRINT; }
return      { return TK_RETURN; }
string      { return TK_STRING; }
true        { return TK_TRUE; }
void        { return TK_VOID; }
while       { return TK_WHILE; }
({LETTER}|"_")({LETTER}|"_"|{DIGIT})*   { return T_IDENT; }
{DIGIT}+                                { return T_NUM; }
.                                       { return T_ERR; }
%%
int yywrap() { return 1; }
