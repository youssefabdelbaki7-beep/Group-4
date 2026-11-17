# 🌅 hackathon 2
## project structure

This repository of code gives the file structure you need in order to code with `raylib` and use Github Codespaces for this hackathon.

First read through the code here. There are some kinds of files we have not seen before in this class:
- `devcontainer`: some setup for running this project in VSCode/Github Codespaces
- `CMakeLists.txt`: a configuration file that will make compiling this project a lot simpler, as we will include multiple files + libraries

### to run the example, example.cpp
1. Read through `example.cpp` first. What will this file do? How does it do it? Look in the comments for links to the `raylib` documentation.
2. Find the green "Use this template" button - click that and choose "Create a new repository". This will be your own copy of this code.
3. In your new copy, click the green "Code" button and choose "Create codespace on main". This will open an IDE for you, a place to edit and run c++
4. This may take a few minutes to load initially! ⏰ ...
5. Find your files on the left, and your terminal at the bottom. When you are ready for the terminal, type the following and press enter:
 ```
  cmake -B build
```
This uses a tool called `cmake` which reads the `CMakeLists.txt` file and starts the compiling and build process in a folder called `build`. Next, type and press enter:
```
cmake --build build
```
This command completes the compiling process in the `build` folder, and adds your executable program (like `a.out`) to that folder. This replaces typing `g++`
Once that compiling is all finished, in the terminal type and press enter:
```
./build/example
```
This is just like when I type `./a.out` in class - except now we have a program called `example` that's in the `build` folder. Pressing enter here will start that program.

### 📺 important next step: rendering window

1. Near the Terminal tab, find the Ports tab.
2. Look for **Port 6080** - and find a little globe icon, you may have to hover over the URL in order to find this. Click the globe.
3. A new window should open in your browser, which is a **desktop simulator**. Click "Connect"
4. You should see the example code (Toby & Proton, cats) show in a graphics window. Press Escape to close the window when you're done.

### 🛠️ to write your own program
1. Put your team's code in `main.cpp`. Keep `example.cpp` as a working demo.
2. After changing code, you only need to run `cmake --build build` and then run `./build/main`
3. When you make a new class, you'll need to change and add to `CMakeLists.txt` - the comments in that file tells you where.
4. Remember to run you programs from the main folder, not from inside `build/`

### 💾 saving and sharing your work
Your files are saved in the Codespace, but Codespaces can be deleted after a period of inactivity. You need to "push" your changes to your code saved on github. At the end of every session: Source Control icon (left sidebar, 3 blobs connected by a line) → write a message → Commit → Sync Changes.

### how to run locally instead:

I set up Codespaces for this hackathon because it can be challenging to make sure all your team's install settings work for this library build. However, if you want to try to code locally, you just need to make sure you have [CMake](https://embedded.seas.upenn.edu/Guides/build-systems/getting-started-with-cmake/#__tabbed_1_1) and a c++ compiler installed on your machine. The CMake steps will be the same, you just won't need to find a Port to open a new window, it will open automatically.

### about codespaces

Codespaces is a free IDE on Github, but you only get 60 hours per month on the free plan. This should be fine for this project! I recommend you **Stop** the codespace when you are not using it. You can see a list of your active spaces here: https://github.com/codespaces and then click the "..." 3 dots to stop any of them.
