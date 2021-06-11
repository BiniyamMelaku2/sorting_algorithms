# 0x1B. C - Sorting algorithms & Big O
 Foundations > Low-level programming & Algorithm > Data structures and Algorithms

## Requirements
### General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.


## 0. Bubble sort  [  ]
  Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm
  * Prototype: [ void bubble_sort(int *array, size_t size); ]
  * You’re expected to print the array after each time you swap two elements (See example below)
  * Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
   + in the best case
   + in the average case
   + in the worst case
 > gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble | ./bubble
 
## Resources
### Read or watch:

* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)(WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)


