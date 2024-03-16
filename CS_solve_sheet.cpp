// The solve of my python sheet :)

//==============================================

// #include <iostream>
// #include <cstring>
// #include <cmath>
// #include <array>
// using namespace std;

// int main()
// {
//     return 0;
// }

//==============================================

// // program 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1, num2;
//     cout << "===================================================";
//     cout << "enter the number u want to know typr of its sum:";
//     cin >> num1 >> num2;
//     cout<<"=====================================================";
//     if ((num2 + num1) % 2 == 0)
//         cout<<"the sum is even";
//     else
//         cout<<"the sum is odd";
//     return 0;
// }

//==============================================

// // program 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num,num1,sum;
//     cout << "enter the number of loops:";
//     cin >> num ;
//     for (int i = 0; i < num ;i++)
//     {
//         cin >>num1;
//         sum += num1;
//     }
//     cout << "so the sum of the numbers = "<< sum; 
//     return 0;
// }

//==============================================

// // program 3

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int low,high,sum;
//     cin >> low >> high;
//     while (low <= high)
//     {
//         sum = low * low ;
//         cout << low << " ^ " << 2 << " = " << sum << endl;
//         low ++;
//     }

//     return 0;
// }

//==============================================

// // program 4

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, digit, hundred, tens;
//     cin >> num;
//     digit = num % 10;
//     tens = (num % 100) / 10;
//     hundred = num / 100;
//     cout<< hundred + tens + digit;
//     return 0;
// }

//==============================================

// // program 5

// #include <iostream>
// using namespace std;

// int main()
// {
//     string word;
//     char cha;
//     cin >> word >> cha;
//     for (int i = 0 ; i <= 500 ; i++)
//     {   if (word[i] == cha)
//         {
//             cout << i ;
//             break;
//         }
//     }
//     return 0;
// }

//==============================================

/*
// program 6 

#include <iostream>
using namespace std;

int main()
{
    string word;
    char cha,new_cha;
    cin>>cha>>new_cha;
    getline(cin,word);

    cout<<"new word:";
    int len = word.length();
    for (int i = 0; i < len ; i++)
    {
        if (word[i] == cha )
            cout<<new_cha;
        else
            cout<<word[i];
    }
    
    return 0;
}
*/

//==============================================

// // program 7

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, sum = 1;
//     cin >> num;
//     for (int i = 1 ; i <= num ; i++ )
//         sum *= i;
//     cout << sum ;
//     return 0;
// }

//==============================================

// program 8
/*
#include <iostream>
using namespace std;

int main()
{
    int first=0,second=1,num,sum=1;
    cin>>num;
    cout<<first<<','<<second<<',';
    for (int i = 3 ; i < num ;i++)
    {
        first = second;
        second = sum;
        cout<<sum<<',';
        sum = first + second;
    }
    cout<<sum;
    return 0;
}
*/

//==============================================

// program 9
/*
#include <iostream>
using namespace std;

int main()
{
    int base , power , num;
    cin>>base>>power;
    num = base;
    for (int i = 1; i < power; i++)
        base *= num;
    cout<<base;
    
    return 0;
}
*/

//==============================================

//program 10
/*
#include <iostream>
using namespace std;

int main()
{
    int num1 , num2 ;
    
    while (true)
    {
        cin >> num1 >> num2 ;
        if (num1 > num2)
            cout<<num2<<' '<<num1<<endl;
        else if (num1 == 0 && num2 == 0)
            break;
        else
            cout<<num1<<' '<<num2<<endl;
    }

    return 0;
}
*/

//==============================================

// program 11
/*
#include <iostream>
using namespace std;

int main()
{
    int num, divided;
    cin >> num >> divided;
    cout << num % divided;
    return 0;
}
*/

//==============================================

// program 12
/*
#include <iostream>
using namespace std;

int main()
{
    int time , hour , minute , second;
    cin >> time;
    second = time % 60;
    minute = (time % 3600 -second)/60;
    hour = time / 3600;
    cout<<hour<<':'<<minute<<':'<<second; 
    return 0;
}
*/

//==============================================

