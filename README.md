# IntegrationDifferentiationCalculator
This Repo consist of C programs that are able to perform mathematical operations including derivatives, integration, product and quotient rules, and transcendental functions.The program is implemented using core C features such as character arrays, strings, and mathematical libraries, showcasing efficient parsing and computation techniques.

IntegrationDifferentiationCalculator is a C program for performing differentiation of mathematical expressions, including polynomials and transcendental functions. This project showcases advanced string parsing, computational logic, and the use of C features like character arrays.

## Features
- Compute derivatives (single-variable).
- Perform integration of basic functions.
- Apply product and quotient rules for derivatives.
- Evaluate transcendental functions like exponential, logarithmic, and trigonometric functions.
- **Polynomial Differentiation**: Handles terms like `coeffx^power`.
- **Transcendental Differentiation**: Supports `ln(x)`, `e^(x)`, `sin(x)`, `cos(x)`, and `tan(x)`.
- **Input Parsing**: Processes input terms wrapped in parentheses for accurate differentiation.

## Input Format
To ensure proper execution, follow these guidelines:
1. Always include coefficients for variables, even if it's `1` (e.g., `1x^2` instead of `x^2`).
2. Wrap each term in parentheses:
   - Example: `(4x^2)+(10x^3)+ln(2x^5)+e^(1x^3)+sin(5x^4)`
3. Supported formats:
   - **Logarithm**: `ln(coeffx^power)`
   - **Exponential**: `e^(coeffx^power)`
   - **Trigonometric**: `sin(coeffx^power)`, `cos(coeffx^power)`, `tan(coeffx^power)`

## Usage
1. Compile the program:
   ```bash
   gcc -o IntegrationDifferentiationCalculator calculator.c -lm
