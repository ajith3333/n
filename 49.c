#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],size,i,big,small;
printf("\nEnter the size of the array: ");
scanf("%d",&size);
printf("\nEnter %d elements in to the array: ", size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
big=a[0];
for(i=1;i<size;i++){
if(big<a[i])
big=a[i];
}
printf("Smallest element: %d",small);
return 0;
}
