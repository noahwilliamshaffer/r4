#include <iostream>
#include <cstdlib>
#include <list>
#include <iterator>
#include <unordered_set>

using namespace std;

int main() {
    list<int> l1 = {10, 20, 30, 40, 10, 10, 40, 50, 40, 60};

    cout << "Original: ";
    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

	l1.sort();
	l1.unique();

    cout << "After removing duplicates: ";
    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    exit(EXIT_SUCCESS);
}
