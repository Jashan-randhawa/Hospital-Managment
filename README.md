🏥 Hospital Management System (C++)
A console-based application designed to streamline basic hospital operations using object-oriented programming in C++. This project demonstrates practical use of classes, file handling, and modular design to simulate real-world hospital workflows.

📌 Features
Admin Login System for secure access

Patient Registration with details like name, disease, contact info, room number, and admission/discharge dates

Doctor Assignment based on specialization

Appointment Scheduling and tracking

Billing Module for medicine and room charges

Medical Record Management with persistent storage using .dat files

🛠️ Technologies Used
Language: C++

Concepts: OOP (Classes, Inheritance), File I/O, Menu-driven interface

Platform: Console (CLI)

📁 File Structure
Code
├── hospitalrecord.cpp       # Core logic for patient and doctor management
├── function.cpp             # Utility functions
├── file1.cpp, file3.cpp     # Additional modules (e.g., billing, appointments)
├── Record2.dat              # Persistent data storage
├── README.md                # Project documentation
🚀 How to Run
Clone the repository:

bash
git clone https://github.com/Jashan-randhawa/Hospital-Managment.git
Compile the main file:

bash
g++ hospitalrecord.cpp -o hospital
Run the executable:

bash
./hospital
💡 Note: Ensure all .dat files are in the same directory for proper data access.

📚 Learning Outcomes
Real-world application of C++ OOP principles

File handling for persistent data

Modular design and code organization

Practical experience in building CRUD-based systems

📄 License
This project is open-source and free to use for educational purposes.
