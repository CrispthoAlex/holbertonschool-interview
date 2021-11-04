# 0x1A. Double Circular Linked List

<h2>Requirements</h2>

<h3>General</h3>

<ul>
    <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 14.04 LTS</li>
    <li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
    <li>All your files should end with a new line</li>
    <li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
    <li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code>, and <code>strdup</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc… is forbidden</li>
    <li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions should be included in your header file called <code>list.h</code></li>
    <li>Don’t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>
<p>Data structure for this project:</p>
<pre><code>/**
    * struct List - doubly linked list
    * @str: string - (malloc'ed string)
    * @prev: points to the previous node
    * @next: points to the next node
    *
    * Description: doubly linked list node structure
    * for Holberton project
    */
    typedef struct List
    {
    char *str;
    struct List *prev;
    struct List *next;
    } List;
</code></pre>


## Tasks

| **Filename** | **Description** |
|---|---|
| [0. Add Nodes](./0-add_node.c) | Create the source file 0-add_node.c that contains the following functions: |

<ul>
<li>Add a new node  to <strong>the end</strong> of a double circular linked list:

<ul>
<li>Prototype: <code>List *add_node_end(List **list, char *str);</code></li>
<li><code>List</code>: the list to modify

<ul>
<li><code>str</code>: the string to copy into the new node</li>
<li>Returns: Address of the new node, or <code>NULL</code> on failure</li>
</ul></li>
</ul></li>
<li>Add a new node to <strong>the beginning</strong> of a double circular linked list:

<ul>
<li>Prototype: <code>List *add_node_begin(List **list, char *str);</code></li>
<li><code>List</code>: the list to modify

<ul>
<li><code>str</code>: the string to copy into the new node</li>
<li>Returns: Address of the new node, or <code>NULL</code> on failure</li>
</ul></li>
</ul></li>
</ul> 


#### Follow me

| Authors | GitHub | Twitter | Linkedin |
| :---: | :---: | :---: | :---: |
| Crispthofer Rincon | [crispthoalex](https://github.com/crispthoalex) | [@crispthoalex](https://twitter.com/crispthoalex) | [carmurrain](https://www.linkedin.com/in/carmurrain) |

### License
*`0x1A. Double Circular Linked List` is open source and therefore free to download and use without permission.*

<a href="url"><img src="https://theme.zdassets.com/theme_assets/2439906/391a1b5058281ff9c224e2dadc38ea90659556ba.png" align="middle" width="80" height="80"></a>

##### Holberton School  Advanced Program  AR/VR
##### November, 2021. Cali, Colombia