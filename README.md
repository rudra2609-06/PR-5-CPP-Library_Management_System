# PR-5-CPP_-Library_Management_System
PR-5-CPP-Library-Management-System
Overview
This project is a C++-based Library Management System designed to efficiently manage a collection of library items, including books, DVDs, and magazines. It leverages object-oriented programming (OOP) concepts such as inheritance, polymorphism, and encapsulation to provide a robust and extensible solution. The system allows librarians or users to perform various operations like adding new items, searching for items by title, checking out items, returning items, and displaying all entered items. The code is structured with a base LibraryItem class and derived classes (Book, DVD, Magazine) to handle specific item types, along with a LibraryRegistry class to manage the collection.
Features

Add Items: Add books (with genre and ISBN), DVDs (with duration), and magazines (with issue number).
Search Functionality: Search for an item by its title and view its details.
Check Out: Mark an item as checked out with a due date, provided it’s available.
Return Items: Return a checked-out item and update its status.
Display All Items: View a comprehensive list of all items currently in the system.
Capacity Limit: Supports a maximum of 1000 items per category to prevent overload.
User-Friendly Interface: Interactive menu-driven system with clear prompts.

Prerequisites

A C++ compiler (e.g., g++ or any compatible compiler).
An integrated development environment (IDE) or text editor (e.g., Visual Studio Code, as used in the example).
Basic knowledge of C++ and command-line operations.

Installation

Clone the repository or create a new project in your preferred IDE.
Save the provided code in a file named library_management.cpp.
Compile the code using a C++ compiler. For example, on a Unix-based system:g++ library_management.cpp -o library_management


Run the executable:./library_management

On Windows, use the appropriate command based on your compiler (e.g., library_management.exe).

Usage

Launch the program to display the main menu.
Select an option by entering the corresponding number (0-5):
1: Add Item: Choose A (Book), B (DVD), or C (Magazine), then enter details as prompted.
2: Search Item By Title: Enter the title to search and view item details.
3: Check Out: Enter the title of the item to check out.
4: Return Item: Enter the title of the item to return.
5: Display All Items: View all items with their details.
0: Exit: Terminate the program.


Follow the on-screen prompts to input details (e.g., title, author, due date, and category-specific fields).
The system provides feedback for each action (e.g., "Added Successfully", "Item Found", etc.).

Code Structure

LibraryItem (Base Class): Defines common attributes (title, author, due date, checkout status) and virtual methods (checkOut, returnItem, displayDetails).
Book, DVD, Magazine (Derived Classes): Extend LibraryItem with specific attributes (genre and ISBN for books, duration for DVDs, issue number for magazines) and override virtual methods.
LibraryRegistry: Manages the collection of items, handling addition, searching, checkout, return, and display operations.
main(): Contains the menu-driven loop and user interaction logic.


Prompts for title, author, due date, genre, and ISBN.
Example: Adding "Zero To One" by Peter Thiel.

Example Outputs
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/e9d2d8a4-963b-4f14-a6f1-97862ad3e696" />

Adding a DVD

Prompts for title, author, due date, and duration in minutes.
Example: Adding "Introduction To HTML" by Dhaval Leelawala.

Example Outputs
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/016be729-733d-409f-8bdf-9f223ccb0f45" />


Adding a Magazine

Prompts for title, author, due date, and issue number.
Example: Adding "Highlight India" by Kumar Vishwas.

Example Outputs
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/186bfbb9-723c-425a-bae5-095aac4dff08" />

Searching an Item

Enter a title to search (e.g., "Zero To One") and view its details.
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/10967843-7e81-4180-ab90-7f21a706235c" />



Checking Out an Item

Enter a title (e.g., "Zero To One") to check out, with a due date displayed.
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/55e0d835-a525-464d-a1ed-492388b5ecbf" />



Returning an Item

Enter a title (e.g., "Zero To One") to return, updating its status.
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/166fcb42-d96a-49c9-8781-53f78f100b42" />



Displaying All Items

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/e7c1f365-1e86-4f36-8dd0-15f251388918" />


Author
Rudra ThakkarBCA (Data Science) StudentPracticing Full Stack Development & C++
License
This project is open-source under the MIT License. Feel free to use, modify, and distribute it as needed.
Acknowledgments

Thanks to the C++ community for resources and support.
Inspired by practical requirements of library management systems.
