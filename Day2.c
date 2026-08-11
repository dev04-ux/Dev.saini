#include<stdio.h>
int main(){
    int length;
    printf("LENGTH:");
    scanf("%d",&length);
    int breadth;
    printf("BREADTH:");
    scanf("%d",&breadth);
    int area;
    printf("AREA IS:%d\n",length*breadth);
    int perimeter;
    printf("PERIMETER IS:%d\n",2*(length+breadth));
    return 0;
}