<div id="top"></div>

<h1 align="center">choupi-tester</h1>

  <p align="center">
    Tester for push_swap project, made in Python
    <br />
  </p>
</div>



<!-- ABOUT THE PROJECT -->
## Installation

- Install matplotlib
```sh
python3 -m pip install matplotlib
```
- Clone (in push_swap folder)
```sh
git clone https://github.com/AntoineA67/choupi-tester/
```



<!-- GETTING STARTED -->
## How to use

- compile your push_swap program then:
```sh
python3 choupi-tester/choupi-tester.py
```
![Screenshot use][use]

- Minimal use, only tests 1, 3, 5, 100, 500
 ```sh
  python3 choupi-tester/choupi-tester.py -m
  ```
  ![Screenshot minimal][minimal]

  

- Help
  ```sh
  python3 choupi-tester/choupi-tester.py -h
  ```
- Range, default: 0 to 50

  Example from 20 to 100 `python3 choupi-tester/choupi-tester.py 20 100`
  ![Screenshot 20-100][screenshot_20-100]
  
  Example from 0 to 40 `python3 choupi-tester/choupi-tester.py 40`
  
 - Average, will execute N tests per value in range, default: 10
  The highest this value, the best the curve will be
  Example with 3 / with 300:
  ![Screenshot average 3][a3]
  ![Screenshot average 300][a300]


[screenshot_20-100]: screenshots/20-100.png
[a3]: screenshots/a3.png
[a300]: screenshots/a300.png
[use]: screenshots/use.png
[minimal]: screenshots/mini.png
