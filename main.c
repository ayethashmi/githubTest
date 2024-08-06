#include <stdio.h>
#include <stdlib.h>


//Aayet Hashmi - U33108177
//This code uses an array to store the number of total episodes then compare the number of episodes watched to the stored values.
//the episode missing gets printed out.
int main()
{
    int episodes, watchedEpisode, notWatched;
    int i = 1;
    int x = 0;
    int y = 1;

    printf("Enter number of episodes: ");
    scanf(" %d", &episodes);

    int watched[episodes + 1]; // Array is declared with the length of total episodes + 1

    while (i <= episodes){
        watched[i] = 0;
        i = i + 1;
    }

    printf("Enter episodes watched: ");
    while (x < episodes - 1) {
        scanf(" %d", &watchedEpisode);
        watched[watchedEpisode] = 1;
        x = x + 1;
    }

    while (y <= episodes) {
        if (watched[y] == 0) {
            notWatched = y;
            break; // Exit the loop once the missing episode is found
        }
        y = y + 1;
    }

    printf("Missing episode: %d\n", notWatched);


    return 0;
}
