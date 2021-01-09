/************************
 * find the maximum subsequence in a sequence of integer numbers
 * it is using Algorithm 2 given in the textbook.
 */

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void maxSubSum(const vector<int> &a, vector<int> &b) {
    int maxSum = 0;
    int begin, end;

    for (int i = 0; i < a.size(); ++i) {
	int SumTmp = 0;
	for (int j = i; j < a.size(); ++j) {
	    SumTmp += a[j];
	    if (SumTmp > maxSum) {
		maxSum = SumTmp;
		begin = i;
		end = j;
	    }
	}
    }

    for (int i = begin; i <= end; ++i) {
	b.push_back(a[i]);
    }
}

main() {
    string oneline;
    while (getline(cin, oneline)) {
	// get one integer sequence
	vector<int> seq, maxsubseq;
	
	istringstream mystr(oneline);
	int tmp;
	while (mystr >> tmp) {
	    seq.push_back(tmp);
	}

	maxSubSum(seq, maxsubseq);
	
	int sum = 0;
	for (int i = 0; i < maxsubseq.size(); ++i) {
	    sum += maxsubseq[i];
	}

	cout << sum << ":";
	for (int i = 0; i < maxsubseq.size(); ++i) {
	    cout << " " << maxsubseq[i];
	}
	cout << endl;
    }
}
