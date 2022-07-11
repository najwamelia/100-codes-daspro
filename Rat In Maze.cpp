// Program to solve the Rat in Maze problem. by: Najwa Amelia Qorry 'Aina
#include <stdio.h>
#define ordo 5

//the maze problem
int maze[ordo][ordo] = {
    {0,1,0,1,0},
    {0,0,1,0,1},
    {1,0,0,0,0},
    {0,0,1,0,1},
    {0,1,0,0,0}
};

//matrix to store the solution
int solution[ordo][ordo];

//function prototype
int findWays(int r, int c);
void displaySolution();

int main() {
	// print the maze
	printf("\t=========   THE MAZE    =========\n");
	int i,j;
    for (i=0; i<ordo; i++) {
        for (j=0; j<ordo; j++) {
            printf("\t%d", maze[i][j]);
        }
        printf("\n\n");
    }
    //all elements of the solution matrix = 0
    for(i=0; i<ordo; i++) {
        for(j=0; j<ordo; j++) {
            solution[i][j] = 0;
        }
    }
    if (findWays(0,0))
        displaySolution();
    else
        printf("No path! The rat can't reach the finish point.\n");
    return 0;
}

//function to solve the maze 
int findWays(int x, int y) {
    //if the cell is the finish point, maze is solved
    if((x==ordo-1) && (y==ordo-1)) {
        solution[x][y] = 1;
        return 1;
    }
    //checking if the cell is a valid cell or not
    //the index of the cell have to be in (0, ordo-1)
    //solution[x][y] == 0 i-> the cell have not visited
    //maze[x][y] == 0 -> cell is not blocked
    if(x>=0 && y>=0 && x<ordo && y<ordo && solution[x][y] == 0 && maze[x][y] == 0) {
        solution[x][y] = 1;
        //go down
        if(findWays(x+1, y))
            return 1;
        //go right
        if(findWays(x, y+1))
            return 1;
        //go up
        if(findWays(x-1, y))
            return 1;
        //go left
        if(findWays(x, y-1))
            return 1;
        //backtracking
        solution[x][y] = 0;
        return 0;
    }
    return 0;
}

//function to print the solution matrix
void displaySolution() {
	printf("\n\t======   THE SOLVED MAZE   ======\n");
    int i,j;
    for(i=0;i<ordo;i++) {
        for(j=0;j<ordo;j++) {
            printf("\t%d", solution[i][j]);
        }
        printf("\n\n");
    }
}
