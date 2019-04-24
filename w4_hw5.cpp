////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //output instead of csv format 10 spaces format :
////2 3
////1,2,3
////4,5,6
////
////
////to
////
////1          2          3
////4          5          6
////============================================================================
////
////
////
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <iomanip>
//#include <cstring>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//int main () {
//  ifstream myfile;
//
//  string line;
//  myfile.open ("input.txt");
// int N ,M , indx = 0;
// string val;
// vector<string> live_vec;
//  if (myfile){
//	  //read number of rows ,columns
//	  myfile >> N >> M ;
//	  getline(myfile,line);
//	  cout << setfill(' ');
//
//	  //here the index is required to understand when to not print the last space after line (in the last line)
//	  while (getline(myfile,line,',')){
//				indx ++;//follow number of elements
//		  		if ( line.find("\n") == string::npos){
//		  			cout << setw(10) << line;
//		  			cout << ((indx == N*M) ? "" : " ");
//		  		}else{
//		  			cout << setw(10) << line.substr(0,line.find("\n")) ; //take only the  first digit"3\n4"
//		  			cout << endl <<  setw(10) << line.substr(line.find("\n")+1) << " ";
//		  			indx ++; //here we print 2 elements
//		  		}
//  	  }
//
//
//  }
//
//
//  myfile.close();
//  return 0;
//}