//problem 13
/*
#include <iostream>
#include <string>
#include <array>
using namespace std;

string check(string number,char base[])
{
    while (true)
    {
        int check = 0;
        for (int i = 0;i < number.length();i++)
        {
            bool validity = false;
            for (int j = 0;j < sizeof(base)/sizeof(base[0]);j++)
            {
                if( number[i] == base[j] )
                    validity = true;
            }
            if (!validity)
            {
                cout<<"please enter a vid number:";
                cin>>number;
                break;
            }
            check ++;
        }
        if (check == number.length())
        {
            cout << "your number is correct";
            return number;
        }
    }
}

int main()
{
    // defining all bases 
    string choice,number;
    char binary[2] = {'1','0'} , decimal[10] = {'0','1','2','3','4','5','6','7','8','9'};
    char octal[8] = {'0','1','2','3','4','5','6','7'}, hexa[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    cout<<"enter the number you want to check :"<<endl;
    cout<<"A) binary\nB)decimal"<<endl;
    cout<<"C)octal\nD)hexadecimal"<<endl;

    cin>>number>>choice;
    if (choice =="A")
        number = check(number,binary);
    else if (choice == "B")
        number = check(number,decimal);
    else if (choice == "C")
        number = check(number,octal);
    else
        number = check(number,hexa);
    return 0;
}
*/

//==============================================

// program 14
/*
#include <iostream>
using namespace std;

int main()
{
    string number ;
    cin >> number ;
    cout << "The ones omplement of the binary number: " ;
    int counter = number.length();
    for (int i = 0 ; i < counter;i++)
    {
        if (number[i] == '0')
            cout<<"1";
        else
            cout<<"0";
    }
    return 0;
}
*/

//==============================================

// program 15
/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string number , two = "";
    cin >> number;
    int counter = number.length() - 1;
    cout<<"the twos complement : ";
    for ( ; counter >= 0 ; counter--)
    {
        two = number[counter]+ two;
        if (number[counter] == '1')
            break;
    }
    counter -- ;
    for ( ; counter >= 0 ; counter--)
    {
        if (number[counter] == '0')
            two = "1" + two;
        else
            two = "0"+ two;
    }
    cout<<two;

    return 0;
}
*/

//==============================================

//program 16
/*
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string number1 , number2 , sum = "",zero = "";
    cin >> number1 >> number2;

    //make check of length
    if (number1.length() > number2.length())
    {
        for(int i = 0; i < number1.length() - number2.length();i++)
            zero += '0';
        number2 = zero + number2;
    }
    else if (number1.length() < number2.length())
    {
        for(int i = 0; i < number2.length() - number1.length();i++)
            zero += '0';
        number1 = zero + number1; 
    }

    // the addition formula
    int carry = 0;
    for (int i =  number1.length()-1;i >= 0 ;i--)
    {
        int summtion = (number2[i] - '0')+(number1[i]-'0')+carry;
        if (summtion == 1||summtion == 0)
            sum = to_string(summtion) + sum;
        else if(summtion == 2)
        {
            sum = '0' +sum; 
            carry = 1;
        }
        else
        {
            sum = '1' + sum;
            carry = 1;
        }
    }
    if (carry == 1 )
        sum = to_string(carry) + sum;
    cout<<"the sum of the two binary number: "<<sum;

    return 0;
}
*/

//==============================================

// program 17
/*
#include <iostream>
#include <cstring>
#include <cmath>
#include <array>
using namespace std;

int main()
{
    string number1 , number2 , diff = "",zero = "",new_num = "";
    cin >> number1 >> number2;

    //make check of length
    if (number1.length() > number2.length())
    {
        for(int i = 0; i < number1.length() - number2.length();i++)
            zero += '0';
        number2 = zero + number2;
    }
    else if (number1.length() < number2.length())
    {
        for(int i = 0; i < number2.length() - number1.length();i++)
            zero += '0';
        number1 = zero + number1; 
    }

    // change second number to twos complement
    int null;
    for (int i = number2.length()-1 ; i >= 0 ; i--)
    {
        if (number2[i] == '1')
        {
            null = i;
            new_num = number2[i] + new_num ;
            break;
        }
        new_num = number2[i] + new_num ;
    }
    for (int i = null - 1;i >= 0; i--)
    {
        if (number2[i]== '1')
            new_num = "0" + new_num;
        else
            new_num = "1" + new_num;
    }
    

    //addition(sunbtarction)
    int carry = 0;
    for (int i =  number1.length()-1;i >= 0 ;i--)
    {
        int summtion = (new_num[i] - '0')+(number1[i]-'0')+carry;
        if (summtion == 1||summtion == 0)
            diff = to_string(summtion) + diff;
        else if(summtion == 2)
        {
            diff = '0' + diff; 
            carry = 1;
        }
        else
        {
            diff = '1' + diff;
            carry = 1;
        }
    }

    cout<<"the substraction of this numbers = "<<diff;

    return 0;
}
*/
//==============================================

