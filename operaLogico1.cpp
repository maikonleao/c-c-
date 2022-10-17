#include<stdio.h>
int main(){
	int a =5, b = 10, c = 5;
	printf("\n (a==b) && (a==c) = %d", ((a == b) && (a==c)));
	printf("\n (a==b) || (a==c) = %d", ((a == b) || (a==c)));
	printf("\n !(a==b) || (a==c) = %d\n", !((a == b) || (a==c)));
}

// 0 significa não, 1 significa sim 