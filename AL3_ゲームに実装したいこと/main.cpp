#include <iostream>
#include <functional>
#include "MyClass.h"
using namespace std;

//加算
int Add(int a, int b, int c) {
	return a + b + c;
}

int main() {
	MyClass* myClass=new MyClass();
	function<int(int)>f = bind(&MyClass::ReturnValue, myClass, placeholders::_1);
	//引数を1つ渡して関数を呼び出す
	const int result = f(-5);

	cout << result << endl;
	delete myClass;
	return 0;
}