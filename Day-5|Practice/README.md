# :sparkles: Day-5 | Practice Set | MCQ :sparkles:

- ### What will be the output of the following,

  ```c++
  int i;
  for(i=0; i<5; i++)
      cout << i;
      cout << "Okay bye";
  ```

  - [ ] 1
  - [ ] 01234
  - [x] 01234Okay bye
  - [ ] 01234 Okay bye

- ### What does this for loop signify?

  ```c++
  for(;;)
  ```

  - [ ]Empty loop.
  - [ ]Meaningless existence in code.
  - [ ]Syntax error.
  - [x]Infinite Loop.

- ### What's the error in following code snippet?

  ```c++
  int num, rev=0;
  while(num>0){
      int r = num%10;
      rev = rev*10 + r;
  }
  ```

  - [ ]num is declared outside `while` body.
  - [x]Loop variable isn't updated.
  - [ ]`int r` is declared inside `while` body.
  - [ ]Syntax error.
