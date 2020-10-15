#include <stdio.h>
int main(void) {
 int i,j,k;
 int Sum[6][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},};
 int A[6][4] = { //For Test Program !!!
 {1,2,3,4},
 {2,3,4,5},
 {3,4,5,6},
 {4,5,6,7},
 {5,6,7,8},
 {6,7,8,9}
 };
 int B[4][5] = {
 {1,2,3,4,5},
 {2,3,4,5,6},
 {3,4,5,6,7},
 {4,5,6,7,8}
 };
 printf("\n\tProgram for Odd Number !!!\n\n");
 //Show Value Input !!!
 printf("Number A[6][4]\n");
 for(i=0;i<6;i++) {
 for(j=0;j<4;j++) {
 printf("%-3d ",A[i][j]);
 }
 printf("\n");
 }
 printf("\nNumber B[4][5]\n");
 for(i=0;i<4;i++) {
 for(j=0;j<5;j++) {
 printf("%-3d ",B[i][j]);
 }
 printf("\n");
 }
 //Program Calculate Matrix !!!
 for(i=0;i<6;i++) {
 for(j=0;j<5;j++) {
 for(k=0;k<4;k++) {
 Sum[i][j] += (A[i][k] * B[k][j]);
 }
 }
 }
 //Show Output Answer !!!
 printf("\n\n\t##### Answer #####\n\n");
 for(i=0;i<6;i++) {
 for(j=0;j<5;j++) {
 printf("\t%-5d",Sum[i][j]);
 }
 printf("\n");
 }
 return 0;
}