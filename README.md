# Food Order System

A Windows desktop application for ordering food, built with **C++/CLI Windows Forms** in Visual Studio.

## Features

- User login screen (`LoginForm`)
- Home screen after login (`HomeForm`)
- [Browse the food menu]
- [Add items to an order]
- [View the order total]

## Technologies Used

- Language: C++/CLI
- Framework: .NET Framework 4.7.2
- UI: Windows Forms
- IDE: Visual Studio

## Project Structure

| File | Description |
|------|-------------|
| `LoginForm.h / .cpp / .resx` | Login screen design and logic |
| `HomeForm.h / .cpp` | Main screen shown after login |
| `FoodOrderSystem.vcxproj` | Visual Studio project file |
| `FoodOrderSystem.slnx` | Visual Studio solution file |

## How to Run

1. Clone the repository:
2. Open `FoodOrderSystem.slnx` in Visual Studio.
3. Make sure the **Desktop development with C++** workload and **C++/CLI support** are installed.
4. Set the build configuration to **x64**.
5. Press **F5** (or click **Start**) to build and run.

## Login Details

- Username: `[]`
- Password: `[]`

## Future Improvements

- Connect to a database to store orders
- Add user registration
- Add order history and billing

