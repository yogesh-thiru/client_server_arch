/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<arpa/inet.h>
#include<unistd.h>
#include<cstring>
using namespace std;
int main()
{
   int sock = socket(AF_INET, SOCK_STREAM,0);
   
   sockaddr_in servsoc{};
   servsoc.sin_family = AF_INET;
   servsoc.sin_port = htons(54000);
   inet_pton(AF_INET,"127.0.0.1",&servsoc.sin_addr);
   
   connect(sock,(sockaddr*)&servsoc,sizeof(servsoc));
   cout<<"connected"<<endl;
   while(true){
       string s;
       getline(cin,s);
       if(s == "exit")break;
       send(sock,s.c_str(),s.size(),0);
   }
close(sock);
    return 0;
}
