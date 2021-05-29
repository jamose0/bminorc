#include "stupid.h"
#include "token.h"

#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
extern int yylex();
extern char *yytext;

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Wrong number of arguments...\n");
        exit(1);
    }

    printf("%s\n", argv[1]);

    yyin = fopen(argv[1], "r");
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
