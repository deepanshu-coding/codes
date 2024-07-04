//how to find volume of a cylinder surmounted by cone and supported by cuboid.
#include <stdio.h>
int main(){
    int l,b,h,l2,r,r2,h2,c1,c2,c3;
    int  pi=3;
    //enter the value of all the parameters 
    printf("Enter the length of cuboid: ");
    scanf("%d",&l);
    printf("Enter the breadth of cuboid: ");
    scanf("%d",&b);
    printf("Enter the height of cuboid: ");
    scanf("%d",&h);
    printf("Enter the slant height of cone: ");
    scanf("%d",&l2);
    printf("Enter the radius of base of cone: ");
    scanf("%d",&r);
    printf("Enter the radius of base of cylinder: ");
    scanf("%d",&r2);
    printf("Enter the height of cylinder: ");
    scanf("%d",&h2);
    //find the  volume of 
    printf("Volume of cone :%d\n",pi*r2*r2*h2);
    printf("Volume of cylinder :%d\n",pi*r*r*h);
    printf("Volume of cuboid :%d\n",l*b*h);
    //total gas contain contain by this shaped cylinder will be
    printf("%d",(pi*r2*r2*h2)+(pi*r*r*h)+(l*b*h));
    return 0;
}