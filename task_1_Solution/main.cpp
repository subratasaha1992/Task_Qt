#include <iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"  ...............Conversion...................\n ";
    int i_val,i_result,len_of_array=0;
    float f_val,f_result;
    string s_val;
    cout<<"Enter a value of integer"<<"\n";
    cin>>i_val;
    f_result = static_cast<float>(i_val);
    cout << "Covert the integer to float" <<"\t"<< fixed <<  setprecision(1) <<f_result<<"\n";
    cout<<"\n";
    cout<<"Enter a value of float";
    cin>>f_val;
    cout<<"\n";
    i_result=(float)f_val;
    cout<<"Covert the float to int"<<i_result<<"\n";
    cout<<"\n";
    cout<<"Enter a String::";
    cin>>s_val;
    len_of_array = s_val.length();
    char result_array[len_of_array+1];
    strcpy(result_array, s_val.c_str());
    cout<<"\n";
    for (int incerement=0; incerement<len_of_array; incerement++)
        cout << result_array[incerement]<<"\t";
    cout<<"\n";
    return 0;
}
