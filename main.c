#include <stdio.h>
int main(void) {
  int i,j,k;
  int A[5][6],B[6][3];
  int Sum[5][3] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
  printf("\nMetrix\n");
  
  for(i=0;i<5;i++){ // Metrix A
    printf("Data A[%d][0-5]\n",i);
    for(j=0;j<6;j++){
      printf("\t A[%d][%d] : ",i,j);
      scanf("%d",&A[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<6;i++){// Metrix B
    printf("Data B[%d][0-5]\n",i);
    for(j=0;j<3;j++){
      printf("\t B[%d][%d] : ",i,j);
      scanf("%d",&B[i][j]);
    }
   printf("\n"); 
  }
  printf("\nMetrix A[5][6]\n");// Show Metrix A
  for(i=0;i<5;i++){
    for(j=0;j<6;j++){
      printf("%-3d",A[i][j]);
    }
    printf("\n");
  }
  printf("\nMetrix B[6][3]\n");// Show Metrix B
  for(i=0;i<6;i++){
    for(j=0;j<3;j++){
      printf("%-3d",B[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<5;i++){// Metrix A * Metrix B
  	for(j=0;j<3;j++){
  		for(k=0;k<6;k++){
  			Sum[i][j] += (A[i][k]*B[k][j]);
		  }
	  }
  }
  printf("\n Ans \n");// Show Metrix A * Metrix B
  for(i=0;i<5;i++){
  	for(j=0;j<3;j++){
  		printf("\t%-5d",Sum[i][j]);
	  }
	  printf("\n");
  }
  return 0;
}