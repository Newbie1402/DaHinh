#include "SinhVienCaoDang.h"
#include <iostream>

SinhVienCaoDang::SinhVienCaoDang(const std::string& maSo, const std::string& hoTen, const std::string& diaChi,
    int tongSoTinChi, float diemTrungBinh, float diemThiTotNghiep)
    : SinhVien(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh), diemThiTotNghiep(diemThiTotNghiep) {}

void SinhVienCaoDang::xuatThongTin() const {
    SinhVien::xuatThongTin();
    std::cout << ", Diem thi tot nghiep: " << diemThiTotNghiep;
}

bool SinhVienCaoDang::kiemTraTotNghiep() const {
  
    return (diemTrungBinh + diemThiTotNghiep) >= 5.0;
}
