#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "박한울"));
	v.push_back(pair<int, string>(85, "나동빈"));
	v.push_back(pair<int, string>(82, "이태일"));
	v.push_back(pair<int, string>(98, "강종구"));
	v.push_back(pair<int, string>(70, "이상욱")); 
		
	sort(v.begin(), v.end()); //이걸 쓰면 성적순으로 나열됨. 
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' '; //second는 두번째 값 출력(즉 , 이름) 
	}
	return 0;
}

