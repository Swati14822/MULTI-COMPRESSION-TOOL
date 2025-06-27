#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Simple Run-Length Encoding Compression
string compressRLE(const string& input) {
    string output = "";
    int count = 1;
    for (size_t i = 1; i <= input.length(); i++) {
        if (i < input.length() && input[i] == input[i - 1]) {
            count++;
        } else {
            output += input[i - 1] + to_string(count);
            count = 1;
        }
    }
    return output;
}

// Simple RLE Decompression
string decompressRLE(const string& input) {
    string output = "";
    for (size_t i = 0; i < input.length(); i++) {
        char ch = input[i];
        string countStr = "";
        i++;
        while (i < input.length() && isdigit(input[i])) {
            countStr += input[i];
            i++;
        }
        i--; // adjust since for loop also increments
        int count = stoi(countStr);
        output.append(count, ch);
    }
    return output;
}

int main() {
    // Read input file
    ifstream inFile("input.txt");
    if (!inFile) {
        cerr << "Could not open input.txt\n";
        return 1;
    }

    string data((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
    inFile.close();

    // Compress
    string compressed = compressRLE(data);
    ofstream outFile("compressed.txt");
    outFile << compressed;
    outFile.close();
    cout << "Compression complete. Check compressed.txt\n";

    // Decompress
    ifstream compFile("compressed.txt");
    string compressedData((istreambuf_iterator<char>(compFile)), istreambuf_iterator<char>());
    compFile.close();

    string decompressed = decompressRLE(compressedData);
    ofstream decFile("decompressed.txt");
    decFile << decompressed;
    decFile.close();
    cout << "Decompression complete. Check decompressed.txt\n";

    return 0;
}

