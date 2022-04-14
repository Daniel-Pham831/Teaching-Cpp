#include <iostream>
using namespace std;


int main() {
    int luaChon;
    cin >> luaChon;
    switch (luaChon) {
        case 1:
            //neu lua chon == 1 thì vô đây
            break;

        case 10:
            //neu lua chon == 10 thì vô đây
            break;

        default:
            //neu neu ko co cai đúng thì thì vô đây
            break;
    }

    cout << endl;
    system("pause");
    return 0;
}

/*
    Bài 2
    Viết chương trình nhập vào 2 số thực
    Sau đó hỏi người dùng

    Nhap 1: De tinh tong A+B
    Nhap 2: De tinh hieu A-B
    Nhap 3: De tinh thuong A/B
    Nhap 4: De tinh tich A*B
    Bạn muon lam gi?

    vd: nguoi dung nhập vô 2 số
    4.5  7.6

    ->Console
    Nhap 1: De tinh tong A+B
    Nhap 2: De tinh hieu A-B
    Nhap 3: De tinh thuong A/B
    Nhap 4: De tinh tich A*B
    Bạn muon lam gi?

    ->1
    4.5 + 7.6 = 12.1

    ->5
    Ban da nhap sai
    -> be chuong trinh luon


    Bài 3:
    Viết chương trình kiểm tra số nguyên dương n được nhập vào từ người dùng
    kiểm tra xem số n đó có phải là số nguyên tố hay ko?
    biết rằng số nguyên tố là số
    CHỈ CHIA HẾT CHO 1 VÀ CHÍNH NÓ

    vd: người dùng nhập -> 1
    Thì xuất ra -> 1 là số nguyên tố

    vd: người dùng nhập -> 2
    Thì xuất ra -> 2 là số nguyên tố

    vd: người dùng nhập -> 7
    Thì xuất ra -> 7 là số nguyên tố

    vd: người dùng nhập -> 8
    Thì xuất ra -> 8 không là số nguyên tố

    vd: người dùng nhập -> 4
    Thì xuất ra -> 4 không là số nguyên tố

    vd: người dùng nhập -> 6
    Thì xuất ra -> 6 không là số nguyên tố

    Bài 4: 
    Viết chương trình kiểm tra số nguyên dương N được nhập vào từ người dùng
    kiểm tra xem số n đó có phải là số hoàn thiện hay ko?
    biết rằng số hoàn thiện là số
    Ước của số N đó cộng lại bằng chính số N đó
    
   
    vd: người dùng nhập -> 6 -> 1+2+3=6
    Thì xuất ra -> 6 là số hoàn thiện

    vd: người dùng nhập -> 28 -> 1+2+4+7+14=28
    Thì xuất ra -> 28 là số hoàn thiện

    vd: người dùng nhập -> 496
    Thì xuất ra -> 496 là số hoàn thiện

    vd: người dùng nhập -> 8 -> 1+2+4 = 7
    Thì xuất ra -> 8 không là số hoàn thiện

    vd: người dùng nhập -> 4
    Thì xuất ra -> 4 không là số hoàn thiện
*/