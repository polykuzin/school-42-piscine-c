<h1> 「 Piscine C 」 </h1> 

## Description

This repository contains some versions of completed and commented tasks for each day of the very first pool in pure C.

In fact, the repository provides solutions to problems for algorithms in C without using third-party libraries. Also, the folder of the completed task may contain a text file or a folder with test files, compiling which you can see how the function (or several functions) required in the task works.

To correctly display the contents of the files, this repository - clone the repository to your computer and open the files through any code editor convenient for you.

## Compilation:

To compile any program, first go to the folder containing the file with the source code of this program. Open a terminal window and use the command `cd` and 'addresses to the folder' containing the source code file to go to the folder where it is located (for ex. I have it in the 'Documents' folder): 

      cd ~/Documents/c00

At school 42 it is customary to compile files using -Wall -Werror -Wextra flags, so the result compiler command for test.c file will be:

      gcc -Wall -Werror -Wextra test.c 

Next, press Enter and at the output (if you have a system of the `unix' family) we get the file 'a.out'. If you have a `windows` system then you will get a file at the output `a.exe `. 

The executable file of the program will appear in the directory that you went to through the terminal window before compiling (in which you compiled the source code file).

## Features of launching the received program:

If you have "Windows", you can run the program simply by writing the path to it in the terminal window :

      ./a.exe

But if you have 'Linux' or other operating system of the 'Unix' family, then in order for the system to allow you to run an executable file with the program you created, 'before launching, you must give this executable file the rights to execute! Otherwise, the system will not allow it to run. 

Therefore, we will give our `executable file' the rights to execute, with this command, by writing in the terminal < *program name* >, < *execution arguments* > and < *file path* >: 

      chmod +x ./a.output

 To run the program through the terminal, write the path to it in the terminal window: 

      ./a.output

In order not to waste time, you can combine all the commands into one line by writing in the terminal window like this:

      gcc -Wall -Error -Test Wextra.c && chmod +x ./a.output &&./a.output