#include <iostream>
#include <math.h>

using namespace std;

int main(void){
	double x,y,xx,yy;
	cout << "calc (x1,y1) - (x2,y2) distance!" << endl;
	cout << "x1:"; cin >> x;
	cout << "y1:"; cin >> y;
	cout << "x2:"; cin >> xx;
	cout << "y2:"; cin >> yy;

	int dx = xx - x;
	int dy = yy - y;
	cout << "distance:" << sqrt(pow(dx, 2) + pow(dy,2)) << endl;
}
