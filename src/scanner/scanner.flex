%{
#include "token.h"
%}
DIGIT   [0-9]
LETTER  [a-zA-Z]
%%
(" "|\n|\t)
\+          { return TOKEN_PLUS; }
while       { return TOKEN_WHILE; }
{LETTER}+   { return TOKEN_IDENT; }
{DIGIT}+    { return TOKEN_DIGIT; }
.           { return TOKEN_ERR; }
%%
int yywrap() { return 1; }

