#include <iostream>
#include <string>
#include "encryption.h"

using namespace std;

int main() {
  string filename;
  char mode;

  cout << "Enter the filename: " << endl;
  getline(cin >> ws, filename);

  cout << "Encrypt (e) or Decrypt (d)?: ";
  cin >> mode;

  if (mode == 'e' || mode == 'E') {
    if (encryptFile(filename, true)) {
      cout << "Encryption completed successfully." << endl;
    } else {
      cerr << "Error: Unable to perform encryption." << endl;
    }
  } else if (mode == 'd' || mode == 'D') {
    if (encryptFile(filename, true)) {
      cout << "Descryption completed successfully." << endl;
    } else {
      cerr << "Error: unable to perform descryption." << endl;
    }
  } else {
    cerr << "Error: Invalid mode selected" << endl;
  }

  return 0;
  
}

