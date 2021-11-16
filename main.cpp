#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string rpn;
	stack <int> eva;
	while (getline(cin, rpn)) {
		if (rpn == "\0") {
			break;
		}
		for (char& op : rpn) {
			if (op == ' ') {

			}
			else if (isdigit(op)) {
				eva.push(op - '0');
			}
			else {
				int tmp1 = eva.top();
				eva.pop();
				int tmp2 = eva.top();
				eva.pop();
				switch (op)
				{
				case '+':
					eva.push(tmp1 + tmp2);
					break;
				case '-':
					eva.push(tmp2 - tmp1);
					break;
				case '*':
					eva.push(tmp2 * tmp1);
					break;
				}
			}
		}
		cout << eva.top()<< endl;
	}
	return 0;
}
