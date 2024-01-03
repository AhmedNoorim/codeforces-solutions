#include <iostream>
#include <map>
using namespace std;

void func()
{
    std::map<std::string, int> myMap;

    myMap.insert(std::make_pair("banana", 3));
    myMap.insert(std::make_pair("cherry", 7));
    myMap.insert(std::make_pair("apple", 5));

    for (const auto &pair : myMap)
    {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // Declare the iterator outside the loop
    std::map<std::string, int>::iterator it;

    // Initialize the iterator inside the loop
    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
    }

    if (myMap.find("apple") != myMap.end())
    {
        std::cout << "Key 'apple' exists in the map." << std::endl;
    }

    myMap.erase("banana");

    size_t mapSize = myMap.size();
    bool isEmpty = myMap.empty();
}

void details()
{
    map<string, int> myMap;

    // insertion of map
    myMap.insert(pair<string, int>("apple", 5));
    myMap.insert(make_pair("banana", 3));

    // accessing values
    int count = myMap["apple"];
    cout << count << endl;

    // iterating through the map
    for (const auto &pair : myMap)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // checking if a key exists
    if (myMap.find("apple") != myMap.end())
    {
        cout << (myMap.find("apple") != myMap.end()) << endl;
    }

    // deleting elements
    myMap.erase("banana");

    size_t mapSize = myMap.size();
    bool isEmpty = myMap.empty();

    cout << "Map Size: " << mapSize << ", isEmpty: " << isEmpty << endl;

    /*std::map automatically sorts its keys in ascending order based on the key's comparison operator.
    If you want a sorted collection of key-value pairs, std::map is a suitable choice.*/
}

int main(int argc, char const *argv[])
{
    // details();
    func();
    return 0;
}
