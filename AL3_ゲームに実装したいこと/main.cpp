#include <iostream>
#include <functional>
using namespace std;

//加算
int Add(int a, int b, int c) {
	return a + b + c;
}

int main() {
	//第1引数のみを先に渡す
	function<int(int,int)>f = bind(Add, 2, placeholders::_1, placeholders::_2);
	//残りの引数を渡す
	const int result = f(3, 4);
	cout << result << endl;
	return 0;
}