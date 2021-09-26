#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[10000],even[10000],odd[10000];
    int i,j,n,k,l,len;
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
    k=0;l=0;
    scanf("%s",str);
    len=strlen(str);
    for(j=0;j<len;j++)
    {
        if(j%2==0){
        even[k]=str[j];
        k++;
        }
        else if(j%2!=0)
        {
        odd[l]=str[j];
        l++;
        }
    }
    for(int e=0;e<k;e++)
    printf("%c",even[e]);
    printf(" ");
    for(int q=0;q<l;q++)
    printf("%c",odd[q]); 
    printf("\n");
    }
    return 0;
}
