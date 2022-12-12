#include <stdio.h>
#include <stdlib.h>
#define size 100
void bai1(){
	fflush(stdin);
	printf("day la bai 1: tim ky tu trong chuoi \n");
	char mang[100];
	printf("moi ban nhap vao mot chuoi bat ki: ");
	fgets(mang,100,stdin);
	int count = 0;
	int bienDem = 0;
	int tongBienDem = 0;
	for(int i = 0; i <= 100 ; i++){
		if(mang[i] == 'h'){
			count++;
		}
		if(mang[i] == 'H'){
			bienDem++;
		}
	
	}
	
	tongBienDem = count + bienDem;
	printf("vay %s co %d ky tu la %d h va %d H",mang,tongBienDem,count,bienDem);
}

void bai2(){	
	int n;
	int i;
	printf("moi ban nhap so mang: ");
	scanf("%d",&n);
	int mang[n];
	for(i =0;i<n ;i++){
		printf("moi ban nhap so thu %d trong mang ", i+1);
		scanf("%d",&mang[i]);
	}
	printf("vay cac so chia het cho 3 trong mang la: ");
	for(i = 0;i < n ; i++ ){
		if(mang[i] % 3 == 0){
			printf("%d,",mang[i]);
		} 
	}
		printf("\nvay cac so chia het cho 5 trong mang la: ");
	for(i = 0;i < n ; i++ ){
	if(mang[i] % 5==0){
			printf("%d,",mang[i]);
		}
	}
}



struct Book{
		int MaSach;
		char tieuDeSach[50];
		int giaSach;
};


typedef struct Book cuonSach;
void bai3(Book cuonSach[]){
	int i;
	int n;
	printf("moi ban nhap so cuon sach: ");
	scanf("%d",&n);
	for(i = 0;i < n ; i++){
		printf("day la cuon sach thu %d\n", i+1);
		printf("moi ban nhap Ma Sach: ");scanf("%d",&cuonSach[i].MaSach);
		fflush(stdin);
		printf("moi ban nhap Tieu De Sach: ");gets(cuonSach[i].tieuDeSach);
		printf("moi ban nhap Gia Sach: ");scanf("%d",&cuonSach[i].giaSach);
	}  
	for(i = 0;i < n ; i++){
		printf("\nday la cuon sach thu %d", i+1);
		printf("\nMa Sach : %d ",cuonSach[i].MaSach);
		printf("\nTieu De Sach: %s",cuonSach[i].tieuDeSach);
		printf("\nGia Sach: %d",cuonSach[i].giaSach);
	}
}

void nhap(Book cuonSach[100]){
	int i,n;
	printf("moi ban nhap so cuon sach: ");
	scanf("%d",&n);
	for(i = 0;i < n ; i++){
		printf("day la cuon sach thu %d\n", i+1);
		printf("moi ban nhap Ma Sach: ");scanf("%d",&cuonSach[i].MaSach);
		fflush(stdin);
		printf("moi ban nhap Tieu De Sach: ");gets(cuonSach[i].tieuDeSach);
		printf("moi ban nhap Gia Sach: ");scanf("%d",&cuonSach[i].giaSach);
	}  
}

void xuat(Book cuonSach[100]){
	int i,n;
		for(i = 0;i < n ; i++){
		printf("\nday la cuon sach thu %d", i+1);
		printf("\nMa Sach : %d ",cuonSach[i].MaSach);
		printf("\nTieu De Sach: %s",cuonSach[i].tieuDeSach);
		printf("\nGia Sach: %d",cuonSach[i].giaSach);
	}
}

void tinhTrungBinh(Book cuonSach[100]){
	float giaTrungBinh = 0;
	float tong =0;
	int i;
	for( i =0 ; i< 3;i++){
		giaTrungBinh = giaTrungBinh + cuonSach[i].giaSach;
	}
	tong = giaTrungBinh/3;
	printf("\nvay gia trung binh cua 3 cuon sach la: %.2f",tong);
}

void bai4(){
	Book cuonSach[100];
	nhap(cuonSach);
	xuat(cuonSach);
	tinhTrungBinh(cuonSach);
}

int main(){
	Book cuonSach[100];
	int soBai;
	printf("moi ban nhap so bai: ");
	scanf("%d",&soBai);
	switch(soBai){
		case 1:
			bai1();
			break;
		case 2:
			bai2();
			break;
		case 3:
			bai3(cuonSach);
		case 4:
			bai4();
		default:
			printf("moi ban nhap lai");
	}
}
