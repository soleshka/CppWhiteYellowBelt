////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //Synonims of words using 'set'
////============================================================================
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//
//typedef struct cmd_s {
//	string cmd;
//	string word1;
//	string word2;
//	;
//}cmds_s;
//
//
//
//
//template <class KE, class VA>
//void PrintMap(map<KE,VA>& mp){
//	for (const auto& elem : mp){
//		cout << elem.first << " " << elem.second << endl;
//	}
//}
//
//
//
//
//
//
////getting commands from standard input
//void CIN_DATA(vector<cmds_s>& commands){
//
//	int Q = 0;
//	string str;
//	cmds_s el;
//
//	//number of commands
//	cin >> Q ;
//
//	//Input flow
//	for (int i=0;i<Q;i++){
//
//		cin >> el.cmd ;
//		cin >> el.word1;
//		if (el.cmd == "ADD" || el.cmd == "CHECK"){
//			cin >> el.word2;
//		}
//		commands.push_back(el);
//	}
//}
//
//
//
////execution flow
//void EXEC(vector<cmds_s>& commands,map<string,set<string>> synonims){
//	for (const auto& el : commands){
//
//		if (el.cmd == "ADD" ){
//			synonims[el.word1].insert(el.word2);
//			synonims[el.word2].insert(el.word1);
//		}else if (el.cmd =="CHECK"){
//			if ( find(synonims[el.word1].begin(),synonims[el.word1].end(),el.word2) != synonims[el.word1].end() || find(synonims[el.word2].begin(),synonims[el.word2].end(),el.word1)!= synonims[el.word2].end()){
//				cout << "YES" << endl;
//			}else{
//				cout << "NO"<< endl;
//			}
//		}else if (el.cmd == "COUNT"){
//			cout << synonims[el.word1].size() << endl;
//		}else {
//			cout << "ERROR!!";
//		}
//
//
//	}
//}
//
//int main() {
//
//	map<string,set<string>> synonims;
//	vector<cmds_s> commands;
//	CIN_DATA(commands);
//	EXEC(commands,synonims);
//	return 0;
//}


