#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int ch;
class mainframe
{
	public:
	void display(){
	cout<<"\t\t\t\t";
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t";
	cout<<"\t\t\t\t\t       WELCOME TO GAME OF HANGMAN"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t MADE BY ABHIMANYU SINGH"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t   REG. NO: 11710438"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t        CSE202";
//   cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t";
	getch();
	}
	
	void menudisplay(){
		mainframe ob1;
		system("cls");  // Used for clearing screen.
	    cout<<"\t\t\t\t";	
		cout<<"\n\n\n\n\n\n\n";
	    cout<<"\t\t\t\t\t\t\t\t\t\t";
		cout<<"1: BollyWood"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t";
		cout<<"2: Hollywood"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t";
		cout<<"3: Exit"<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\tEnter your choice : ";
		cin>>ch;		
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t";
		switch_menu();
	}
	void switch_menu(){
	switch(ch){
		case 1:
			bollywood();
			menudisplay();
			break;
		case 2:
			hollywood();
			menudisplay();
			break;
		case 3:
			exit(0);
		default:
			cout<<"Please enter correct choice.";
			menudisplay();
	} 
}
	void bollywood(){
		fstream fin;
		string m;
		fin.open("bollywood.txt");
		B:
		system("cls");  // Used for clearing screen.
	    cout<<"\t\t\t\t";	
		cout<<"\n\n\n\n\n\n\n";
	    cout<<"\t\t\t\t\t\t\t\t\t\t";
		cout<<"Guess the movie :  ";
		getline(fin,m);
//		int size = sizeof(m);
//		fin.seekg(size,ios::cur);
		
		for(int i=0;m[i]!='\0';i++){
			if(m[i] == 'a' || m[i] == 'e' || m[i] == 'i'|| m[i] == 'o'|| m[i] == 'u')
			cout<<m[i];
			else if (m[i] == ' ')
			cout<<"  ";
			else{
				cout<<"_"<<" ";
			}
		}
		
		int chance =1;
		
		A:
		cout<<"\n\t\t\t\t\t\t\t\t\t\t";
		string m1;
		cout<<"Enter the guessed movie : ";
		fflush(stdin);
		cin>>m1;
		
		transform(m.begin(), m.end(), m.begin(), ::tolower);
		transform(m1.begin(), m1.end(), m1.begin(), ::tolower);
		
		if(m == m1){
			cout<<"\t\t\t\t\t\t\t\t\t\t";
			cout<<"Your Answer is correct";
			getch();
		}
		else{
			cout<<"\n\t\t\t\t\t\t\t\t\t\t";
			cout<<"Your Answer is wrong.";
			if(chance == 3){
				cout<<"\n\t\t\t\t\t\t\t\t\t\tAll three chances done.";
				cout<<"\n\t\t\t\t\t\t\t\t\t\tCorrect answer is : "<<m;
				getch();
				menudisplay();
			}
			else{
				chance++;
				goto A;
			}
		}
		cout<<"\n\t\t\t\t\t\t\t\t\t\tDo you want to play again(Y or N).?  ";
		char cc;
		cin>>cc;
		if(cc == 'y' || cc == 'Y'){
			getline(fin,m);
			getline(fin,m);
//			fin.seekg(6,ios::beg);
//			m = '\0';
			goto B;
		}
	}
	
	void hollywood(){
		string m;
		fstream fin;
		fin.open("hollywood.txt");
		
		B:
		system("cls");  // Used for clearing screen.
	    cout<<"\t\t\t\t";	
		cout<<"\n\n\n\n\n\n\n";
	    cout<<"\t\t\t\t\t\t\t\t\t\t";
		cout<<"Guess the movie :  ";
		getline(fin,m);
		int size = m.size();
//		cout<<"size : "<<size<<endl;
//		int position= fin.tellg();
//		fin.seekg(,ios::cur);
		for(int i=0;m[i]!='\0';i++){
			if(m[i] == 'a' || m[i] == 'e' || m[i] == 'i'|| m[i] == 'o'|| m[i] == 'u'||m[i] == 'A' || m[i] == 'E' || m[i] == 'I'|| m[i] == 'O'|| m[i] == 'U')
			cout<<m[i];
			else if (m[i] == ' ')
			cout<<"  ";
			else{
				cout<<"_"<<" ";
			}
		}
		int chance =1;
		A:
		cout<<"\n\t\t\t\t\t\t\t\t\t\t";
		string m1;
		cout<<"Enter the guessed movie : ";
		fflush(stdin);
		cin>>m1;
		transform(m.begin(), m.end(), m.begin(), ::tolower);
		transform(m1.begin(), m1.end(), m1.begin(), ::tolower);
		if(m == m1){
			cout<<"\t\t\t\t\t\t\t\t\t\t";
			cout<<"Your Answer is correct";
			getch();
		}
		
		else{
			cout<<"\t\t\t\t\t\t\t\t\t\t";
			cout<<"Your Answer is wrong.";
			if(chance == 3){
				cout<<"\n\t\t\t\t\t\t\t\t\t\tAll three chances done.";
				cout<<"\n\t\t\t\t\t\t\t\t\t\tCorrect answer is : "<<m;
				getch();
				menudisplay();
			}
			else{
				chance++;
				goto A;
			}
		}
		cout<<"\n\t\t\t\t\t\t\t\t\t\tDo you want to play again(Y or N).?  ";
		
		char cc;
		cin>>cc;
		if(cc == 'y' || cc == 'Y'){
//			fin.seekg(m.size(),ios::cur);
			getline(fin,m);
			getline(fin,m);
			goto B;
		}
	}
};


int main(){
	mainframe m;
	m.display();
	m.menudisplay();
	return 0;
}
