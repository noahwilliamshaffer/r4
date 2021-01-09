#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int guess;

    cout << "Please input an integer: ";
    
    while (cin >> guess) {

	auto itr = find(v.begin(), v.end(), guess);
	if (itr == v.end()) {
	    cout << "Wrong guess" << endl;
	    cout << "Please input an integer: ";
	} else {
	    cout << *itr << " is correct" << endl;
	    break;
	}
    }

    return(EXIT_SUCCESS);
}
