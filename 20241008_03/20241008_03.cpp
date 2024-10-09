#include <iostream>
using namespace std;

static int mult(int x, int y);

int main()
{
	int x = 2, y = 5;

	int ans = mult(x, y);

	cout << x << " * " << y << " = " << ans << endl;
}

int mult(int x, int y)
{
	return x * y;
}