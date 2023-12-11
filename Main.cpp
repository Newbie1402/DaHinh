#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    vector<SinhVien*> danhSachSinhVien;

    int soSinhVien;
    while (true) {
        cout << "Nhap so sinh vien: ";
        if (cin >> soSinhVien && soSinhVien > 0) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "So sinh vien khong hop le. Vui long nhap lai.\n";
        }
    }

    for (int i = 0; i < soSinhVien; i++) {
        char loaiSinhVien;
        cout << "Nhap loai sinh vien (C/D): ";
        cin >> loaiSinhVien;

        string maSo, hoTen, diaChi;
        int tongSoTinChi;
        float diemTrungBinh;

        cout << "Nhap ma so: ";
        cin >> maSo;
        cout << "Nhap ho ten: ";
        cin.ignore(); 
        getline(cin, hoTen);
        cout << "Nhap dia chi: ";
        getline(cin, diaChi);
        cout << "Nhap tong so tin chi: ";
        cin >> tongSoTinChi;
        cout << "Nhap diem trung binh: ";
        cin >> diemTrungBinh;

        if (loaiSinhVien == 'C') {
            float diemThiTotNghiep;
            cout << "Nhap diem thi tot nghiep: ";
            cin >> diemThiTotNghiep;
            danhSachSinhVien.push_back(new SinhVienCaoDang(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh, diemThiTotNghiep));
        }
        else if (loaiSinhVien == 'D') {
            string tenLuanVan;
            float diemLuanVan;
            cout << "Nhap ten luan van: ";
            cin.ignore(); 
            getline(cin, tenLuanVan);
            cout << "Nhap diem luan van: ";
            cin >> diemLuanVan;
            danhSachSinhVien.push_back(new SinhVienDaiHoc(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh, tenLuanVan, diemLuanVan));
        }

        cout << "Da nhap sinh vien: ";
        if (!danhSachSinhVien.empty()) {
            danhSachSinhVien.back()->xuatThongTin();
            cout << endl;
        }
    }

    if (!danhSachSinhVien.empty()) {
        auto maxDiemTrungBinh = max_element(danhSachSinhVien.begin(), danhSachSinhVien.end(),
            [](const SinhVien* a, const SinhVien* b) {
                return a->getDiemTrungBinh() < b->getDiemTrungBinh();
            });

        cout << "Sinh vien co diem trung binh cao nhat:" << endl;
        (*maxDiemTrungBinh)->xuatThongTin();
        cout << endl;

        auto maxDiemTrungBinhDaiHoc = max_element(danhSachSinhVien.begin(), danhSachSinhVien.end(),
            [](const SinhVien* a, const SinhVien* b) {
                const SinhVienDaiHoc* svDaiHocA = dynamic_cast<const SinhVienDaiHoc*>(a);
                const SinhVienDaiHoc* svDaiHocB = dynamic_cast<const SinhVienDaiHoc*>(b);

                if (svDaiHocA && svDaiHocB) {
                    return svDaiHocA->getDiemTrungBinh() < svDaiHocB->getDiemTrungBinh();
                }

                return false;
            });

        cout << "Sinh vien Dai hoc co diem trung binh cao nhat:" << endl;
        (*maxDiemTrungBinhDaiHoc)->xuatThongTin();
        cout << endl;
    }
    else {
        cout << "Danh sach sinh vien rong." << endl;
    }

    for (auto sv : danhSachSinhVien) {
        delete sv;
    }
    danhSachSinhVien.clear();

    return 0;
}
