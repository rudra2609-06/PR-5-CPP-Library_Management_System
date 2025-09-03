#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    string title;
    string author;
    string dueDate;
    bool isCheckOut;

public:
    LibraryItem(string title, string author, string dueDate)
        : title(title), author(author), dueDate(dueDate), isCheckOut(false) {}

    void setTitle(string title)
    {
        this->title = title;
    }

    void setAuthor(string author)
    {
        this->author = author;
    }

    void setDueDate(string dueDate)
    {
        this->dueDate = dueDate;
    }

    string getTitle(void)
    {
        return this->title;
    }

    string getAuthor(void)
    {
        return this->author;
    }

    string getDueDate(void)
    {
        return this->dueDate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;
};

class Book : public LibraryItem
{
private:
    string genre;
    string ISBN;

public:
    Book(string title, string author, string dueDate, string genre, string ISBN)
        : LibraryItem(title, author, dueDate)
    {
        this->genre = genre;
        this->ISBN = ISBN;
    }

    void setGenre(string genre)
    {
        this->genre = genre;
    }

    void setISBN(string ISBN)
    {
        this->ISBN = ISBN;
    }

    string getGenre(void)
    {
        return genre;
    }

    string getISBN(void)
    {
        return ISBN;
    }

    void checkOut() override
    {
        if (isCheckOut)
        {
            cout << "Sorry, \"" << title << "\" is already checked Out" << endl << endl;
        }
        else
        {
            isCheckOut = true;
            cout << "Due Date is: " << dueDate << endl
                 << "Book Title is: " << title << endl
                 << "Enjoy Reading..." << endl << endl;
        }
    }

    void returnItem() override
    {
        if (!isCheckOut)
        {
            cout << "Book is not checked out" << endl << endl;
        }
        else
        {
            isCheckOut = false;
            cout << "Book is Returned Successfully..." << endl << endl;
        }
    }

    void displayDetails() override
    {
        cout << "--------- Details ---------" << endl;
        cout << "Title is: " << title << endl
             << "Author is: " << author << endl
             << "Due Date is: " << dueDate << endl
             << "Genre is: " << genre << endl
             << "ISBN no. is: " << ISBN << endl << endl;
    }
};

class DVD : public LibraryItem
{
private:
    int duration;

public:
    DVD(string title, string author, string dueDate, int duration)
        : LibraryItem(title, author, dueDate)
    {
        this->duration = duration;
    }

    void setduration(int duration)
    {
        this->duration = duration;
    }

    int getduration(void)
    {
        return this->duration;
    }

    void checkOut() override
    {
        if (isCheckOut)
        {
            cout << "Sorry, DVD \"" << title << "\" is already checked Out" << endl << endl;
        }
        else
        {
            isCheckOut = true;
            cout << "Due Date is: " << dueDate << endl
                 << "DVD Title is: " << title << endl
                 << "Enjoy Watching..." << endl << endl;
        }
    }

    void returnItem() override
    {
        if (!isCheckOut)
        {
            cout << "DVD is not checked out" << endl << endl;
        }
        else
        {
            isCheckOut = false;
            cout << "DVD is Returned Successfully..." << endl << endl;
        }
    }

    void displayDetails() override
    {
        cout << "--------- Details ---------" << endl;
        cout << "Title is: " << title << endl
             << "Author is: " << author << endl
             << "Due Date is: " << dueDate << endl
             << "Duration is: " << duration << endl << endl;
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:
    Magazine(string title, string author, string dueDate, int issueNumber)
        : LibraryItem(title, author, dueDate)
    {
        this->issueNumber = issueNumber;
    }

    void setIssueNumber(int issueNumber)
    {
        this->issueNumber = issueNumber;
    }

    int getIssueNumber(void)
    {
        return this->issueNumber;
    }

    void checkOut() override
    {
        if (isCheckOut)
        {
            cout << "Sorry, Magazine \"" << title << "\" is already checked Out" << endl << endl;
        }
        else
        {
            isCheckOut = true;
            cout << "Due Date is: " << dueDate << endl
                 << "Magazine Title is: " << title << endl
                 << "Enjoy Reading..." << endl << endl;
        }
    }

    void returnItem() override
    {
        if (!isCheckOut)
        {
            cout << "Magazine is not checked out" << endl << endl;
        }
        else
        {
            isCheckOut = false;
            cout << "Magazine is Returned Successfully..." << endl << endl;
        }
    }

    void displayDetails() override
    {
        cout << "--------- Details ---------" << endl;
        cout << "Title is: " << title << endl
             << "Author is: " << author << endl
             << "Due Date is: " << dueDate << endl
             << "Issue Number is: " << issueNumber << endl << endl;
    }
};

class LibraryRegistry
{
private:
    LibraryItem *lib[1000];
    int totalCount = 0;

public:
    void addItem(LibraryItem *l)
    {
        lib[totalCount++] = l;
        cout << "Added Successfully" << endl << endl;
    }

