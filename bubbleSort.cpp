#include<iostream>
using namespace std;
int main(){
    int dizi[]={23,1,10,5,2};           
    int i,j,takas;
    // Bubble sort algoritmasý
    for(i=0;i<5-1;i++){
    	for(j=0;j<5-i-1;j++){
    		if(dizi[j]>dizi[j+1]){
    			takas=dizi[j];
    			dizi[j]=dizi[j+1];
    			dizi[j+1]=takas;
			}
		}
	}
	cout<<"Küçükten büyüðe dizi elemanlarý:";
	for(i=0;i<5;i++){
	cout << dizi[i] << " ";	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
