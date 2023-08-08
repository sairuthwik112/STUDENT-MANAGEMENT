#include<bits/stdc++.h>
using namespace std;

string name[20];
string depart_name[20];
string room_no[20];
string roll_no[20];
string phone_no[20];

int total=0;

void add_record()
{
	int choice;
    cout<<"*****************************"<<endl;
	cout<<"How many Students Data do you want to enter: ";
    cin>>choice;
    
    if(total==0)
	{
	  total=total+choice;
        for(int i = 0; i<choice; i++)
    	{
	    	cout<<"*****************************"<<endl;
        	cout<<"Enter Data of student: "<<i+1<<endl<<endl;
        	cout<<"Enter Name: ";
		    cin>>name[i];
	    	cout<<"Enter Department Name: ";
	    	cin>>depart_name[i]; 
	    	cout<<"Enter Room no: ";
	    	cin>>room_no[i];
	    	cout<<"Enter Roll no: ";
	    	cin>>roll_no[i];
	    	cout<<"Enter Contact no: ";
	    	cin>>phone_no[i];
	   
    	}
    }

    else{
    	for(int i=total; i<choice+total ;i++)
	    {
	    	cout<<"*****************************"<<endl;
        	cout<<"\nEnter Data of student : "<<i+1<<endl<<endl;
        	cout<<"Enter Name: " ;
	    	cin>>name[i];
			cout<<"Enter Department Name: ";
			cin>>depart_name[i];
			cout<<"Enter Room no:  ";
			cin>>room_no[i];
			cout<<"Enter Roll no:  ";
		    cin>>roll_no[i];
	    	cout<<"Enter Contact no:  ";
	    	cin>>phone_no[i];	
        }
     	total=total+choice;
    }
}

void show_record()
{
    if (total == 0) {
        cout << "*****************************" << endl;
        cout << "NO RECORD FOUND" << endl;
        cout << "*****************************" << endl;
        return;
    }
    else {
        cout << "*****************************" << endl;
        cout << "ALL STUDENTS DATA" << endl;
        cout << "*****************************" << endl;
    }

    for (int i = 0; i < total; i++) {
        cout << "*****************************" << endl;
        cout << "Data of the student: " << i + 1 << endl << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Department name: " << depart_name[i] << endl;
        cout << "Room No: " << room_no[i] << endl;
        cout << "Roll No: " << roll_no[i] << endl;
        cout << "Contact No: " << phone_no[i] << endl;
    }
}


void search_record()
{
    string rollno;
    cout << "*****************************" << endl;
    cout << "Enter the Roll no of the Student which you want to search: ";
    cin >> rollno;
    bool found = false;
    for (int i = 0; i < total; i++)
    {
        if (rollno == roll_no[i])
        {
            found = true;
            cout << "*****************************" << endl;
            cout << "Data of the student: " << i + 1 << endl << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Department name: " << depart_name[i] << endl;
            cout << "Room Number: " << room_no[i] << endl;
            cout << "Roll Number: " << roll_no[i] << endl;
            cout << "Contact Number: " << phone_no[i] << endl;
            cout << "*****************************" << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "*****************************" << endl;
        cout << "The specified Roll no was not found. Please try again with a correct Roll no." << endl;
        cout << "*****************************" << endl;
    }
}

void  update_record()
{    
     string rollno;
     cout<<"*****************************"<<endl;
    cout<<"Enter the Roll no of the Student which you want to search: "  ;
    cin>>rollno;
    for(int i=0; i<total; i++)
    {
        if(rollno==roll_no[i])
    	{      
    	cout<<"*****************************"<<endl;
		cout<<"Previous data"<<endl<<endl;
		cout<<"Data of the student: "<<i+1<<endl<<endl;
	    cout<<"Name: "<<name[i]<<endl;
	    cout<<"Department name: "<<depart_name[i]<<endl;
	    cout<<"Room Number: "<<room_no[i]<<endl;
	    cout<<"Roll Number: "<<roll_no[i]<<endl;
	    cout<<"contact Number: "<<phone_no[i]<<endl;
	    cout<<"*****************************"<<endl;
	    
	    cout<<"Enter the new Data"<<endl;
	    
	    cout<<"*****************************"<<endl;
	    cout<<"Enter name: ";
	    cin>>name[i];
	    cout<<"Enter Depatment: ";
	    cin>>depart_name[i];
	    cout<<"Enter Room no: ";
	    cin>>room_no[i];
	    cout<<"Enter Rollno: ";
	    cin>>roll_no[i];
	    cout<<"Enter contact Number: ";
	    cin>>phone_no[i];
	    cout<<"*****************************"<<endl;
        }
	}


}
void delete_record()
{
    int a;
    cout << "*****************************" << endl;
    cout << "Press 1 to Delete Full Record" << endl;
    cout << "Press 2 to Delete Specific Record" << endl;
    cout << "*****************************" << endl;

    cin >> a;
    if (a == 1) {
        total = 0;
        cout << "*****************************" << endl;
        cout << "All Records are Deleted" << endl;
        cout << "*****************************" << endl;
    }
    else if (a == 2) {
        string rollno;
        bool found = false;
        cout << "*****************************" << endl;
        cout << "Enter the Roll No which you want to Delete: ";
        cin >> rollno;
        for (int i = 0; i < total; i++) {
            if (rollno == roll_no[i]) {
                found = true;
                for (int j = i; j < total - 1; j++) {
                    name[j] = name[j + 1];
                    depart_name[j] = depart_name[j + 1];
                    room_no[j] = room_no[j + 1];
                    roll_no[j] = roll_no[j + 1];
                    phone_no[j] = phone_no[j + 1];
                }
                total--;
                cout << "*****************************" << endl;
                cout << "Your required Record is Deleted.." << endl;
                cout << "*****************************" << endl;
                break;
            }
        }
        if (!found) {
            cout << "*****************************" << endl;
            cout << "Record not found" << endl;
            cout << "*****************************" << endl;
        }
    }
}

    

int main()
{  
      int value;
      while (true)
      {
       cout<<"*****************************"<<endl;
       cout<<"Press 1 to Enter -> Data"<<endl;
       cout<<"Press 2 to Show -> Data"<<endl;
       cout<<"Press 3 to Search -> Data"<<endl;
       cout<<"Press 4 to Update -> Data"<<endl;  
       cout<<"Press 5 to Delete -> Data"<<endl;
       cout<<"Press 6 to Exit"<<endl;
       cout<<"*****************************"<<endl;
       cin>>value;
       switch (value)
       {
       case  1:
            add_record();
            break;
        case 2:
            show_record();
            break;
        case 3:
            search_record();
            break;
        case 4:
            update_record();
            break;
        case 5:
            delete_record();
            break;
        case 6:
            exit(0);
            break;
                
       default:
       	cout<<"*****************************"<<endl;
            cout<<"Invalid Input"<<endl;
            cout<<"*****************************"<<endl;
        break;
       }    
    }
}