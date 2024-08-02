#include<stdio.h>
void myFunction(int l);

int main(){
    int length;
    printf("Enter the length of the line:");
    scanf("%d",&length);

myFunction(length);

return 0;
}
void myFunction(int l){
for(int i=1; i<=l; i++){
    printf("*");
  
}
     printf("\n");
}