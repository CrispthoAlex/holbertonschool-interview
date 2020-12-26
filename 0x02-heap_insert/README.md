![](https://i.ytimg.com/vi/02xj_mGJZJE/maxresdefault.jpg)

# 0x02. Heap Insert

# Requirements
## General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Dont forget to push your header file
* All your header files should be include guarded

# More Info
## Data structures
Use the following data structures and types for binary trees.

## Basic Binary Tree
````
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
````
## Max Binary Heap
````
typedef struct binary_tree_s heap_t;
````

### Tasks

| **Filename** | **Description** |
|---|---|
| [0. New node](./0-binary_tree_node.c/) | function that creates a binary tree node. |
| [1. Heap - Insert](./1-heap_insert.c/) |  function that inserts a value into a Max Binary Heap. |

## Output
````C
				.----------------------(006)-------.
			  .--(001)-------.                   .--(008)--.
		    .--(-02)       .--(003)-------.       (007)     (009)
	 .-------(-06)          (002)       .--(005)
   .--(-08)--.                           (004)
(-09)     (-07)

````

#### Follow me

| Authors | GitHub | Twitter | Linkedin |
| :---: | :---: | :---: | :---: |
| Crispthofer Rincon | [crispthoalex](https://github.com/crispthoalex) | [@crispthoalex](https://twitter.com/crispthoalex) | [carmurrain](https://www.linkedin.com/in/carmurrain) |

### License
*`0x02. Heap Insert` is open source and therefore free to download and use without permission.*

<a href="url"><img src="https://www.holbertonschool.com/holberton-logo.png" align="middle" width="100" height="30"></a>

##### Holberton School  Advanced Program  AR/VR
##### December, 2020. Cali, Colombia