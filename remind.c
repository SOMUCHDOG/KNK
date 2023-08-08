#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* Max number of reminders */
#define MSG_LEN 60 /* Max length of the reminder message */

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND] [MSG_LEN + 3]; /* 2d character array. Assigning the length possible for the reminders, and the length possible */
    char day_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0;

    printf("Submit '0' to exit and print reminders.\n");

    for (;;) {
        if (num_remind == MAX_REMIND) {     // If there is no more memory available, print msg and break
            printf("-- No space left --\n");
            break;
        }
        printf("Enter day and reminder: ");
        scanf("%2d", &day);     // scan the day as an int, and this allows us to compare and set the value of day.
        if (day == 0)
            break;
        sprintf(day_str, "%2d", day);       // Converts an int -> ch[] 
        read_line(msg_str, MSG_LEN); 

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0) 
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);
        
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    
    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
