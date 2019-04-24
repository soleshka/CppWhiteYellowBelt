////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //
////============================================================================
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////REturns fif a string is a polindrom
//bool IsPalindrom(string);
//vector<string> PalindromFilter(vector<string>,int);
////prints vector with spaces on the same line
//inline void print_vector(const vector<string>& vec){
//	for (auto elem : vec)
//		cout << elem << " ";
//}
//
////recieves vector of size in from the standard input
//inline void cin_vector(vector<string>& vec,int n){
//	string str;
//	for (int i =0; i<n;i++){
//		cin >> str ;
//		vec.push_back(str);
//	}
//}
//int main() {
//
//	vector<string> str_vec ,  temp;
//
//
//    //cin_vector(str_vec,3);
//	int minLength = 5;
//	temp = PalindromFilter(str_vec,minLength);
//	print_vector(temp);
//
//	return 0;
//}
//
////return new vecto<string> with strings which are
////a. polindroms
////.b length of string is begeer or equal to minLength
//vector<string> PalindromFilter(vector<string> str_vec,int minLength){
//	vector<string> vec_return;
//	int size ;
//	for (string elem : str_vec){
//		size = static_cast<int>(elem.size());
//		if (IsPalindrom(elem) && size>= minLength){
//			vec_return.push_back(elem);
//		}
//	}
//	return vec_return;
//}
//
////REturns if a string is a palindrom
//bool IsPalindrom(string str){
//	string str_temp = str;
//	reverse(str_temp.begin(),str_temp.end());
//	if ( !str.compare(str_temp) )
//		return true;
//	return false;
//}

