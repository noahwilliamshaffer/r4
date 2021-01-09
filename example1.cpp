#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {10, 20, 20, 30, 30, 30, 40, 40, 40, 40};
    int num;
    
    cout << "Please input an integer (-1 to terminate): ";
    while (cin >> num && num > 0) {
	auto ct = count(v.begin(), v.end(), num);
	cout << num << " appears " << ct << " times" << endl;
	cout << "Please input an integer (-1 to terminate): ";
    }

    return(EXIT_SUCCESS);
}
