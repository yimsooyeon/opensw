//#my name is yimsooyeon
#include<stdio.h>

void func1(int* p);
void func2(int** p);
void func3(int*** p);
void func4(int**** p);

int main() {// set main fuction
	int i = 100;
	int* p, ** dp, *** tp;
	p = &i;
	dp = &p;
	tp = &dp;

	func1(&i);
	printf("i=%d\n", i); //print i

	func2(&p);
	printf("*p=%d\n", *p); 

	func3(&dp);
	printf("**p=%d\n", **dp);

	func4(&tp);
	printf("***p=%d\n", ***tp);

	printf("i=%d\n", i);

	return 0;


}

void func1(int* p) { //function1
	*p = *p + 100;
}
void func2(int** p) {//function2
	**p = **p + 100;
}
void func3(int*** p) {//function3
	***p = ***p + 100;
}
void func4(int**** p) {//function4
	****p = ****p + 100;
}