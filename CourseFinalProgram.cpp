////Assignment:  Manage an event calendar based on Events and dates given predefined user commands.
////Example
////
////Input:
////Add 0-1-2 event1
////Add 1-2-3 event2
////Find 0-1-2
////
////Del 0-1-2
////Print
////Del 1-2-3 event2
////Del 1-2-3 event2
////Deleted 1 events
////Output:
////event1
////0001-02-03 event2
////Deleted successfully
////Event not found
//
//#include <string>
//#include <vector>
//#include <map>
//#include <set>
//#include <iostream>
//#include <sstream>
//#include <algorithm>
//#include "test_runner.h"
//#include <iomanip>
//using namespace std;
//class Date {
//public:
//Date(const int& year,const int& month,const int& day)
//: year_(year), month_(month),day_(day){}
//  int GetYear() const{
//      return year_;
//      }
//  int GetMonth() const{
//      return month_;
//      }
//  int GetDay() const{
//      return day_;
//      };
//private:
//    int year_;
//    int month_;
//    int day_;
//};
//
//ostream& operator<<(ostream& out , Date d){
//	out << d.GetYear() << "." << d.GetMonth() << "." << d.GetDay();
//	return out;
//}
//ostream& operator<<(ostream& out , const set<string>& s){
//	for (const  auto& elem : s){
//		out << elem << " ";
//	}
//	return out;
//}
//
//bool operator<(const Date& lhs, const Date& rhs){
//	bool res_b = (lhs.GetYear()<rhs.GetYear() ? true :
//			(lhs.GetYear()>rhs.GetYear() ? false :
//			 (lhs.GetMonth() < rhs.GetMonth() ? true://years are equal
//			  (lhs.GetMonth() > rhs.GetMonth() ? false:
//			   (lhs.GetDay() < rhs.GetDay() ? true://months are equal
//				(lhs.GetDay() > rhs.GetDay()? false:false))))));
//	return res_b;
//};
//
//bool operator==(const Date& lhs, const Date& rhs){
//	return (lhs.GetYear() == rhs.GetYear() &&
//			 lhs.GetMonth() == rhs.GetMonth() &&
//			   lhs.GetDay() == rhs.GetDay() );
//};
//
//bool operator!=(const Date& lhs, const Date& rhs){
//	return (lhs.GetYear() == rhs.GetYear() &&
//			 lhs.GetMonth() == rhs.GetMonth() &&
//			   lhs.GetDay() == rhs.GetDay() );
//};
//class Database {
//public:
//
//  void AddEvent(const Date& date, const string& event){
//	  	  DB[date].insert(event);
//  }
//  bool DeleteEvent(const Date& date, const string& event){
//	  	  if (DB.count(date))
//	  		  return DB.at(date).erase(event);
//	  	  else return 0;
//  }
//  int  DeleteDate(const Date& date){
//	  int N= 0;
//	  try {
//		  N = DB.at(date).size();
//		  if (N){
//			  DB.erase(date);
//		  }
//	  }catch(...){
//		N = 0;
//	  }
//	  return N;
//  }
//
//  set<string> Find(const Date& date) const{
////	  	  for (auto& elem : DB){
////	  		  if (elem.first == date) cout << "Found" << endl;
////	  		  cout << elem.first << ":" << elem.second ;
////	  	  }
//	  	  auto it = DB.count(date);
//	  	  if (it) return DB.find(date)->second;
//	  	  else return {};
//
//  }
//
//  void Print() const{
//	  for (const auto& date_pair : DB){
//		  for(const auto& event : date_pair.second){
//			  //year pattern
//			  cout << setw(4) << setfill('0') << date_pair.first.GetYear() << "-";
//			  //month pattern
//			  cout << setw(2) << setfill('0') << date_pair.first.GetMonth() <<"-";
//			  //day pattern
//			  cout << setw(2) <<setfill('0') << date_pair.first.GetDay()	<<" ";
//			  cout << event << endl ;
//		  }
//	  }
//  };
//private:
//  map<Date,set<string>> DB;  // Dates are unique , events are unique
//};
//
////check validity of Month and Date
//void CheckMonthDay(int month,int day){
//    if (month > 12 || month < 1){
//         throw runtime_error("Month value is invalid: " + to_string(month));
//     }else if (day > 31 || day < 1){
//           throw runtime_error("Day value is invalid: "+ to_string(day));
//     }
//}
//
////Check validity of the command line acording to prerequisits
//void CheckCommandLine(const string& command){
//	string act,date,event;
//	stringstream sstr(command),sstr_date;
//	 int y,m,d;
//	 char c1,c2;
//	 bool res_date_f = false;
//
//	sstr>> act >> date >> event;
//
//	sstr_date.str(string(date));
//
//	if (sstr_date>>y>>c1>>m>>c2>>d) res_date_f = true ;
//	if (act != "Add" && act != "Del" && act != "Find" && act != "Print") {
//		 throw runtime_error("Unknown command: "+act);
//	}else if (act == "Print"){
//		// nothing here
//	}else if ( !(res_date_f && sstr_date.peek()== EOF && c1 == '-' && c2 == '-')){
//		throw runtime_error("Wrong date format: " + date);
//	}else {
//		CheckMonthDay(m,d);
//	}
//}
//
//
//
//void MainLoop(){
////void MainLoop(vector<string> commands){
//
//	Database db;
//	  //Date d;
//	  int y,m,d;
//	  char c1,c2;
//	  string command;
//	  string act,date,event;
//	  stringstream sstr;
//	  set<string> events;
//	  while (getline(cin, command)) {
//	  //for(int i = 0;i<commands.size();i++){
//		//  command = commands[i];
//		  try{
//			  sstr.str("");sstr.clear();act=""; date=""; event="";
//			  sstr.str(command);
//			  if (sstr.str()== "") continue;// empty command line
//			  CheckCommandLine(command);
//			  //retrieve the data
//			  sstr>> act >> date >> event;
//			  sstr.str(date);sstr.clear();
//			  sstr >>y>>c1>>m>>c2>>d;
//
//			  if(act == "Add" ){
//				  db.AddEvent(Date(y,m,d), event);
//			  } else if(act == "Del"){
//				  if(event.empty()){
//					  int N;
//					  N = db.DeleteDate(Date(y,m,d));
//					  cout<<"Deleted "<<N<<" events"<<endl;
//				  }else {
//					  if( db.DeleteEvent(Date(y,m,d), event)){
//						  cout<<"Deleted successfully"<<endl;
//					  }else {
//						  cout<<"Event not found"<<endl;
//					  }
//				  }
//			  }else if(act == "Find"){
//
//				  events = db.Find(Date(y,m,d));
//				  //print all the events
//				  for(auto& ev: events){
//					  cout << ev <<endl;
//				  }
//			  }else if(act == "Print") {
//				  db.Print();
//			  }
//
//		  } catch (runtime_error& er) {
//		             cout<<er.what()<<endl;
//		             //any of the errors the program should end
//		             //exit(1);
//		  }
//	  }
//}
//
//
//void CheckMainLoop(){
//	//vector<string> s = {"Add 0-1-2 event1","Add 1-2-3 event2","Find 0-1-2",""};
//	vector<string> s = {"Add 0-1-2 event1","Add 1-2-3 event2","Find 0-1-2","","Del 0-1-2","Print","Del 1-2-3 event2","Del 1-2-3 event2"};
//
//	//MainLoop(s);
//}
//string WrapperCheckCommandLine(const string& command){
//	try{
//		CheckCommandLine(command);
//		return "NoErrorTriggered";
//	}catch(runtime_error& ex){
//		return ex.what();
//	}
//}
//
//void testCommandLineMonthDay(){
//	AssertEqual(WrapperCheckCommandLine("Add 1-13-21 event"),"Month value is invalid: 13","Month check upper limit failed");
//	AssertEqual(WrapperCheckCommandLine("Add 1-0-21 event"),"Month value is invalid: 0","Month check lover limit failed");
//	AssertEqual(WrapperCheckCommandLine("Add 1-1-32 event"),"Day value is invalid: 32","Day check upper limit failed");
//	AssertEqual(WrapperCheckCommandLine("Add 1-1-0 event"),"Day value is invalid: 0","Day check lover limit failed");
//	AssertEqual(WrapperCheckCommandLine("Add 1-0-0 event"),"Month value is invalid: 0","Both Month and Day check limit failed");
//
//}
//
//void testCommandLineAction(){
//	AssertEqual(WrapperCheckCommandLine("Add1 1-13-21 event"),"Unknown command: Add1","Wrong action 1 failed");
//}
//
//void testCommandLineDate(){
//	AssertEqual(WrapperCheckCommandLine("Add 1---1-1 event"),"Wrong date format: 1---1-1","Wrong date 1 failed");
//	AssertEqual(WrapperCheckCommandLine("Add 1-1---1 event1"),"Wrong date format: 1-1---1","Wrong date 2 failed");
//
//	AssertEqual(WrapperCheckCommandLine("Add -1-1-1 event"),"NoErrorTriggered","Correct date 1 failed");
//	AssertEqual(WrapperCheckCommandLine("Add 1-+1-+1 event"),"NoErrorTriggered","Correct date 2 failed");
//
//}
//
//void testAddFindEventBasic(){
//	Database db;
//	db.AddEvent(Date(1,1,1),"eventaaa");
//	db.AddEvent(Date(1,1,1),"eventaaab");
//	db.AddEvent(Date(1,1,2),"event112");
//	db.AddEvent(Date(1,1,2),"event1122");
//	set<string> act=db.Find(Date(1,1,1));
//	set<string> exp={"eventaaab","eventaaa"};
//	AssertEqual(exp,act,"Added events printed wrongly(letters)");
//
//	exp={"event1122","event112"};
//	act=db.Find(Date(1,1,2));
//	AssertEqual(exp,act,"Added events printed wrongly(numbers)");
//
//	exp={};
//	act=db.Find(Date(1,1,3));
//	AssertEqual(exp,act,"None existing date printed wrongly");
//
//}
//
//void testAddDeleteAddsame(){
//	Database db;
//	db.AddEvent(Date(1,1,1),"eventaaa");
//	db.AddEvent(Date(1,1,1),"eventaaab");
//	db.AddEvent(Date(1,1,1),"eventaaac");
//
//	bool act_b=db.DeleteEvent(Date(1,1,1),"eventaaa");
//	bool exp_b=1;
//	AssertEqual(exp_b,act_b,"Deleting first event failed");
//
//	db.AddEvent(Date(1,1,1),"eventaaad");
//	set<string> act=db.Find(Date(1,1,1));
//	set<string> exp={"eventaaab","eventaaac","eventaaad"};
//
//}
//
//void testDeleteEvents(){
//	Database db;
//	db.AddEvent(Date(-1,1,1),"eventaaaa");
//	db.AddEvent(Date(-1,1,1),"eventaaab");
//	db.AddEvent(Date(-1,1,1),"eventaaac");
//
//	bool act=db.DeleteEvent(Date(-1,1,1),"eventaaab");
//	bool exp=1;
//	AssertEqual(exp,act,"Deleting event failed");
//
//	act=db.DeleteEvent(Date(-1,1,1),"eventaaab");
//	exp=0;
//	AssertEqual(exp,act,"Deleting non-existing event failed on existing date failed");
//
//	act=db.DeleteEvent(Date(-1,1,-2),"eventaaab");
//	exp=0;
//	AssertEqual(exp,act,"Deleting event failed on non-existing date failed");
//}
//
//void testDeleteDates(){
//	Database db;
//
//	int act=db.DeleteDate(Date(-1,1,1));
//	int exp=0;
//	AssertEqual(exp,act,"Deleting none existing date failed");
//
//	db.AddEvent(Date(-1,1,1),"eventaaaa");
//	db.AddEvent(Date(-1,1,1),"eventaaab");
//	db.AddEvent(Date(-1,1,1),"eventaaac");
//	db.AddEvent(Date(-1,1,2),"eventaaaa2");
//
//
//	act=db.DeleteDate(Date(-1,1,1));
//	exp=3;
//	AssertEqual(exp,act,"Deleting date failed ");
//
//	act=db.DeleteDate(Date(-1,1,2));
//	exp=1;
//	AssertEqual(exp,act,"Deleting second date failed ");
//
//	db.AddEvent(Date(-1,1,2),"eventaaab2");
//	db.AddEvent(Date(-1,1,2),"eventaaac2");
//
//	act=db.DeleteDate(Date(-1,1,2));
//	exp=2;
//	AssertEqual(exp,act,"Deleting third date failed ");
//
//}
////Compare Date comparison operator "<"
//void testDateComparison(){
//	Date d1(1,1,1);
//	Date d2(2,1,1);
//	Date d3(1,2,1);
//	Date d4(1,1,2);
//	Date d5(1,1,2);
//
//	Assert(!(d1<d1),"Same date");
//	Assert((d1<d2),"Lhs date smaller based year");
//	Assert((d1<d3),"Lhs date smaller based month");
//	Assert((d1<d4),"Lhs date smaller based day");
//	Assert(!(d2<d1),"Lhs date bigger based year");
//	Assert(!(d3<d1),"Lhs date bigger based month");
//	Assert(!(d4<d1),"Lhs date bigger based day");
//
//}
//
//
//
//void testFindEvents(){
//	Database db;
//	db.AddEvent(Date(0,1,2),"event1");
//	db.AddEvent(Date(1,2,3),"event2");
//	set<string> act=db.Find(Date(0,1,2));
//	set<string> exp={"event1"};
//	AssertEqual(exp,act,"Finding event failed");
//}
//int main() {
////	TestRunner tr;
////	tr.RunTest(testDateComparison,		"testDateComparison");
////	tr.RunTest(testAddFindEventBasic,	"testAddFindEventBasic");
////	tr.RunTest(testAddDeleteAddsame,	"testAddDeleteAddsame");
////	tr.RunTest(testDeleteEvents,		"testDeleteEvents");
////	tr.RunTest(testDeleteDates,			"testDeleteDates");
////	tr.RunTest(testCommandLineMonthDay,	"testCommandLineMonthDay");
////	tr.RunTest(testCommandLineAction,	"testCommandLineAction");
////	tr.RunTest(testCommandLineDate,		"testCommandLineDate");
////	tr.RunTest(testFindEvents,			"testFindEvents");
//
//	//CheckMainLoop();
//	MainLoop();
//  return 0;
//
//}
