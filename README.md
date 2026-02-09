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
Make sure you have everything **Ninja** and **Cmake** installed
> If you are using **NixOS** run `nix-shell -p gnumake cmake ninja pkg-config sdl3` before building AtomBox
#### cd into AtomBox
```
cd /path/to/AtomBox
```
#### Configure AtomBox
```
cmake -G Ninja -S . -B build
```
#### Build AtomBox
```
cd build
ninja
cd ..
```
or
```
cd build && ninja && cd ..
```
Now run AtomBox