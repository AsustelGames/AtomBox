#pragma once


#include "SDL3/SDL.h"
#include "miniaudio.h"
#include "stb_image.h"
#include "stb_truetype.h"
#include "imgui.h"
#include "enet.h"
#include "fastnoiselite.h"
#include "glm/glm.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <fstream>
#include <algorithm>

#include "tools/colors.hpp"
#include "tools/x_in_percent.hpp"


class Game
{
private:
   SDL_Window* Window;
   SDL_Renderer* R;
   SDL_GLContext GL;
   SDL_Event Event;
   glm::ivec2 WindowLogicalSize; // Actual window size, used for mostly everything
   glm::ivec2 WindowPixelSize; // HIDPI window size (scaled up), used for pixel perfect rendering and some opengl stuff
   bool *Close; // Close the window
   double& DT; // DeltaTime, 1.0 / DT = FPS
   
   
public:
   std::string Title = "AtomBox";
   Color BackgroundColor = GRAY;
   
   
   Game(SDL_Window* Window_, SDL_Renderer* R_, SDL_GLContext GL_, SDL_Event& Event_, double& DT_, bool *Close_);
   ~Game();
   
   void Update();
   void Render();
   void RenderGui();
   void ShouldClose();
   void AfterClose();
};