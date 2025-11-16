#include <stdio.h>
#define WARDS 3
#define BEDS 5
void recordstatus(int beds[WARDS][BEDS]);
void displaystatus(int beds[WARDS][BEDS]);
void countBeds(int beds[WARDS][BEDS], int *occupied, int *available);
int main (){
	int beds[WARDS][BEDS];
	int occupied=0, available=0;
     recordstatus(beds);
	 displaystatus(beds);
	 countBeds(beds, &occupied, &available);
	 printf("\nTotal Beds Occupied %d", occupied);
	 printf("\nTotal Beds Available %d", available);
	  return 0;	
}
void recordstatus(int beds[WARDS][BEDS]){
	    printf("Enter bed status (1=occupied, 0=empty):\n");
	for(int i=0;i<WARDS;i++){
		printf("\nWard :%d", i+1);
		for(int j=0;j<BEDS;j++){
	printf("\nBed number:%d", j+1);
	scanf("%d", &beds[i][j]);
		}				
	}
}
void displaystatus(int beds[WARDS][BEDS]){
	int i, j;

    printf("\n==== Hospital Bed Status ====\n");
    for (i = 0; i < WARDS; i++) {
        if (i == 0) printf("General Ward:\n");
        else if (i == 1) printf("ICU Ward:\n");
        else printf("Private Ward:\n");

        for (j = 0; j < BEDS; j++) {
            printf("  Bed %d: %s\n", j + 1, beds[i][j] ? "Occupied" : "Empty");
        }
        printf("\n");
    }
}
void countBeds(int beds[WARDS][BEDS], int *occupied, int *available){
	for(int i=0;i<WARDS;i++){
		for(int j=0; j<BEDS;j++){
		if(beds[i][j]==0){
			(*available)++;
			
		}else
		(*occupied)++;
		}
	}
}