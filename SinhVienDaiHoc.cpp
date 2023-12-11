#include "SinhVienDaiHoc.h"
#include <iostream>

SinhVienDaiHoc::SinhVienDaiHoc(const std::string& maSo, const std::string& hoTen, const std::string& diaChi,
    int tongSoTinChi, float diemTrungBinh, const std::string& tenLuanVan, float diemLuanVan)
    : SinhVien(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh), tenLuanVan(tenLuanVan), diemLuanVan(diemLuanVan) {}

void SinhVienDaiHoc::xuatThongTin() const {
    SinhVien::xuatThongTin();
    std::cout << ", Ten luan van: " << tenLuanVan << ", Diem luan van: " << diemLuanVan;
}

bool SinhVienDaiHoc::kiemTraTotNghiep() const {
   
    return diemLuanVan >= 5.0;
}
