////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //input list of students , output the requeste data per each command
////Input :
////3
////Ivan Ivanov 1 1 1901
////Petr Petrox 2 2 1902
////Alexander Sidorov 3 3 1903
////3
////name 1
////date 3
////mark 5
////
////Output:
////Ivan Ivanov
////3.3.1903
////bad request
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <iomanip>
//#include <cstring>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
////TODO change this to get the data from standard input !
////indexes in the vector
////0 Name
////1 fName;
////2 bday;
////3 bmonth;
////4 byear;
//struct Student{
//	vector<string> data;
//};
//struct Command{
//	string cmd;
//	int indx;
//};
//int main () {
//	vector<Student> student_vec;
//	vector<Command> cmd_vec;
//
//
//	Student std_temp;
//	Command cmd_temp;
//	string line;
//	int N = 0, M = 0; //number ofstudents in line    0-10000
//	cin >> N ;
//
//	//read the studentts
//	for (int i=0;i<N;i++){
//		for (int j=0;j<5;j++){//read string by string
//			cin >> line;
//			std_temp.data.push_back(line);
//			//cout << "Student "<< i << "," <<j<<": " <<line << endl;
//		}
//		student_vec.push_back(std_temp);
//		std_temp.data.clear();
//
//	}
//
//	cin >> M; //read number of queries
//	//read N lines of students
//	for (int i=0;i<M;i++){
//		cin >> cmd_temp.cmd;
//		cin >> cmd_temp.indx;
//		cmd_vec.push_back(cmd_temp);
//	}
//
//	for (const auto& cmd : cmd_vec){
//		//valid indx is from 1 to student_vec.size()
//		if(cmd.indx <= 0 || cmd.indx > student_vec.size() || student_vec.size() ==0 ){
//			cout << "bad request" << endl ;
//		}else if(cmd.cmd == "name"){
//			//data[0] = name , data[1] = last name //cmd.data[1] - index in the student list
//			cout << student_vec[cmd.indx-1].data[0] << " " << student_vec[cmd.indx-1].data[1] << endl;
//		}else if(cmd.cmd == "date"){
//			cout << student_vec[cmd.indx-1].data[2] << "." << student_vec[cmd.indx-1].data[3] << "." << student_vec[cmd.indx-1].data[4] << endl;
//		}else{
//			cout << "bad request" << endl ;
//		}
//	}
//
//
//  return 0;
//}

