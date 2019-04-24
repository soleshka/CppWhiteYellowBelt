//============================================================================
// Name        : CourseraWhiteBeltCpp.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : //Bus stops assignments
//============================================================================

//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//
//typedef struct bus_ord_s {
//	string bus;
//	vector<string> stops;
//}bus_ordered_s;
//
//typedef struct ele {
//	string cmd;
//	string bus_or_stop;
//	vector<string> stops;
//}elem_s;
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
////bus stops container for busses with vectors of stops
////bus the new and unique  bus
////stops : the vector of stops for the given bus
////as per assignment no need to check conditions
//void NEW_BUS (map<int,bus_ordered_s>& bus_stops,string bus,vector<string> stops){
//	static int indx = 0;
//	bus_ordered_s temp;
//	temp.bus = bus;
//	temp.stops = stops;
//	bus_stops[indx] = temp;
//	indx++;
//}
//
////stop : bus stop for which to find all the busses passing through this stop
////bus_stops : container for bus to stops mapping
////returns string of all buses
//string BUSES_FOR_STOP(const map<int,bus_ordered_s>& bus_stops,string stop, string exept=""){
//	vector<string> buses;
//	string out = "";
//	bool found = false;
//
//	for (const auto& bus : bus_stops){
//		//search the vector of stops for a given bus
//		if (find(bus.second.stops.begin(),bus.second.stops.end(),stop) != bus.second.stops.end()) {//found condition
//			found = true;
//			//if spesific bus should not be in the list
//			if (exept != bus.second.bus){
//				//cout << "pushing bus : " <<bus.second.bus  << endl;
//				buses.push_back(bus.second.bus);//no need as the request is only to print out
//				out.append(bus.second.bus);
//				out.append(" ");
//			}
//		}
//
//	}
//	//no bus found
//	if (!found){//no existing stop
//		return "No stop";
//	}else if (buses.empty()){
//		return "No buses";
//	}else{
//		string temp = "Stop ";
//		//return ((temp.append(stop)).append(": ").append(out));
//		return out;
//	}
//	return out;
//}
//
//
////
//void STOPS_FOR_BUS (const map<int,bus_ordered_s>& bus_stops, string bus){
//	bool found = false;
//	string str;
//	for (const auto& elem : bus_stops){
//		if (bus == elem.second.bus){
//			//cout << "Found bus" << endl;
//			found = true;
//			for(const auto& stop : elem.second.stops){
//						str = BUSES_FOR_STOP(bus_stops,stop,bus);
//						if (str != "No buses" && str != "No stop"){//no unique buses found for this stop
//							cout << "Stop " << stop << ": " << str ;
//						}else{
//							cout << "Stop " << stop << ": " << "no interchange" ;
//						}
//						cout << endl;
//			}
//			break;
//		}
//	}
//	if (!found){
//		cout << "No bus" << endl;
//	}
//}
//
//
////print all buses with stops in incomming command order
//void ALL_BUSES_1(const map<int,bus_ordered_s>& bus_stops){
//	for (const auto& elem : bus_stops){
//		cout << elem.first << " " << elem.second.bus<< endl;
//		for(const auto& stop : elem.second.stops){
//			cout << stop << " " ;
//		}
//		cout << endl;
//	}
//}
//
////print all busses in alphabetick order
//void ALL_BUSES(const map<int,bus_ordered_s>& bus_stops){
//	map<string,bus_ordered_s> temp;
//
//	//creat temporary map which will be auto sorted based on bus name
//	for (const auto& elem : bus_stops){
//		temp[elem.second.bus] = elem.second;
//	}
//	if (!temp.empty()){
//		for(const auto& elem : temp){
//			cout << "Bus " << elem.first << ": ";
//			for (const auto& bus : elem.second.stops){
//				cout << bus << " ";
//			}
//			cout << endl ;
//		}
//	}else{
//		cout << "No buses" << endl;
//	}
//}
//
//
////getting commands for Buses assignment
//void CIN_DATA_BUSES(vector<elem_s>& commands){
//
//	int Q = 0, stop_count;
//	string str;
//	elem_s el;
//
//	//number of commands
//	cin >> Q ;
//
//	//Input flow
//	for (int i=0;i<Q;i++){
//		el.stops.clear();
//		cin >> el.cmd ;
//		if (el.cmd == "NEW_BUS"){
//			cin >> el.bus_or_stop >> stop_count;
//			for (int i = 0 ; i < stop_count;i++){
//				cin >> str;
//				el.stops.push_back(str);
//			}
//		}else if (el.cmd == "BUSES_FOR_STOP" || el.cmd == "STOPS_FOR_BUS"){
//			cin >> el.bus_or_stop ;
//		}else if (el.cmd == "ALL_BUSES"){
//			//nothing here
//		}else {
//			cout << "ERROR!!";
//		}
//		commands.push_back(el);
//	}
//}
////getting commands for Routes assignment
//void CIN_DATA_ROUTES(map<int ,vector<string>>& id_to_route){
//
//	int Q ,N;
//	string str;
//	//number of commands
//	cin >> Q ;
//
//	//Input flow
//	for (int i=0;i<Q;i++){
//		//number of strings
//		cin >> N ;
//		for (int j = 0;j< N; j++){
//			cin >> str;
//			id_to_route[i].push_back(str);
//		}
//
//	}
//}
//void ROUTES_EXE(map<int ,vector<string>>& id_to_route){
//	map<vector<string>,int> route_to_id;
//	int indx = 1;
//	for (const auto& elem : id_to_route){
//
//		if (route_to_id.count(elem.second) == 1){
//			cout << "Already exists for " << route_to_id[elem.second] << endl;
//		}else{
//			route_to_id[elem.second] = indx;
//			cout << "New bus " << indx++ << endl;
//		}
//	}
//
//
//}
//
//void BUSES_EXE(vector<elem_s>& commands){
//	map<int,bus_ordered_s> bus_stops;
//	for (const auto& el : commands){
//
//		if (el.cmd == "NEW_BUS" ){
//			NEW_BUS(bus_stops,el.bus_or_stop,el.stops);
//		}else if (el.cmd =="BUSES_FOR_STOP"){
//			cout << BUSES_FOR_STOP(bus_stops,el.bus_or_stop);
//			cout << endl;
//		}else if (el.cmd == "STOPS_FOR_BUS"){
//			STOPS_FOR_BUS(bus_stops,el.bus_or_stop);
//		}else if (el.cmd == "ALL_BUSES"){
//			ALL_BUSES(bus_stops);
//		}else {
//			cout << "ERROR!!";
//		}
//
//		//cout << elem.s << " " << elem.s1 << endl;
//		//PrintMap(bus_stops);
//	}
//}
//
//int main() {
//
//
//	vector<elem_s> commands;
//	//CIN_DATA_BUSES(commands);
//	//BUSES_EXE(commands);
//
//	map<int ,vector<string>> id_to_route;
//	CIN_DATA_ROUTES(id_to_route);
//	ROUTES_EXE(id_to_route);
//	return 0;
//}
//
//
