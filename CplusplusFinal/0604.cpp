//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//
//	const char* srcFile = "C:\\Users\\jimin\\Pictures\\Clion.png";
//	const char* destFile = "C:\\Users\\jimin\\Desktop\\copy_Clion.png";
//
//	ifstream fsrc(srcFile, ios::in | ios::binary);
//	if (!fsrc) {
//		cout << srcFile << "열기 오류" << endl;
//		return 0;
//	}
//
//	ofstream fdest(destFile, ios::out | ios::binary);
//	if (!fdest) {
//		cout << destFile << "열기 오류";
//		return 0;
//	}
//
//	int c;
//	while ((c = fsrc.get()) != EOF) {
//		fdest.put(c);
//	}
//	cout << srcFile << "을" << destFile << "로 복사완료" << endl;
//	fsrc.close();
//	fdest.close();
//
//
//
//}

#include <iostream>
//#include <fstream>
//using namespace std;
//int main() {
//	const char* file = "c:\\windows\\system.ini";
//	ifstream fin(file);
//	if (!fin) {
//		cout << file << " 열기 오류" << endl;
//		return 0;
//	}
//	int count = 0;
//	int c;
//	while ((c = fin.get()) != EOF) { // EOF를 만날 때까지 문자 읽기
//		cout << (char)c;
//		count++;
//	}
//	cout << "읽은 바이트 수는 " << count << endl;
//	fin.close(); // 파일 닫기
//}
