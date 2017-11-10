#include<iostream>
using namespace std;
int user_pass[5]={123,231,444,222,765};
int user_code[5]={ 0 , 1 , 2 , 3 , 4};
int Total_Money=1000000;
int cat1=8,cat2=20,cat3=40,cat4=200,cat5=400; 
int total_cat1=200000,total_cat2=200000,total_cat3=200000,total_cat4=200000,total_cat5=200000;




void confirmation (int , int );
void MoneyWithdrawalScreen();
void MoneyWithdrawal(int );
main()
{
	int code,password;
	cout<<"please enter ur code : ";
	cin>>code;
	cout<<"please enter ur password : ";
	cin>>password;
	confirmation (password,code);
	
	
}

void confirmation (int pass, int cod)
{ 
     int counter =0;
	for (int i=0;i<5;i++)
	{
		if (pass == user_pass[i] && cod == user_code[i])
		{
			cout<<" ur the one !!";
			
			MoneyWithdrawalScreen();
		     break;
		
		}
		 
		counter++;
	}
	if (counter==5)
	cout<<"Sorry, u must register !!";
}

void MoneyWithdrawalScreen()
{
 
 int money_val;

     cout<<"\nHow much do you want money to pull :";
     cin>>money_val;

      if (money_val % 5 == 0 && money_val>= 500)
        MoneyWithdrawal(money_val);

      else
        
        	cout<<"error in enter ";
        

}

void MoneyWithdrawal(int x )
{
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	if (Total_Money <= x)
	{
		cout<<" there re no money with this number in ur account";
	
	}
    
   while(1)
   {
   
   	if (x >= 25000)
   	   {
   		x=x-25000;
   		c1++;
	   }
	else if (x >=10000)
   	   {
   		x=x-10000;
   		c2++;
	   }
    else if (x >= 5000)
   	   {
   		x=x-5000;
   		c3++;
	   }
	else if (x >= 1000)
   	   {
   		x=x-1000;
   		c4++;
	   }
    else if (x >= 500)
   	   {
   		x=x-500;
   		c5++;
	   }
	 else {
	 	
	 	cout<<"\n class pull 25000 : "<<c1<< "\t"<<"\n class pull 10000 : "<<c2<<"\t"<<"\n class pull 5000 : "<<c3<< "\t"<<"\n class pull 1000 : "<<c4<< "\t"<<"\n class pull 500 : "<<c5;
	 	
	 	break;
	 }
	   
  }
	   

}

