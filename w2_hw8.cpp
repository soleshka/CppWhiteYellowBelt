////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //reverse vecto elements
////============================================================================
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//
////prints vector with spaces on the same line
//template <class Typ>
//inline void PrintVector(const vector<Typ>& vec){
//	for (auto elem : vec)
//		cout << elem << " ";
//	cout << endl;
//}
//
////Add job s into day i
//void ADD(vector<vector<string>>&,string,int);
////move all task from current month to the ned of the next month
//void NEXT(vector<vector<string>>&,const vector<int>&,int&);
////print all jobs in day i
//void DUMP(const vector <vector<string>>& days,int day);
//
//int main() {
//
//	map<int, string> m = {{1, "odd"}, {2, "even"}, {1, "one"}};
//
//
//	m.erase(1);
//	cout << m.size();
////	//vector with number of days in current month
////	vector<int> days_in_month = {31,28,31,30,31,30,31,31,30,31,30,31};
////	int curr_month = 0;
////	vector<vector<string>> days(days_in_month[curr_month]) ;
////
////
////
////	struct input_cmd_s {
////		string str_cmd;
////		int day;
////		string str_task;
////	};
////
////
////	    vector<input_cmd_s> input_cmds_vec;
////
////		int N ;
////		cin  >> N;
////		input_cmds_vec.resize(N);
////		for(int i=0;i<N;i++){
////			cin >> input_cmds_vec[i].str_cmd;
////			if (input_cmds_vec[i].str_cmd == "ADD"){
////				cin >> input_cmds_vec[i].day;
////				cin >> input_cmds_vec[i].str_task;
////
////			}else if (input_cmds_vec[i].str_cmd == "DUMP"){
////				cin >> input_cmds_vec[i].day;
////			}
////		}
////
////
////		for(int i=0;i<N;i++){
////			//cout << "CMD : " << input_cmds_vec[i].str_cmd << " ";
////			//cout << input_cmds_vec[i].day << " ";
////			//cout << input_cmds_vec[i].str_task  << endl;
////			if (input_cmds_vec[i].str_cmd == "ADD"){
////				ADD(days,input_cmds_vec[i].str_task,input_cmds_vec[i].day);
////			}else if (input_cmds_vec[i].str_cmd == "DUMP"){
////				DUMP(days,input_cmds_vec[i].day);
////			}else if (input_cmds_vec[i].str_cmd == "NEXT"){
////				//cout << "New month is " << curr_month << "Number of days in a month " << days_in_month[curr_month];
////				NEXT(days,days_in_month,curr_month);
////			}
////		}
//
//
//
//
////	ADD(days,"Salary",5);
////	ADD(days,"Walk",31);
////	ADD(days,"WalkPreparations",30);
////	NEXT(days,days_in_month,curr_month);
////	DUMP(days,5);
////	DUMP(days,28);
////	NEXT(days,days_in_month,curr_month);
////	DUMP(days,31);
////	DUMP(days,30);
////	DUMP(days,28);
////	ADD(days,"Payment",28);
////	DUMP(days,28);
//
//
//	return 0;
//}
//
//inline void CHECK_DAY(const vector <vector<string>>& days,int day,string prefix){
//	//cout << prefix << " check day" << " = " << day << endl;
//	//cout << prefix << " check days.size() = "<< days.size() << endl;
//	if (day < 1 || day > 31 ){
//		cout << prefix <<" :Day < 1 or day > 31 or days.size < day!!! . Exiting";
//		exit(0);
//	}
//}
//
////print all jobs in day i
////input day is between 1 and number of days in that day
//void DUMP(const vector <vector<string>>& days,int day){
//	unsigned int i = 0;
//
//	CHECK_DAY(days,day,"DUMP");
//	day -=1;//mapping to 0:num of days -1
//
//	if (days[day].size() == 0){
//		cout << 0;
//	}else{
//		cout << days[day].size() << " ";
//		while ( i < days[day].size()){
//			cout << days[day][i] << " ";
//			++i;
//		}
//	}
//	cout << endl;
//}
//
////Add task s into day i
////input day starts from 1 and unttil number of days in current month
//void ADD(vector<vector<string>>& days,string task,int day){
//
//	CHECK_DAY(days,day,"ADD");
//	days[day-1].push_back(task);
//
//}
////move all task from current month to the ned of the next month
//void NEXT(vector<vector<string>>& days,const vector<int>& days_in_month,int& curr_month){
//	int prev_days = days_in_month[curr_month] ;
//	int next_days = days_in_month[(++curr_month)%12] ;
//
//	if ( next_days >= prev_days ){
//		//cout << "before days.size()="<<days.size() << endl;
//		days.resize(next_days);
//		//cout << "after days.size()="<<days.size()  << endl;
//	}else{
//		//Jan to Feb condition
//		if (prev_days - next_days == 3){
//			days[next_days-1].insert(end(days[next_days-1]),begin(days[prev_days-3]),end(days[prev_days-3]));
//			days[next_days-1].insert(end(days[next_days-1]),begin(days[prev_days-2]),end(days[prev_days-2]));
//		}
//		//last day is coppied in any how
//		days[next_days-1].insert(end(days[next_days-1]),begin(days[prev_days-1]),end(days[prev_days-1]));
//		//remove the obsolete days
//		//cout << "before days.size()="<<days.size() << endl;
//		days.resize(next_days);
//		//cout << "after days.size()="<<days.size()  << endl;
//
//	}
//}



