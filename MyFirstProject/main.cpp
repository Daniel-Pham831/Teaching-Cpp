#include <iostream>
using namespace std;

int main() {

	int n;
	cout << "Vui long nhap vao n: ";
	cin >> n;

	if (n > 0) {
		for (int i = 0; i < n; i++) {
			cout << i<<" ";
		}
	}
	else {
		cout << "Ban da nhap sai!"<< endl;
	}

	cout << endl;
	system("pause");
	return 0;
}
/*	
	Bài 1
	Viết chương trình nhập vào 1 số n bất kì (n > 0) (nếu n <= 0 thì hủy chương trình)
	Xuất ra các số lẻ từ 0 -> n
	vd : nhập n = 10;
	xuất ra: 1 3 5 7 9

	Bài 2
	Viết chương trình nhập vào 1 số n bất kì (n > 0) (nếu n <= 0 thì hủy chương trình)
	Xuất ra các số chẳn từ 0 -> n
	vd : nhập n = 10;
	xuất ra: 0 2 4 6 8 10

	Bài 3
	Viết chương trình nhập vào 1 số nguyên ÂM N bất kì (N < 0)
	Xuất ra các số lẻ từ N -> 0
	vd : nhập n = -10;
	xuất ra: -9 -7 -5 -3 -1

	Bài 4
	Viết chương trình nhập vào 2 số bất kì A B (A < B) (nếu A >= B thì hủy chương trình)
	Xuất ra các số chẳn từ A -> B
	vd : A = -3 , B = 6
	xuất ra: -2 0 2 4 6

	Bài 5
	Viết chương trình nhập vào 2 sô bất kì A B (A > B) (nếu A <= B thì hủy chương trình)
	Xuất ra các số chia hết cho 4 từ A -> B (giảm dần)
	vd : A = 20 , B = 2
	Xuất ra: 20 16 12 8 4
 */