    void searchItemByTitle(string title)
    {
        bool found = false;
        for (int i = 0; i < totalCount; i++)
        {
            if (lib[i]->getTitle() == title) 
            {
                cout << "Item Found" << endl;
                lib[i]->displayDetails();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Library Item Not found!" << endl << endl;
        }
    }

    void checkOutItem(string title)
    {
        bool found = false;
        for (int j = 0; j < totalCount; j++)
        {
            if (lib[j]->getTitle() == title)
            {
                lib[j]->checkOut();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Item Not Found!" << endl << endl;
        }
    }

    void returnItems(string title)
    {
        bool found = false;
        for (int k = 0; k < totalCount; k++)
        {
            if (lib[k]->getTitle() == title)
            {
                lib[k]->returnItem();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Item Not Found!" << endl << endl;
        }
    }

    void displayItems(void)
    {
        cout << endl << "------------------ Items ------------------" << endl;
        for (int l = 0; l < totalCount; l++)
        {
            cout << "Item #" << (l + 1) << endl;
            lib[l]->displayDetails();
        }
        cout << "-------------------------------------------" << endl << endl;
    }
};

void intputCommonDetails(string &title, string &author, string &dueDate, int count)
{
    cout << endl << "---------- Enter #" << count << " Details ----------" << endl;
    cout << "Enter Title: ";
    getline(cin, title);
    cout << "Enter Author: ";
    getline(cin, author);
    cout << "Enter DueDate: ";
    getline(cin, dueDate);
}

int main()
{
    LibraryRegistry registry;
    string title, author, dueDate;
    string genre, ISBN;
    int duration, issueNumber;
    int choice, size, i, j, k;
    char choice_char;

    do
    {
        cout << endl << "--------------- Library Management Menu ---------------" << endl;
        cout << "1.To Add Item" << endl;
        cout << "2.To Search Item By Title" << endl;
        cout << "3.To CheckOut" << endl;
        cout << "4.To Return Item" << endl;
        cout << "5.To Display All Item Entered" << endl;
        cout << "0.To Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            do
            {
                cout << "Which Item Do You Want To Add ?" << endl;
                cout << "A.To Add Book" << endl;
                cout << "B.To Add DVD" << endl;
                cout << "C.To Add Magazine" << endl;
                cout << "D.To Return Back To Library Management Menu" << endl;
                cout << "E.To Exit Program" << endl;
                cout << "Enter Your Choice: ";
                cin >> choice_char;
                cout << endl;

                switch (choice_char)
                {
                case 'A':
                    cout << "How Many Books Do You Want to add (max 1000) ?" << endl;
                    cin >> size;
                    cin.ignore();
                    if (size <= 1000)
                    {
                        for (i = 0; i < size; i++)
                        {
                            intputCommonDetails(title, author, dueDate, i + 1);

                            cout << "Enter Genre: ";
                            getline(cin, genre);
                            cout << "Enter ISBN: ";
                            getline(cin, ISBN);

                            registry.addItem(new Book(title, author, dueDate, genre, ISBN));
                        }
                    }
                    else
                    {
                        cout << "Maximum 1000 Books Allowed Enter valid Size" << endl << endl;
                    }
                    break;

                case 'B':
                    cout << "How Many DVD Do You Want to add (max 1000) ?" << endl;
                    cin >> size;
                    cin.ignore();
                    if (size <= 1000)
                    {
                        for (j = 0; j < size; j++)
                        {
                            intputCommonDetails(title, author, dueDate, j + 1);

                            cout << "Enter Duration of DVD in minutes: ";
                            cin >> duration;
                            cin.ignore();

                            registry.addItem(new DVD(title, author, dueDate, duration));
                        }
                    }
                    else
                    {
                        cout << "Maximum 1000 DVD's Allowed Enter valid Size" << endl << endl;
                    }
                    break;

                case 'C':
                    cout << "How Many Magazines Do You Want to add (max 1000) ?" << endl;
                    cin >> size;
                    cin.ignore();
                    if (size <= 1000)
                    {
                        for (k = 0; k < size; k++)
                        {
                            intputCommonDetails(title, author, dueDate, k + 1);

                            cout << "Enter Issue Number: ";
                            cin >> issueNumber;
                            cin.ignore();

                            registry.addItem(new Magazine(title, author, dueDate, issueNumber));
                        }
                    }
                    else
                    {
                        cout << "Maximum 1000 Magazines Allowed Enter valid Size" << endl << endl;
                    }
                    break;

                case 'D':
                    cout << "Returning Back to Library Management Menu..." << endl << endl;
                    break;

                case 'E':
                    cout << "Exiting..." << endl << endl;
                    return 0;

                default:
                    cout << "Enter Valid Input" << endl << endl;
                }

            } while (choice_char != 'D');
            break;

        case 2:
            cout << "Enter Title: ";
            cin.ignore();
            getline(cin, title);
            registry.searchItemByTitle(title);
            break;

        case 3:
            cout << "Enter Item Title To CheckOut: ";
            cin.ignore();
            getline(cin, title);
            registry.checkOutItem(title);
            break;

        case 4:
            cout << "Enter Item Title That You Have Borrowed: ";
            cin.ignore();
            getline(cin, title);
            registry.returnItems(title);
            break;

        case 5:
            registry.displayItems();
            break;

        case 0:
            cout << "Exiting Program..." << endl << endl;
            break;

        default:
            cout << "Enter Valid Input" << endl << endl;
        }

    } while (choice != 0);

    return 0;
}
