# CSI281 Assignment 4

For this assignment, you will be implementing bubble sort, selection sort, and insertion sort. You will also be answering some questions about them. 

You may look at pseudo code such as that provided in the reading or on Wikipedia, but please do yourself a favor and implement these functions yourself without copying someone else's C++. As always, cite your sources.

## Basic Instructions

1. Download the contents of this repository.
2. Create your own private repository and add the contents of this repository to it.
3. Add your partner and me (@davecom) as collaborators on your private repository.
4. Implement the missing parts where it says "YOUR CODE HERE"
5. Test it by following the build directions below.
6. Answer all of the questions in `questions.txt` in your own file `answers.txt`.
7. Submit the URL to your private repository on Canvas.

## Standard Library Restrictions

Please do not use the standard library functions `sort()` or `qsort()` for this assignment. You can use the rest of the standard library as much as you want.

## Directory Structure and Files

- `/` Main directory including this `README.md`, the build scripts, and `questions.txt`.
- `/lib` Libraries for drawing the charts and testing your work. There's no need to touch this.
- `/src` Source files, some of which you should modify and some of which you should not.

### Specific Files

*indicates do not modify
&indicates you must modify
%indicates you must create

- `GNUMakefile`* make file for GNU Make on macOS and GNU/Linux
- `Makefile`* make file for nmake/Visual Studio on Windows
- `README.md`* this file
- `LICENSE` MIT License
- `questions.txt`* Questions that you are expected to answer.
- `answers.txt`% Your answers to the questions in `questions.txt`

- `lib/catch.h`* a unit testing library
- `lib/PPlot.cpp`* part of a chart making library
- `lib/PPlot.h`* part of a chart making library
- `lib/SVGPainter.cpp`* part of a chart making library
- `lib/SVGPainter.h`* part of a chart making library

- `src/sort.h`& the sort functions you must implement
- `src/main.cpp` the main file that runs the tests and makes the charts
- `src/test.cpp`* the unit tests to prove your code works

## Building and Running

### macOS and GNU/Linux

`cd` to the appropriate directory and run `make` and `./assignment4` to run all of the tests. It will also output a  `.svg` file when you are done that shows nicely plotted data. Run `make clean` to remove all objects files, the executable, and the svg files.

### Windows

From the start menu (assuming you have installed Visual Studio 2019) open the "Developer Command Prompt." `cd` to the appropriate directory and run `nmake` and `assignment4` to run all of the tests. It will also output a  `.svg` file when you are done that shows nicely plotted data. Run `nmake clean` to remove all objects files, the executable, and the svg files.

## Checklist for Submission

- [ ] Did you add your partner and me (@davecom) as collaborators on the repository?
- [ ] Did you replace every area that said "YOUR CODE HERE" with your code?
- [ ] Did you ensure you are passing all of the unit tests?
- [ ] Did you cite all sources, especially any place that you copied code from? Put code citations right next to where you inserted it.
- [ ] Did you add sufficient comments?
- [ ] Did you double check your code for good style?
- [ ] Did you remember to free any memory you manually allocated on the heap?
- [ ] Did you put your name below mine at the top of any files you modified and any other appropriate places?
- [ ] Did you try cleaning, building, and running once to make sure everything is in working order before submitting?
- [ ] If you were working with an IDE, did you test building on the command line with make or nmake? I will only test your work with make or nmake.
- [ ] Did you remember to include your `answers.txt` file with answers to every question?
- [ ] Did you check the repository is free of your object files and other garbage and just contains source files?
- [ ] Did you submit the URL to your repository on Canvas?
