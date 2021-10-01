#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        Student(string firstName,string lastName,int idNumber,vector<int> scores) : Person(firstName, lastName,idNumber) {
        this->testScores= scores;
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate()
        {
            int sum=0,avg=0;
            char grade;
            for(int i=0;i<this->testScores.size();i++)
            { 
                sum+=this->testScores[i];
            }
            avg=sum/this->testScores.size();
            if(90<=avg && avg<=100)
            {
                grade='O';
            }
            if(80<=avg && avg<90)
            {
                grade='E';
            }
            if(70<=avg && avg<80)
            {
                grade='A';
            }
            if(55<=avg && avg<70)
            {
                grade='P';
            }
            if(40<=avg && avg<55)
            {
                grade='D';
            }
            if(avg<40)
            {
                grade='T';
            }
        return grade;
        }        
};  

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
