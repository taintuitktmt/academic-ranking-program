//Một học sinh có 7 môn học để xét xếp loại vào học bạ : Toán, Lý, Hóa, Văn, Anh, Sử, Địa.
//Cách xếp loại học sinh như sau :
//-Học sinh giỏi : Điểm trung bình trên 8.0 và ko có môn nào dưới 4.0.
//Nếu có 1 môn dưới 4 thì hạ xuống học sinh khá
//- Học sinh khá : Điểm trung bình từ 6.5 đến 8.0 và ko có môn nào dưới 3.0.
//Nếu có 1 môn dưới 3 thì hạ xuống học sinh trung bình
//- Học sinh trung bình : Điểm trung bình từ 4.0 đến 6.5 và ko có môn nào bị liệt(0 điểm)
//Nếu có 1 môn liệt thì hạ xuống học sinh yếu
//- Học sinh yếu : Các trường hợp còn lại
//Thang điểm tính từ 0 đến 10.
//Viết chương trình nhập điểm phẩy
//1 - Kiểm tra xem điểm nhập vào có hợp lệ hay ko.Điểm hợp lệ là từ 0 đến 10.
//In ra thông báo nếu điểm ko hợp lệ
//2 - Nếu hợp lệ thì in ra điểm tổng kết và xếp loại của học sinh

#include <iostream>
using namespace std;

int main() {
	float toan = 10;
	float ly = 10;
	float hoa = 10;
	float anh = 10;
	float van = 10;
	float su = 10;
	float dia = 10;

	cout << "Nhap diem toan: "; cin >> toan;
	cout << "Nhap diem ly: "; cin >> ly;
	cout << "Nhap diem hoa: "; cin >> hoa;
	cout << "Nhap diem anh: "; cin >> anh;
	cout << "Nhap diem van: "; cin >> van;
	cout << "Nhap diem su: "; cin >> su;
	cout << "Nhap diem dia: "; cin >> dia;

	float diem_trung_binh = (toan + ly + hoa + anh + van + su + dia) / 7;
	cout << "Diem tong ket: " << diem_trung_binh << "\n";

	if(toan < 0 || toan>10 || ly < 0 || ly>10
		|| hoa < 0 || hoa>10 || anh < 0 || anh>10
		|| van < 0 || van>10 || su < 0 || su>10
		|| dia < 0 || dia>10)
	{
		cout << "Diem ko hop le";
	}
	else {
		if (diem_trung_binh >= 8) {
			if (toan > 4 && ly > 4 && hoa > 4 && anh > 4 && van > 4 && su > 4 && dia > 4)
			{
				cout << "Day la hoc sinh gioi";
			}
			else cout << "Day la hoc sinh kha";
	}
		else if (diem_trung_binh >= 6.5 && diem_trung_binh < 8) {
			if (toan > 3 && ly > 3 && hoa > 3 && anh > 3 && van > 3 && su > 3 && dia > 3)
			{
				cout << "Day la hoc sinh kha";
			}
			else cout << "Day la hoc sinh trung binh";
	}
		else if (diem_trung_binh >= 4 && diem_trung_binh < 6.5) {
			if (toan != 0 && ly != 0 && hoa != 0 && anh != 0 && van != 0 && su != 0 && dia != 0)
			{
				cout << "Day la hoc sinh trung binh";
			}
			else cout << "Day la hoc sinh yeu";
	}

	}
}