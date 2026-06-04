#include "program/program.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // --max-frames N : render N frames then exit
    int maxFrames = 0;
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--max-frames") == 0 && i + 1 < argc)
            maxFrames = atoi(argv[++i]);
    }

    Program this = programCreate();
    programMainLoop(this, maxFrames);
    programDestroy(this);

    return 0;
}
