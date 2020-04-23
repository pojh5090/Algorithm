#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a < b; //a가 b보다 작을때 true 반환 ->오름차순 정렬 
	//부등호 방향 바꾸면 내림차순으로! 
} 

int main(void) {
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a + 10, compare);  //9~2까지 정렬할거다.
	for(int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	} 
}
