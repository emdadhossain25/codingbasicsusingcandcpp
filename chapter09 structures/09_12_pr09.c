#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;

} date;

void display(date d)
{
    printf("the date is: %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCmp(date d1, date d2)
{
    //make decision on the basis of year comparison
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    //make decision on the basis of month comparison
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    //make decision on the basis of date comparison
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }

    return 0;
}


int main()
{
    date d1 = {2, 11, 21};
    date d2 = {2, 11, 21};
    display(d1);
    display(d2);
    int result = dateCmp(d1,d2);
    if (result==1)
    {
        printf("d1 is greater then d2\n");
    }else if (result==-1)
    {
        printf("d2 is greater then d1\n");
        
    }else
    {
        printf("d2 and d1 are equal\n");
        
    }
    
    
        return 0;
}