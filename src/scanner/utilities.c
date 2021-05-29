#include "scanner/utilities.h"

#include <string.h>

extern char *yytext;

/* Removes from s the character at index n */
static void rem(char s[], int n)
{
    int i, j;
    for (i = 0, j = 0; s[i] != '\0'; i++, j++) {
        if (i == n)
            j++;

        s[i] = s[j];
    }
}

static void changeEscape(char s[])
{
    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '\\' && s[i + 1] == 'n') {
            rem(s, i);
            s[i] = '\n';
        } else if (s[i] == '\\' && s[i + 1] == 't') {
            rem(s, i);
            s[i] = '\t';
        }
    }
}

void stringClean()
{
    /* trim quotes */
    yytext[strlen(yytext) - 1] = '\0';
    yytext++;
    changeEscape(yytext);
}

