#include "stupid.h"
#include "token.h"

#include <stdio.h>

extern FILE *yyin;
extern int yylex();
extern char *yytext;

int main(int argc, char **argv)
{
    struct Startup start = { M_SHELL };
    printf("%d\n", start.mode);

    yyin = fopen("program.bminor", "r");
    if (!yyin) {
        fprintf(stderr, "No file\n");
        return 1;
    }

    for (;;) {
        enum TokenType t = yylex();
        if (t == T_EOF)
            break;
        printf("Token: %d with text: %s\n", t, yytext);
    }

    return 0;
}
