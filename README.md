# C++ Facade Method

This repository demonstrates a clean implementation of the **Facade** design pattern in C++ for a console-based application.

---

## Project Structure

- `AuthSystem.hpp / AuthSystem.cpp` – Handles user authentication  
- `PaymentSystem.hpp / PaymentSystem.cpp` – Processes payments  
- `NotificationSystem.hpp / NotificationSystem.cpp` – Sends notifications  
- `Facade.hpp / Facade.cpp` – Simplifies access to subsystems via a unified interface  
- `main.cpp` – Entry point showcasing facade usage for streamlined operations  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
Facade shop;
shop.completePurchase("Dmytro", 99.99);

// Output:
// [Auth] Logged in: Dmytro
// [Payment] Charged $99.99 to Dmytro
// [Notify] Confirmation sent to Dmytro
