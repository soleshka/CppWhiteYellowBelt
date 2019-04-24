////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //Simple QUEUE implementation
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
////mark i person in queue as worried
////receives a reference to queue and is index
//void WORRY(vector<int>&,int);
////mark i person in queue as none worried, i.e quite
////receives a reference to queue and is index
//void QUIET(vector<int>&,int);
////adds k quite persons to the end of the queue
////or if k<0 , remove the k from end of the queue
//void COME(vector<int>&, int);
////return number of worried people in the queue
//int WORRY_COUNT(const vector<int>&);
//
//
//int main() {
//
//
//	vector<int> vec ;
//    vector<string> cmds;
//    vector<int> counts;
//	string str;
//	int N ,count = 0;
//	cin  >> N;
//	for(int i=0;i<N;i++){
//		cin >> str;
//		if (str != "WORRY_COUNT"){
//			cin >> count;
//
//		}
//		counts.push_back(count);
//		cmds.push_back(str);
//	}
//
//
//	for(int i=0;i<N;i++){
//		if (cmds[i] == "COME"){
//			COME(vec,counts[i]);
//		}else if (cmds[i] == "WORRY"){
//			WORRY(vec,counts[i]);
//		}else if (cmds[i] == "QUIET"){
//			QUIET(vec,counts[i]);
//		}else if (cmds[i] == "WORRY_COUNT"){
//			 cout << WORRY_COUNT(vec) << endl;
//		}
//	}
//
////	COME(vec,5);
////	PrintVector(vec);
////	WORRY(vec,0);
////	WORRY(vec,1);
////	WORRY(vec,2);
////	WORRY(vec,3);
////	WORRY(vec,4);
////	COME(vec,5);
////
////	cout << WORRY_COUNT(vec) << endl;
////	WORRY(vec,5);
////	PrintVector(vec);
////	COME(vec,0);
////	PrintVector(vec);
//	return 0;
//}
//
//
//
//
////mark i person in queue as worried
////receives a reference to queue and is index
//void WORRY(vector<int>& vec,int i){
//	vec[i] = 1;
//}
////mark i person in queue as none worried, i.e quite
////receives a reference to queue and is index
//void QUIET(vector<int>& vec,int i){
//	vec[i]=0;
//}
////adds k quite persons to the end of the queue
////or if k<0 , remove the k from end of the queue
//void COME(vector<int>& vec, int k){
//		vec.resize(vec.size()+k,0);
//}
////return number of worried people in the queue
//int WORRY_COUNT(const vector<int>& vec){
//	int count = 0;
//	for (auto elem : vec)
//		if (elem == 1)
//			count +=1;
//	return count;
//}
