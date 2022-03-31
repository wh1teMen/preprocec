
#include<iostream>
#define PI 3.14
#define mkstr(s1, s2) #s1<<" " <<#s2 //#s превращает то что в скобках  в строку
#define concat(s1,s2,s3) s1 ## s2 ## s3 //оператор обьединения 
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n = 15;
	cout << mkstr(задача,1) << " = " << n << endl;

	int abc = 10;
	cout << concat(a, b, c) << endl; //a+b+c соединяются и получается переменная abc которая равна 10













	system("pause>nul");
	return 0;
}