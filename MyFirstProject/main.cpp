#include "iostream"
using namespace std;

int main() {
	
	int tong = 0;//0

	for (int i = 1; i <= 5; i++) {
		cout << "tong: " << tong << endl;
		cout << "i: " << i << endl;

		tong = tong + i;
	}

	cout << tong;
	
	cout << endl;
	system("pause");
	return 0;
}

/*
	Bài 1:
	Cho người dùng nhập vào 1 số Dương bé hơn hoặc bằng 50 (n)

	xuất ra tổng từ 1 -> n
	vd: người dùng nhập 4
	-> tổng từ 1 tới 4 là: 10

	vd: người dùng nhập 10
	-> tổng từ 1 tới 10 là: 55

	vd: người dùng nhập 6
	-> tổng từ 1 tới 6 là: 21


	Bài 2:
	Nhập 1 số N bất kì từ 100 -> 200 (bao gồm 100 và 200) (nếu sai nhập lại)

	Nhập 1 số dương K bất kì bé hơn 50
	
	a) xuất ra từ 1 -> K nhưng ko dc xuất các số nào chia hết cho 2 và 3
	vd: nhập K là 49
	-> 1 5 7 11 13 17 19 23 25 29 31 35 37 41 43 47 49

	b) xuất ra tổng từ 1 -> số K
	vd: nhập K = 5 
	-> tổng từ 1 tới 5 là : 15

	c) xuất ra hiệu của N và tổng vừa tìm
	vd: nhập N = 100, K = 5
	-> Hieu cua 100 va 15 la 85

	vd: nhập N = 150, K = 10
	-> Hieu cua 150 va 55 la 95

	Bài 3:
	Cho người dùng nhập vào 1 số dương n, bé hơn 9999999 (7 số 9)

	a) Kiểm tra xem người dùng vừa nhập số dương hay âm
	-> vd: nhập N = 126354 
	Xuất ra -> Bạn vua nhap vao 1 so Duong

	b) Đếm xem có bao nhieu chữ số trong đó 
	vd: Nhập N = 100
	Xuất ra -> số bạn vừa nhập có 3 chữ số
	
	vd: Nhập N = 35495
	Xuất ra -> số bạn vừa nhập có 5 chữ số

	c) làm lại câu b mà ko dc dùng if
*/