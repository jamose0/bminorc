#ifndef STUPID_H
#define STUPID_H

enum StartMode {
    M_FILE,
    M_SHELL,
};

struct Startup {
    enum StartMode mode;
};

#endif
