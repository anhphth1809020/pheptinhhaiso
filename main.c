#include <stdio.h>

int truhaiso(int a, int b){
    return a - b;
}

int conghaiso(int a, int b){
    return a + b;
}

int nhanhaiso(int a, int b) {
    return a * b;
}

float chiahaiso(int a, int b){
    return a / b;
}

int main() {
    int a, b, luachon;
    float ketqua;
    printf("Vui long nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Vui long nhap so thu hai: ");
    scanf("%d", &b);
    printf("Lua chon phep tinh: \n");
    printf("1. Phep cong. \n");
    printf("2.Phep tru. \n");
    printf("3. Phep nhan. \n");
    printf("4. Phep chia. \n");

    printf("Nhap lua chon cua ban (1|2|3|4): \n");
    scanf("%d", &luachon);

    if(luachon == 2) {
        ketqua = truhaiso(a, b);
        printf("Hieu cua %d tru di %d la %f", a, b, ketqua);
    }
     else if(luachon == 1) {
         ketqua = conghaiso(a, b);
         printf("Tong cua %d va %d la %f", a, b, ketqua);
     }
     else if(luachon == 3){
         ketqua = nhanhaiso(a, b);
         printf("Tich cua %d va %d la %f", a, b, ketqua);
     }
     else if (luachon == 4 ){
         if(b == 0){
             printf("Phep tinh khong hop le.");
         }
         else{
             ketqua = chiahaiso(a, b);
             printf("Thuong cua %d chia cho %d la %f", a, b, ketqua);
         }
     }

     else{
         printf(" Lua chon sai.");
     }
        return 0;
}