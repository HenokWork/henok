#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
struct bank_customer_information
{
	string first_name;
	string last_name;
	int account;
	float deposit;
	bank_customer_information*next;
	bank_customer_information*prev;
};
struct bank_customer_information *start=NULL,*last=NULL;
string password="abc123";//initial password
int count=0;
//functiom which add customer at first
void add_customer_first()
{no_of_custom:
cout<<"\n\n\tHow many customer do you want to add?:";
int no_of_customer;
cin>>no_of_customer;
cout<<endl;
if(cin.fail()){//IF you  enter out of the required data type
        cin.clear();
        cin.ignore();
        system("cls");//clear screen
        cout<<"\n\n\tYou enter out of the required data type";
		goto no_of_custom;}
		system("cls");
for(int i=0;i<no_of_customer;i++)
{
	bank_customer_information *temp=new bank_customer_information;
	cout<<"Enter f_name of customer :";
	cin>>temp->first_name;
	cout<<endl;
	system("cls");
	cout<<"Enter l_name of customer :";
	cin>>temp->last_name;
		cout<<endl;
		system("cls");
		acco:
			int accountNumber;
	cout<<"\n\n\tEnter the account no of customer with 5 digit numbers:";
	cin>>accountNumber;
	cout<<endl;
	int account_number=accountNumber;
	if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
        cout<<"\n\n\tYou enter out of the required data type";
		goto acco;}
        int numDigits = 0;
        //while loop which count weathe account no is 5 digit or not
        while (accountNumber != 0) {
            accountNumber /= 10;
            numDigits++;
        }
        if(numDigits!=5)
        {
        	cout<<"\n\n\tPlease ";
        	goto acco;
		}
		//check weather the account no is exist or not
    bank_customer_information* current = start;
        while (current != NULL) {
            if (current->account == account_number) {
                cout << "\n\n\tAccount number already exists." << endl;
                goto acco;
            }
            current = current->next;
        }
		system("cls");
		temp->account=account_number;
	temp->next=NULL;
	temp->prev=NULL;
	if(start==NULL)
	start=last=temp;
	else
	{
		temp->next=start;
		start->prev=temp;
		start=temp;
	}
}}
//function displaying customer
void display_forward()
{
bank_customer_information*temp;
if(start==NULL)
cout<<"\n\n\tTheir is no customer information";
else
{
	temp=start;
	while(temp!=NULL)
	{
	cout<<"Name:"<<temp->first_name;
	cout<<" "<<temp->last_name<<endl;
	cout<<"Account:"<<temp->account<<endl;
	cout<<"Deposit:"<<temp->deposit<<endl;
	temp=temp->next;
	cout<<"\n\n";
    }
}	
}
void add_end()
{ac:
cout<<"n\n\tHow many customer do you want to add?:";
int no_of_customer;
cin>>no_of_customer;
cout<<endl;
if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
         cout<<"\n\n\tYou enter out of the required data type";
		goto ac;}
		system("cls");
for(int i=0;i<no_of_customer;i++)
{
	bank_customer_information *temp=new bank_customer_information;
	cout<<"Enter f_name of customer "<<i+1<<":";
	cin>>temp->first_name;
	cout<<endl;
	system("cls");
	cout<<"Enter l_name of customer "<<i+1<<":";
	cin>>temp->last_name;
		cout<<endl;
		system("cls");
		a:
			int accountNumber;
	cout<<"Enter the account no of customer "<<i+1<<"  which have 5 digit no:";
	cin>>accountNumber;
	cout<<endl;
	int account_number=accountNumber;
	if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
        cout<<"\n\n\tYou enter out of the required data type";
		goto a;}
		 int numDigits = 0;
        while (accountNumber != 0) {
            accountNumber /= 10;
            numDigits++;
        }
        if(numDigits!=5)
        {
        	cout<<"\n\n\tPlease ";
        	goto a;
		}
		 bank_customer_information* current = start;
        while (current != NULL) {
            if (current->account == account_number) {
                cout << "\n\n\tAccount number already exists." << endl;
                goto a;
            }
            current = current->next;
        }
		system("cls");
