#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
using namespace std;

struct emp{
	string name,id,address;
	int contact,salary;
};
 
emp e[100];
int total=0;
/*********************************************************************/

void addemp(){
	int choice=0;
	cout<<"How many employees data do you want to enter??"<<endl;
	cin>>choice;
	for(int i=total;i<(total+choice);i++){
		cout<<"************************************************"<<endl;
		cout<<"Enter data of employee "<<i+1<<endl;
		cout<<"Employee Name: ";
		cin>>e[i].name;
		cout<<"ID: ";
		cin>>e[i].id;
		cout<<"Address: ";
		cin>>e[i].address;
		cout<<"Contact: ";
		cin>>e[i].contact;
		cout<<"Salary: ";
		cin>>e[i].salary;
		
	}	
	total = total+choice;
}
/*********************************************************************/
void show(){
	if(total!=0){
		for(int i=0;i<total;i++){
			cout<<"Data of employee"<<i+1<<endl;
			cout<<"Employee Name: "<<e[i].name<<endl;
			cout<<"ID: "<<e[i].id<<endl;
			cout<<"Address: "<<e[i].address<<endl;
			cout<<"Salary: "<<e[i].salary<<endl;
			cout<<"Contact: "<<e[i].contact<<endl;
		}
	}
	else{
		cout<<"your record is empty"<<endl;
	}
}
/*********************************************************************/
void search(){
	if(total!=0){
		string id;
		cout<<"Enter id of data which you want to search"<<endl;
		cin>>id;
		for(int i=0;i<total;i++){
			if(id==e[i].id){
			cout<<"Data of employee"<<i+1<<endl;
			cout<<"Employee Name: "<<e[i].name<<endl;
			cout<<"ID: "<<e[i].id<<endl;
			cout<<"Address: "<<e[i].address<<endl;
			cout<<"Salary: "<<e[i].salary<<endl;
			cout<<"Contact: "<<e[i].contact<<endl;
			break;
			}
			if(i==total-1){
				cout<<"No such record found"<<endl;
			}
		}
	}
	else{
		cout<<"your record is empty"<<endl;
	}
}
/*********************************************************************/
void update(){
	if(total!=0){
		string id;
		cout<<"Enter id of data which you want to update"<<endl;
		cin>>id;
			for(int i=0;i<total;i++){
			if(id==e[i].id){
			cout<<"Previous Data"<<endl;
			cout<<"Data of employee"<<i+1<<endl;
			cout<<"Employee Name: "<<e[i].name<<endl;
			cout<<"ID: "<<e[i].id<<endl;
			cout<<"Address: "<<e[i].address<<endl;
			cout<<"Salary: "<<e[i].salary<<endl;
			cout<<"Contact: "<<e[i].contact<<endl;
			cout<<"\nEnter new data"<<endl;
			
		cout<<"Employee Name: ";
		cin>>e[i].name;
		cout<<"ID: "<<endl;
		cin>>e[i].id;
		cout<<"Address: "<<endl;
		cin>>e[i].address;
		cout<<"Contact: "<<endl;
		cin>>e[i].contact;
		cout<<"Salary: "<<endl;
		cin>>e[i].salary;
			break;
			}
			if(i==total-1){
				cout<<"No such record found"<<endl;
			}
		}
	}
	else{
		cout<<"your record is empty"<<endl;
	}
	
}
/*********************************************************************/

void salaryslip(){
	string na,i;
	int salary;
	cout<<"Enter Employee Name :"<<endl;
	cin>>na;
	cout<<"Enter Id :"<<endl;
	cin>>i;
	cout<<"Enter your Basic Salary "<<endl;
	cin>>salary;
	cout<<"\n**************************************************"<<endl;
	cout<<"Hello "<<na<<" this is your salary slip"<<endl;
		cout<<"Employee Id     :"<<"  " <<i<<endl;
		cout<<"Employee Name   :"<<"  " <<na<<endl;
		cout<<"Basic Salary    :"<<"  " <<salary<<endl;
		cout<<"HRA             :  800"<<endl;
		cout<<"DA              :  11250"<<endl;
		cout<<"I-Tax           :  6750"<<endl;
		cout<<"NET Salary      :  "<<salary-11250+800+6750<<endl;	
}

