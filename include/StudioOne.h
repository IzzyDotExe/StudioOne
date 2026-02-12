/**
 * StudioOne.cpp
 * Main application file for StudioOne.
 * Israel Aristide - 2026 / 02 / 11
 */

#include <imgui.h>
#include <SDL.h>

class StudioOne {

    public:
        StudioOne();
        static int InitializeSDL();
        int runApp(int argc, char** argv);
        void cleanUp();

    private:
        const char* _initGL();
        void _initWindow();
        ImGuiIO* _initImGui(const char* glsl_version);

        bool show_demo_window;
        bool show_another_window;
        bool running;

        SDL_WindowFlags window_flags;
        SDL_Window* window;
        SDL_GLContext gl_context;
        
        ImGuiIO* io;
        ImVec4 clear_color;

};