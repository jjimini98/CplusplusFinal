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
//		cout << srcFile << "���� ����" << endl;
//		return 0;
//	}
//
//	ofstream fdest(destFile, ios::out | ios::binary);
//	if (!fdest) {
//		cout << destFile << "���� ����";
//		return 0;
//	}
//
//	int c;
//	while ((c = fsrc.get()) != EOF) {
//		fdest.put(c);
//	}
//	cout << srcFile << "��" << destFile << "�� ����Ϸ�" << endl;
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
//		cout << file << " ���� ����" << endl;
//		return 0;
//	}
//	int count = 0;
//	int c;
//	while ((c = fin.get()) != EOF) { // EOF�� ���� ������ ���� �б�
//		cout << (char)c;
//		count++;
//	}
//	cout << "���� ����Ʈ ���� " << count << endl;
//	fin.close(); // ���� �ݱ�
//}
