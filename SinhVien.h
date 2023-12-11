#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <string>

class SinhVien {
public:
    SinhVien(const std::string& maSo, const std::string& hoTen, const std::string& diaChi, int tongSoTinChi, float diemTrungBinh);
    virtual ~SinhVien();

    virtual void xuatThongTin() const;
    virtual bool kiemTraTotNghiep() const;
    float getDiemTrungBinh() const;

protected:
    std::string maSo;
    std::string hoTen;
    std::string diaChi;
    int tongSoTinChi;
    float diemTrungBinh;
};

#endif 
