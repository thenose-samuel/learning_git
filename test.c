//Just a test file for learning purposes

#include <stdio.h>

int sum(int a, int b){
	if(a>0 && b>0){
		return a+b;
	}
	return 0;
}
int product(int a, int b){
	if (a>0 && b>0){
		return a+b;
	}
	return 0;
}
int division(int a, int b){
	if(a>0 && b>0){
		return a/b;
	}
}
int main(){
	int result = sum(5,2);
	int result2 = product(5,2)
	printf("%d\n",result);
	printf("%d\n",result2);
	return 0;
}