# Count the elements
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two arrays <strong>a </strong>and <strong>b</strong>. Given <strong>q</strong> queries each having a positive integer <strong>i</strong> denoting an index of the array <strong>a</strong>. For each query, your task is to find all the elements less than or equal to <strong>q<sub>i</sub></strong> in the array <strong>b</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N=6
a[] = {1, 2, 3, 4, 7, 9}
b[] = {0, 1, 2, 1, 1, 4} 
Query 1 -&gt; 5
Query 2 -&gt; 4
<strong>Output :</strong> 6
&nbsp;        6
<strong>Explanation</strong>: For 1<sup>st</sup> query, the given index is 5,
&nbsp;            A[5] is 9 and in B all the elements 
&nbsp;            are smaller than 9.
             For 2<sup>nd</sup> query, the given index is 4, 
&nbsp;            A[4] is 7 and in B all the elements 
&nbsp;            are smaller than 7.&nbsp;  </span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>find()</strong>&nbsp;that takes<strong>&nbsp;array a , array b, array q </strong>as parameters<strong>&nbsp;</strong>and returns an array that contains the answer to the corresponding queries.&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n).<br>
<strong>Expected Auxiliary Space:</strong> O(n).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n ≤ 10<sup>7</sup></span></p>

<p>&nbsp;</p>
</div>