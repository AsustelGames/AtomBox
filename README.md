# Atom Box

## Overview
- Libraries
- How To Build
## Libraries
- sdl 3.4.0
- miniaudio
- glad (opengl 4.6 core)
- imgui
- glm
- enet
- fastnoiselite
- assimp
- stb
  - stb_image
  - stb_image_write
  - stb_image_resize2
  - stb_trutype

## How To Build
Make sure you have everything required installed
> If you are using **NixOS** run `nix-shell -p gnumake cmake ninja pkg-config sdl3` before building
### Using Ninja
#### cd into your project
```
cd /path/to/your/project
```
#### Configure your project 
This will create the build directory
```
cmake -G Ninja -S . -B build
```
#### Build your project
This will cd into your build directory then it will run the build command in this case it's **Ninja** and create the executable, after that it will cd back to your project directory
> It can also be used to rebuild your project if you made any changes
```
cd build
ninja
cd ..
```
or
```
cd build && ninja && cd ..
```
Now run your project