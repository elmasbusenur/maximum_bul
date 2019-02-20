#include<stdio.h>

int maximum(int x,int y,int z)
{
    int max=x;
    if(y>max){
    	max=y;
	}
      
    else if(z>max){
    	max=z;
	}
      
return max;
}
int main()
{
	int num1;
	int num2;
	int num3;
	printf("birbirinden farkli 3 sayi giriniz:\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("maximum:%d", maximum(num1, num2, num3));
return 0;
}
