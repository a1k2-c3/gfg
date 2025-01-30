<h2><a href="https://www.geeksforgeeks.org/problems/find-kth-permutation-0932/1?page=1&category=Backtracking&difficulty=Easy,Medium&sortBy=submissions">Find Kth permutation</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two integers&nbsp;<strong style="user-select: auto;">N&nbsp;</strong>(1&lt;=N&lt;=9) and&nbsp;<strong style="user-select: auto;">K</strong>. Find the kth permutation sequence of first N natural numbers. Return the answer in&nbsp;<strong style="user-select: auto;">string</strong>&nbsp;format.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N =<strong style="user-select: auto;"> </strong>4, K = 3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong>1324</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation: </strong></span>
<span style="font-size: 18px; user-select: auto;">Permutations of first 4 natural numbers:
1234,1243,1324,1342,1423,1432.....
So the 3rd permutation is 1324. </span>
</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 3, K = 5</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong>312</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation: 
</strong>Permutations of first 3 natural numbers:
123,132,213,231,312,321.
So the 5th permutation is 312. </span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">kthPermutation()&nbsp;</strong>which takes two integers N and K as input parameters and returns a string denoting the kth permutation.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= N &lt;= 9<br style="user-select: auto;">1 &lt;= K &lt;= N!</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;