// program 18
/*
#include <iostream>
#include <cstring>
#include <cmath>
#include <array>
using namespace std;

int bin_dec(string number)
{
    int j = 0,sum = 0;
    for (int i = number.length() - 1 ; i >= 0 ; i--)
    {
        sum += (number [i]-'0')*pow(2,j);
        j++;
    }
    return sum;
}

int oct_dec(string number)
{
    int j = 0,sum = 0;
    for (int i = number.length() - 1 ; i >= 0 ; i--)
    {
        sum += (number [i]-'0')*pow(8,j);
        j++;
    }
    return sum;
}

int hexa_dec(string number)
{
    int j = 0,sum = 0;
    for (int i = number.length() - 1 ; i >= 0 ; i--)
    {
        if((number[i]-'0') <= 9)
            sum += (number[i]-'0')*pow(16,j);
        else if (number[i] == 'A')
            sum += 10*pow(16,j);
        else if (number[i] == 'B')
            sum += 11*pow(16,j);
        else if (number[i] == 'C')
            sum += 12*pow(16,j);
        else if (number[i] == 'D')
            sum += 13*pow(16,j);
        else if (number[i] == 'E')
            sum += 14*pow(16,j);
        else if (number[i] == 'F')
            sum += 15*pow(16,j);
        j++;
    }
    return sum;   
}

string dec_bin(string number)
{
    string result = "";
    for(int i = stoi(number) ; i > 0; i /= 2)
        result = to_string(i%2) + result;
    return result;

}

string dec_oct(string number)
{
    string result = "";
    for(int i = stoi(number) ; i > 0; i /= 8)
        result = to_string(i%8) + result;
    return result;
}

string dec_hex(string number)
{
    int num = 0;
    string result = "";
    for (int i = stoi(number);i > 0 ; i /= 16)
    {
        num = i%16;
        if (num <= 9)
            result = to_string(num) + result;
        else if ( num == 10)
            result = "A" + result;
        else if ( num == 11)
            result = "B" + result;
        else if ( num == 12)
            result = "C" + result;
        else if ( num == 13)
            result = "D" + result;
        else if ( num == 14)
            result = "E" + result;
        else if ( num == 15)
            result = "F" + result;
    }
    return result;
}

int main()
{
    string number , choice;
    cout << "choose the base of number:\nA)binary\nB)decimal\nC)octal\nD)hexadecimal\n";
    cin>>choice;
    cout << "enter the number:";
    cin>>number;
    if (choice == "A")
    {
        cout<<"the decimal:"<<bin_dec(number)<<endl;
        cout<<"the octal:"<<dec_oct(to_string(bin_dec(number)))<<endl;
        cout<<"the hexadecimal:"<<dec_hex(to_string(bin_dec(number)))<<endl;
    }
    else if(choice == "B")
    {
        cout<<"the binary:"<<dec_bin(number)<<endl;
        cout<<"the octal:"<<dec_oct(number)<<endl;
        cout<<"the hexadecimal:"<<dec_hex(number)<<endl;
    }
    else if(choice == "C")
    {
        cout<<"the binary:"<<dec_bin(to_string(oct_dec(number)))<<endl;
        cout<<"the decimal:"<<oct_dec(number)<<endl;
        cout<<"the hexadecimal:"<<dec_hex(to_string(oct_dec(number)))<<endl;
    }
    else if(choice == "D")
    {
        cout<<"the binary:"<<dec_bin(to_string(hexa_dec(number)))<<endl;
        cout<<"the decimal:"<<hexa_dec(number)<<endl;
        cout<<"the octal:"<<dec_oct(to_string(hexa_dec(number)))<<endl;
    }

    return 0;
}
*/
//==============================================

// program 19
/*
#include <iostream>
using namespace std;

int main()
{
    int num, divided;
    cin >> num >> divided;
    cout << num / divided;
    return 0;
}
*/

//==============================================

// program 20
/*
#include <iostream>
using namespace std;

int main()
{
    int low , high ;
    string type;
    cin>>low>>high>>type;
    if (type == "even")
    {
        for(;low < high; low++)
        {
            if (low % 2 == 0)
                cout<<low<<endl;
        }
    }else{
        for (; low < high;low++)
        {
            if (low % 2 == 1)
                cout<<low<<endl;
        }
    }


    return 0;
}
*/
//==============================================

// program 21
/*
#include <iostream>
using namespace std;

int main()
{
    int low , high, divisor;
    cin>>low>>high>>divisor;
    for (;low < high; low++)
    {
        if (low % divisor == 0)
            cout<<low<<endl;
    }
    return 0;
}
*/


/*
=============================================================================================================================================
====================================================== Good Work Congratulation! ============================================================
=============================================================================================================================================
Those Who inherited The Curse of Zenin Family…
The one Who couldn't fully leave  behind that Curse...
They would all bear Witness...to the bare flesh of one who is free
To The One Who Left It All Behind AND HIS OVERWHELMING INTENSITY....
============================ Toji Zenin =============================


*/