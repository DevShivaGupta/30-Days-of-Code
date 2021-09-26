function processData(input) {

    let str,inputstr;
    let i,j,n,len;
    inputstr=input.split("\n");
    n=parseInt(inputstr[0]);
    for(i=0;i<n;i++) 
    {
    str=inputstr[i+1];
    len=str.length;
    let ra="",rb="";
    for(j=0;j<len;j++)
    {
        if(j%2==0){
        ra=ra+str[j];
        }
        else if(j%2!=0)
        {
        rb=rb+str[j];
        }
    }
    console.log(ra+" "+rb);
    }
    return 0;

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
