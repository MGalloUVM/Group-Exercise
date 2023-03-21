// bugs introduced: ws
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open file stream
    ofstream file;
    // numbers.html is opened file for writing
    file.open("numbers.html");
    // Add head/title tags and opening body tag to html
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    // Write table headers
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // Write numbers from 1 to 50 in table
    for (int i = 1; i < 50; i++) {
        // If even number
        if (i % 2 == 1) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        // If odd number
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    
    // Close table, body, html tags
    file << "</table>\n</body>\n<html>";
    // Close file stream
    file.close();
    // Open filestream to read file
    ifstream input("numbers.html");
    // Print file info
    cout << input.rdbuf()
    // Close file stream
    input.close();
    return 0;
}
