#include <cstdlib>
#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	array<int, 10> array1 = {{3, 5, 10, 8, 200, 50, 60, 300, 500, 400}};
	// it requires two curly braces, likely because STL array is an wrap
	// of C/C++ array, whose initialization requires a pair of curly
	// braces. This is also related to our g++ option -Wall and
	// -pedantic. 

	cout << "size: " << array1.size() << endl;
	cout << "max size: " << array1.max_size() << endl;
	// note the output of size() and max_size();

	copy(array1.begin(), array1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	sort(array1.begin(), array1.end());
	copy(array1.begin(), array1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	array<int, 10> array2 = array1;

	array1.fill(100);
	cout << "array1: ";
	copy(array1.begin(), array1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << "array2: ";
	copy(array2.begin(), array2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	// note that fill() does not affect array2.

	cout << "array2:";
	for (auto & x : array2) {
		cout << " " << x;
	}
	cout << endl;

	cout << "array2:";
	int *p = array2.data();
	for (size_t i = 0; i < array2.size(); ++i) {
		cout << " " << *(p + i);
	}
	cout << endl;

	cout << "array2:";
	for (size_t i = 0; i < array2.size(); ++i) {
		cout << " " << array2[i];
	}
	cout << endl;

	return(EXIT_SUCCESS);
}
