#include <bits/stdc++.h>
using namespace std;

// my function 
char * mystrtok(char str[], char del){

    static char * input=NULL;
    if(str!=NULL){
        input=str;
    }
    if(input==NULL) return NULL;

    char *output= new char[strlen(input)+1];

    int i;
    for( i=0;input[i]!='\0';i++){

        if(input[i]!=del){

            output[i]=input[i];
        }
        else{
            output[i]='\0';
            input=input +i + 1;
            return output;
        }
    }

    output[i]='\0';
    input=NULL;
    return output;
}

int main() {
    
    char str[]="Hello This is Shubham Saurav , 3rd year student";

    char *ptr;

    ptr=mystrtok(str,' ');

    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=mystrtok(NULL,' ');
    }

// inbuilt function
    //     char *ptr;

    // ptr=strtok(str," ");

    // while(ptr!=NULL){
    //     cout<<ptr<<endl;
    //     ptr=strtok(NULL," ");
    // }
}