temp->account=account_number;
	temp->next=NULL;
	temp->prev=NULL;
	if(start==NULL)
	start=last=temp;
	else
	{
		last->next = temp;
temp->prev = last;
last = temp;
	}
}}
void add_customer_befor_other_custom()
{ int accountNumber;
          bank_customer_information*temp = new bank_customer_information;
             cout<<"Enter f_name:";
	         cin>>temp->first_name;
	        cout<<endl;
	        system("cls");
	       cout<<"Enter l_name:";
	      cin>>temp->last_name;
		cout<<endl;
		system("cls");
		acount:
	cout<<"\n\n\tEnter the account no of the customer which have 5 digit numbers:";
	      cin>>accountNumber;
	        cout<<endl;
	        int account_number=accountNumber;
	          if(cin.fail()){
                
                    cin.clear();
                cin.ignore();
                 system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
                
		     goto acount;}
		     system("cls");
		      int numDigits = 0;
        while (accountNumber != 0) {
            accountNumber /= 10;
            numDigits++;
        }
        if(numDigits!=5)
        {
        	cout<<"\n\n\tPlease ";
        	goto acount;
		}
	bank_customer_information* current = start;
        while (current != NULL) {
            if (current->account == account_number) {
                cout << "\n\n\tAccount number already exists." << endl;
                goto acount;
            }
            current = current->next;
        }
		system("cls");
temp->account=account_number;
    	
    	  string f_name,l_name;
    	  int acount_number;
	        cout<<"Enter the first name,last name and the account number of the customer to add customer befor this customer:\n";
		      cout<<"Enter first name:";
	        cin>>f_name;
	        system("cls");
	     cout<<endl;
	   cout<<"Enter l_name:";
	cin>>l_name;
	system("cls");
		cout<<endl;
		acoun:
	     cout<<"Enter account:";
     	   cin>>acount_number;
     	   if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto acoun;}
		system("cls");
	         cout<<endl;
	         bank_customer_information*temp4=start;
	        while(temp4->first_name!=f_name&& temp4->last_name!=l_name && temp4->account!=acount_number)
	         temp4=temp4->next;
	       temp->next=NULL;
	    temp->prev=NULL;
	if(start==NULL){
		cout<<"first add customer";
	start=last=temp;
	
	}
else
if(start->first_name==f_name && start->last_name==l_name && start->account==acount_number)
{
    temp->next = start;
    start->prev = temp;
    start = temp;
}
else
{
      bank_customer_information *temp2 = start, *temp3;
      while(temp2->first_name!=f_name && start->last_name!=l_name && temp2->account!=acount_number)
{
         temp3 = temp2;
          temp2 = temp2->next;
}
        temp->next = temp3->next;
               temp3->next = temp;
                 temp->prev = temp3;
               temp2->prev = temp;
                }
               }
void delete_end()
{
bank_customer_information *temp;
if(start==NULL)
cout <<"No customer  data\n";
else
{
             temp = last;
                 last = last->prev;
                last->next = NULL;
            delete temp;
}}
// Function to delete a customer by account number
void delete_any(bank_customer_information*&start, int accountNumber) {
    bank_customer_information* current = start;

    // Search for the customer with the specified account number
    while (current!= NULL && current->account!= accountNumber) 
	{
        current = current->next;
    }

    // If the customer is found, delete them from the list
    if (current!= NULL) {
        if (current == start) {
            start = current->next;
        }
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
        if (current->prev != NULL) {
            current->prev->next = current->next;
        }
        delete current;
        cout << "Customer with account number " << accountNumber << " has been deleted." << endl;
    } else {
        // If the customer is not found, display an error message
        cout << "No customer with account number " << accountNumber << " was found." << endl;
    }
}

