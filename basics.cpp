#include<bits/stdc++.h>
using namespace std;

void myname(string name){ // pass by value
    cout<<"My name is "<<name;
}

int dosum(int num1,int num2){ //double input
    return num1+num2;
}

void pass_by_value(string s){
    cout<<"Pass by value "<<s<<endl;
}

void pass_by_reference(string &s){ // Pass by reference
    s[0] = 'S';
    cout<<"Pass by reference "<<s<<endl;
}

increase_arr(int arr[]){ // Pass by reference in array
    arr[0] += 100;
    cout<<"Value inside function:- "<<arr[0]<<endl;
}

int main(){

    // Input and Output cin and cout.

    // Data Type:- int, long, long long, float, double, 
    // string and getline(), char.
    // String takes a word and getline() takes the full statement but after pressing enter getline will not take input.

    // string str;
    // getline(cin,str);
    // cout<<str;

    // Take input of age and print if you are adult or not .

    // int age;
    // cin>>age;
    // if(age>=18){
    //     cout<<"You are adult"<<endl;
    // }
    // else if(age<18){
    //     cout<<"You are not adult"<<endl;
    // }

    //Learned if else, if else if, nested if.

    // Take the day number and print the day name

    // int dayno;
    // cin>>dayno;
    // switch(dayno){
    // case 0:
    //     cout<<"Monday";
    //     break;
    
    // case 1:
    //     cout<<"Tuesday";
    //     break;

    // case 2:
    //     cout<<"Wednesday";
    //     break;

    // case 3:
    //     cout<<"Thursday";
    //     break;

    // case 4:
    //     cout<<"friday";
    //     break;

    // case 5:
    //     cout<<"saturday";
    //     break;

    // case 6:
    //     cout<<"sunday";
    //     break;

    // default:
    //     cout<<"print valid day";

    // }

    // Learned switch statement 

    // array is used to store same datatypes of multiple times
    // int arr[3]; // index start with 0
    // cin>>arr[0]>>arr[1]>>arr[2];
    // cout<<arr[2]<<endl;

    //2D Array
    // int arr2D[3][5];

   /*   [] [] [] [] []    
        [] [] [] [] []
        [] [] [] [] []  */

    // arr2D[1][2] = 1;
    // cout<< arr2D[1][2];

    // Learned about array and 2D array

    // string
    // string name = "Pandey";
    // int len = name.size();
    // cout<<len<<endl;

    // name[len-1] = 'a'; // when you want to change any character you have do with ' ' not with " ".
    // cout<<name<<endl;

    // Function are used to modularise code 
    // Functions are used to use same code multiple line

    // void => Which will not return any value
    // return 
    // parametrasied 
    // Non-parametrasied

    // string name;
    // cin>>name;
    // myname(name);

    // int num1,num2;
    // cin>>num1>>num2;
    // cout<<dosum(num1,num2);

    // Some Inbuilt functions
    // min(num1, num2) => Gives min number among them
    // max(num1, num2) => gives max number among them

    // Inside function when function takes parameter inside it, it makes copy of original one and make changes with it.
    // It doesn't modify the original value. The originl value keeps as it is.
    // string s;
    // cin>>s;
    // pass_by_value(s);
    // pass_by_reference(s);
    // cout<<s<<endl;


    // int n = 5;
    // int arr[n];
    // for(int i = 0; i<n; i++){
    //     cin>>arr[i];
    // }

    // increase_arr(arr);
    // cout<<"Value inside main function is:- "<<arr[0]<<endl;

    return 0;
}