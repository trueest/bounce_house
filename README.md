A local party equipment company offers bounce house rentals. Write a C program that calculates the cost for a bounce house rental. The program should prompt the user to input the selection, the number of days, and the number of hours the bounce house will be rented.

 

The rental charges are structured as follows:

  There is a flat fee for the first three hours of the rental, which remains constant regardless of the actual time used within the first three hours.  (The first three hours flat fee does not apply to multi-day rental). 
  For rentals exceeding 3 hours, an additional hourly fee applies.
  There exists a per day for rentals. It's also the maximum charge for a day. If the calculated hourly charge exceeds this maximum, the charge for that day will be capped at the maximum
  
****************************************************************************************************************************************
  
  Requirements

1. The user enters the bounce house selection, enter the number of days, and number of hours. The program calculates and prints the charge. Follow the format of the examples below.
2. Your program should validate the  selection. If the selection is not in the range of 1 to 4, print the message "Invalid selection. Select from 1 to 4." and exit the program.
3. Your program should validate hours (>=0 and <24 hours). If the selection is not in the range, print the message "Invalid hours." and exit the program.
4. Hint: use / and % operators might be useful in the calculations

****************************************************************************************************************************************

Examples (your program must follow this format precisely)
Example #1:
Please select from four bounce houses: 1, 2, 3, and 4
Enter bounce hourse selection: 6
Invalid selection. Select from 1 to 4.

**************************************************************************************************************************************** 

Example #2:
Please select from four bounce houses: 1, 2, 3, and 4
Enter bounce house selection: 3
Enter days: 0
Enter hours: 30
Invalid hours.

****************************************************************************************************************************************

Example  #3:
Please select from four bounce houses: 1, 2, 3, and 4
Enter bounce house selection: 1
Enter days: 1
Enter hours: 7
Charge($): 136

****************************************************************************************************************************************

Example #4:
Please select from four bounce houses: 1, 2, 3, and 4
Enter bounce house selection: 2
Enter days: 10
Enter hours: 2
Charge($): 1224

****************************************************************************************************************************************

Example #5:
Please select from four bounce houses: 1, 2, 3, and 4
Enter bounce house selection: 3
Enter days: 0
Enter hours: 12
Charge($): 150
