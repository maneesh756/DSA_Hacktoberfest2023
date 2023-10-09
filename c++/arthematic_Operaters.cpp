// it is c++ code of doing the multiple operation in single code using the "inline" functions
// here input is taken from the user for every individual operation
// the code contains 1)addition  2) multiplication 3) modulo 4) decimal to binary 5) binary to decimal 6) 2'scompliment of particular binary number enterd by the user


#include<iostream>
using namespace std;
#include<stdlib.h>
#include<math.h>
inline int addition(int x,int y)        //inline finction for doing the addition of two numbers
{
        return (x+y);
}
inline int multiplication(int x,int y)          //inline function for doin the operation called multiplication of the two numbers
{
        return (x*y);
}
inline int assignment_moduli(int x,int y)       //inline function for doing modulus nothing butto get the remainder of the two numbers when divided
{
        return (x%y);
}
inline int decimal_to_binary(int x)               //inline function to do converting decimal to binary number
{
        int i=1,rem;
        cout<<"enter the decimal number :";
        cin>>x;                                      //taking the input from the user
        int binary=0;
        while(x!=0)                                   // using while loop becuase we can only convert to binary when it is not equal to zero
        {
                rem = x%2;          //getting remainder for our decimal number when divide by two
                x=x/2;
                binary = binary + (rem*i);                       //processs and formulas for converting to binary number
                i=i*10;                          //repalcing the positions of gathered data of remainders
        }
        cout<<"the binary number is :"<<binary<<"\n";                //printing the output of thus function
        return 0;
}
inline int binary_to_decimal(int x)               //inline function to convert binary to decimal
{
        int decimal_number=0;
        int i=1,rem;
        cout<<"enter the binary number:";           //taking the input from the user
        cin>>x;
        while(x!=0)
        {
                rem = x%10;
                decimal_number=decimal_number + (rem*i);                     //it is process and the formulas just opposite to the above function
                i=i*2;                                  //getting every number position in it place and multiplies it position with 2 power
                x= x/10;
        }
        cout<<"the decimal number of the given binary number is :"<<decimal_number;                  //printing ouput of this inline function
        cout<<endl;
        return 0;
}
inline int twos_compliment()                         //inline function of doing the 2's compliment
{
        int size=8;
        char x[size + 1];
                char onecomp[size+1] ;                          //here intialize by using only the char becuase we have only two digits only 1 or 0
                char twocomp[size+1] ;                            //to make it simple we just use the char array
        int carr=1,i,er=0;
        cout<<"enter the binary number **which must be in 8 bit format ***:";           //taking the input from the user and more over our input must be in eight bit
        cin>>x;
        for(i=0;i<size;i++)                                                 //using for loop to traverse all the 8 bits entered by the user
        {
                if(x[i] =='1')
                {
                        onecomp[i]='0';                //thus if loop shows the implementation of the 1's compliment by interchanging the 0 by 1 and 1 by 0 and vice versa
                }
                else if (x[i]=='0')
                {
                        onecomp[i] ='1';
                }
                else
                {
                        cout<<"invalid input ,input the binary in 8 bit format :";            //if the user entred the non 8 bit it comes to this loop
                        er=1;
                        break;
                }
        }
        onecomp[size]='\0';
        for(i=size-1;i>=0;i--)
        {
                if(onecomp[i]=='1' && carr==1)                           //this is the starting of the 2's compliment
                {
                        twocomp[i]='\0';                                      //this says that last digit of the one compliment is 1 and we are adding 1  to the last digit                                                                        // 2's complimnet will be 0 and it caries digit 1 to next last digit
                }
                else if (onecomp[i] =='0' && carr==1)                         // if the last digit of the 1 compliment is 0 and we are adding 1 to get 2's complimnet
                {                                                             //then it  gives 0 to last digit of the 2's compliment
                        twocomp[i]='1';                                        //after that print everything as same in the above 1's compliment
                        carr='0';
                }
                else
                            {
                        twocomp[i]=onecomp[i];
                }
        }
        twocomp[size]='\0';
        if(er==0)

        {
                cout<<"the one's compliment is :"<<onecomp<<"\n";
                cout<<"the two's compliment is :"<<twocomp<<"\n";          //this is to print the 1's compliment and the 2's compliment respectiveley
        }
        return 0;

}

int main()
{
        int x,y;
        cout<<"enter the values of the x,y :";          //main function to get the values for the all the fiunctions
        cin>>x;
        cin>>y;
        cout<<"the addition of the x,y is:"<<addition(x,y)<<"\n";
        cout<<"the multiplication of the tx,y is:"<<multiplication(x,y)<<"\n";            //calling all the functions which we declared above to main functions
        cout<<"the modulo of the x,y is :"<<assignment_moduli(x,y)<<"\n";
        cout<<decimal_to_binary(x)<<"\n";
        cout<<binary_to_decimal(x)<<"\n";
        cout<<twos_compliment()<<"\n";
        return 0;
}
