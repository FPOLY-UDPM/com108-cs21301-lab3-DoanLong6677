/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

int main(){
    
    // Khai báo biến
    int luaChon;

    // Nhập dữ liệu
    
    printf("Chon bai tap:\n");
    printf("Bai 1: Tinh diem\n");
    printf("Bai 2_1: Tinh phuong trinh bac 1\n");
    printf("Bai 2_2: Tinh phuong trinh bac 2\n");
    printf("Bai 3: Tinh tien dien\n");
    printf("Nhap lua chon: ");
    scanf("%d", &luaChon);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    switch (luaChon)
    {
    case 1:
        // Code cho Bai 1
        float diem;
    
        printf("Nhap diem cua sinh vien: ");
        scanf("%f", &diem);
    
        if (diem >= 9){
            printf("Hoc luc xuat sac\n");
        }
        else if (diem >= 8){
            printf("Hoc luc gioi\n");
        }
        else if (diem >= 6.5){
            printf("Hoc luc kha\n");
        }
        else if (diem >= 5){
            printf("Hoc luc trung binh\n");
        }
        else if (diem >= 3.5){
            printf("Hoc luc yeu\n");
        }
        else {
            printf("Hoc luc kem\n");
        }           
        break;
    case 2:
        // Code cho Bai 2_1
        float a, b, x;

        printf("Nhap he so a: ");
        scanf("%f", &a);
        printf("Nhap he so b: ");
        scanf("%f", &b);

        if (a == 0){
            if (b == 0){
                printf("Phuong trinh co vo so nghiem\n");
            }
            else {
                printf("Phuong trinh vo nghiem\n");
            }
        }
        else {
            x = -b/a;
            printf("Phuong trinh co nghiem x = %.1f\n", x);
        }
        break;
    case 3:
        // Code cho Bai 2_2
        float a1, b1, c, delta;

        printf("Nhap a: ");
        scanf("%f", &a1);
        printf("Nhap b: ");
        scanf("%f", &b1);
        printf("Nhap c: ");
        scanf("%f", &c);

        if (a1 == 0)
        {
            if (b1 == 0){
                if (c == 0)
                {
                    printf("Phuong trinh co vo so nghiem\n");
                }
                else
                {
                    printf("Phuong trinh vo nghiem\n");
                }
            }
            else {
                float x = -c/b1;
                printf("Phuong trinh co nghiem x = %.1f\n", x);
            }
        }
        else
        {
            delta = b1*b1 - 4*a1*c;
            if (delta < 0)
            {
                printf("Phuong trinh vo nghiem\n");
            }
            else if (delta == 0)
            {
                printf("Phuong trinh co nghiem kep x1 = x2 = %f\n", -b1/(2*a1));
            }
            else
            {
                printf("Phuong trinh co 2 nghiem phan biet:\n");
                printf("x1 = %.1f\n", (-b1 + sqrt(delta))/(2*a1));
                printf("x2 = %.1f\n", (-b1 - sqrt(delta))/(2*a1));
            }
        }
        break;
    case 4:
        // Code cho Bai 3
        int sokWh, tienDien;

        printf("Nhap so kWh tieu thu: ");
        scanf("%d", &sokWh);

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
    default:
        printf("Lua chon khong hop le!\n");
    break;
    }
   
return 0;
}