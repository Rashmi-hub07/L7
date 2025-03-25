#include<stdio>
int main()
{
	int choices;

	printf("Enter your Engeneering coures:");
	printf("1.Electronics and Communication");
	pritnf("2.AIML");
	printf("3.Computer Science");
	printf("4.Data Science");
	printf("Enter the number from 1 to 4:");

	scanf("%d", &choice);

	 switch (choice) {
        case 1:
            printf("You have selected Computer Science Engineering.\n");
            break;
        case 2:
            printf("You have selected Mechanical Engineering.\n");
            break;
        case 3:
            printf("You have selected Electrical Engineering.\n");
            break;
        case 4:
            printf("You have selected Civil Engineering.\n");
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
	
