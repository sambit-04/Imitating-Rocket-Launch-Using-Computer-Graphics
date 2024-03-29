
# ROCKET LAUNCH

The "Realistic Rocket Launch Animation in Turbo C" project aims to create an engaging and visually impressive simulation of a rocket launch using the Turbo C programming environment. This project leverages the graphic capabilities of Turbo C to provide a detailed and aesthetically appealing representation of a rocket launch, focusing on realism and user engagement.


## Key Features of the Project:


1. **Highly Detailed Rocket Design**: The project presents a rocket with a meticulously designed body, nose cone, and fins. The rocket's appearance closely resembles that of a traditional space vehicle.

2. **Realistic Color Scheme**: The rocket is filled with colors that emulate the realistic appearance of rocket materials. The body is adorned with a light gray shade, the nose cone displays a dark gray hue, and yellow flames realistically depict rocket propulsion.

3. **Dynamic Animations**: The rocket launch animation progresses through several stages. It begins with the rocket on the ground, then showcases liftoff where flames and exhaust gases emerge, and finally reaches the climax of the launch.

4. **Aesthetic Appeal**: The project prioritizes aesthetics and provides an engaging visual experience for the user. The rocket's design and the animation sequence are crafted to capture the essence of a rocket launch.

5. **Turbo C Compatibility**: The project has been tailored to run within the Turbo C environment, making it accessible to those interested in creating visually stimulating programs with older development tools.

The "**Realistic Rocket Launch Animation in Turbo C**" project offers a combination of graphical artistry and programming skills, pushing the boundaries of what can be achieved in a legacy development environment. This simulation not only showcases the capabilities of Turbo C but also provides an enjoyable and educational experience for those interested in space exploration and computer graphics.


## Tech Stack & Components Required:

**Tech Stack**:
- **Programming Language**: C
- **Graphics Library**: graphics.h
- **IDE/Compiler**: Turbo C/C++
- **Operating System**: Compatible with Windows (as Turbo C/C++ is primarily used on Windows)

**Application**:
The application created by this code is a simple animated representation of a building construction process. It demonstrates basic graphics programming in C, showing how shapes can be drawn and filled to create visual effects.

**Files Required**:
1. **Source Code File**:
   - This would be the file containing the C source code, typically saved with a `.c` extension, e.g., `building_animation.c`.
2. **Header Files**:
   - `stdio.h`: Standard input/output header file.
   - `conio.h`: Console input/output header file.
   - `graphics.h`: Graphics library header file.
3. **Graphics Driver Files**:
   - These files are required by the graphics library to interact with the graphics hardware. In this case, the BGI files typically come with Turbo C/C++.
   - Path specified in the `initgraph()` function should point to the location where these files are stored. In the provided code, the path is `"C:\\TURBOC3\\BGI"`, so the BGI files should be stored in that directory.

Ensure all these files are present and properly configured for the code to compile and execute correctly.
## FlowChart:

