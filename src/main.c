#include "stupid.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    struct Startup start = { M_SHELL };
    printf("%d\n", start.mode);
    return 0;
}
