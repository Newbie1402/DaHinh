#ifndef SINHVIENDAIHOC_H
#define SINHVIENDAIHOC_H

#include "SinhVien.h"

class SinhVienDaiHoc : public SinhVien {
public:
    SinhVienDaiHoc(const std::string& maSo, const std::string& hoTen, const std::string& diaChi,
        int tongSoTinChi, float diemTrungBinh, const std::string& tenLuanVan, float diemLuanVan);
    void xuatThongTin() const override;
    bool kiemTraTotNghiep() const override;

private:
    std::string tenLuanVan;
    float diemLuanVan;
};

#endif 