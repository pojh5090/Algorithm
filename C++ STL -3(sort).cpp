#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	//정렬 기준은 '점수가 작은 순서'
	bool operator <(Student &student) {
		return this->score < student.score;
	}
};

int main(void) {
	Student student[] = {
		Student("나동빈", 90),
		Student("이상욱", 93),
		Student("이기자", 87),
		Student("강감찬", 66),
		Student("홍길동", 73),
	};
	sort(student, student + 5);
	for(int i = 0; i < 5; i++) {
		cout << student[i].name << ' ';
	} 
}
