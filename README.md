A basic client-server chat application built using C++ socket programming. This project demonstrates how a server and client can communicate using TCP sockets on the same machine.

📌 Features
Simple TCP-based connection using sockets

Text message exchange between client and server

Event loop for continuous communication

Graceful exit with "exit" command

🧠 Concepts Covered
AF_INET, SOCK_STREAM — Internet address family & TCP protocol

socket(), bind(), listen(), accept() — Server-side setup

connect(), send(), recv() — Client-side communication

unistd.h, arpa/inet.h — System-level networking and IO

Basic event loop for continuous chat

🛠 Requirements
C++ compiler (e.g., g++)

Linux, macOS, or WSL (for Windows)

Terminal for running server and client separately

🚀 How to Run
Compile both programs:

bash
Copy
Edit
g++ server.cpp -o server
g++ client.cpp -o client
Start the server in one terminal:

bash
Copy
Edit
./server
Start the client in another terminal:

bash
Copy
Edit
./client
Type messages in the client terminal. Messages will be received and displayed on the server side.

Type exit in the client to close the connection.

🧪 Example
Server Output:

arduino
Copy
Edit
Waiting for client...
Client connected.
Client: Hello, Server!
Client: How are you?
Client Output:

pgsql
Copy
Edit
Connected to server. Type 'exit' to quit.
Hello, Server!
How are you?
📂 File Structure
bash
Copy
Edit
├── server.cpp   # Server-side code
├── client.cpp   # Client-side code
└── README.md    # Project documentation
