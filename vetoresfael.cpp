#include<cstdio>
int main()
{
	int a[20], b[20], c[20]; //vetores
	int i; //contador
	
	//entrada
	for(i=0; i<20; i++){
		a[i] = i+1;
		b[i] = 20-i;}
		
	// proccessamento
	for(i=0; i<20; i++){
		c[i] = a[i] + b[i];	}

	//saida
	printf("\n\t");
	for(i=0; i<20; i++)
		printf("%d ", a[i]);
		
	printf("\n\t");
	for(i=0; i<20; i++)
		printf("%d ", b[i]);
		
	printf("\n\t");
	for(i=0; i<20; i++)
		printf("%d ", c[i]);
}

