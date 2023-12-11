#ifndef SINHVIENCAODANG_H
#define SINHVIENCAODANG_H

#include "SinhVien.h"

class SinhVienCaoDang : public SinhVien {
public:
    SinhVienCaoDang(const std::string& maSo, const std::string& hoTen, const std::string& diaChi,
        int tongSoTinChi, float diemTrungBinh, float diemThiTotNghiep);
    void xuatThongTin() const override;
    bool kiemTraTotNghiep() const override;

private:
    float diemThiTotNghiep;
};

#endif 
#ifndef SINHVIENCAODANG_H
#define SINHVIENCAODANG_H

#include "SinhVien.h"

class SinhVienCaoDang : public SinhVien {
public:
    SinhVienCaoDang(const std::string& maSo, const std::string& hoTen, const std::string& diaChi,
        int tongSoTinChi, float diemTrungBinh, float diemThiTotNghiep);
    void xuatThongTin() const override;
    bool kiemTraTotNghiep() const override;

private:
    float diemThiTotNghiep;
};

#endif 
