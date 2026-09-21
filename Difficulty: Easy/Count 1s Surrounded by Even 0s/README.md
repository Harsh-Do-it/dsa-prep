<h2><a href="https://www.geeksforgeeks.org/problems/surround-the-1s2505/1">Count 1s Surrounded by Even 0s</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given a binary matrix <strong>matrix[][] </strong>containing only <strong>0</strong>s and <strong>1</strong>s, count cells containing <strong>1</strong> and have a positive even number of surrounding 0s.</span></p>
<ul>
<li><span style="font-size: 14pt;">For each cell (except on boundary), there are 8 surrounding cells, directly above, below, left, right, and the four diagonal cells.&nbsp;</span></li>
<li><span style="font-size: 14pt;">The cells on boundary have less surrounding cells as cells outside matrix are not considered. </span></li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>matrix[][] = [[1, 0, 0], [1, 1, 0], [0, 1, 0]]
<strong>Output: </strong>1
<strong>Explanation: </strong>The 1 at position (1, 0) has 2 surrounding 0s, which is a positive even number, so it is counted.<br>The other 1s have 1, 5, and 3 surrounding 0s respectively, all of which are odd. Hence, the total count is 1.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>matrix[][] = [[1]]
<strong>Output: </strong>0
<strong>Explanation: </strong>The matrix contains only one cell, so it has no surrounding cells and therefore has 0 surrounding 0s. Since at least one surrounding 0 is required, this 1 is not counted.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>matrix[][] = [[0, 0, 0], [0, 1, 0], [0, 0, 0]]
<strong>Output: </strong>1
<strong>Explanation: </strong>The 1 at position (1, 1) has 8 surrounding cells, and all 8 are 0s. Since 8 is a positive even number, this 1 is counted. Hence, the answer is 1.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;