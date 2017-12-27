#include <iostream>

using std::cout;

// void f(int x) { cout << "int\n"; }
// void f(int y) { cout << "int\n"; } // 재정의: 인수의 이름만 다르다.
// long f(int x) { cout << "int\n"; } // 재정의: 리턴 타입만 다르다.
// void f(int&& x) { cout << "int&&\n"; }
// void f(const int&& x) { cout << "const int&&\n"; } // int&&로 대체된다.
void f(int& x) { cout << "int&\n"; }
void f(const int& x) { cout << "const int&\n"; }

int main(int argc, char* argv[])
{
	int i = 3;
	const int ci = 4;

	f(3);
	f(i);
	f(ci);
}