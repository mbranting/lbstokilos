//McKenna Branting
//This is my own work. 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Enter the side of a hexagon" << endl;
	double side;
	cin >> side;
	cout << "The area of the hexagon is:" << endl;
	cout << ((3 * 1.732) / 2) * (side * side) << endl;
	return 0;
}