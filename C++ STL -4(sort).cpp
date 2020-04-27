#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	} else {
		return a.second.first > b.second.first;
	}
				
}

int main(void) {
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(90, 961222)));
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(88, 960611)));
	v.push_back(pair<string, pair<int, int> >("�輼��", pair<int, int>(56, 960314)));
	v.push_back(pair<string, pair<int, int> >("���ֹ�", pair<int, int>(88, 961031)));
	v.push_back(pair<string, pair<int, int> >("�Ǽ���", pair<int, int>(82, 960127)));
	
	sort(v.begin(), v.end(), compare); 
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' '; 
	}
	return 0;
} 
