#include<stdio.h>
#include<string.h>

int main(){
	
	//Viet chuong trinh in nhung sinh vien voi ten co do dai nho nhat
	char names[10][31]={"Thanh","Thao","An","Hoang","Bao","Tung","Tu","Phong","Giang","Hao"};
	
	int i,j;
	int minwidth=strlen(names[0]);
	for(i=0;i<10;i++){
		if(strlen(names[i])<minwidth)
			minwidth=strlen(names[i]);
	}
	
	for(j=0;j<10;j++){
		if(strlen(names[j])==minwidth)
			puts(names[j]);
	
	}
	
	getchar();
	return 0;
	
}

