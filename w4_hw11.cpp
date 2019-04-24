////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //Simple server ping example
//
//
//
//#include <iostream>
//#include <sstream>
//#include <set>
//#include <vector>
//#include <map>
//#include <exception>
//using namespace std;
//
//
//string AskTimeServer(){
//
//	throw system_error(error_code());
//	throw invalid_argument("Argument");
//	return "20:01:03";
//}
//
//class TimeServer {
//public:
//  string GetCurrentTime(){
//
//	  try {
//		  LastFetchedTime = AskTimeServer();
//	  }catch (system_error& e){
//		  return LastFetchedTime;
//	  }
//
//	  return LastFetchedTime ;
//  }
//private:
//  string LastFetchedTime = "00:00:00";
//};
//
//
//
//
//int main() {
//	 TimeServer ts;
//	    try {
//	        cout << ts.GetCurrentTime() << endl;
//	    } catch (exception& e) {
//	        cout << "Exception got: " << e.what() << endl;
//	    }
//	    return 0;
//
//    return 0;
//}
//
