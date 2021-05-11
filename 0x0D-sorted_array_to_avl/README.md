# 0x0D. Array to AVL

## Requirements
#### General
<ul>
    <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 14.04 LTS</li>
    <li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
    <li>All your files should end with a new line</li>
    <li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
    <li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>You are allowed to use the standard library</li>
    <li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions should be included in your header file called <code>binary_trees.h</code></li>
    <li>Don’t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>
# More Info
## Data Structures
<p>Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.</p>

<h4>Basic Binary Tree</h4>
<pre><code>/**
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

typedef struct binary_tree_s binary_tree_t;
</code></pre>
<h4>AVL Tree</h4>
<pre><code>typedef struct binary_tree_s avl_t;
</code></pre>
<h3>Print function</h3>
<p>To match the examples in the tasks, you are given <a href="https://github.com/holbertonschool/0x1C.c" title="this function" target="_blank">this function</a></p>
<p>This function is used only for visualisation purpose. You don’t have to push it to your repo. It may not be used during the correction</p>

### Tasks

| **Filename** | **Description** |
|---|---|
| [0. AVL - From sorted array](./0-sorted_array_to_avl.c) | Write a function that builds an AVL tree from an array. |

#### Follow me

| Authors | GitHub | Twitter | Linkedin |
| :---: | :---: | :---: | :---: |
| Crispthofer Rincon | [crispthoalex](https://github.com/crispthoalex) | [@crispthoalex](https://twitter.com/crispthoalex) | [carmurrain](https://www.linkedin.com/in/carmurrain) |

### License
*`0x0D. Array to AVL` is open source and therefore free to download and use without permission.*

<a href="url"><img src="https://www.holbertonschool.com/holberton-logo.png" align-self="middle" width="100" height="30"></a>

##### Holberton School  Advanced Program  AR/VR
##### April, 2021. Cali, Colombia
