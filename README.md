# NumberProcess
NumberProcess
# Input Collection:

The program begins by prompting the user to enter a number between 1 and 9.
It then reads this input.

# Input Validation:

The program checks if the entered number is within the valid range (1 to 9).
If the number is outside this range, it displays an error message and stops execution.

# Recursive Processing:

If the input is valid, the program starts processing the number using a recursive function.
The function prints the current number.
It then checks if the number is 1. If so, it stops further processing.
If the number is not 1, the function determines if the number is odd or even:
If the number is odd, it multiplies the number by 3 and adds 1.
If the number is even, it divides the number by 2.
The function then calls itself with the new number, repeating the process.

# Plots:
![sequence_plot_1](https://github.com/Sivatech24/NumberProcess/assets/93309902/cbb5dbac-42e9-4e9c-ac8c-eede31b6277b)
![sequence_plot_2](https://github.com/Sivatech24/NumberProcess/assets/93309902/957095ef-4f39-4427-8068-4a34022e34ac)
![sequence_plot_3](https://github.com/Sivatech24/NumberProcess/assets/93309902/e2587e42-453d-4dd2-a7cb-21b191888b94)
![sequence_plot_4](https://github.com/Sivatech24/NumberProcess/assets/93309902/5d05e894-2e64-4473-a591-2fc0c6bda012)
![sequence_plot_5](https://github.com/Sivatech24/NumberProcess/assets/93309902/ca37cc83-f7db-428d-9a28-4ab430a003f3)
![sequence_plot_6](https://github.com/Sivatech24/NumberProcess/assets/93309902/59275cb5-3cbe-4e5d-868d-21fbffd65604)
![sequence_plot_7](https://github.com/Sivatech24/NumberProcess/assets/93309902/c7ccf190-f402-4045-b161-fd45219f0125)
![sequence_plot_8](https://github.com/Sivatech24/NumberProcess/assets/93309902/87a435ed-3832-4b95-8c95-bb2d7f731bb3)
![sequence_plot_9](https://github.com/Sivatech24/NumberProcess/assets/93309902/c1faad83-8144-4898-8002-9cd5803f4b03)
![PlotSingleSequence](https://github.com/Sivatech24/NumberProcess/assets/93309902/d4237ec5-290e-4ace-9cb5-119a6a5a4257)

# Termination:

The recursive calls continue until the number eventually becomes 1.
At each step, the intermediate numbers are printed, showing the sequence of transformations.

# Summary
The algorithm reads a number between 1 and 9, validates it, and then repeatedly transforms the number according to specified rules (multiply by 3 and add 1 if odd, divide by 2 if even) until the number becomes 1. This process is done recursively, and the sequence of transformations is printed at each step.
