#include <stdio.h>

int main(){
	int n1,n2;
	printf("\bnNhap 2 so: ");
	scanf("%d %d",&n1,&n2);
	findMaxNumber(n1,n2);
	
	printf("\n-----------------\n");
	
	int min;
	min =  findMinNumber(n1 , n2);
	
	printf("Min: %d", min);
	
	return 0;
} 

void findMaxNumber(int a ,int b){
	//coding here
	if(a>b){
		printf("Max: %d", a);
	}
	else{
		printf("Max: %d", b); 
	}	 
}
 
int findMinNumber(int a,int b){
	if(a<b){
		return a; 
//		printf("abc") ;
	}
	else{
		return b; 
	}	 
}
 
