%{
#include "token.h"
%}
DIGIT   [0-9]
LETTER  [a-zA-Z]
%%
(" "|\n|\t)
"//".*
":"     { return T_COLON; }
"+"     { return T_PLUS; }
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

