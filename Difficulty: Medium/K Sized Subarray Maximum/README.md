<h2><a href="https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1">K Sized Subarray Maximum</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">Given an array <strong style="user-select: auto;"><code style="user-select: auto;">arr[]</code></strong> of integers and an integer <strong style="user-select: auto;"><code style="user-select: auto;">k</code></strong>, your task is to find the maximum value for each contiguous subarray of size <code style="user-select: auto;">k</code>. The output should be an array of maximum values corresponding to each contiguous subarray.</span></p>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3
<strong style="user-select: auto;">Output: </strong>[3, 3, 4, 5, 5, 5, 6] 
<strong style="user-select: auto;">Explanation: </strong>
1st contiguous subarray = [1 2 3] max = 3
2nd contiguous subarray = [2 3 1] max = 3
3rd contiguous subarray = [3 1 4] max = 4
4th contiguous subarray = [1 4 5] max = 5
5th contiguous subarray = [4 5 2] max = 5
6th contiguous subarray = [5 2 3] max = 5
7th contiguous subarray = [2 3 6] max = 6<br style="user-select: auto;"></span></pre>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [8, 5, 10, 7, 9, 4, 15, 12, 90, 13], k = 4
<strong style="user-select: auto;">Output: </strong>[10, 10, 10, 15, 15, 90, 90]
<strong style="user-select: auto;">Explanation: 
</strong>1st contiguous subarray = [8 5 10 7], max = 10
2nd contiguous subarray = [5 10 7 9], max = 10
3rd contiguous subarray = [10 7 9 4], max = 10
4th contiguous subarray = [7 9 4 15], max = 15
5th contiguous subarray = [9 4 15 12], max = 15
6th contiguous subarray = [4 15 12 90], max = 90
7th contiguous subarray = [15 12 90 13], max = 90</span></pre>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [5, 1, 3, 4, 2, 6], k = 1
<strong style="user-select: auto;">Output: </strong>[5, 1, 3, 4, 2, 6]
<strong style="user-select: auto;">Explanation: 
</strong>When k = 1, each element in the array is its own subarray, so the output is simply the same array
</span></pre>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ arr.size() ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">1 ≤ k ≤ arr.size()<br style="user-select: auto;">0 ≤ arr[i] ≤ 10<sup style="user-select: auto;">9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Directi</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Arrays</code>&nbsp;<code>Queue</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;