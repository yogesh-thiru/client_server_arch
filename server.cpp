/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<unistd.h>
#include<arpa/inet.h>
#include<cstring>
using namespace std;

int main()
{
   int serversoc = socket(AF_INET,SOCK_STREAM,0);
   
   sockaddr_in servadd {};
   servadd.sin_family = AF_INET;
   servadd.sin_port = htons(54000);
   servadd.sin_addr.s_addr = INADDR_ANY;
   
   if(bind(serversoc, (sockaddr*)&servadd ,sizeof(servadd)) < 0){
       cout<<"not bined"<<endl;
       return 1;
   }
   if(listen(serversoc,1) <0){
       cout<<"not listened"<<endl;
   return 1;
       
   }
   cout<<"waiting for client"<<endl;
   int cli = accept(serversoc,nullptr,nullptr);
   cout<<"connected"<<endl;
   
   char buffer[256]={0};
   while(true){
       memset(buffer,0,sizeof(buffer));
       int byterec = recv(cli,buffer,sizeof(buffer),0);
       if(byterec < 0)break;
       cout<<buffer<<endl;
   }
   close(cli);
   close(serversoc);
   return 0;
}
