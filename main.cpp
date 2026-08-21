#include <iostream>
#include <string>
#include "encryption.h"

using namespace std;

int main() {
  string filename;
  char mode;

  cout << "Enter the filename: " << endl;
  getline(cin >> ws, filename);

  cout << " Caesar Encrypt (e) / Decrypt (d) or Vigenere Encrypt ev / dev?: ";
  cin >> mode;

  if (mode == 'e') {
    if (encryptFile(filename, true)) {
      cout << "Encryption completed successfully." << endl;
    } else {
      cerr << "Error: Unable to perform encryption." << endl;
    }
  } else if (mode == 'd') {
    if (encryptFile(filename, false)) {
      cout << "Descryption completed successfully." << endl;
    } else {
      cerr << "Error: unable to perform descryption." << endl;
    }
  }

  return 0;
  
}

