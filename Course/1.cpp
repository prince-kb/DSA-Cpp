/*
#include <iostream>
using namespace std;
int main(){
    string aalu = "hiiiiiiippy\n";
    // cout << "    /|" << endl;
    // cout << "   / |" << endl;
    // cout << "  /  |" << endl;
    // cout << " /   |" << endl;
    // cout << "/    |" << endl;
    // cout << "------" << endl;
cout<<  aalu << "good " << endl;
// cout << 9-24;
cout<< aalu.length()<<endl;
cout<< aalu.find("pp",5)<<endl;
// cout << aalu.substr(1,7);
string substr = aalu.substr(1,7) ;
cout<< substr << endl;
    return 0;
}
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int grd = 4,ard=5,hrd=98,liv=8.8;
cout << sqrt(grd) << endl;
cout << ceil(sqrt(ard)) << endl;
cout << floor(sqrt(hrd)) << endl;
cout << round(sqrt(liv)) << endl;
cout << fmin(grd,hrd)<<endl;
cout << fmax(grd,liv)<<endl;
    return 0;
}