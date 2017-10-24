#include <iostream>

using namespace std;

const int BUFFER_SIZE = 200;

int main()
{
	int a, b;
	char op;
	
	cin >> a >> op >> b;

	switch (op)
	{
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case 'x':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		default:
			break;
	}

	system("pause");

	return 0;
}