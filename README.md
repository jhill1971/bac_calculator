# Blood Alcohol Content (BAC) Calculator

This is a simple C program that calculates the Blood Alcohol Content (BAC) based on the number of drinks consumed, body weight, sex, and time elapsed since the last drink.

## Overview

The BAC is calculated using the Widmark formula:

\[ \text{BAC} = \frac{{A \times 5.14}}{{W \times r - (0.015 \times H)}} \]

Where:
- \( A \) is the total amount of alcohol consumed, in ounces.
- \( W \) is the body weight in pounds.
- \( r \) is the alcohol distribution ratio, 0.73 for men and 0.66 for women.
- \( H \) is the number of hours since the last drink.

## Usage

1. Run the program.
2. Enter the number of drinks consumed.
3. Enter your body weight in pounds.
4. Enter your gender (m for male, f for female).
5. Enter the number of hours since your last drink.
6. The program will then calculate and display your BAC along with a corresponding message indicating your level of intoxication.

## Formula Adjustments

- **Average Ounces per Drink**: The program assumes an average of 0.493835 ounces of alcohol per drink.
- **Message Thresholds**: The program provides different messages based on the calculated BAC:
  - "You're okay!" if BAC is <= 0.04
  - "Better watch it! Slow down!" if BAC is between 0.06 and 0.07
  - "Now you can't drive, drunky!" if BAC is between 0.08 and 0.10
  - "Greetings comrade Yeltsin!" if BAC is between 0.11 and 0.19
  - "Don't forget to breathe, my child of the Emerald Isle!" for BAC above 0.19

## Notes

- Ensure that the inputs are valid. The program prompts the user to re-enter input if an invalid value is provided.
- The program assumes that all inputs are in the expected format and within acceptable ranges.

