# 0x1D. AVL Trees

<h2>Requirements</h2>
<h3>General</h3>

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

<h2>More Info</h2>
<h3>Data structures</h3>
<p>The following data structures and types for binary trees is used. Including in the header file.</p>

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


## Tasks

| **Filename** | **Description** |
|---|---|
| [0. Is AVL](./0-binary_tree_is_avl.c) | Write a function that checks if a binary tree is a valid AVL Tree |

<ul>
    <li>Prototype: <code>int binary_tree_is_avl(const binary_tree_t *tree);</code></li>
    <li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
    <li>Your function must return <code>1</code> if <code>tree</code> is a valid AVL Tree, and <code>0</code> otherwise</li>
    <li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>

<p>Properties of an AVL Tree:</p>
<ul>
    <li>An AVL Tree is a BST</li>
    <li>The difference between heights of left and right subtrees cannot be more than one</li>
    <li>The left and right subtree each must also be a binary search tree</li>
</ul>

#### Follow me

| Authors | GitHub | Twitter | Linkedin |
| :---: | :---: | :---: | :---: |
| Crispthofer Rincon | [crispthoalex](https://github.com/crispthoalex) | [@crispthoalex](https://twitter.com/crispthoalex) | [carmurrain](https://www.linkedin.com/in/carmurrain) |

### License
*`0x1D. AVL Trees` is open source and therefore free to download and use without permission.*

<a href="url"><img src="https://theme.zdassets.com/theme_assets/2439906/391a1b5058281ff9c224e2dadc38ea90659556ba.png" align="middle" width="80" height="auto"></a>

##### Holberton School  Advanced Program  AR/VR
##### November, 2021. Cali, Colombia
