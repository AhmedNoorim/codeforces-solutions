#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Map_PhoneBookApp
{
public:
    static map<string, map<string, int>> book;
};

map<string, map<string, int>> Map_PhoneBookApp::book;

void Preset(map<string, map<string, int>> &book)
{
    vector<string> name = {"Ahmed Noorim", "Yeasfy Abedin", "Fahim Fayaz", "Tridha Roy", "Raina Nusrat"};
    vector<string> details = {"Cool guy.", "Very sweet.", "Sad and Bad", "Roy Boy!", "Ctg Wasa!"};
    vector<long int> contact = {43980099, 84309990, 49830990, 30994980, 94983090};

    while (!name.empty())
    {
        map<string, int> info;
        info.insert(make_pair(details.back(), contact.back()));
        book.insert(make_pair(name.back(), info));
        name.pop_back();
        details.pop_back();
        contact.pop_back();
    }
}

void Print(map<string, map<string, int>> &book)
{
    for (const auto &c : book)
    {
        map<string, int> container = c.second;
        map<string, int>::iterator iter = container.begin();
        cout << "Name: " << c.first << "\t Details: " << iter->first << "\t Contact: " << iter->second << endl;
    }
}

void Search(map<string, map<string, int>> &book)
{
    cout << "Enter the name: ";
    string name;
    cin.ignore(1);
    getline(cin, name);
    if (book.find(name) != book.end())
    {
        map<string, int> container = book[name];
        cout << "Name: " << name;
        for (const auto &c : container)
        {
            cout << "\t Detals: " << c.first << "\t Contact: " << c.second << endl;
        }
    }
    else
        cout << "Name not found!" << endl;
}

void Add(map<string, map<string, int>> &book)
{
    cout << "Enter the name: ";
    string name;
    cin.ignore(1);
    getline(cin, name);
    if (book.find(name) != book.end())
        cout << "Already exists!" << endl;
    else
    {
        cout << "Enter details: ";
        string details;
        getline(cin, details);
        cout << "Enter contact: ";
        long int contact;
        cin >> contact;
        map<string, int> info;
        info.insert(make_pair(details, contact));
        book.insert(make_pair(name, info));
    }
}

void Delete(map<string, map<string, int>> &book)
{
    cout << "Enter the name: ";
    string name;
    cin.ignore(1);
    getline(cin, name);
    if (book.find(name) != book.end())
    {
        book.erase(name);
        cout << name << " has been deleted!" << endl;
    }
    else
        cout << "Name not found!" << endl;
}

bool click(int in)
{
    switch (in)
    {
    case 1:
        Search(Map_PhoneBookApp::book);
        return true;
        break;
    case 2:
        Add(Map_PhoneBookApp::book);
        return true;
        break;
    case 3:
        Delete(Map_PhoneBookApp::book);
        return true;
        break;
    case 4:
        Print(Map_PhoneBookApp::book);
        return true;
        break;

    default:
        return false;
        break;
    }
}

int main(int argc, char const *argv[])
{
    Preset(Map_PhoneBookApp::book);
    int in;
    do
    {
        cout << "Choices:\n\tPress 1 to search a number\n\tPress 2 to add a number\n\tPress 3 to delete a number\n\tPress 4 to print all\n\t---Enter your choice: ";
        cin >> in;
    } while (click(in));

    // Print(Map_PhoneBookApp::book);

    return 0;
}
