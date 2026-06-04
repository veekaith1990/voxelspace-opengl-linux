#include "program/program.h"

#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    // --max-frames <n> makes the program renders up to n frames
    int maxFrames = -1;
    for (int i = 1; i < argc; ++i)
    {
        if (strcmp(argv[i], "--max-frames") == 0)
        {
            maxFrames = atoi(argv[i + 1]);
        }
    }

    Program this = programCreate();
    programMainLoop(this, maxFrames);
    programDestroy(this);

    return 0;
}
