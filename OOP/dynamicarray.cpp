#include <iostream>
using namespace std;
int main()
{
	int i, n;
	cout << "How many numbers will you type?"<< "\n";
	cin >> n;
	int *arr = new int(n);
	cout << "Enter " << n << " numbers" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Number you enterd: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
	
	return 0;
}
