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
...................................................................
+ Please, note this format is used for Quiz and Task questions.
...................................................................
  + O(1)
  + O(n)
  + O(n!)
  + n square -> O(n^2)
  + log(n) -> O(log(n))
  + n * log(n) -> O(nlog(n))
  + n + k -> O(n+k)
* Please use the “short” notation (don’t use constants). Example: O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.
..................................................................     

## Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)

## 0. Bubble sort  [ 0-bubble_sort.c, 0-O ]
  Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm
  * Prototype: [ void bubble_sort(int *array, size_t size); ]
  * You’re expected to print the array after each time you swap two elements 
  * Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```

 > gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble | ./bubble
 
## 1. Insertion sort  [  1-insertion_sort_list.c, 1-O ]
  Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) algorithm
  * Prototype: [ void insertion_sort_list(listint_t **list); ]
  * You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
  * You’re expected to print the list after each time you swap two elements 
  * Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion | .insertion
  
## 2. Selection sort  [ 2-selection_sort.c, 2-O ] 
  Write a function that sorts an array of integers in ascending order using the Selection sort algorithm
  * Prototype: [ void selection_sort(int *array, size_t size); ]
  * You’re expected to print the array after each time you swap two elements 
  * Write in the file 2-O, the big O notations of the time complexity of the [Selection sort](https://en.wikipedia.org/wiki/Selection_sort) algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select | ./select

##  3. Quick sort  [ 3-quick_sort.c, 3-O ]
 
  Write a function that sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm
  * Prototype: [ void quick_sort(int *array, size_t size); ]
  * You must implement the Lomuto partition scheme.
  * The pivot should always be the last element of the partition being sorted.
  * You’re expected to print the array after each time you swap two elements (See example below)
  * Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick | ./quick

##  4. Shell sort - Knuth Sequence  [ 100-shell_sort.c  ]
  Write a function that sorts an array of integers in ascending order using the [Shell sort](https://en.wikipedia.org/wiki/Shellsort) algorithm, using the Knuth sequence
  * Prototype: [ void shell_sort(int *array, size_t size); ]
  * You must use the following sequence of intervals (a.k.a the Knuth sequence):
+ => n+1 = n * 3 + 1
+ => 1, 4, 13, 40, 121, ...
You’re expected to print the array each time you decrease the interval (See example below).
No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap

  > gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-shell_sort.c print_array.c -o shell | ./shell

##  5. Cocktail shaker sort  [ 101-cocktail_sort_list.c, 101-O ]
  Write a function that sorts a doubly linked list of integers in ascending order using the [Cocktail shaker](https://en.wikipedia.org/wiki/Cocktail_shaker_sort) sort algorithm
  * Prototype: [ void cocktail_sort_list(listint_t **list); ]
  * You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
  * You’re expected to print the list after each time you swap two elements (See example below)
  * Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-cocktail_sort_list.c print_list.c -o cocktail | ./cocktail

## 6. Counting sort  [ 102-counting_sort.c, 102-O ]
  Write a function that sorts an array of integers in ascending order using the [Counting sort](https://en.wikipedia.org/wiki/Counting_sort) algorithm
  * Prototype: [ void counting_sort(int *array, size_t size); ]
  * You can assume that array will contain only numbers >= 0
  * You are allowed to use malloc and free for this task
  * You’re expected to print your counting array once it is set up (See example below)
  * This array is of size k + 1 where k is the largest number in array
  * Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-counting_sort.c print_array.c -o counting | ./counting
 
## 7. Merge sort  [ 103-merge_sort.c, 103-O ] 
  Write a function that sorts an array of integers in ascending order using the [Merge sort](https://en.wikipedia.org/wiki/Merge_sort) algorithm
  * Prototype: [ void merge_sort(int *array, size_t size); ]
  * You must implement the top-down merge sort algorithm
  * When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
  * Sort the left array before the right array
  * You are allowed to use printf
  * You are allowed to use malloc and free only once (only one call)
  * Write in the file 103-O, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 103-main.c 103-merge_sort.c print_array.c -o merge | ./merge 
 
## 8. Heap sort  [  ]
  Write a function that sorts an array of integers in ascending order using the [Heap sort](https://en.wikipedia.org/wiki/Heapsort) algorithm
  * Prototype: [ void heap_sort(int *array, size_t size); ]
  * You must implement the sift-down heap sort algorithm
  * You’re expected to print the array after each time you swap two elements (See example below)
  * Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 104-main.c 104-heap_sort.c print_array.c -o heap | ./heap

## 9. Radix sort  [ 105-radix_sort.c ]
  Write a function that sorts an array of integers in ascending order using the [Radix sort](https://en.wikipedia.org/wiki/Radix_sort) algorithm
  * Prototype: [ void radix_sort(int *array, size_t size); ]
  * You must implement the LSD radix sort algorithm
  * You can assume that array will contain only numbers >= 0
  * You are allowed to use malloc and free for this task
  * You’re expected to print the array each time you increase your significant digit
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 105-main.c 105-radix_sort.c print_array.c -o radix | ./radix

## 10. Bitonic sort [  106-bitonic_sort.c, 106-O ]
  Write a function that sorts an array of integers in ascending order using the [Bitonic sort](https://en.wikipedia.org/wiki/Bitonic_sorter) algorithm
  * Prototype: [ void bitonic_sort(int *array, size_t size); ]
  * You can assume that size will be equal to 2^k, where k >= 0 (when array is not NULL …)
  * You are allowed to use printf
  * You’re expected to print the array each time you swap two elements (See example below)
  * Write in the file 106-O, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 106-main.c 106-bitonic_sort.c print_array.c -o bitonic | ./bitonic 


## 11. Quick Sort - Hoare Partition scheme  [ 107-quick_sort_hoare.c, 107-O ]
  Write a function that sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm
  * Prototype: [ void quick_sort_hoare(int *array, size_t size); ]
  * You must implement the Hoare partition scheme.
  * The pivot should always be the last element of the partition being sorted.
  * You’re expected to print the array after each time you swap two elements (See example below)
  * Write in the file 107-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
```
   - in the best case
   - in the average case
   - in the worst case
