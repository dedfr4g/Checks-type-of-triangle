#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Unesite stranice trougla: " << endl;
	cin >> a >> b >> c;
	if (a == b && a==c && c==b)
	{
		cout << "Trougao nije jednakokraki,trougao je jednakostranicni" << endl;
	}
	
	else if (a !=b && a!=c && c!=b)
	{
		cout << "Trougao je raznostranicni" << endl;
	}
	else if (a == b && a != c && b != c || a == c && a != b && c != b || b == c && b != a && c != a)
	{
		cout << "Trougao je jednakokraki" << endl;
	}

	system("pause");
	return 0;
}