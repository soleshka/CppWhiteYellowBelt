//============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Maximal mutual devider (Eklid Algorithm)
////============================================================================
//
//#include <iostream>
//#include <string>
//using namespace std;
//
////returns maximal mutual devider
//int mmd(int ,int);
//int main() {
//	int A , B ;
//	cin >> A >> B ;
//
//	cout << mmd(A,B);
//
////	for (int i = 0;i < 26;i++){
////		for (int j = 0;j<30;j++){
////			cout << i << "," << j << "=" << mmd(i,j) << endl;
////		}
////	}
//
//
//	return 0;
//}
//
//int mmd(int A , int B){
////	int res =1;
////	for(int i = 2;i <= (A<B ? A : B);i++){
////		res = ((A%i == 0 &&  B%i == 0) ? i : res);
////	}
////	return res;
//
//	//Algorithm Efklied
//	while (A > 0 && B > 0){
//		if (A > B){
//			A %=B;
//		}else{
//			B %=A;
//		}
//	}
//	return A+B;
//}
