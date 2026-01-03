#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class FileManager {
private:
    string filename;

    void ensureFileExists() {
        ifstream infile(filename);
        if (!infile.good()) {
            ofstream outfile(filename);
            outfile.close();
        }
        infile.close();
    }

public:
    FileManager(string file) {
        filename = file;
        ensureFileExists();
    }

    vector<string> readLines() {
        vector<string> lines;
        ifstream file(filename);
        string line;

        while (getline(file, line)) {
            lines.push_back(line);
        }

        file.close();
        return lines;
    }

    void appendLine(const string& message) {
        ofstream file(filename, ios::app);
        file << message << endl;
        file.close();
    }
};
