class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print("Name:", self.lastName + ",", self.firstName)
		print("ID:", self.idNumber)

class Student(Person):
    def __init__(self,firstName,lastName,idNumber,testScore):
        super().__init__(firstName,lastName,idNumber)
        self.testScore=testScore
    def calculate(self):
        su=0 
        avg=0
        grade=''
        for i in self.testScore:
            su+=i;
        avg=su/len(self.testScore);
        if 90<=avg and avg<=100 :
            grade='O';

        if(80<=avg and avg<90):
           grade='E'
          
        if(70<=avg and avg<80):
            grade='A'
        
        if(55<=avg and avg<70):
            grade='P'
           
        if(40<=avg and avg<55):
           grade='D'
        
        if(avg<40):
            grade='T'

        return grade;
                

line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(input()) # not needed for Python
scores = list( map(int, input().split()) )
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print("Grade:", s.calculate())
