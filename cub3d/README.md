# cub3d

This is the cub3D project of the 42 curriculum. A wolfenstein3D clone to practice working in openGL and learn raycasting.

![image](https://user-images.githubusercontent.com/98647720/191196415-c2b10329-ed74-4d3c-a3df-ea616e8fa730.png)

How to use it (Linux or macOS):
- This project used the minilibX of the 42 School: an X-Window API in C:
 - MLX https://github.com/42Paris/minilibx-linux
 - on Linux: "make" the library via the Makefile and copy the header and library file (mlx.h and libmlx.a) in your according PATH folders.
 - on macOS: just "make" the library via the Makefile. The header and library file in the mlx folder of this project will be used.
- clone the repo
- "make" via Makefile
- you need a working x server (https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html)

How to play:
- ./cub3D maps/mc.cub or (longer loading because of bigger texture files) ./cub3D maps/lsd.cub (TRIGGER WARNING: EPILEPSY!)
- movement: wasd
- rotation: arrow left/right or mouse
- open doors: e
- end: esc

The task was to create a wolfenstein3D clone / raycaster with the following features:
- a 3D game with movement (forward/backwards, strafing, rotation) with wasd (rotation error keys)
- 4 different wall textures which differ according to the direction they are projected at (no/ea/so/we)
- floor and ceiling color can be changed in the map file
- customizable map in map file (space: empty, 0: floor, 1: wall, N/E/S/W: player, D: door)
- player can start with four different orientations (no/ea/so/we)
- map error handling (no open maps, number of players = 1, etc.)
- following BONUSES were added:
 - wall collision / wall gliding
 - doors which can open and close
 - rotation via mouse
 - minimap

Disclaimer: This project was created as a school project with the strict 42 "Norminette" norm, including:

variable declarations at the beginning of the file
no declaration and initialization on the same line
only while loops allowed
only 25 lines per function
only 5 functions per .c file
no comments inside of functions
more minor things...