void delete_at_first()
{
bank_customer_information *temp;
if(start==NULL)
cout <<"No customer is registered \n";
else
{
temp = start;
start = start->next;
start->prev = NULL;
delete temp;
}}
void display_backward()
{
bank_customer_information *temp;
if(last==NULL)
cout <<"\n\n\tNo customer data inside\n";
else
{
temp = last;
while(temp!=NULL)
{
cout<<"Name:"<<temp->first_name;
	cout<<" "<<temp->last_name<<endl;
	cout<<"Account:"<<temp->account<<endl;
	cout<<"Deposit:"<<temp->deposit<<endl;
temp = temp->prev;
cout<<endl;
      }
   }
}

bool deposit() {
	int accountNumber;
	double amount;
	acco_unt:
	cout<<"\n\n\tEnter the account no you want to deposit:";
	cin>>accountNumber;
if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto acco_unt;}
		system("cls");
		amm:
	cout<<"\n\n\tEnter amount you want to deposit:";
	cin>>amount;
	if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto amm;}
		system("cls");
        bank_customer_information* current = start;
        while (current != NULL) {
            if (current->account == accountNumber) {
                current->deposit += amount;
                cout<<"\n\n\tYou deposited :"<<amount<<"\n\tYour current balance is"<<current->deposit;
                return true;
            }
            current = current->next;
        }
        return false;
    }
 bool withdraw() {
    	int accountNumber;
		double amount;
		acou_nt:
		cout<<"\n\n\tEnter the account number you withdraw:";
		cin>>accountNumber;
		if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto acou_nt;}
		system("cls");
		ammou_nt:
				cout<<"\n\n\tEnter the amount you want to withdraw:";
cin>>amount;
if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto ammou_nt;}
		system("cls");
        bank_customer_information* current = start;
        while (current !=NULL) {
            if (current->account == accountNumber) {
                if (current->deposit >= amount) {
                    current->deposit -= amount;
                cout<<"n\n\tYou succesfuly withdraw:"<<amount<<"\n\tYour current balance is:";
                cout<<current->deposit;
                return true;
                } else {
                    cout<<"\n\n\tYour balance is insufficient\n\n";
                    return false;
                }
            }
            current = current->next;
        }
        return false;
    }
    bool balanceEnquiry(int accountNumber,double &balance) {
        bank_customer_information* current = start;
        while (current != NULL) {
            if (current->account == accountNumber) {
                balance = current->deposit;
                cout<<"\n\n\tYOUR CURRENT BALANCE IS:"<<balance;
                return true;
            }
            current = current->next;
        }
        return false;
    }
 //function to transfer money
void transferMoney() {
        int senderAccountNumber;
        double amount;
        aano:
        cout << "Enter your account number: ";
        cin >> senderAccountNumber;
        if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto aano;}
		system("cls");
		am:
        cout << "\n\n\tEnter amount to transfer: ";
        cin >> amount;
        if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto am;}
		system("cls");

        bank_customer_information*findCustomer(int x);
        bank_customer_information* sender = findCustomer(senderAccountNumber);
        if (sender == NULL) {
            cout << "\n\n\tSender account number not found." << endl;
            return;
        }
        int receiverAccountNumber;
        reciver:
        cout << "\n\n\tEnter account number of receiver: ";
        cin >> receiverAccountNumber;
        if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto reciver;}
		system("cls");
        
        bank_customer_information* receiver = findCustomer(receiverAccountNumber);
        if (receiver == NULL) {
            cout << "\n\n\tReceiver account number not found." << endl;
            return;
        }
        if (sender->deposit < amount) {
            cout << "\n\n\tInsufficient balance in sender account." << endl;
            return;
        }
        sender->deposit -= amount;
        receiver->deposit += amount;

        cout << "\n\n\tMoney transferred successfully to the account number ";
		cout<<receiverAccountNumber<<"\n\tyour current balance is ";
        cout<<sender->deposit<<endl;
    }//to check weather the account no exist or not
bank_customer_information* findCustomer(int accountNumber) {
        bank_customer_information* current = start;
        while (current != NULL) {
            if (current->account == accountNumber) {
                return current;
            }
            current = current->next;
        }
        return NULL;
    }
 // Function to check if the password is valid
