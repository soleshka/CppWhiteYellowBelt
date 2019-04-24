////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //Class of first and family names to follow up changes inthe names during the years .
//				 //Addition in this file is the constructor and the date of birth for corectness check and constant methods
////============================================================================
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//
//
//class Person {
//	public:
//		Person(string first_name , string last_name , int year){
//			name_at_birth = first_name;
//			last_name_at_birth = last_name;
//			year_at_birth = year;
//			years_to_first[year] = first_name;
//			years_to_last[year] = last_name;
//		}
//		//changes the first name. Ignors if the year is improper
//		void ChangeFirstName(int year , const string& first_name){
//			if (year >= year_at_birth){
//				years_to_first[year] = first_name;
//			}
//			//cout << "years_to_first size = "<< years_to_first.size() << endl;
//		}
//		//changes the last name. Ignors if the year is improper
//		void ChangeLastName(int year , const string& last_name){
//			years_to_last[year] = last_name;
//			//cout << "years_to_last size = "<< years_to_last.size() << endl;
//		}
//		string GetFullName(int year) const{
//			if (year < year_at_birth){
//				cout << "No person";
//				return "";
//			}else{
//				return GetFullName_int(year);
//			}
//		}
//		string GetFullNameWithHistory(int year) const{
//			if (year < year_at_birth){
//				cout << "No person";
//				return "";
//			}else{
//				return GetFullName_int(year,true);
//			}
//		}
//
//	private:
//		map<int,string> years_to_first;
//		map<int,string> years_to_last;
//		string name_at_birth;
//		string last_name_at_birth;
//		int year_at_birth;
//
//		//returns the last year which is smaller then the given year when the name was changed
//		//if such does not exist return -1
//		int FindFirstName(const map<int,string>& mp , int year) const{
//			int temp_year = 999999;
//			for (const auto& yr : mp ){
//				if (yr.first > year ){
//					break;
//				}else{//must be a year which is less then compared year
//					temp_year = yr.first;
//				}
//			}
//			return temp_year;
//		}
//
//		//returns either the current name if vector size == 1
//		//or returns a history string without the current name in given format
//		string GetHist(map<int,string> mp,int year,bool with_hist=false) const{
//			//adress the history which most definitly exists
//				vector<string> temp_vec = {""} ;
//				string head ;
//				if (with_hist){
//					string str = "";
//
//					  std::map<int,string>::reverse_iterator rit;
//					  for (rit=mp.rbegin(); rit!=mp.rend(); ++rit){
//
//							//assuming the elements will be sorted by the year as expected in map keys
//							//do not take the value under current year
//							if (rit->first > year){
//								continue;
//							}else{
//								//remove duplications
//								if (temp_vec[temp_vec.size()-1] != rit->second ){
//									temp_vec.push_back(rit->second);
//								}
//							}
//
//					  }
//					  //remove the dummy first element
//					  temp_vec.erase(temp_vec.begin());
//
//					  //get the current name
//					  if (temp_vec.size() != 0) {
//						  head = temp_vec[0];
//						  temp_vec.erase(temp_vec.begin());
//					  }
//					  reverse(temp_vec.begin(),temp_vec.end());
//					  for (const auto& el : temp_vec){
//						  //cout << "el:" << el << "END " <<endl;
//						  str = el +", "+str;
//
//					  }
//
//					//in case no history exists
//					if (str != ""){
//						//remove the last psik and space
//						str.erase(str.size()-1);
//						str.erase(str.size()-1);
//						return head+" "+"("+str+")";
//					}else{
//						return mp[year];
//					}
//				}else {
//					return mp[year];
//				}
//		}
//		string GetFullName_int(int year, bool with_hist=false) const{
//			//get the year if the name was changed before the given name otherwise -1
//					int first_year = FindFirstName(years_to_first , year);
//					//same for last name
//					int last_year = FindFirstName(years_to_last , year);
//
//					if (first_year <= year && last_year <= year){//both name changes occured before the given name
//						return ( GetHist(years_to_first,first_year,with_hist) + " " + GetHist(years_to_last,last_year,with_hist));
//
//					}else if (first_year <= year){//only first name change occured before the given name
//						return (GetHist(years_to_first,first_year,with_hist) + " with unknown last name");
//
//					}else if (last_year <= year ){//only last name change occured before the given name
//						return (GetHist(years_to_last,last_year,with_hist) + " with unknown first name");
//					}else
//						return "Incognito";
//					}
//		};
//
//
//
//
//
//
//	int main() {
//		 Person person("Polina", "Sergeeva", 1960);
//
//		  for (int year : {1959, 1960}) {
//		    cout << person.GetFullNameWithHistory(year) << endl;
//		  }
//
//		  person.ChangeFirstName(1965, "Appolinaria");
//		  person.ChangeLastName(1967, "Ivanova");
//		  for (int year : {1965, 1967}) {
//		    cout << person.GetFullNameWithHistory(year) << endl;
//		  }
//
////	  person.ChangeFirstName(1965, "Polina");
////	  person.ChangeLastName(1967, "Sergeeva");
////	  for (int year : {1900, 1965, 1990}) {
////	    cout << person.GetFullName(year) << endl;
////	  }
////
////	  person.ChangeFirstName(1970, "Appolinaria");
////	  for (int year : {1969, 1970}) {
////	    cout << person.GetFullName(year) << endl;
////	  }
////
////	  person.ChangeLastName(1968, "Volkova");
////	  for (int year : {1969, 1970}) {
////	    cout << person.GetFullName(year) << endl;
////	  }
////
////	  person.ChangeFirstName(1965, "Polina");
////	  person.ChangeLastName(1967, "Sergeeva");
////	  for (int year : {1900, 1965, 1990}) {
////	    cout << person.GetFullNameWithHistory(year) << endl;
////	  }
////
////	  person.ChangeFirstName(1970, "Appolinaria");
////	  for (int year : {1969, 1970}) {
////	    cout << person.GetFullNameWithHistory(year) << endl;
////	  }
////
////	  person.ChangeLastName(1968, "Volkova");
////	  for (int year : {1969, 1970}) {
////	    cout << person.GetFullNameWithHistory(year) << endl;
////	  }
////
////	  person.ChangeFirstName(1990, "Polina");
////	  person.ChangeLastName(1990, "Volkova-Sergeeva");
////	  cout << person.GetFullNameWithHistory(1990) << endl;
////
////	  person.ChangeFirstName(1966, "Pauline");
////	  cout << person.GetFullNameWithHistory(1966) << endl;
////
////	  person.ChangeLastName(1960, "Sergeeva");
////	  for (int year : {1960, 1967}) {
////	    cout << person.GetFullNameWithHistory(year) << endl;
////	  }
////
////	  person.ChangeLastName(1961, "Ivanova");
////	  cout << person.GetFullNameWithHistory(1967) << endl;
////
////	  person.ChangeLastName(1961, "Ivanova");
////	  cout << person.GetFullNameWithHistory(1967) << endl;
//
////	   person.ChangeFirstName(1900, "Eugene");
////	   person.ChangeLastName(1900, "Sokolov");
////	   person.ChangeLastName(1910, "Sokolov");
////	   person.ChangeFirstName(1920, "Evgeny");
////	   person.ChangeLastName(1930, "Sokolov");
////	   cout << person.GetFullNameWithHistory(1940) << endl;
//
//	   return 0;
//
//	}
//
//
//
//
//
