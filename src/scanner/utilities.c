#include "scanner/utilities.h"

#include <string.h>

extern char *yytext;

void stringClean()
{
    /* trim quotes */
    yytext[strlen(yytext) - 1] = '\0';
    yytext++;
}

