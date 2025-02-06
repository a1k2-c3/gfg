<h2><a href="https://www.geeksforgeeks.org/problems/kth-prime-factor-of-a-number0132/0">Kth Prime Factor</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two numbers<strong style="user-select: auto;"> n</strong> and <strong style="user-select: auto;">k</strong>, find the k<sup style="user-select: auto;">th</sup> prime factor&nbsp;of n.&nbsp;</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 225, k = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explaination:</strong> The prime factors 3, 3, 5 
and 5. So 3 is the 2nd one.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 81, k = 5
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explaination:</strong> The 4 prime factors are 
3, 3, 3, 3. So there is no 5th one.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">kthPrime()</strong> which takes the value n and k as input parameters and return&nbsp;the kth prime number. If k is greater than total number of primes then&nbsp;return -1.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(n*log(log n))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ k ≤ 50</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Prime Number</code>&nbsp;<code>sieve</code>&nbsp;<code>factorial</code>&nbsp;<code>Algorithms</code>&nbsp;