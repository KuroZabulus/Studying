#include<stdio.h>
#include<string.h>

int main(){
	
	//Viet chuong trinh in nhung sinh vien voi ten co chua chuoi "An" or "an"
	char names[10][31]={"Thanh","Thao","An","Hoang","Bao","Tung","Tu","Phong","Giang","Hao"};
	
	int i;
	for(i=0;i<10;i++){
	
		if(strstr(names[i],"An") || strstr(names[i],"an"))
			puts(names[i]);
	}
	

	getchar();
	return 0;
	
}

