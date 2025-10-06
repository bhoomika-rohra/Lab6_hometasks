#include <stdio.h>

int main() {
    int reading[7];
    char days[7][10] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    int total = 0;
    int longesttime, shortesttime;
    int longestday = 0, shortestday = 0;
    int count20 = 0;
    int count45 = 0;
    double avg = 0;

    for (int i = 0; i < 7; i++) {
        printf("Enter reading time for %s (in minutes): ", days[i]);
        scanf("%d", &reading[i]);
        total += reading[i];
    }
    longesttime = reading[0];
    shortesttime = reading[0];
    for (int i = 0; i < 7; i++) {
        if (reading[i] > longesttime) {
            longesttime = reading[i];
            longestday = i;
        }
        if (reading[i] < shortesttime) {
            shortesttime = reading[i];
            shortestday = i;
        }
        if (reading[i] >= 20) { 
            count20++;
        }
        if (reading[i] > 45) {
            count45++;
        }
    }
    avg = (double)total / 7;
    int total_hours = total / 60;
    int total_minutes = total % 60;
    double consistency = ((double)count20 / 7) * 100;

    printf("Total reading time: %d hours and %d minutes\n", total_hours, total_minutes);
    printf("Average daily reading time: %.2f minutes\n", avg);
    printf("Longest reading session: %d minutes on %s\n", longesttime, days[longestday]);
    printf("Shortest reading session: %d minutes on %s\n", shortesttime, days[shortestday]);
    printf("Number of days meeting 20-minute goal: %d\n", count20);
    printf("Number of days reading more than 45 minutes: %d\n", count45);
    printf("Reading consistency: %.2f%%\n", consistency);

    if (consistency == 100) {
        printf("You met your reading goal every day!\n");
    } else if (consistency >= 70) {
        printf("You're quite consistent with your reading.\n");
    } else if (consistency >= 40) {
        printf("Try to read more regularly.\n");
    } else {
        printf("Try to make reading a daily habit.\n");
    }

    return 0;
}

