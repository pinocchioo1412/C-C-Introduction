#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string path = "bai_20.txt";
    vector<string> text;
    int dong = 0;

    try
    {
        ifstream file;
        string line;
        file.open(path);
        if (!file)
        {
            throw runtime_error("khong mo duoc");
        }

        while (getline(file, line))
        {
            dong += 1;
        }
        file.close();
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
    cout << "so dong la " << dong;
}