#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEIGHT 25
#define TRUNK_WIDTH 4
#define TRUNK_HEIGHT 5
#define DECORATIONS_COUNT 30 

void printTree();

int main() {
    srand(time(NULL)); 
    printTree();
    
printf("xmas tree with random decoration each time ");
    return 0;
}

void printTree() {
    const char* decorations[] = {"*", "o", "★"};
    char tree[HEIGHT][2 * HEIGHT - 1];          
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < 2 * HEIGHT - 1; j++) {
            if (j >= HEIGHT - i - 1 && j <= HEIGHT + i - 1) {
                tree[i][j] = '^'; 
            } else {
                tree[i][j] = ' '; 
            }
        }
    }

    
    for (int i = 0; i < DECORATIONS_COUNT; i++) {
        int row, col;
        do {
            row = rand() % HEIGHT; // Random row
            col = HEIGHT - row - 1 + rand() % (2 * row + 1); 
        } while (tree[row][col] != '^'); 
        tree[row][col] = decorations[rand() % 3][0]; // Randomly select one decoration
    }

    // Print the star on top of the tree
    for (int j = 0; j < HEIGHT - 1; j++) {
        printf(" ");
    }
    printf("★
"); 
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < 2 * HEIGHT - 1; j++) {
            printf("%c", tree[i][j]);
        }
        printf("
");
    }

    // Print the trunk
    for (int i = 0; i < TRUNK_HEIGHT; i++) {
        for (int j = 0; j < HEIGHT - TRUNK_WIDTH / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < TRUNK_WIDTH; j++) {
            printf("|");
        }
        printf("
");
    }
}
