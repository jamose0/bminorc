#include "stupid.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    struct Adelie adelie = { M_SHELL };
    printf("%d\n", adelie.mode);
    return 0;
}
