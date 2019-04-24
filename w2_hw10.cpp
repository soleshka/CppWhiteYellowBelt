////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //find Annagrams of 2 strings
////============================================================================
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//template <class KE, class VA>
//void PrintMap(map<KE,VA>& mp){
//	for (const auto& elem : mp){
//		cout << elem.first << " " << elem.second << endl;
//	}
//}
//
////Change capital for a land .
//void CHANGE_CAPITAL(map<string,string>& countries,string country , string capital){
//	countries[country] = capital;
//}
////Rename capital of spesific land
//void RENAME(map<string,string>& countries,string old_country , string new_country){
//	countries[new_country] = countries[old_country];
//	countries.erase(old_country);
//}
////Print LAnds'capital'
//void ABOUT(map<string,string>& countries,string country ){
//	cout << country << "/" << countries[country];
//}
//
////Dump all capitals
//void DUMP(map<string,string>& countries){
//	for (auto elem : countries){
//			ABOUT(countries,elem.first);
//			cout << " ";
//		}
//}
//
//int main() {
//
//
//
//map<string,string> countries;
//int Q = 0;
//typedef struct ele {
//	string cmd;
//	string c1;
//	string c2;
//}elem_s;
//
//vector<elem_s> str_couple;
//	elem_s el;
//
//	cin >> Q ;
//	for (int i=0;i<Q;i++){
//		cin >> el.cmd ;
//		if (el.cmd == "CHANGE_CAPITAL" || el.cmd =="RENAME"){
//			cin >> el.c1 >> el.c2;
//		}else if (el.cmd == "ABOUT"){
//			cin >> el.c1 ;
//		}else if (el.cmd == "DUMP"){
//			//nothing here
//		}else {
//			cout << "ERROR!!";
//		}
//		str_couple.push_back(el);
//	}
//
//	for (const auto& el : str_couple){
//
//		if (el.cmd == "CHANGE_CAPITAL" ){
//			if (countries.find(el.c1) == countries.end()){//if no such country before
//				cout << "Introduce new country " << el.c1 <<" with capital " << el.c2;
//			}else if (countries[el.c1] != el.c2){
//				cout << "Country " << el.c1 <<" has changed its capital from " <<  countries[el.c1] << " to " << el.c2;
//			}else if (countries[el.c1] == el.c2){
//				cout << "Country " << el.c1 <<" hasn't changed its capital";
//			}else{
//				cout << "ERROR";
//			}
//			CHANGE_CAPITAL(countries,el.c1,el.c2);
//
//		}else if (el.cmd =="RENAME"){
//			if (countries.count(el.c1) == 0 || countries.count(el.c2) != 0 || el.c1 == el.c2 ){
//				cout << "Incorrect rename, skip";
//			}else{
//				cout << "Country " << el.c1 << " with capital " << countries[el.c1] <<" has been renamed to " << el.c2;
//				RENAME(countries,el.c1,el.c2);
//			}
//
//		}else if (el.cmd == "ABOUT"){
//			if (countries.count(el.c1) == 0 ){
//				cout << "Country " << el.c1 << " doesn't exist";
//			}else{
//				cout << "Country " << el.c1 << " has capital " << countries[el.c1] ;
//			}
//		}else if (el.cmd == "DUMP"){
//			if (countries.size() == 0){
//				cout << "There are no countries in the world";
//			}else{
//				DUMP(countries);
//			}
//		}else {
//			cout << "ERROR!!";
//		}
//
//		cout << endl;
//		//cout << elem.s << " " << elem.s1 << endl;
//		//PrintMap(countries);
//	}
//
//
//	return 0;
//}
//
//
