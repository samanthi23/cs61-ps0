It will also be useful to have some familiarity with [Unix shell](https://en.wikipedia.org/wiki/Unix_shell) syntax. You should know what standard input and standard output mean, and how to perform simple redirections. Specifically:

A simple shell command like prog1 runs prog1 in the current context: its [standard input and standard output](https://en.wikipedia.org/wiki/Standard_streams) are inherited from the shell, which usually means that its input reads from the keyboard and its output is printed to the terminal.

Typing ```prog1 < IN``` redirects prog1’s standard input to come from a file. In this instance, prog1 will observe the contents of the IN file when reading from its standard input.

Similarly, ```prog1 > OUT``` redirects prog1’s standard output to go to a file. If the file OUT already exists, its contents are overwritten.

```prog1 < IN > OUT``` performs both redirections.

```prog1 | prog2``` (pronounced “prog1 pipe to prog2”) redirects prog2’s standard input to read from prog1’s standard output. Thus, all the bytes written by prog1 are read by prog2 in order.

# Part 1: Byte counting

in C++

Write a program ```wc61``` that counts the number of bytes in its [standard input](https://en.wikipedia.org/wiki/Standard_) streams and prints the result to standard output. Examples:

Use the [fgetc](https://pubs.opengroup.org/onlinepubs/009695399/functions/fgetc.html) and [fprintf](https://pubs.opengroup.org/onlinepubs/009695399/functions/fprintf.html) library functions for C-style I/O.

