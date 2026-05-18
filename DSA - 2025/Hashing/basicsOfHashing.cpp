

#include <iostream>
#include <string>

using namespace std;

int main() {

  // Hashing
  // Hashing is a technique used in data structures that efficiently stores and
  // retrieves data in a way that allows for quick access.
  /*
  Hashshing involves mapping data to a specific index in a hash table (an array
  of items) using a hash function. It enables fast retrieval of information
  based on its key. The great thing about hashing is, we can achieve all three
  operations (search, insert and delete) in O(1) time on average. Hashing is
  mainly used to implement a set of distinct items (only keys) and dictionaries
  (key value pairs).
  */

  int arr[] = {1, 2, 2, 4, 1, 6, 2, 9, 9, 0};

  // Trying to implement it myself
  // we know that the values range from 0 to 9, ie assumption for a beginner
  // currently

  int hashArr[10] = {
      0}; // 10 isn't because our array is of size 10, its because it's values
          // are knows and range from 0 to 9 to to store frequescies of values 0
          // to 9 . we need a hashmap of size 10,
  // we may have had arr size to be 100, but if the values range from 0 to 9,
  // we'll take 10 only, if the vaules ranged from 0 to 90, we would've taken
  // hash[91]
  for (int i = 0; i < 10; i++) {
    // arr[i] refers to the element at the index i
    // so we'll use arr[i] as an index for hash array to store the frequency
    hashArr[arr[i]]++;
  }

  for (int x : hashArr) {
    cout << x << " ";
  }
  cout << endl;

  // ====================================================================================
  // Character Hashing using ASCII

  string s = "ishiagrimaanshatharva"; // assuming that all chars are lowercsae
                                      // to make our life !hell,
  int hashOfStr[26] = {0}; // cause i can fit a to z withing indexes 0 to 25,
                           // which give me a space of 26 elements
  for (int i = 0; i < 21; i++) { // cause i have 12 chars in the string, 0 to 20
                                 // is 21 total indexes
    // ASCII  of lowercase 'a' is 97;
    hashOfStr[int(s[i]) - 97]++; // means that the char at index i, lets say
                                 // 'i', its ASCII value is 105, so it'll be
                                 // stored at 105-97, which is hashOfStr[8], 9th
                                 // element of hash just like the 9th alphabet
  }
  for (int x : hashOfStr) {
    cout << x << " ";
  }
  cout << endl;

  // u can sort anything with a hashmap, and its very efficient, and gives near
  // linear time complexity but it only performs better if the no of values and
  // range of values are in reasonable proportion. if u have array of size 3,
  // but {0, 1000000, 1}, the hashmap would be of size 1000001, and most of it
  // would be empty, here comparison based sorting algo.s are better but if the
  // data is continuous, hash sort may work better and even linear

  string sorted;
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < hashOfStr[i]; j++) {
      sorted += char(i + 97);
    }
  }
  cout << sorted << endl;

  return 0;
}
