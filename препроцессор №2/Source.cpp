
#include<iostream>
#define PI 3.14
#define mkstr(s1, s2) #s1<<" " <<#s2 //#s ���������� �� ��� � �������  � ������
#define concat(s1,s2,s3) s1 ## s2 ## s3 //�������� ����������� 
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n = 15;
	cout << mkstr(������,1) << " = " << n << endl;

	int abc = 10;
	cout << concat(a, b, c) << endl; //a+b+c ����������� � ���������� ���������� abc ������� ����� 10













	system("pause>nul");
	return 0;
}