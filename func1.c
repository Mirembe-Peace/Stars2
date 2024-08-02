#include<stdio.h>
void DrawBlock(int w,int l,char ch);
void DrawLine(int wide,char p);

int main(){
    int length,width;
    char character;

    printf("Enter the length of the box:");
    scanf("%d",&length);
    printf("Enter the width of the box:");
    scanf("%d",&width);
    printf("Enter the kind of character you want to print:");
    scanf("%c",&character);
    DrawBlock(width,length,character);

    return 0;
}

void DrawLine(int wide,char p){
for(int i=1; i<=wide; i++){
    printf("%c",p);
}

}
void DrawBlock(int w,int l,char ch){
    for(int x=1; x<=l; l++){
        DrawLine(w,ch);
    }
    printf("\n");
}