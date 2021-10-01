#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

char r[2];
char t[21][5500];
int binario[21][20100];



void input(){
	FILE * fl = fopen("Chaves de Criptografia 2021.S2.txt","r");
	for(int i = 0 ; i<20; i++){
		fgets(t[i],5003,fl);
		fgets(r,2,fl);
	}	
		fclose(fl);
}

void mostraBinario(){
	for(int j=0; j<20;j++){
			printf("\nChave %d = \n",j);
		for(int i=0;i<20000;i++){
			printf("%d",binario[j][i]);
		}
	}			
}

void mostraHexadecimal(){
	for(int i=1;i<=5000;i++){
		printf("%c",t[0][i]);
	}
}



void converter(){
	for(int j = 0 ; j<20 ; j++){
		int conv = 0;
		
		for(int i = 1; i <= 5000 ; i++)
		{
		    if(t[j][i] == '0')
		    {
		        binario[j][conv] = 0;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 0;
		    	conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '1')
		    {
		        binario[j][conv] = 0;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '2')
		    {
		        binario[j][conv] = 0;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 0;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '3')
		    {
		       	binario[j][conv] = 0;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '4')
		    {
		       	binario[j][conv] = 0;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 0;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '5')
		    {
		    	binario[j][conv] = 0;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '6')
		    {
		    	binario[j][conv] = 0;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 0;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '7')
		    {
		    	binario[j][conv] = 0;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '8')
		    {
		    	binario[j][conv] = 1;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 0;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == '9')
		    {
		    	binario[j][conv] = 1;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == 'A')
		    {
		        binario[j][conv] = 1;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 0;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == 'B')
		    {
		    	binario[j][conv] = 1;
		        binario[j][conv+1] = 0;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == 'C')
		    {
		    	binario[j][conv] = 1;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 0;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == 'D')
		    {
		    	binario[j][conv] = 1;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 0;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == 'E')
		    {
		    	binario[j][conv] = 1;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 0;
		        conv = conv + 4;
		    }
		    
		    else if(t[j][i] == 'F')
		    {
		    	binario[j][conv] = 1;
		        binario[j][conv+1] = 1;
		        binario[j][conv+2] = 1;
		        binario[j][conv+3] = 1;
		        conv = conv + 4;
		    }
	  	}
	}
}

int monoBit[21];
void monobit(){
  
    printf("\n Teste MONOBIT \n\n");
    for(int j=0; j<20;j++){
        for(int i=0;i<20000;i++){
            if(binario[j][i] == 1){
                monoBit[j] = monoBit[j] + 1;
            }
        }
        printf(" Na chave %d existem %d numeros 1. \n",j+1,monoBit[j]);
    }
}


int pokerTest[21][16];
void pokerTeste(){
  for(int i=0;i<20;i++){
    	for(int j=1; j<=5000; j++){
	    	if(t[i][j] == '0'){
	        	pokerTest[i][0] = pokerTest[i][0]+1;
	      	}  
	      	if(t[i][j] == '1'){
	        	pokerTest[i][1] = pokerTest[i][1]+1;
	      	}  
	      	if(t[i][j] == '2'){
	        	pokerTest[i][2] = pokerTest[i][2]+1;
	      	}  
	      	if(t[i][j] == '3'){
	       		pokerTest[i][3] = pokerTest[i][3]+1;
	      	}  
	      	if(t[i][j] == '4'){
	        	pokerTest[i][4] = pokerTest[i][4]+1;
	      	}  
	      	if(t[i][j] == '5'){
	        	pokerTest[i][5] = pokerTest[i][5]+1;
	      	}  
	      	if(t[i][j] == '6'){
	        	pokerTest[i][6] = pokerTest[i][6]+1;
	      	}  
	      	if(t[i][j] == '7'){
	        	pokerTest[i][7] = pokerTest[i][7]+1;
	      	}  
	      	if(t[i][j] == '8'){
	        	pokerTest[i][8] = pokerTest[i][8]+1;
	      	}  
	      	if(t[i][j] == '9'){
	        	pokerTest[i][9] = pokerTest[i][9]+1;
	      	}  
	      	if(t[i][j] == 'A'){
	        	pokerTest[i][10] = pokerTest[i][10]+1;
	      	}  
	      	if(t[i][j] == 'B'){
	        	pokerTest[i][11] = pokerTest[i][11]+1;
	      	}  
	      	if(t[i][j] == 'C'){
	        	pokerTest[i][12] = pokerTest[i][12]+1;
	      	}  
	      	if(t[i][j] == 'D'){
	        	pokerTest[i][13] = pokerTest[i][13]+1;
	      	}  
	      	if(t[i][j] == 'E'){
	        	pokerTest[i][14] = pokerTest[i][14]+1;
	      	}  
	      	if(t[i][j] == 'F'){
	        	pokerTest[i][15] = pokerTest[i][15]+1;
	      	}  
    	}
	}

    float teste [21];
    for(int i = 0; i < 20; i++){
           float soma = 0;
        for(int j = 0; j <= 15; j++){
           soma = soma + pow(pokerTest[i][j],2);
         }
     teste[i] = 16.0/5000.0 * soma;
     teste[i] = teste[i] - 5000;
    }
    
    printf("\n\n\n pokerTest\n");
  	for(int i = 0 ; i<20; i++){
   		printf("\n Chave %d:\n",i+1);
   		printf("\n Quantidade de 0 = %d.",pokerTest[i][0]);
		printf("\n Quantidade de 1 = %d.",pokerTest[i][1]);
		printf("\n Quantidade de 2 = %d.",pokerTest[i][2]);
		printf("\n Quantidade de 3 = %d.",pokerTest[i][3]);
		printf("\n Quantidade de 4 = %d.",pokerTest[i][4]);
		printf("\n Quantidade de 5 = %d.",pokerTest[i][5]);
		printf("\n Quantidade de 6 = %d.",pokerTest[i][6]);
		printf("\n Quantidade de 7 = %d.",pokerTest[i][7]);
		printf("\n Quantidade de 8 = %d.",pokerTest[i][8]);
		printf("\n Quantidade de 9 = %d.",pokerTest[i][9]);
		printf("\n Quantidade de A = %d.",pokerTest[i][10]);
		printf("\n Quantidade de B = %d.",pokerTest[i][11]);
		printf("\n Quantidade de C = %d.",pokerTest[i][12]);
		printf("\n Quantidade de D = %d.",pokerTest[i][13]);
		printf("\n Quantidade de E = %d.",pokerTest[i][14]);					
		printf("\n Quantidade de F = %d.",pokerTest[i][15]);	   
	    printf("\n A chave %d  resultou em: %f.",i+1,teste[i]);
	    printf("\n");
	}
}

