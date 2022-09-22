#include<stdio.h>
#include<math.h>

int n;

int main(){
	
	printf("insira um numero\n->");
	scanf("%d",&n);
	if(n>=5 && n<=100){
	printf("o numero %d e maior que 5 e menor que 100\n", n);
}else{
	printf("O numero %d e menor que 5 ou maior que 100\n", n);
}
}
