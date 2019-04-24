////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //Sort vector of stings LExigrafically
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
//struct Name{
//	string first_name = "";
//	string last_name = "";
//};
//
//class Person {
//	public:
//		void ChangeFirstName(int year , const string& first_name){
//			years_to_first[year] = first_name;
//		}
//		void ChangeLastName(int year , const string& last_name){
//			years_to_last[year] = last_name;
//		}
//		string GetFullName(int year){
//			//get the year if the name was changed before the given name otherwise -1
//			int first_year = FindFirstName(years_to_first , year);
//			//same for last name
//			int last_year = FindFirstName(years_to_last , year);
////			cout << "year " << year << endl;
////			cout << "first_name " << first_year << endl;
////			cout << "last_name " << last_year << endl;
//
//			if (first_year <= year && last_year <= year){//both name changes occured before the given name
//				return (years_to_first[first_year] + " " + years_to_last[last_year]);
//			}else if (first_year <= year){//only first name change occured before the given name
//				return (years_to_first[first_year] + " with unknown last name");
//			}else if (last_year <= year ){//only last name change occured before the given name
//				return (years_to_last[last_year] + " with unknown first name");
//			}else
//				return "Incognito";
//			}
//
//
//	private:
//		map<int,string> years_to_first;
//		map<int,string> years_to_last;
//
//		//returns the last year which is smaller then the given year when the name was changed
//		//if such does not exist return -1
//		int FindFirstName(const map<int,string>& mp , int year){
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
//
//};
//
//
//
//
//
//	int main() {
//	  Person person;
//
//	  person.ChangeFirstName(1965, "Polina");
//	  person.ChangeLastName(1967, "Sergeeva");
//	  for (int year : {1900, 1965, 1990}) {
//	    cout << person.GetFullName(year) << endl;
//	  }
//
//	  person.ChangeFirstName(1970, "Appolinaria");
//	  for (int year : {1969, 1970}) {
//	    cout << person.GetFullName(year) << endl;
//	  }
//
//	  person.ChangeLastName(1968, "Volkova");
//	  for (int year : {1969, 1970}) {
//	    cout << person.GetFullName(year) << endl;
//	  }
//
//	  return 0;
//	}
//
//