int runTest0[21][2];
int runTest1[21][2];
int runTest2[21][2];
int runTest3[21][2];
int runTest4[21][2];
int runTest5[21][2];
int runTest6[21][2];

void runTest()
{
  
    for (int i = 0; i < 20; i++)
    {

        int conv = 0;
        while(conv < 20000){

            int flag1=0;
            while(binario[i][conv] == 1){
                flag1++;
                conv++;
            }

            int flag0=0;
              while(binario[i][conv] == 0){
                flag0++;
                conv++;
            }

            if (flag1 == 1 )
                runTest1[i][1] = runTest1[i][1] + 1;

            if(flag1 == 2){
                runTest2[i][1] = runTest2[i][1] +1;
            }
            if(flag1 == 3){
                runTest3[i][1] = runTest3[i][1] +1;
            }
            if(flag1 == 4){
                runTest4[i][1] = runTest4[i][1] +1;
            }
            if(flag1 == 5){
                runTest5[i][1] = runTest5[i][1] +1;
            }
            if(flag1 >= 6 ){
                runTest6[i][1] = runTest6[i][1] +1;
            }

            if(flag0 == 1)
                runTest1[i][0] = runTest1[i][0] + 1;

            if(flag0 == 2){
                runTest2[i][0] = runTest2[i][0] +1;
            }
            if(flag0 == 3){
                runTest3[i][0] = runTest3[i][0] +1;
            }
            if(flag0 == 4){
                runTest4[i][0] = runTest4[i][0] +1;
            }
            if(flag0 == 5){
                runTest5[i][0] = runTest5[i][0] +1;
            }
            if(flag0 >= 6 ){
                runTest6[i][0] = runTest6[i][0] +1;
            }

        }
    }

    printf("\n\n\n RunTest");
    for (int i = 0; i < 20; i++)
    {
        printf("\n\n Chave %d:\n",i+1);
        printf("\n Numero de sequencias de tamanho 1:");
        printf("\n 0 = %d.",runTest1[i][0]);
        printf("\n 1 = %d.\n",runTest1[i][1]);
        printf("\n Numero de sequencias de tamanho 2:");
        printf("\n 0 = %d.",runTest2[i][0]);
        printf("\n 1 = %d.\n",runTest2[i][1]);
        printf("\n Numero de sequencias de tamanho 3:");
        printf("\n 0 = %d.",runTest3[i][0]);
        printf("\n 1 = %d.\n",runTest3[i][1]);
        printf("\n Numero de sequencias de tamanho 4:");
        printf("\n 0 = %d.",runTest4[i][0]);
        printf("\n 1 = %d.\n",runTest4[i][1]);
        printf("\n Numero de sequencias de tamanho 5:");
        printf("\n 0 = %d.",runTest5[i][0]);
        printf("\n 1 = %d.\n",runTest5[i][1]);
        printf("\n Numero de sequencias de tamanho 6+:");
        printf("\n 0 = %d.",runTest6[i][0]);
        printf("\n 1 = %d.\n",runTest6[i][1]);
    }
}

int longRunTest[21][2];
void LongRunTest(){
    printf("\n\n\n Long RunTest\n");
    for (int i = 0; i < 20; i++)
    {

        int conv = 0;
        while(conv < 20000){

            int flag1=0;
            while(binario[i][conv] == 1 && conv < 20000){
                flag1++;
                conv++;
            }

            int flag0=0;
              while(binario[i][conv] == 0 && conv < 20000){
                flag0++;
                conv++;
            }

            if(flag0 >= 34){
                printf(" \nValor de flag0 %d", flag0);
                longRunTest[i][0] = longRunTest[i][0] + 1;
            }
            if(flag1 >= 34){
                printf("\nValor de flag1 %d", flag1);
                longRunTest[i][1] = longRunTest[i][1] + 1;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("\n Chave %d:",i+1);
        printf("\n Numero de sequencias de tamanho 34+:");
        printf("\n 0 = %d.",longRunTest[i][0]);
        printf("\n 1 = %d.\n",longRunTest[i][1]);
    }

}



int main(){
	input();
	converter();
  	monobit();
  	pokerTeste();
  	runTest();
  	LongRunTest();
}
