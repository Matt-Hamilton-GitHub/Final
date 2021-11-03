
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

//we could also declare the parameter of the functions below as
//                 void func (char [] ptr)
void upper(char *ptr){
    cout <<"After a call to Upper: ";
    for(size_t i{0}; i < strlen(ptr);i++){
        if(islower(ptr[i]))
            cout << (char) toupper(ptr[i]);
        else
            cout << ptr[i];
    }
cout << endl;
}

void lower(char *ptr){
    cout <<"After a call to Lower: ";
    for(size_t i{0}; i < strlen(ptr);i++){
        if(isupper(ptr[i]))
            cout << (char) tolower(ptr[i]);
        else
            cout << ptr[i];
    }
cout << endl;
}

void reverse(char *ptr){
    cout <<"After a call to Reverse: ";
    for(size_t i{0}; i < strlen(ptr);i++){
        if(islower(ptr[i]))
            cout << (char) toupper(ptr[i]);
        else if(isupper(ptr[i]))
            cout << (char) tolower(ptr[i]);
        else
            cout << ptr[i];
    }
cout << endl;
}



int main(){
    
    char aString [50] {}; //here we crate a C-style String
    
    
    cout << "Enter a string: ";
    cin.getline(aString,50);//Here we accept values for C-style string
    
    char *ptr {aString};// Here we assign an address of the C-style String to a pointer 
    
cout << "---------------------------------" << endl;
    upper(ptr);
    lower(ptr);
    reverse(ptr);
cout << "---------------------------------" <<  endl;
    
    
	system("pause");
    return 0;
}


