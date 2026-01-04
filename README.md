# COMPILER-DESIGN-BASICS

*COMPANY NAME*: CODTECH IT SOLUTION

*NAME*: MD MAHMUD HUSSAIN

*INTERN ID*: CTISAK20 

*DOMAIN*: C PRAOGAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

Task 3: Lexical Analyzer Implementation (Compiler Design Basics)
Introduction

Task 3 of the CODTECH Internship is based on the fundamental concept of Compiler Design, specifically the implementation of a Lexical Analyzer using the C programming language. A compiler is a system software that translates high-level programming language code into machine-level code. The compilation process is divided into several phases, and lexical analysis is the very first phase of this process.

This task focuses on building a simple lexical analyzer that reads source code from a file and identifies basic tokens such as keywords, identifiers, and operators. The task provides hands-on exposure to how compilers process source code internally and how raw program text is broken into meaningful units for further analysis.

Objective of the Task

The main objectives of Task 3 are:

To understand the role of lexical analysis in compiler design.

To identify and classify tokens such as keywords, identifiers, and operators.

To read input program code from a file.

To process characters sequentially and form valid tokens.

To display token information clearly in the terminal.

To strengthen knowledge of file handling, strings, and character processing in C.

What is a Lexical Analyzer?

A lexical analyzer, also known as a scanner, is the first phase of a compiler. Its primary function is to scan the source code character by character and convert it into a sequence of tokens. Tokens are the smallest meaningful units of a program.

For example:

int a = b + 5;


The lexical analyzer identifies:

int → Keyword

a, b → Identifiers

= , + → Operators

5 → Constant

By converting raw source code into tokens, lexical analysis simplifies the work of later compiler phases such as syntax analysis and semantic analysis.

Tokens and Their Types

In this task, the lexical analyzer is designed to recognize the following token types:

1. Keywords

Keywords are reserved words in a programming language that have predefined meanings. Examples include:

int

float

if

else

while

return

These words cannot be used as identifiers.

2. Identifiers

Identifiers are user-defined names used to identify variables, functions, or other entities in a program. Examples:

a

sum

total

Identifiers usually consist of alphabets, digits, or underscores and must not be keywords.

3. Operators

Operators are symbols that perform operations on operands. Examples:

Arithmetic operators: +, -, *, /

Assignment operator: =

In this task, basic operators are identified and displayed.

Description of the Implemented Program

The program developed for Task 3 is a simple lexical analyzer written in C. It reads source code from an input file (input.txt) and processes it character by character to identify tokens.

The implementation follows these logical steps:

1. Reading Input from File

The program opens an external text file containing sample source code using file handling functions such as fopen() and fgetc(). Reading from a file instead of hardcoding input makes the program more realistic and closer to actual compiler behavior.

2. Character-by-Character Scanning

The file content is scanned one character at a time. This mimics how a real compiler reads source code sequentially. Each character is analyzed to determine whether it forms part of a keyword, identifier, operator, or delimiter.

3. Buffering Characters

When an alphanumeric character is encountered, it is stored in a temporary buffer. This buffer continues to collect characters until a delimiter such as space or newline is found. Once a delimiter is encountered, the buffered word is processed.

4. Keyword Identification

The buffered word is compared against a predefined list of keywords using string comparison functions. If a match is found, the word is classified as a keyword.

5. Identifier Identification

If the buffered word is not a keyword, it is classified as an identifier. This differentiation is crucial because keywords and identifiers play different roles in a program.

6. Operator Detection

Whenever an operator character such as +, -, *, /, or = is encountered, it is immediately classified and displayed as an operator token.

7. Displaying Output

The program prints the identified tokens directly in the terminal in a readable format. Each token is displayed with its corresponding category, making the output easy to understand and verify.

Error Handling

Basic error handling is implemented to ensure smooth execution:

If the input file cannot be opened, an appropriate error message is displayed.

The program terminates gracefully if file operations fail.

This ensures reliability and prevents unexpected crashes.

Technologies and Tools Used

Programming Language: C

Compiler: GCC

Editor/IDE: Visual Studio Code

Platform: Cross-platform (Windows, macOS, Linux)

Program Output

The output of the program is displayed in the terminal and includes:

Keywords identified from the input file

Identifiers found in the code

Operators detected during scanning

Sample output:

Keyword: int
Identifier: a
Operator: =
Identifier: b
Operator: +
Identifier: c


This output confirms that the lexical analyzer correctly processes the source code.

Importance of Lexical Analysis

Lexical analysis is a critical stage in compiler design because:

It simplifies syntax analysis by grouping characters into tokens.

It removes irrelevant characters such as whitespace and comments.

It improves efficiency by reducing the complexity of later compiler stages.

Without lexical analysis, syntax parsing would be significantly more complex and inefficient.

Learning Outcomes

After completing Task 3, the following learning outcomes were achieved:

Understanding the role of lexical analysis in a compiler.

Practical implementation of a basic lexical analyzer.

Improved knowledge of file handling in C.

Stronger understanding of strings and character manipulation.

Ability to classify tokens correctly.

Exposure to real-world compiler design concepts.

Limitations of the Program

While the implemented lexical analyzer works correctly for basic tokens, it has some limitations:

It does not handle comments.

It does not distinguish constants separately.

It supports only a limited set of operators and keywords.

These limitations are acceptable for an introductory-level implementation and can be extended in future improvements.

Conclusion

Task 3 successfully demonstrates the core concept of lexical analysis, which is the first phase of compiler design. By implementing a simple lexical analyzer in C, this task provides valuable insight into how source code is transformed into tokens before further compilation stages.

The task strengthens understanding of compiler internals, file handling, string processing, and logical problem-solving. It also serves as a stepping stone toward advanced compiler topics such as syntax analysis, semantic analysis, and code generation.

Overall, Task 3 is a crucial learning experience that bridges theoretical compiler concepts with practical implementation, making it an essential part of the internship program.

#OUTPUT


