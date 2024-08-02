#include <iostream>
using namespace std;
double area(double *r)
{
	return(3.14)*(*r)*(*r);
}

int main() 
{
	double *ptr;
	double radius,ans;
	cout << "enter the radius: " << endl;
	cin >> radius;
	ptr = &radius;
	ans = area(ptr);
	cout << "area: " << ans;
	}
