#include <iostream>
#include <ctime>
#include<stdlib.h>
#include <dos.h>

using namespace std;

void time(){
	// current date/time based on current system
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout<<"****\tTime:"<<ltm->tm_hour<<":"<<ltm->tm_min<<":"<<ltm->tm_sec<<"\t\t\t\t\t\tDate: "<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year<< "\t ****\n";
}

void interface(){
	for(int i=0;i<3;i++)
		cout<<"*************************************************************************************"<< endl;

	for (int i = 0; i<20; i++){
		if (i == 2){
	   		time();
		}
	 	if (i == 6)
	 		cout<<"****\t\t\t    WELCOME TO FIA SUPERMARKET\t\t\t\t ****\n";
		else if(i == 8){
			cout<<"****\t\t\t    Press any key to continue!\t\t\t\t ****\n";
		}
		else if(i == 15){
	 	 	cout<<"**** By:\t\t\t\t\t\t\t\t\t ****\n";
		}
		else if(i == 16){
	 	 	cout<<"**** 1)Kelvin Ngumbao (BCM-03-0006/2023)\t\t\t\t\t\t ****\n";

	 	else
	 		cout<<"****\t\t\t\t\t\t\t\t\t\t ****\n";
	}

	for(int i=0; i<1; i++)
		cout<<"*************************************************************************************"<< endl;

}
