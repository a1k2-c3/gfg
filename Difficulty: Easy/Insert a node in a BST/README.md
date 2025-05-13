<h2><a href="https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1">Insert a node in a BST</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a <strong style="user-select: auto;">BST</strong>(Binary Search Tree)&nbsp;and a key <strong style="user-select: auto;">key</strong>. If the key is not present in the BST, Insert a new node with a value equal to the key into the BST. If the key </span><span style="font-size: 18px; user-select: auto;">is already present in the BST, don't modify the BST. R</span><span style="font-size: 18px; user-select: auto;">eturn the root of the modified BST after inserting the key.&nbsp;</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>The generated output contains the in-order traversal of the modified tree.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples :</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>key = 4
&nbsp; &nbsp; &nbsp;2
&nbsp;  /&nbsp;&nbsp; \ &nbsp; <br style="user-select: auto;">  1&nbsp;  &nbsp; 3
<strong style="user-select: auto;">Output: </strong>1 2 3 4<strong style="user-select: auto;">
Explanation: </strong>After inserting the node 4 Inorder traversal will be 1 2 3 4.</span>
</pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>key = 4
  &nbsp; &nbsp; &nbsp;&nbsp;2
&nbsp; &nbsp; &nbsp;&nbsp;/&nbsp;&nbsp; \
 &nbsp; &nbsp; 1 &nbsp; &nbsp; 3
 &nbsp;  &nbsp; &nbsp; &nbsp;   &nbsp;\
 &nbsp;  &nbsp;&nbsp; &nbsp; &nbsp;   &nbsp;6
<strong style="user-select: auto;">Output: </strong>1 2 3 4 6<strong style="user-select: auto;">
Explanation: </strong>After inserting the node 4 Inorder traversal of the above tree will be 1 2 3 4 6.<br style="user-select: auto;"></span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>key = 2
&nbsp; &nbsp; &nbsp;2
&nbsp;  /&nbsp;&nbsp; \ &nbsp; <br style="user-select: auto;">  1&nbsp;  &nbsp; 3
<strong style="user-select: auto;">Output: </strong>1 2 3 <strong style="user-select: auto;">
Explanation:</strong> Node with key=2 already present in BST, Inorder traversal will be 1 2 3.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= number of nodes &lt;= 10<sup style="user-select: auto;">5<br style="user-select: auto;"></sup></span><span style="font-size: 18px; user-select: auto;">1 &lt;= node-&gt;data &lt;= 10<sup style="user-select: auto;">9</sup></span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= key &lt;= 10<sup style="user-select: auto;">9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Design-Pattern</code>&nbsp;<code>Data Structures</code>&nbsp;