![App Screenshot](https://github.com/sambit-04/Imitating-Rocket-Launch-Using-Computer-Graphics/blob/main/Beige%20Minimalist%20Structure%20Organizational%20Chart%20Graph.png?raw=true)

## Working

This C code is using the graphics.h library to create a simple animation of a building construction process. Let's break down the main components and workings of the code:

1. **Header Files**: 
   - `#include<stdio.h>`: Standard input/output header file.
   - `#include<conio.h>`: Console input/output header file for older compilers like Turbo C/C++.
   - `<graphics.h>`: Header file for graphics programming in C.

2. **main() Function**:
   - The program's entry point.
   - Initializes graphics mode using `initgraph()`.
   - `DETECT` is a macro defined in graphics.h which detects the graphics driver automatically.
   - `gm` is the mode of the graphics; here, it's not specified and is usually set to 0.
   - `"C:\\TURBOC3\\BGI"` is the path where the BGI files (graphics drivers) are located.

3. **Drawing the Building**:
   - The building is drawn using various lines and shapes such as rectangles and ellipses.
   - A loop runs from `i=0` to `i<350`, where `i` is used to simulate the building construction process.
   - Various lines are drawn to represent different parts of the building, such as the basement, floors, and the roof.

4. **Filling Colors**:
   - `setfillstyle()` sets the fill pattern style for shapes.
   - `floodfill()` fills the enclosed area with the specified color.

5. **Animation**:
   - Inside the loop, `cleardevice()` is called to clear the screen, creating an animation effect.
   - `delay(5)` introduces a small delay to control the speed of the animation.

6. **Closing the Graphics**:
   - `closegraph()` is called to close the graphics mode and release resources.

7. **Conditional Drawing**:
   - Conditional statements are used to draw certain parts of the building after a certain stage of construction. For example, ellipses representing windows are drawn only after a certain height (`i > 10`).

8. **Return Type**:
   - `void main()` is used, which is incorrect according to the C standard. `main()` should return an `int`.

Overall, this code creates a simple animated representation of a building being constructed using basic graphics functions provided by the `graphics.h` library.

## Output:

![App Screenshot](https://github.com/sambit-04/Imitating-Rocket-Launch-Using-Computer-Graphics/blob/main/hehe.jpg?raw=true))


## Conclusion:

**Graphics Environment:**
   - The code is designed to work in a graphics environment using Turbo C and the BGI (Borland Graphics Interface) graphics library. This environment was commonly used for developing simple 2D graphics applications on older DOS-based systems.

**Functionality Offered:**
   - The code creates an animation that appears to be a building or structure.
   - It involves drawing and updating various lines and shapes to simulate the animation.
   - The animation starts with a basic building shape and gradually modifies it by changing the appearance of its "basement," "windows," and "roof."
  - The animation includes the movement of ellipses that might represent some characters or objects (e.g., windows opening or closing).
   - The animation continues for 350 frames (controlled by the loop) with a delay of 5 milliseconds between each frame.

**Character or Object:**
   - The main character or object in this animation is a building or structure. It's represented using lines and shapes.
   - The basement of the building is drawn using lines, and it appears to have windows.
   - There are ellipses drawn that might symbolize objects or characters like windows. These ellipses change in appearance as the animation progresses.
   - Additionally, there's an implied movement in some elements of the building (e.g., the "basement" lines and ellipses), suggesting that the building might be undergoing some changes over time.

Overall, the code leverages the Turbo C graphics environment to create a basic animation of a building or structure, demonstrating the capabilities of the BGI graphics library for 2D graphics rendering.

## Installation

To install and use the code for building animation using C graphics, follow these steps:

**Step 1: Set up Turbo C/C++ Environment (for Windows)**

1. Download and install Turbo C/C++ IDE from a trusted source. Turbo C/C++ is an older IDE primarily used for DOS and early Windows development.
2. Make sure you have the necessary permissions to install software on your system.
3. Follow the installation instructions provided with the Turbo C/C++ package.

**Step 2: Set up Graphics Library**

1. After installing Turbo C/C++, locate the directory where Turbo C/C++ is installed (e.g., `C:\TURBOC3`).
2. Inside the Turbo C/C++ directory, there should be a folder named `BGI`. Ensure this folder contains the necessary graphics driver files required by the `graphics.h` library.
3. If the `BGI` folder is missing or doesn't contain the required files, you may need to download them separately or reinstall Turbo C/C++ from a source that includes the necessary graphics drivers.

**Step 3: Write or Copy the Code**

1. Open a text editor and write the code provided in the previous response, or copy the code from there.
2. Save the code with a `.c` extension, such as `building_animation.c`.

**Step 4: Compile and Run the Code**

1. Open Turbo C/C++ IDE.
2. Load the code file (`building_animation.c`) into the IDE.
3. Compile the code by pressing Alt + F9 or selecting the appropriate compilation option from the menu.
4. If there are no syntax errors and everything is set up correctly, the code should compile without errors.
5. Run the compiled code by pressing Ctrl + F9 or selecting the run option from the menu.

**Step 5: View the Animation**

1. After running the code, a window should appear displaying the animated building construction process.
2. Watch the animation until completion.
3. Close the window when you're finished viewing the animation.

That's it! You have successfully installed and used the code for building animation using C graphics on Turbo C/C++ environment.
## Acknowledgements

 - **Books on Graphics Programming with Turbo C:**
   - "Graphics Programming with Turbo C" by Steve Rimmer.
   - "Graphics Programming in C" by J.H. Tewari.

 - **Online Forums and Communities:** Platforms like Stack Overflow and programming forums.

 - **YouTube Video Tutorials:** Video tutorials on platforms like YouTube.

 - **Rocket Launch Animations and References:** References and videos of actual rocket launches for understanding rocket dynamics.

 - **GitHub and Code Repositories:** Online code repositories like GitHub with open-source graphics projects.



## Authors

- [@sambit-04 (Sambit Mazumder)](https://github.com/sambit-04)
- [@username (Bhaskar Mullik)](https://github.com/sambit-04)
- [@username (Mihir Kumar Lad)](https://github.com/sambit-04)
- [@username (Piyush Kushe)](https://github.com/sambit-04)


## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. Feel free to use, modify, and distribute the code for your own projects.

