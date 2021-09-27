function processData(input) {
    var input = input.split('\n');
    var num = input[0];
    var phone = new Map();
    for (var i = 1; i <=num; i++){
        var line='';
        line=input[i]
        line=line.split(' ');
        phone.set(line[0],line[1]);
    }   
    for (var j=i; j <input.length; j++){
        if(phone.has(input[j]))
        console.log(`${input[j]}=${phone.get(input[j])}`);   
        else
        console.log("Not found");
    }
}
process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
