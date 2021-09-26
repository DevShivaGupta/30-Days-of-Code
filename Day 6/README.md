## Day 6: Let's Review
#### Objective
Today we will expand our knowledge of strings, combining it with what we have already learned about loops. Check out the [Tutorial](Day 6: Let's Review) tab for learning materials and an instructional video.

#### Task
Given a string,**S**, of length **N** that is indexed from **0** to **N-1**, print its even-indexed and odd-indexed characters as **2** space-separated strings on a single line (see the Sample below for more detail).

**Note:**  is considered to be an even index.

#### Example
**s=adhecf**
Print abc def

#### Input Format

The first line contains an integer, **T** (the number of test cases).
Each line **i** of the **T** subsequent lines contain a string, **S**.

#### Constraints
* 1≤T≤10
* 2≤length of s≤10000
#### Output Format

For each String **Sj** (where 0≤j≤T-1), print **Sj**'s even-indexed characters, followed by a space, followed by **Sj**'s odd-indexed characters.

#### Sample Input

	2
	Hacker
	Rank
#### Sample Output

	Hce akr
	Rn ak
#### Explanation

Test Case 0:
S="Hacker"<br/>
S[0]="H"<br/>
S[1]="a"<br/>
S[2]="c"<br/>
S[3]="k"<br/>
S[4]="e"<br/>
S[5]="r"<br/>
The even indices are **0**,**2**, and **4**, and the odd indices are **1**, **3**, and **5**. We then print a single line of  **2** space-separated strings; the first string contains the ordered characters from **S**'s even indices (**Hce**), and the second string contains the ordered characters from **S**'s odd indices (**akr**).

Test Case 1: 
S="Rank"<br/>
S[0]="R"<br/>
S[1]="a"<br/>
S[2]="n"<br/>
S[3]="k"<br/>
The even indices are **0** and **2**, and the odd indices are **1** and **3**. We then print a single line of **2** space-separated strings; the first string contains the ordered characters from **S**'s even indices (**Rn**), and the second string contains the ordered characters from **S**'s odd indices (**ak**).
