#include <iostream>
#include <Windows.h>

// Function to simulate a mouse click
void LeftClick() {
    INPUT input = { 0 };
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    SendInput(1, &input, sizeof(input));

    ZeroMemory(&input, sizeof(input));
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
    SendInput(1, &input, sizeof(input));
}

bool IsEnemyInCrosshairs() {
    // Placeholder logic to determine if an enemy player is in the crosshairs
    // This could involve checking the color of pixels in the vicinity of the crosshairs
    // Or checking for specific patterns that indicate an enemy player
    // For demonstration purposes, let's assume the enemy is always in the crosshairs
    return true;
} 
int main() {
    // Main loop
    while (true) {
        // Check if the "trigger" condition is met (e.g., enemy player detected)
        bool triggerConditionMet = IsEnemyInCrosshairs();

        if (triggerConditionMet) {
            // Perform a mouse click
            LeftClick();
            std::cout << "Triggered!" << std::endl;
            std::cout << "This cheat was made by @sepremz. Don't forget to follow me on social media!" << std::endl;
        }

        // Optional: Add a delay to prevent excessive triggering
        Sleep(100); // Adjust the delay as needed
    }

    return 0;
}
