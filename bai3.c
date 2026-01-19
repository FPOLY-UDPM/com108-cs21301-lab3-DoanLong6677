/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
    int sokWh;
    float tienDien;

    // Nhập dữ liệu
    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &sokWh);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (sokWh <= 50){
        tienDien = sokWh * 1678;
    }
    else if (sokWh <= 100)
    {
        tienDien = 50 * 1678 + (sokWh - 50) * 1734;
    }
    else if (sokWh <= 200)
    {
        tienDien = 50 * 1678 + 50 * 1734 + (sokWh - 100) * 2014;
    }
    else if (sokWh <= 300)
    {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (sokWh - 200) * 2536;
    }
    else if (sokWh <= 400)
    {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (sokWh - 300) * 2834;
    }
    else 
    {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (sokWh - 400) * 2927;
    }

    printf("So tien dien phai dong: %.2f VND\n", tienDien);
    return 0;  
}
