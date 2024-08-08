<h2><a href="https://www.geeksforgeeks.org/problems/smaller-and-larger4005/1?page=2&category=Arrays,Strings&difficulty=Basic&sortBy=submissions">Smaller and Larger</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><span style="font-size: 18px;">Given a sorted array <strong>arr</strong> and a value <strong>x</strong>, return an array of size 2. The first value is the number of elements less than or equal to <strong>x</strong>, and the second value is the number of elements greater than <strong>x</strong>.</span><br></span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [1, 2, 8, 10, 11, 12, 19], <span style="font-size: 14pt;"><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> </strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">x = 0</span></span>
<strong>Output: </strong>0, 7
<strong>Explanation:</strong> There are no elements less or equal to 0 and 7 elements greater to 0.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 5, 8, 10, 11, 12, 19], x = 5
<strong>Output:</strong> 2, 5
<strong>Explanation:</strong> There are 2 elements less or equal to 5 and 5 elements greater to 5.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(logn)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size ≤ 10<sup>5</sup><br>0 ≤ arr[i], x ≤ 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;