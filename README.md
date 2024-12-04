# food-menu
# System Programming Term Project
## Project Name: Meal Menu Recommendation Program

### How to Compile:
Compile the `code.c` file using the `gcc` Linux compiler.  
(Add the `-lpthread` option if there are thread-related reference errors)

---

## Project Overview
This project was inspired by the common struggle of deciding on a meal. The program randomly recommends a menu based on user preferences, making it easier to choose a meal.

**(However, based on actual use of the program...)**  
Most users either keep running the program until the desired menu is displayed or end up eating what they originally wanted 99% of the time.

---

## Usage Instructions
1. **Register User**  
2. **Menu Recommendation (1)**  
3. **Menu Registration (2)**  

   Follow the instructions provided after making a selection.

---

### Changes Based on User Selection:
- Updates the probability values in the `probability.txt` file for the user.
- From the next execution onward, preferences are reflected in the recommendations.

---

## Menu Registration
- Menus are saved in `*.txt` files inside a folder named after the user.

---

## `.txt` File Structure

### 1. Menu Files by Category
- Format: Number of menus, Menu1, Menu2, Menu3, ...,  
  (Ensure a trailing comma `,` at the end - important for manual editing)

### 2. Probability File (`probability.txt`)
- Values are set for Korean, Japanese, Chinese, and Western cuisine in sequence.  
  Example: `9 < x < 100`
