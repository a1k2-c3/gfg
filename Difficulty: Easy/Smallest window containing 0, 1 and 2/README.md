<h2><a href="https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1?page=1&category=sliding-window&difficulty=Basic,Easy&sortBy=submissions">Smallest window containing 0, 1 and 2</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string <strong style="user-select: auto;">S</strong> consisting of the characters <strong style="user-select: auto;">0</strong>, <strong style="user-select: auto;">1</strong> and <strong style="user-select: auto;">2</strong>. Your task is to find the length of the <strong style="user-select: auto;">smallest substring </strong>of string <strong style="user-select: auto;">S</strong> that contains all the three characters <strong style="user-select: auto;">0, 1 </strong>and <strong style="user-select: auto;">2</strong>. If no such substring exists, then return <strong style="user-select: auto;">-1</strong>.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
S = 10212
<strong style="user-select: auto;">Output:</strong>
3
<strong style="user-select: auto;">Explanation:</strong>
The substring 102 is the smallest substring
that contains the characters 0, 1 and 2.
</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
S = 12121
<strong style="user-select: auto;">Output:</strong>
-1
<strong style="user-select: auto;">Explanation: </strong>
As the character 0 is not present in the
string S, therefor no substring containing
all the three characters 0, 1 and 2
exists. Hence, the answer is -1 in this case.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">Complete the function <strong style="user-select: auto;">smallestSubstring()</strong> which takes the string <strong style="user-select: auto;">S</strong> as input, and returns the length of the <strong style="user-select: auto;">smallest substring </strong>of string S that contains all the three characters <strong style="user-select: auto;">0, 1 </strong>and <strong style="user-select: auto;">2.</strong></span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O( length( S ) )<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ length( S )&nbsp;≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">All the characters of String S lies in the set {'0', '1', '2'}</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;