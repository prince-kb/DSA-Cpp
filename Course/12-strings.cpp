/* //Palindrome checker
#include<iostream>
using namespace std;
int getLength(char a[]){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}
int reverse_check_alphabets_only(char a[],int len){
    int s=0,e=len-1;
    while(s<=e){
        if(a[s++]!=a[e--])
            return 0;
        else s++,e--;
    }
    return 1;
}
auto smallarize(char a[],int len){
    int i=0;
    while(i<len){
    if(a[i]>='A' && a[i]<='Z')
        a[i]=a[i]-'A'+'a';
        i+=1;
    }
}  
bool palindrome_for_mixed(char a[],int len){
    int s=0,e=len-1;
    while(s<=e){
        cout<<a[s]<<" "<<a[e]<<endl;
        if(a[s]<'a' || a[s]>'z')
            s+=1;
        else if(a[e]<'a' || a[e]>'z')
            e-=1;
        else if(a[s]!=a[e])
        return 0;
        else {s++,e--;}
    }
    return 1;
}

int main(){
char a[25];
cout<< "Enter the string" << endl;
cin>>a;
int len=getLength(a);
// cout<<"Length: "<<len;
// cout<<reverse_check_alphabets_only(a,len);
smallarize(a,len);
cout<<a<<endl;
cout<<palindrome_for_mixed(a,len);
}
 */

//Reverse a sentence
/* 
#include<iostream>
using namespace std;
void reverse_string(string &b){
    for(int i=0;i<b.length()/2;i++)
    swap(b[i],b[b.length()-1-i]);

}
void push(string &a,string c){
    for(int i=0;i<c.length();i++)
    a.push_back(c[i]);
}
string reverse(string &a,string &c){
    int i=a.length()-1;
    while(i>=0){
        string b;
        while(1){
            if(a[i]==' ' || i<0){
                i--;
            break;
            }
            else b.push_back(a[i]);
            i-=1;
        }
        reverse_string(b);
        push(c,b);
        if(i!=0)
        c.push_back(' ');
        // cout<<a<<endl;
}
return c;
}

int main(){
string a,c;
// cout<< "Enter the sentence: ";
// cin>>a;
a="This is elephant";
cout<<a<<endl;
// reverse_string(a);
// cout<<a<<endl;
cout<<"Reversed string is: "<<endl;
cout<<reverse(a,c);
}
 */

//Maximum occuring character in a string
/* 
#include<iostream>
using namespace std;
void lower(string &a){
    int i;
    while(i<a.length()){
    if(a[i]>='A' && a[i]<='Z')
    a[i]=a[i]-'A'+'a';
    i+=1;
    }
}
int max(int arr[],int n){
    int max=0;
    for(int i=1;i<26;i++){
        if(arr[i]>max)
        max=i;
    }
    return max;
}
int main(){
string a;
cout<< "Enter the sentence( use only letters ): ";
cin>>a;
int arr[26]={};
int i=0;
lower(a);
// cout<<a;
while(i<a.length()){
arr[int(a[i]-'a')]++;
i+=1;
}
int m=max(arr,26);
cout<<"Maximum occuring character is "<<char(m+'a')<<" that is "<<arr[m]<<" times"<<endl;
} 
*/

//Replacing a character with another string/character
/* 
#include<iostream>
using namespace std;
void push(string &a,string c){
    int i=0;
    while(i<c.length()){
        a.push_back(c[i]);
        i+=1;
    }
}
void replace(string &a,string b,char ch){
    int i=0;
    string c;
    while(i<a.length()){
        if (a[i]==ch)
            push(c,b);
        else c.push_back(a[i]);
        i+=1;
    }
    a=c;
}
int main(){
string a,b;
char ch;
cout<< "Enter the string:";
getline(cin,a);
cout<<a;
cout<<"Enter the character to replace: ";
cin>>ch;
cout<<"Enter the string to replace it with: ";
cin>>b;
replace(a,b,ch);
cout<<a<<endl;
}
// Process 2
#include<iostream>
using namespace std;
int main(){
    string a="alhyuahyualuayuahlauyahlauyal",b="al";
    cout<<a<<endl;
    while(a.find(b)<a.length() && a.length()!=0)
    a.replace(a.find(b),b.length(),".");
    cout<<a<<endl;
}
 */

//Deleting unknown substring in a string
/* 
#include<iostream>
using namespace std;
int main(){
    string a="Hellothere wheererenoonecomesheee rere";
    string b="ere";
    cout<<a<<endl;
    while(a.length()!=0 && a.find(b)<a.length()){
        a.erase(a.find(b),b.length());
    }
    cout<<"String after operation is :";
    cout<<a<<endl;
}
 */
//Checking permutation of a string in another string
//Returning complete string is not done
/* 
#include<iostream>
using namespace std;
void reverse(string &a,string &b,string &c){
    for (int i = b.length()-1; i >=0; i--)
        c.push_back(b[i]);
        while(c.find(b)<c.length() && c.length()!=0 || a.find(b)<a.length() && a.length()!=0){
    while(a.find(b)<a.length() && a.length()!=0)
    a.replace(a.find(b),b.length(),".");
    while(a.find(c)<c.length() && c.length()!=0)
    c.replace(a.find(c),c.length(),".");
        }
}
int main(){
    string a="allaallaallaallaallghalahallauah",b="al";
    string c;
    reverse(a,b,c);
    cout<<a<<endl;
    cout<<c<<endl;

    cout<<a<<endl;
}
 */
//True/False for palindrome containing strings
/* 
#include<iostream>
using namespace std;
bool reverse(string &a,string &b,string &c){
    for (int i = b.length()-1; i >=0; i--)
        c.push_back(b[i]);
        if (c.find(b)<c.length() && c.length()!=0 || a.find(b)<a.length() && a.length()!=0)
            return 1;
            return 0;
        
}
int main(){
    string a="hagywugk",b="al";
    string c;
    cout<<reverse(a,b,c);

}
 */
//Remove adjacent duplicates
/* 
#include<iostream>
using namespace std;
int main(){
string a="aalu kach inttoo the wellll asap";
int i=0;
cout<<a<<endl;
while(i<a.length()-1){
    if(a[i]==a[i+1]){
    a.erase(i,2);
    i=0;
    }
    i++;
}
cout<<a<<endl;
}
 */

//String compression
/* 
#include<iostream>
using namespace std;
int main(){
string a="aluu kaach inttooo the wellll assaapp";
int i=0;
cout<<a<<endl;
while(i<a.length()-1){
    int j=i+2,k=0;;
    if(a[i]==a[i+1]){
            k=2;
        while(a[j]==a[i]){
            j++,k++;
        }
        // cout<<i<<" "<<k<<endl;
        if(k==2){
            a[i+1]=k+'0';
        }
        if(k>2){
            a.erase(i,k-2); 
            // cout<<i<<" "<<k<<endl;
            a[i+1]=k+'0';
        }
    }
i++;
}
cout<<a<<endl;

} */