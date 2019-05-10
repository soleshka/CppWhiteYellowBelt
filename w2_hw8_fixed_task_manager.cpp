//============================================================================
// Name        : CourseraWhiteBeltCpp.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : //Manage monthly tasks and migrate tasks from one month to another by keeping old tasks in proper in last day of the new month
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


//prints vector with spaces on the same line
template <class Typ>
inline void PrintVector(const vector<Typ>& vec){
	for (auto elem : vec)
		cout << elem << " ";
}


void NEXT(vector<vector<string>>& days,const vector<unsigned int>& days_in_month,unsigned int& curr_month){
		unsigned int next_month = (curr_month+1) % days_in_month.size();
		unsigned int new_size =  days_in_month[next_month];
		if (new_size < days.size()){
			// less days, lets copy the extra days todos into the last day
			int diff = days.size() - new_size;// number of elements to be copied
			for (int i = 0;i<diff;i++){
				days[new_size-1].insert(days[new_size-1].end(),
						days[days.size()-1-i].begin(),days[days.size()-1-i].end());
			}
		}
		//resizing the new vector size in any case.
		//relevant data stays after co
		days.resize(new_size);

		// progress the curr_month
		curr_month = next_month;
}

void DUMP(const vector<string>& vec){
	cout << vec.size() << " ";
	PrintVector(vec);
	cout << endl;
}

void testNext(){
	vector<unsigned int> days_in_month = {31,28,31,30,31,30,31,31,30,31,30,31};
	unsigned int curr_month = 0;
	vector<vector<string>> days(days_in_month[curr_month]) ;
	days[30].push_back("one");
	days[30].push_back("two");
	NEXT(days,days_in_month,curr_month);
	DUMP(days[27]);

}

int main() {

	//testNext();

	//vector with number of days in current month
	vector<unsigned int> days_in_month = {31,28,31,30,31,30,31,31,30,31,30,31};

	unsigned int curr_month = 0;

	//size of number of days in this month days_in_month[curr_month]
	vector<vector<string>> days(days_in_month[curr_month]) ;


		int N ,day; string cmd,todo;
		cin  >> N;
		for(int i=0;i<N;i++){
			cin >> cmd;
			if (cmd == "ADD"){
				cin >> day >> todo ;
				//day-1 because the input is from 1-31
				days[day-1].push_back(todo);
			}else if (cmd == "DUMP"){
				cin >> day;
				DUMP(days[day-1]);
			}else if (cmd == "NEXT"){
				NEXT(days,days_in_month,curr_month);
			}else{
				throw invalid_argument("Invalid command");
			}
		}





//	ADD(days,"Salary",5);
//	ADD(days,"Walk",31);
//	ADD(days,"WalkPreparations",30);
//	NEXT(days,days_in_month,curr_month);
//	DUMP(days,5);
//	DUMP(days,28);
//	NEXT(days,days_in_month,curr_month);
//	DUMP(days,31);
//	DUMP(days,30);
//	DUMP(days,28);
//	ADD(days,"Payment",28);
//	DUMP(days,28);


	return 0;
}






