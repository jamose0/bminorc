%{
#include "token.h"
%}
DIGIT   [0-9]
LETTER  [a-zA-Z]
%%
(" "|\n|\t)
"//".*
\+          { return T_PLUS; }
while       { return T_WHILE; }
{LETTER}+   { return T_IDENT; }
{DIGIT}+    { return T_NUM; }
.           { return T_ERR; }
%%
int yywrap() { return 1; }

