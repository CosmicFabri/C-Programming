# C Programming

This repository contains the solution to the programs proposed in the book [C Programming: A Modern Approach, 2nd Edition, by K. N. King](http://knking.com/books/c2/index.html), as a way for me to learn C, as I want to delve deeper into low-level programming.

## Usage

You can use this repository to either:

- **Explore the solutions to the problems**, made by me.
- **Compile and test the programs** (I don't include the binaries in this repository; you'll have to compile the programs yourself depending on your specific platform).
- **Submit improvement requests** through PRs. I'll be very thankful for any suggestion/bug report you could submit through a PR, as they're part of my learning process.

In UNIX-based systems, you can compile any of these programs by using **GCC**:

```
gcc -o binary-name source-name.c
```

## Structure

I've divided logically each chapter of the book into the **Programs**, **Exercises** and **Projects** sections:

- **Programs**: These are the example programs that appear through the book chapters to exemplify certain topics — they're already solved, but it's worth to re-write and take a look at them.
- **Exercises**: The proposed exercises at the end of each chapter, right after the Q&A section. These may not contain every exercise because _not every exercise is a program_.
- **Projects**: The proposed programming projects. These condense the knowledge acquired throughout the chapter, and are a bit more large and complex.

Here's a sample of how the repository structure may look like:

```
02-C-Fundamentals/
  Exercises/
  Programs/
    01-pun.c
    02-d-weight.c
    ...
  Projects/
    01-stars.c
    02-sphere.c
    ...
03-Formatted-I-O/
...
```

Notice that, inside of each section directory, **the program names start with two-digit numbers, starting from 01**. This is so that the programs of each section respect the order in which they appeared, as it makes it easier for you to follow along the book.
