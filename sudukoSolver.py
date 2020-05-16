import numpy as np
def possible(x,y,n):
    '''checking possibility'''
    global grid
    for i in range(0,9):    #checking Rows for matching number
        if grid[x][i] == n:
            return False
    for i in range(0,9):    #checking column for matching number
        if grid[i][y] == n:
            return False
    x0 = (x // 3) * 3
    y0 = (y // 3) * 3
    for i in range(0,3):    #checking related 3*3 box for matching number
        for j in range(0,3):
            if grid[x0+i][y0+j] == n:
                return False
    return True
def solve():
    '''Solve the suduko'''
    global grid
    #Check each and every element of suduko
    for i in range(0,9):
        for j in range(0,9):
            if grid[i][j] == 0:     #if there is no number ie blank
                for n in range(1,10):
                    if possible(i,j,n):
                        grid[i][j] = n
                        solve()
                        grid[i][j] = 0
                return
    print(np.matrix(grid))
    input("More?")
grid = [[0,0,7,0,0,8,0,0,0],
        [0,9,5,0,0,2,6,0,0],
        [0,0,0,1,0,0,2,5,0],
        [0,1,0,0,0,0,0,7,9],
        [6,0,0,0,0,9,0,0,0],
        [0,0,8,0,0,4,0,0,0],
        [0,0,0,0,0,0,0,0,0],
        [0,0,6,4,0,0,8,0,0],
        [0,3,0,0,5,0,0,2,0]]
solve()
