Intro to C++
============

Author: Jeremy Pedersen

CONTENTS
--------
* ABOUT (why I put this stuff together, thank-yous)
* WHAT’S INCLUDED (what’s in this repo, anyway?)
* INSTALL (the install process...or lack thereof)
* USAGE (what do I do with this?)
* NOTES (miscellany)

ABOUT
-----

This is a collection of materials for teaching a very simple intro to C++ class. I designed this for some of my students who had finished an introductory Python course, and were looking to try out another language.

WHAT’S INCLUDED
---------------

- classBook.pdf is a file that wraps up all the course PDFs (syllabus, homeworks from classXX folders) into one convenient PDF for easy reference and printing. 

- The classXX folders contain my teaching materials. This is usually just a few .tex files of problem sets for students, and a few .cpp programs to use as examples or to help students complete homework.

- syllabus.odt is the course syllabus. It can be opened in LibreOffice, a free and open source MS Office clone.

- syllabus.pdf is a PDF version of the course syllabus for people who do not have LibreOffice installed (you should install it, it's great!).

- clean.sh - This script cleans up files leftover from compiling the .tex files, and also cleans up any stray a.out files created by g++ when I was testing my .cpp files. It is a regular old bash script. 

- makebook.sh - This script goes through the whole repository and combines all the PDFs it finds into a single pdf called classBook.pdf. This puts the syllabus and homework assignments all in one easily-printable place. This is a regular old bash script, and it requires GhostScript (the 'gs' command) to run. Tested under OSX El Capitan, but should work fine in Linux too.

INSTALL
-------

There is no actual installable software here. Each class folder contains:

- Some .cpp files which can be used as examples for students to look at. They all compile individually (g++ nameOfFile.cpp)
- Some .tex files with problem sets for students, compiled into PDF using LaTeX
- Sometimes a video in .mp4 format, explaining a more difficult concept

The .cpp files were all compiled under OSX El Capitan using g++. The PDFs were compiled from .tex under MacTex, and the videos were tested in both QuickTime and VLC.

USAGE
-----

Use these materials any way you like! I license all of my **own** content under [The Unlicense](https://unlicense.org/). There is **one** exception to this license: I do not own the "pointer fun" video in the "class03" folder. That video comes from Stanford's library of free educational materials. I provide the copyright legend here as requested by the original author:

"This is document 104 in the Stanford CS Education Library. Please see [the Stanford CS Library](http://cslibrary.stanford.edu/) for this and other free educational materials. Copyright Nick Parlante 1999."

You can look [here](http://cslibrary.stanford.edu/104/) for the original video.

NOTES 
-----

I hope you find these materials useful!
