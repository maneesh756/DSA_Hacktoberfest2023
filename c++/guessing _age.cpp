//this is the c++ program to get the age of the students using differnt types of the functions
//we use the functions like call by value ,call by refrence ,call by adress
// THIS CODE TAKING THE "3 STUDENTS DATA "

#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
        public:
                int roll_number;
                char name[30];
                int year;
                int input();                   //this is the block of declaring the class of the students and calling the all the reqiured functions
                int put_details();
                int get_age_today1(int year);
                int get_age_today2(int &year);
                int get_age_today3(int *year);
};
int student::input()                     //this is the block taking the input from the user to get the details
{
        cout<<"\n"<<"enter the name of the student :";          //taking name
        cin>>name;
        cout<<"\n"<<"enter the roll number of the student :";       //taking the roll number
        cin>>roll_number;
        cout<<"\n"<<"enter the birth year of the student :";         //taking the year of the birth
        cin>>year;
        return 0;
}
int student::put_details()                      //function to print total output at last
{
        time_t now= time(0);                     //here time_t is the keywords to get the time from the system
        tm *ltm=localtime(&now);
        cout<<"\n"<<"student details is :"<<"\n";
        cout<<"\n"<<"the name of the student is "<<name<<"\n";
        cout<<"\n"<<"the roll number is :"<<roll_number<<"\n";
        cout<<"\n"<<"the age of the student is :"<<1900+ltm->tm_year-year<<"\n";
        return 0;
}
int student::get_age_today1(int x)                  //this is the block of function call  by value
{
        time_t now=time(0);
        tm *ltm=localtime(&now);
        if(x>2021)
        {
                cout<<"\n"<<"the input is invalid:";
        }
        else
        {
                cout<<"\n"<<"the age of the student is by using the method call by value is:"<<1900+ltm->tm_year-x<<"\n";
        }
        return 0;
}
int student::get_age_today2(int &x)                 //this is the block of the function by call by refrence
{
        time_t now =time(0);
        tm *ltm= localtime(&now);
        if(x>2021)
        {
                cout<<"\n"<<"theinput is invalid:";
        }
        else
        {
                cout<<"\n"<<"the agre of the student by using method the call by refernce is :"<<1900+ltm->tm_year-x<<"\n";
        }
        return 0;
}
int student::get_age_today3(int *x)                   //this is the block of function called call by adress
{
        time_t now=time(0);
        tm *ltm=localtime(&now);
        if(*x>2021)
        {
                cout<<"\n"<<"the input is invalid :";
        }
        else
        {
                cout<<"\n"<<"the age of the student by using method the call by adress is :"<<1900+ltm->tm_year-*x<<"\n";
        }
        return 0;
}
int main()                    //this is main block calling all functions as reuired
{
       time_t now=time(0);
        tm *ltm=localtime(&now);
    cout << "today the date is " << 1900 + ltm->tm_year << "/" << 1 +ltm->tm_mon << "/" << ltm->tm_mday<<"\n";;
    
        int year;              //since we have public value for year to use for functions like call by value and so on....
        student s1;                                                                                                                                                                                     //we are agianing defining the "year" to get proper output
        s1.input();                  //declaring the "student object 1" and it is followed by functions
        cout<<"\n"<<"enter the the student birth year for the ti use in functions types :";
        cin>>year;
        s1.get_age_today1(year);               //this are the above functions called here
        s1.get_age_today2(year);
        s1.get_age_today3(&year);
        s1.put_details();                                //DETAILS OF THE STUDENT 1
        student s2;
        s2.input();
        cout<<"\n"<<"enter the birth year for the caluclations of the age for functions types :";
        cin>>year;
        s2.get_age_today1(year);
        s2.get_age_today2(year);                      //DETAILS OF  STUDENT 2
        s2.get_age_today3(&year);
        s2.put_details();
        student s3;
        s3.input();
        cout<<"\n"<<"enter the birth year again to caluclate the functions method :";
        cin>>year;
        s3.get_age_today1(year);
        s3.get_age_today2(year);                                  //DETAILS F TH  STUDENT 3
        s3.get_age_today3(&year);
        s3.put_details();
         cout<<"the total entered details is of 3 students is :"<<"\n";          //LASTLY SHOwING ALL THE DATA AGAIN TO USER
        s1.put_details();
        s2.put_details();
        s3.put_details();
        return 0;

}
