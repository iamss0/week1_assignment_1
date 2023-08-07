// WAP to find the circumference of a circle with radius 10 in C++.
#include<iostream>
using namespace std;
int main(){
    float radius = 10;
    float pi_val = 3.14;
    float circumference = 2*(pi_val)*radius;
    cout<<circumference;
    return 0;
}
//output = 62.8


// q6- How many of these can be a variable name ?
// 01Pwskills:--- no (cant start with a number)
// _FLOAT:--- yes(can star with _ or $)
// int:---- no (cannot be a keyword)
// FLOAT:---- Yes(caps and small case treated differently in cpp)
// You will succeed:--- no(no spaces are allowed)