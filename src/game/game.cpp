#include "game.hpp"


Game::Game(SDL_Window* Window_, SDL_Renderer* R_,
SDL_GLContext GL_, SDL_Event& Event_, double& DT_,
bool *Close_) : Window(Window_), R(R_), GL(GL_), 
Event(Event_), DT(DT_), Close(Close_)
{
   
}

void Game::Update()
{
   SDL_GetWindowSize(Window, &WindowLogicalSize.x, &WindowLogicalSize.y); // Actual window size, used for mostly everything
   SDL_GetWindowSizeInPixels(Window, &WindowPixelSize.x, &WindowPixelSize.y); // HIDPI window size (scaled up), used for pixel perfect rendering and some opengl stuff
}

void Game::Render()
{
   
}

void Game::RenderGui()
{
   
}

void Game::ShouldClose() // Runs after you press the x on the window
{
   if (Close) {*Close = true;} // If pointer valid Close = true
}

void Game::AfterClose() // Runs after the window is destroyed
{
   
}

Game::~Game() // Runs after everything is destroyed
{
   
}