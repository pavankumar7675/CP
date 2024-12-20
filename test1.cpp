#include <iostream>
#include <string>
#include <unistd.h>  // For usleep() on POSIX systems (Linux/macOS)
// #include <windows.h> // Uncomment for Windows and replace usleep with _sleep

void buildWordSmoothly(const std::string& target) {
    std::string current = "";

    for (size_t i = 0; i < target.length(); ++i) {
        current += target[i];  // Add the next character
        
        // Cycle through 'a' to 'z' for the last character
        for (char c = 'a'; c <= 'z'; ++c) {
            current.back() = c;
            std::cout << "\r" << current << std::flush;  // Print current string, stay on same line
            usleep(100000);  // Sleep for 100ms (use _sleep(100) for Windows)
        }

        // Set the correct character and display it
        current.back() = target[i];
        std::cout << "\r" << current << std::flush;
        usleep(200000);  // Sleep for 200ms (use _sleep(200) for Windows)
    }

    // Finally print the full word and finish
    std::cout << std::endl;
}

int main() {
    std::string target = "pavan";

    // Build and print the word smoothly
    buildWordSmoothly(target);

    return 0;
}
