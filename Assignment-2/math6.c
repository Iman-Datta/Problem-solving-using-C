// Write a C program to input electricity unit consumed and calculate the total electricity bill according to the given condition:
// ▪ For first 50 units Rs. 1.25/unit
// ▪ For next 50 units Rs. 1.50/unit
// ▪ For next 100 units Rs. 2.00/unit
// ▪ For next 100 units Rs. 2.50/unit
// ▪ For unit above 300 Rs. 3.25/unit
// An additional surcharge of 20% is added to the overall bill.

# include<stdio.h>
# include<math.h>

int main () {
    int unit;
    double bill;

    printf("Enter your electricity unit: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        bill = unit * 1.25;
    }
    else if(unit<= 100 && unit>=51) {
        bill = unit * 1.50;
    }
    else if(unit<= 200 && unit>=101){
        bill = unit * 2;
    }
    else if (unit <= 300 && unit>= 201){
        bill = unit * 2.50;
    }
    else{
        bill = unit * 3.25;
    }
    bill = bill * 0.2;
    printf("Your total electricity bill is: Rs. %.2lf \n", bill);
    return 0;
}