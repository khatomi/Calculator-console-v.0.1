#include<iostream>

using namespace std;
//name class
class Cal{
	//this scop is not dicelert
	private:
		int n1;
		int n2;
		//this scop is dicleret
		public:
			//defualt construct
			Cal(){
			cout<<"enter the intger number 1:"<<endl;
			cin>>n1;	// number1
			cout<<"enter the intger number 2:"<<endl;
			cin>>n2;	//number2
			}
			//parameteraized constructor
		 Cal(int number1,int number2)
			{
			n1=number1;
			n2=number2;
			}
			//function sum
			int sum (){
				return n1+n2;	// number1 + number2
			}
			//function min
			int min(){
				return n1-n2;
			}
};

int main()
{

	cout<<"this is the calucletor : \n-----------------------\n"<<endl;
	Cal ob1;
	
		string statment;
	cout<<"did you need sum ? \t "<<"(yes,no)"<<endl;
	cin>>statment;

	if(statment=="yes"){
	cout<<"ok"<<endl;
	cout<<"the sum number is : "<<ob1.sum()<<endl;

}
 if(statment=="no"){
cout<<"okay... did you need minuse ? \t "<<"(yes,no)"<<endl;
}
cin>>statment;

 if(statment=="yes")
	{
	cout<<"ok"<<endl;
cout<<"the minuse nubmer is :  "<<ob1.min()<<endl;
}

if(statment=="no"){
	cout<<"okay... did you need moultplay ? \t "<<"(yes,no)"<<endl;
}
cin>>statment;
	
	

	return 0;
}