/*********************************************************************/
void deletedata(){
	if(total!=0){
		char user;
		cout<<"press 1 to delete full record"<<endl;
		cout<<"press 2 to delete specific record"<<endl;
		user=getch();
		if(user=='1'){
			total=0;
			cout<<"All record is deleted...!!!"<<endl;
		}
		else if(user=='2'){
		string id;
		cout<<"Enter id of data which you want to delete"<<endl;
		cin>>id;
		for(int i=0;i<total;i++){
			if(id==e[i].id){
				for(int j=0;j<total;j++){
				e[j].name=e[j+1].name;
				e[j].id=e[j+1].id;
				e[j].address=e[j+1].address;
				e[j].contact=e[j+1].contact;
				e[j].salary=e[j+1].salary;
				total--;
				break;
			}
			if(i==total-1){
				cout<<"No such record found"<<endl;
			}
			}
		}
		}
	}
	else{
		cout<<"your record is empty"<<endl;
	}
}
/*********************************************************************/

int main(){

   
 
	//********************First page *********************************// 

	cout<<"\n\n\t********************************************"<<endl;
	cout<<"\t\t PAYROLL MANAGEMENT SYSTEM"<<endl;
	cout<<"\t********************************************"<<endl;

	cout<<"\n\n\t\t***Sign Up***"<<endl;
	string username;
	string password;
	cout<<"\n\t Enter username:- ";
	cin>>username;
	cout<<"\n\t Enter password:- ";
	cin>>password;

	cout<<"\n\t Your id is creating please wait";

	for(int i=0;i<3;i++){
		cout<<".";
		sleep(1);
	}
	cout<<"\n\t Your id created successfully"<<endl;
	sleep(2);
	system("cls");
	
   
             for(int e=1;e<=80;e++){
   	     	cout<<"*";
   		}

//******************** secand page *********************************// 
	start:
	cout<<"\n\n\t********************************************"<<endl;
	cout<<"\t\t PAYROLL MANAGEMENT SYSTEM"<<endl;
	cout<<"\t********************************************"<<endl;
	cout<<"\n\n\t***Login***"<<endl;
	string username1,password1;
	cout<<"\n\t Username:- ";
	cin>>username1;
	cout<<"\n\t Password:- ";
	cin>>password1;
	
	if(username1==username && password1==password){
			cout<<"\n\t login successfully";
			sleep(3);
			system("cls");
			char user;
			while(1){
			cout<<"\n*********************************************"<<endl;
		     	cout<<"\tPress 1. ADD NEW EMPLOYEE"<<endl;
				cout<<"\tPress 2. DISPLAY EMPLOYEE"<<endl;
				cout<<"\tPress 3. SEARCH AN EMPLOYEE"<<endl;
				cout<<"\tPress 4. EDIT EMPLOYEE DETAIL"<<endl;
				cout<<"\tPress 5. SALARY SLIP"<<endl;
				cout<<"\tPress 6. DELETE EMPLOYEE DATA"<<endl;
				cout<<"\tPress 7. LOGOUT"<<endl;
				cout<<"\tPress 8. EXIT"<<endl;
			cout<<"*********************************************"<<endl;
				
				user=getch();
				switch(user){
					case '1':
						addemp();
						break;
					case '2':
						show();
						break;
					case '3':
						search();
						break;
					case '4':
						update();
						break;
					case '5':
						salaryslip();
						break;
					case '6':
						deletedata();
						break;
					case '7':
						goto start;
						break;
					case '8':
						exit(0);
						break;         
					default:
						cout<<"\a Invalid input"<<endl;
						break;
				}
			}
	}
	else if(username1!=username && password1!=password){
		cout<<"\a\n\t your entered username and password are invalid ";
		sleep(3);
		goto start;
	}	
	else if(username1!=username){
		cout<<"\a\n\t your entered username is invalid";
		sleep(3);
		goto start;
	}
	else{
		cout<<"\a\n\t your entered password is incorrect";
		sleep(3);
		goto start;
	}
	 
	
	return 0;
}
