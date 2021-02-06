TEST PLAN

| **ID** | **DESCRIPTION**| **PRE-CONDITION** | **EXPECTED INPUT** | **EXPECTED OUTPUT** |
|--------|----------------|-------------------|--------------------|---------------------|
| **HL\_01**|Addition of two numbers | The numbers must be real | Any Number | Result of the operation       |
| **HL\_02** | Subtraction of two numbers | The numbers must be real | Any Number | Result of the operation  |
| **HL\_03** | Multiplication of two numbers | The number must be real | Any Number | Result of the operation|
| **HL\_04** | Division of two numbers | The number must be real | Any Number| Result of the operation       |
|**HL\_05** | Modulus of a number | The numbers must be real | Any Number | Result of the operation          |
| **HL\_06** | Square root of a number | The numbers must be real | Any Number | Result of the operation |
| **HL\_07** | Percentage of a number | The numbers must be real | Any Number | Result of the operation |
| **HL\_08** | Square root of a number | The numbers must be real | Any Number | Result of the operation |
| **HL\_09** | Exponential of a number | The numbers must be real | Any Number | Result of the operation |
 
 
 
 TEST CASES

| **ID**         | **DESCRIPTION**| **PRE-CONDITION** | **EXPECTED INPUT** | **EXPECTED OUTPUT** | 
| -------------- | -------------- | ----------------- | ------------------ | ------------------- | 
| **LL\_01\_01** | Testing for addition of two numbers| Two numbers are positive and integer numbers | 4,8 | 12 | 
| **LL\_01\_02** | Testing for addition of two number | Two numbers are positive and float | 4.2,8.2 | 12.4 |
| **LL\_02\_01** | Testing for subtraction of two numbers| Two numbers are positive and integer numbers | 4,8 | -4 |
| **LL\_02\_02** | Testing for subtraction of two numbers | numbers are positive and float values | 5.2,1.2| 4.0 |
| **LL\_03\_01** | Testing for multiplication of two numbers| Two numbers are positive and integer | 2,3 | 6 |
| **LL\_03\_02** | Testing for multiplication of two numbers| Two numbers are positive and float | 1.0,5.0| 5.0 |
| **LL\_04\_01** | Testing for division of two numbers| numbers are positive and integer | 16,4 | 4 |
| **LL\_04\_02** | Testing for division of two numbers| numbers are positive and float | 24.3,3.0 | 8.1 |
| **LL\_05\_01** | Testing for modulus| If number is positive and integer | 10,3 | 1 |
| **LL\_05\_02** | Testing for modulus| If number are positive and float | 10.2,2.2 | 0.6 |
| **LL\_06\_01** | Testing for square root| If number is positive and integer | 9 | 3 |
| **LL\_06\_02** | Testing for square root| If number is positive and float | 5.29 | 3.3 |
| **LL\_07\_01** | Testing for percentage| If number is positive and integer | 10,100 | 10 |
| **LL\_07\_02** | Testing for percentage| If number is positive and float | 2.5,10 | 2.5 |
| **LL\_08\_01** | Testing for cuberoot| If number is positive and integer | 27 | 3 |
| **LL\_08\_02** | Testing for cuberoot| If number is positive and float | 10.2 | Number is not a perfect cube |
| **LL\_07\_01** | Testing for exponential| If number is positive and integer | 1 | 2.718 |
| **LL\_07\_01** | Testing for exponential| If number is negative integer | -1 | 0.367 |
