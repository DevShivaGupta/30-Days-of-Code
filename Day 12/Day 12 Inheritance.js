'use strict';

var _input = '';
var _index = 0;
process.stdin.on('data', (data) => { _input += data; });
process.stdin.on('end', () => {
    _input = _input.split(new RegExp('[ \n]+'));
    main();    
});
function read() { return _input[_index++]; }

/**** Ignore above this line. ****/

class Person {
    constructor(firstName, lastName, identification) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.idNumber = identification;
    }
    
    printPerson() {
        console.log(
            "Name: " + this.lastName + ", " + this.firstName 
            + "\nID: " + this.idNumber
        )
    }
}

class Student extends Person {
 constructor(firstName, lastName, idNumber,scores) { super(firstName, lastName,idNumber); 
 
        this.testScores= scores;
        }
        calculate()
        {
            let sum=0,avg=0;
            let grade='';
            for(let i=0;i<this.testScores.length;i++)
            { 
                sum+=this.testScores[i];
            }
            avg=sum/this.testScores.length;
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
} 


function main() {
    let firstName = read()
    let lastName = read()
    let id = +read()
    let numScores = +read()
    let testScores = new Array(numScores)
    
    for (var i = 0; i < numScores; i++) {
        testScores[i] = +read()  
    }

    let s = new Student(firstName, lastName, id, testScores)
    s.printPerson()
    s.calculate()
    console.log('Grade: ' + s.calculate())
}
