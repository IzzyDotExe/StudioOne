#include <StudioOne.h>

int main(int argc, char** argv)
{
    int result;
    int initSDL;
    
    initSDL = StudioOne::InitializeSDL();

    if (initSDL != -1) {
        StudioOne app = StudioOne();
        result = app.runApp(argc, argv);
        app.cleanUp();
    } else {
        result = initSDL;
    }

    return result;
}