# [The Report](https://www.hackerrank.com/challenges/the-report/problem?isFullScreen=true)
## Medium
<div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>You are given two tables:&nbsp;<em>Students</em>&nbsp;and <em>Grades</em>.&nbsp;<em>Students</em>&nbsp;contains three columns <em>ID</em>, <em>Name</em> and <em>Marks</em>.</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/12891/1443818166-a5c852caa0-1.png"></p>

<p><em>Grades</em> contains the following data:</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/12891/1443818137-69b76d805c-2.png"></p>

<p><em>Ketty</em> gives <em>Eve</em> a task to generate a report containing three columns: <em>Name</em>, <em>Grade</em> and <em>Mark</em>. <em>Ketty</em> doesn't want the NAMES of those students who received a grade lower than <em>8</em>. The report must be in descending order by grade -- i.e.  higher grades are entered first. If there is more than one student with the same grade (8-10) assigned to them, order those particular students by their name alphabetically. Finally, if the grade is lower than 8, use "NULL" as their name and list them by their grades in descending order. If there is more than one student with the same grade (1-7) assigned to them, order those particular students by their marks in ascending order.</p>

<p>Write a query to help Eve.</p>

<p><strong>Sample Input</strong></p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/12891/1443818093-b79f376ec1-3.png"></p>

<p><strong>Sample Output</strong></p>

<pre><code>Maria 10 99
Jane 9 81
Julia 9 88 
Scarlet 8 78
NULL 7 63
NULL 7 68
</code></pre>

<p><br>
<strong>Note</strong></p>

<p>Print "NULL"&nbsp; as the name if the grade is less than 8.</p>

<p><strong>Explanation</strong></p>

<p>Consider the following table with the grades assigned to the students:</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/12891/1443818026-0b3af8db30-4.png"></p>

<p>So, the following students got <em>8</em>, <em>9</em> or <em>10</em> grades:</p>

<ul>
    <li><em>Maria (grade 10)</em></li>
    <li><em>Jane (grade 9)</em></li>
    <li><em>Julia (grade 9)</em></li>
    <li><em>Scarlet (grade 8)</em></li>
</ul></div></div></div></div>