```
  > gcc -Wall -Wextra -Werror -pedantic 107-main.c 107-quick_sort_hoare.c print_array.c -o quick | ./quick

##  12. Dealer [ 1000-sort_deck.c, deck.h ]
  Write a function that sorts a deck of cards.
  * Prototype: [ void sort_deck(deck_node_t **deck); ]
  * You are allowed to use the C standard library function qsort
  * Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
  * You can assume there is exactly 52 elements in the doubly linked list.
  * You are free to use the sorting algorithm of your choice
  + The deck must be ordered:
   + From Ace to King
   + From Spades to Diamonds
  > gcc -Wall -Wextra -Werror -pedantic 1000-main.c 1000-sort_deck.c -o deck | ./deck

## 13. Nodes  [13-binary_tree_nodes.c]
  Write a function that counts the nodes with at least 1 child in a binary tree
* Prototype: [size_t binary_tree_nodes(const binary_tree_t *tree);]
* Where tree is a pointer to the root node of the tree to count the number of nodes
* If tree is NULL, the function must return 0
* A NULL pointer is not a node
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes

> ./13-nodes

## 14. Balance factor  [14-binary_tree_balance.c]
  Write a function that measures the balance factor of a binary tree
* Prototype: [int binary_tree_balance(const binary_tree_t *tree);]
* Where tree is a pointer to the root node of the tree to measure the balance factor
* If tree is NULL, return 0
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 
> 1-binary_tree_insert_left.c -o 14-balance

> ./14-balance

## 15. Is full  [15-binary_tree_is_full.c]
  Write a function that checks if a binary tree is full
* Prototype: [int binary_tree_is_full(const binary_tree_t *tree);]
* Where tree is a pointer to the root node of the tree to check
* If tree is NULL, your function must return 0
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full

> ./15-full

## 16. Is perfect  [16-binary_tree_is_perfect.c]
  Write a function that checks if a binary tree is perfect
* Prototype: [int binary_tree_is_perfect(const binary_tree_t *tree);]
* Where tree is a pointer to the root node of the tree to check
* If tree is NULL, your function must return 0
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect

> ./16-perfect

## 17. Sibling  [17-binary_tree_sibling.c]
  Write a function that finds the sibling of a node
* Prototype: [binary_tree_t *binary_tree_sibling(binary_tree_t *node);]
* Where node is a pointer to the node to find the sibling
* Your function must return a pointer to the sibling node
* If node is NULL or the parent is NULL, return NULL
* If node has no sibling, return NULL
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling | ./17-sibling

## 18. Uncle  [18-binary_tree_uncle.c]
  Write a function that finds the uncle of a node
* Prototype: [binary_tree_t *binary_tree_uncle(binary_tree_t *node);]
* Where node is a pointer to the node to find the uncle
* Your function must return a pointer to the uncle node
* If node is NULL, return NULL
* If node has no uncle, return NULL
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle | ./18-uncle

## 19. Lowest common ancestor  [100-binary_trees_ancestor.c]
  Write a function that finds the lowest common ancestor of two nodes
* Prototype: [binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);]
* Where first is a pointer to the first node
* And second is a pointer to the second node
* Your function must return a pointer to the lowest common ancestor node of the two given nodes
* If no common ancestor was found, your function must return NULL
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor | ./100-ancestor

## 20. Level-order traversal  [101-binary_tree_levelorder.c]
  Write a function that goes through a binary tree using level-order traversal
* Prototype: [void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));]
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If tree or func is NULL, do nothing
> gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 101-main.c 101-binary_tree_levelorder.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 101-lvl

> valgrind ./101-lvl

## 21. Is complete  []
  Write a function that checks if a binary tree is complete
* Prototype: [int binary_tree_is_complete(const binary_tree_t *tree);]
* Where tree is a pointer to the root node of the tree to check
* If tree is NULL, your function must return 0

 
## Resources
### Read or watch:

* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)(WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)


