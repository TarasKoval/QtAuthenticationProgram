# User authentication program based on typing dynamics 

### Target platform: Ubuntu 16.04

Language: C++11 compiled under GCC 5.4.0 using CMake 3.5.2

## Installing

In bash:

```
    cmake ./CMakeLists.txt
    make
```

The executable will be placed in "build" folder.

## Brief description

The program works in two modes:
- learning (creating the biometric identifier)
- identification (comparison with the biometric identifier).

You can read full task in readme.pdf file (Ukrainian language)

### Learning

You type in word "demolition" and time between keypress will be written to the file.

### Identification

You type in word "demolition" and your typing dynamics will be compared with biometric standard.

Compare methods:

1. The exclusion of gross errors based on the Student's coefficient

2. Checking the equality of centers the distribution of 
two normal general sets based on the Fisher coefficient

3. Checking if differences were caused by accidental reasons

## Type I and type II errors

- Type 1 = 25%

- Type 2 = 20%

Such a large percentage of errors is a direct consequence of the use of these verification methods.
That was the task.

## Author

* **Taras Koval** - *All work* - [TarasKoval](https://github.com/TarasKoval)

## License

No license - do what you want
