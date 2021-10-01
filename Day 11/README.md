#### Objective
Today, we're delving into Inheritance. Check out the attached tutorial for learning materials and an instructional video.

#### Task
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

* A Student class constructor, which has  parameters:
	1. A string, ***firstName***.
	2. A string, ***lastName***.
	3. An integer, ***idNumber***.
	4. An integer array (or vector) of test scores, .
* A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
![GradinScale](https://s3.amazonaws.com/hr-challenge-images/17165/1458142706-3073bc9143-Grading.png)

#### Input Format

The locked stub code in the editor reads the input and calls the Student class constructor with the necessary arguments. It also calls the calculate method which takes no arguments.

The first line contains ***firstName***, ***lastName***, and ***idNumber***, separated by a space. The second line contains the number of test scores. The third line of space-separated integers describes ***scores***.

#### Constraints

#### Output Format

Output is handled by the locked stub code. Your output will be correct if your Student class constructor and calculate() method are properly implemented.

#### Sample Input

	Heraldo Memelli 8135627
	2
	100 80
#### Sample Output

 	Name: Memelli, Heraldo
 	ID: 8135627
 	Grade: O
#### Explanation

This student had **2** scores to average: **100** and **80**. The student's average grade is **(100+80)/2=90**. An average grade of **90** corresponds to the letter grade ***0***, so the calculate() method should return the character'O'.