#include "HexGridMetrics.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void RunTests()
{
    cout << "Running default tests at startup." << endl;
    cout << "Maximum chunks amount in the grid are: "
        << HexGridMetrics::MaximumChunksCountWidth
        << " x "
        << HexGridMetrics::MaximumChunksCountHeight
        << " (total "
        << HexGridMetrics::MaximumChunksCountWidth * HexGridMetrics::MaximumChunksCountHeight
        << ") chunks."
        << endl;
    cout << "Each chunk maximum size is: "
         << HexGridMetrics::MaximumChunkSizeWidth
         << " x "
         << HexGridMetrics::MaximumChunkSizeHeight
         << " (total "
         << HexGridMetrics::MaximumChunkSizeWidth * HexGridMetrics::MaximumChunkSizeHeight
         << ") cells per chunk."
         << endl;
    cout << "Total maximum amount of cells on the grid is: "
         << HexGridMetrics::MaximumChunkSizeWidth
            * HexGridMetrics::MaximumChunkSizeHeight
            * HexGridMetrics::MaximumChunkSizeWidth
            * HexGridMetrics::MaximumChunkSizeHeight
         << "."
         << endl;
}

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    RunTests();
}