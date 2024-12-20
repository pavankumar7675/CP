#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> numbers;
    int x;
    // Add elements to the vector at end
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(1);

    // Access and print elements
    cout << "First element: " << numbers.front() << std::endl;
    cout << "Second element: " << numbers.at(1) << std::endl;
    cout << "third element: " << numbers.back() << std::endl;
    // Print the size of the vector
    cout << "Size of the vector: " << numbers.size() << std::endl;

    // Add elements to the vector at middle
    numbers.insert(numbers.begin()+2,5);
    for(int i : numbers)
        cout << i << " ";
    numbers.erase(numbers.begin()+2);

    numbers.resize(5,1);

    sort(numbers.rbegin(),numbers.rend());

    bool found = binary_search(numbers.begin(),numbers.end(),0);
    cout << found << "\n";

    reverse(numbers.begin(),numbers.end());

    rotate(numbers.begin(),numbers.begin()+1,numbers.end());

    // Iterate and print elements
    cout << "Elements in the vector: ";
    for (x=0; x != numbers.size();x++) {
        cout << numbers[x] << " ";
    }
    cout << std::endl;
    
    auto it = numbers.rbegin(); 
    x = *it;
    cout << x;
    
    // Remove the last element
    numbers.pop_back();

    // Clear the vector
    numbers.clear();

    return 0;
}