bool isPasswordValid(const string password) {
    if (password.length()!= 6) {
        return false;
    }
    int numChars = 0;
    int numInts = 0;
    for (int i=0;i<password.length();i++) {
        char c = password[i];
        if (isdigit(c)) {
            numInts++;
        } else if (isalpha(c)) {
            numChars++;
        } else {
            return false;
        }
    }
    return (numChars==3 && numInts==3);
}  
// Function to set or update the customer's password
void setPassword() {
   pass:
        cout << "\n\n\tEnter a new password (6 characters, 3 letters and 3 digits): ";
        getline(cin, password);
        system("cls");
        if (isPasswordValid(password)) 
            cout<<"\n\n\tSuccesfull!!!\n\n\tYour new password is: "<<password;
         else {
            cout << "\n\n\t Password must contain 6 characters, with 3 letters and 3 digits." << endl;
        goto pass;
		}
    
} 
int main()
{  char contin;
   string f_name;
   string l_name;
   int accoun;
    
   do{
   start:
   cout<<"\n\n";
	cout<<" \t!!!!!!!!!!!!!!!!!!!"<<"\n";
	cout<<" \t|M|A|I|N| |M|E|N|U|"<<"\n";
 	cout<<" \t!!!!!!!!!!!!!!!!!!!"<<"\n";
 	
 	    cout<<"\n\n\t0. ADMIN LOGIN";
		cout<<"\n\n\t1. DEPOSIT AMOUNT";
		cout<<"\n\n\t2. WITHDRAW AMOUNT";
		cout<<"\n\n\t3. BALANCE ENQUIRY";
		cout<<"\n\n\t4. TRANSFER MONEY";
		cout<<"\n\n\t5. ABOUT ME";
		cout<<"\n\n\t6. EXIT\n\n";
		char y_or_n;
		int choice;
		cout<<"\n\n\tENTER YOUR OPTION:";
		cin>>choice;
			if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto start;}
		system("CLS");
		switch(choice){

        
case 1:if(deposit())
       cout<<"";
       else
        cout<<"\n\n\t Invalid account number";
        break;
case 2:if(withdraw())
     cout<<"";
       else
         cout<<"\n\n\tInvalid account number";
        break;
case 3:
	
     int accountNumber;
		 double balance;
    	cout<<"\n\n\tBALANCE ENQUIRY";
    	re:
    	cout<<"\n\n\tENTER YOUR ACCOUNT NUMBER:";
    	cin>>accountNumber;
    	if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto re;}
		system("cls");
    	if(balanceEnquiry(accountNumber, balance))
    	   cout<<"\n\n\tYour balance is :"<<balance;
    	else
    	  {
    	  	cout<<"\n\n\tYour account number doesn't exist";
    	  	char a;
    	  	cout<<"\n\n\t1. Goto main menu:";
    	  	cout<<"\n\n\t2. Goto enquiry:";
    	  	cout<<"\n\t       ";
			 	cin>>a;
    	  	system("cls");
    	  	if(a=='1')
    	  	goto start;
    	  	else if(a==2)
    	  	goto re;
    	  	else
    	  	return 0;
		  }
    	break;
    default:cout<<"\n\n\tINVALID OPTION";
	goto start;break;
case 4:transferMoney();
        break;	
case 5:	cout<<"\n\t**************************************";
    cout<<"\n\t*                                    *";
    cout<<"\n\t*   BANK CUSTOMER MANAGMENT SYSTEM   *";
    cout<<"\n\t*                                    *";
    cout<<"\n\t*     BY HENOK WORKU                 *";
    cout<<"\n\t*                                    *";
    cout<<"\n\t*                                    *";
    cout<<"\n\t*                                    *";
    cout<<"\n\t**************************************";
    break;
case 6:  
       return 0;
case 0: 
	int option;
        string pass_word;
        opp:
        cout<<"\n\n\tENTER YOUR PASS WORD";
        cin>>pass_word;
        system("cls");
        if(password==pass_word)
        {ABC:
        cout<<"\n\n\t1. ADD CUSTOMER";
        cout<<"\n\n\t2. DELETE CUSTOMER";
        cout<<"\n\n\t3. DISPLAY CUSTOMER";
        cout<<"\n\n\t4. CHANGE PASSWORD";
        cout<<"\n\n\t5. GOTO MAIN MENU";
        cout<<"\n\n\tEnter your option:";
        cin>>option;
        if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto ABC;}
		system("CLS");
        switch(option)
        {
        	case 1:strt:
			

		cout<<"\n\n\tWhere do you want to add customer";
		cout<<"\n\n\t1.  Add customer at the begining";
		cout<<"\n\n\t2.  Add customer at the end";
		cout<<"\n\n\t3.  Add customer at the middle";
		cout<<"\n\n\t4.  Goto main menu";
		cout<<"\n\n\t5.  Goto admin menu\n\n";
		cout<<"\n\n\tenter your choice:";
		cin>>choice;
		if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto strt;}
		system("CLS");
	  switch(choice){
      case 1:add_customer_first();
              break; 
      case 2:add_end();
              break;
      case 3:	add_customer_befor_other_custom();
              break;
      case 4:goto start;
	          break;
	  case 5: goto ABC;
      default :{
          cout<<"\n\n\tInvalid Option";
          cout<<"\n\n\tPlease enter the correct choice:";
      goto strt;}
}

	         break;
	 case 2:
   	
		starting:	
       cout<<"\n\n\tWHICH CUSTOMER DO YOU WANT TO DELETE";
       cout<<"\n\n\t1. Delete the first customer";
	   cout<<"\n\n\t2. Delete the last customer";
	   cout<<"\n\n\t3. Delete customer any where";
	   cout<<"\n\n\t4. Goto Main Menu";
	   cout<<"\n\n\t5. Goto Admin";
       cout<<"\n\n\tEnter your choice:";
       cin>>choice;
       if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto starting;}
       system("cls");
        switch(choice){
    case 1:delete_at_first();break;
    case 2:delete_end();
                break;
    case 3:
            acc:
            cout<<"Enter the account no you want to delete:";
            cin>>accoun;
            if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto acc;}
            cout<<endl;
            system("cls");
            delete_any(start,accoun);
            break;
    case 4:goto start;
                     break;
    case 5:goto ABC;break;
    default :cout<<"\n\n\tInvalid option";
           cout<<"\n\n\tPlease enter the correct choice:\n\n";
		goto starting;}
		
           break;
        case 3:
		sta_rt:
	
	
	cout<<"\n\n\tWHAT DO YOU WANT";
        cout<<"\n\n\t1. DISPLAY FORWARD";
        cout<<"\n\n\t2. DISPLAY BACKWARD";
        cout<<"\n\n\t3. GOTO MAIN MENU";
        cout<<"\n\n\t4. GOTO ADMIN";
        cout<<"\n\n\tENTER YOUR OPTION:";
        cin>>choice;
        if(cin.fail()){
        cin.clear();
        cin.ignore();
        system("cls");
                cout<<"\n\n\tYou enter out of the required data type";
		goto sta_rt;}
        system("cls");
    switch(choice){

    case 1:display_forward();
            break;
    case 2:display_backward();
            break;
    case 3:goto start;
    case 4:goto ABC;
    default :
              cout<<"\n\n\tINVALID OPTION\n\n";
        goto sta_rt;}

        break;
		case 5:
		
		goto start;	
    case 4:p:
			cout<<"\n\n\tEnter the inial password";
        	string Password;
        	getline(cin, Password);
        	system("cls");
        	if(password==Password)
        	setPassword();
        	else
        	{
        	cout<<"\n\n\tYou enter wrong password";
        	goto p;
		}
		break;
		 
		}
		 break;}
		 else
		 {if(count!=2){
		 	cout<<"\n\n\tWRONG PASSWORD";
		 	count++;
		 	goto opp;}
		 	else
		 	{
		 	cout<<"\n\n\tNOT ALLOWED TRING MORE THAN THREE TIMES\n\n\t\t";
		 	system("pause");
		 	system("cls");
		 goto start;
		 }}
		 }
        	cout<<"\n\n\tCLICK 'y' TO CONTINUE:";
        	cin>>contin;
        system("cls");
}while(contin=='y');
return 0;
}
