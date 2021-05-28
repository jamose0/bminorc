#ifndef STUPID_H
#define STUPID_H

enum AdelieMode {
    M_FILE,
    M_SHELL,
};

struct Adelie {
    enum AdelieMode mode;
};

#endif
