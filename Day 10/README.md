## Variable Sized Arrays
### Objective
Today, we're working with binary numbers. Check out the Tutorial tab for learning materials and an instructional video!

#### Task
Given a base-**10** integer, **n**, convert it to binary (base-**2**). Then find and print the base-**10** integer denoting the maximum number of consecutive **1**'s in **n**'s binary representation. When working with different bases, it is common to show the base as a subscript.

#### Example
**n = 125**
The binary representation of **125**<sup>**10**</sup> is **1111101**<sup>**2**</sup>. In base **10**, there are **5** and **1** consecutive ones in two groups. Print the maximum, **5**.

#### Input Format

A single integer, **n**.

#### Constraints
* 1 ≤ n ≤ 10<sup>**6**</sup>
#### Output Format

Print a single base-**10** integer that denotes the maximum number of consecutive **1**'s in the binary representation of **n**.

#### Sample Input 1

	5
#### Sample Output 1

	1
#### Sample Input 2

	13
#### Sample Output 2

	2
#### Explanation

Sample Case 1:<br/>
The binary representation of **5**<sup>**10**</sup>is **101**<sup>**2**</sup>, so the maximum number of consecutive **1**'s is **1**.
<br/>
Sample Case 2:<br/>
The binary representation of **13**<sup>**10**</sup> is **1101**<sup>**2**</sup>, so the maximum number of consecutive **1**'s is **2**.
