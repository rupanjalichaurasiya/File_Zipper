#include <iostream>
#include "huffman.hpp"
using namespace std;

// Define the member functions of the huffman class here
void huffman::createArr() {
    // Implementation
}

void huffman::traverse(Node* r, string str) {
    // Implementation
}

int huffman::binToDec(string inStr) {
    // Implementation
}

string huffman::decToBin(int inNum) {
    // Implementation
}

void huffman::buildTree(char a_code, string& path) {
    // Implementation
}

void huffman::createMinHeap() {
    // Implementation
}

void huffman::createTree() {
    // Implementation
}

void huffman::createCodes() {
    // Implementation
}

void huffman::saveEncodedFile() {
    // Implementation
}

void huffman::saveDecodedFile() {
    // Implementation
}

void huffman::getTree() {
    // Implementation
}

void huffman::compress() {
    // Implementation
}

void huffman::decompress() {
    // Implementation
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
        exit(1);
    }

    huffman f(argv[1], argv[2]);
    f.decompress();
    cout << "Decompressed successfully" << endl;

    return 0;
}
