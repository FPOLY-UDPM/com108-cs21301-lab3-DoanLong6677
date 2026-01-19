/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main(){

    // Khai báo biến
    float diem;
    
    // Nhập dữ liệu
    printf("Nhap diem cua sinh vien: ");
    scanf("%f", &diem);
    
    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (diem >= 9){
        printf("Hoc luc xuat sac");
    }
    else if (diem >= 8){
        printf("Hoc luc gioi");
    }
    else if (diem >= 6.5){
        printf("Hoc luc kha");
    }
    else if (diem >= 5){
        printf("Hoc luc trung binh");
    }
    else if (diem >= 3.5){
        printf("Hoc luc yeu");
    }
    else {
        printf("Hoc luc kem");
    }           

    return 0;
}