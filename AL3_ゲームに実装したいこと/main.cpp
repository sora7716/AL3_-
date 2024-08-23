#include <iostream>
#include <functional>
using namespace std;

//加算
int Add(int x) { return x + 1; }

int main() {

	/*どちらでも大丈夫↓*/
	//関数の代入
	function<int(int)>f = Add;
	//ラムダ式を代入
	f = [](int x) {return x + 1; };
	/*どちらでも大丈夫↑*/

	//保持している関数を呼び出す
	int result = f(1);
	cout << result << endl;
	return 0;
}