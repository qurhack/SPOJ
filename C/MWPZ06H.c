// https://pl.spoj.com/problems/MWPZ06H/

#include <stdio.h>
#include <stdint.h>

int main()
{
    // Get number of tests and iterate through test cases. 
    uint16_t u16Tests;
    scanf("%hu", &u16Tests);
    for(uint16_t u16TestCase = 0; u16TestCase < u16Tests; u16TestCase++)
    {
        // Get number of participants and iterate through each participant providing their points amount. 
        uint8_t u8Participants;
        scanf("%hhu", &u8Participants);

        // Create array to hold points of each participant.
        uint16_t awPoints[u8Participants];
        // Create variable in which maximum points will be kept for reference. 
        uint16_t u16MaxPoints = 0u;
        for(uint8_t u8Participant = 0u; u8Participant < u8Participants; u8Participant++)
        {
            // Provide each participant points and save it inside the array.
            uint16_t u16ParticipantPoints;
            scanf("%hu", &u16ParticipantPoints);
            awPoints[u8Participant] = u16ParticipantPoints;

            // Check maximum points value and override it if cond is true. 
            if(u16ParticipantPoints > u16MaxPoints)
            {
                u16MaxPoints = u16ParticipantPoints;
            }
        }

        // Create variable to store information regarding the place on which highest point value is kept. 
        // When few paricipants have maximum points value this variable will be incremented. 
        uint8_t u8HighestPointPlace = 0u;

        // Iterate through points array in order to sort it. 
        for(uint8_t u8Participant = 1u; u8Participant < u8Participants; u8Participant++)
        {
            if((awPoints[u8Participant-1u] > awPoints[u8Participant]) && (awPoints[u8Participant-1u] != u16MaxPoints))
            {
                uint16_t u16TmpPoints = awPoints[u8Participant];
                awPoints[u8Participant] = awPoints[u8Participant-1u];
                awPoints[u8Participant-1u] = u16TmpPoints;

                u8Participant = u8HighestPointPlace; // To iterate through that loop till everything is in right order (min -> max excluding maximum points).
            }
            else if(awPoints[u8Participant] == u16MaxPoints)
            {
                uint16_t u16TmpPoints = awPoints[u8HighestPointPlace];
                awPoints[u8HighestPointPlace] = awPoints[u8Participant];
                awPoints[u8Participant] = u16TmpPoints;

                u8Participant = u8HighestPointPlace;
                u8HighestPointPlace++;
            }
        }

        // Print array
        for(uint8_t u8Participant = 0u; u8Participant < u8Participants; u8Participant++)
        {
            printf("%hu ", awPoints[u8Participant]);
        }
        printf("\n");
    }

    return 0;
}