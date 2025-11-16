#include <stdio.h>
void printData(void *ptr, char c);
int main(){
	int productId=120;
	float price=29.99;
	char code='A';
	
	printf("Product ID: ");
    printData(&productId, 'i');

    printf("Price: ");
    printData(&price, 'f');

    printf("Category Code: ");
    printData(&code, 'c');
return 0;
}
void printData(void *ptr, char c){
	if(c=='i')
		printf("%d", *(int*)ptr);
	if(c=='f')
		printf("%.2f", *(float*)ptr);	
    if(c=='c'){
    	printf("%c", *(char*)ptr);
	}
}