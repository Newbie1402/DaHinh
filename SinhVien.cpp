#include "SinhVien.h"
#include <iostream>

SinhVien::SinhVien(const std::string& maSo, const std::string& hoTen, const std::string& diaChi, int tongSoTinChi, float diemTrungBinh)
    : maSo(maSo), hoTen(hoTen), diaChi(diaChi), tongSoTinChi(tongSoTinChi), diemTrungBinh(diemTrungBinh) {}

SinhVien::~SinhVien() {}

void SinhVien::xuatThongTin() const {
    std::cout << "Ma so: " << maSo << ", Ho ten: " << hoTen << ", Dia chi: " << diaChi
        << ", Tong so tin chi: " << tongSoTinChi << ", Diem trung binh: " << diemTrungBinh;
}

bool SinhVien::kiemTraTotNghiep() const {
    
    return false;
}

float SinhVien::getDiemTrungBinh() const {
    return diemTrungBinh;
}
