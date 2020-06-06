# Window-Tinting
A C program to find out the window fitting plan and the number of role of gold tinting film to be used to cover windows.

--------------

Assume that you have a company that tints building windows. You have found a good price on nice gold tinting film that comes in rolls that are 5 feet wide and 92 feet long.

To determines the number of rolls that will be needed to be purchased to cover a building completely, we assume each window is the exact same size and that the windows are always less than or equal to 5 feet wide.

This program allows user to input the number of floors, the number of windows on each floor, and the dimensions of the winodw in inches.

Note that when tinting a window, it must be done with one entire piece of film, which means, we don't cut pieces of film to fit on the windows. The program determine whether the 5 foot width of tint roll is able to cover two or more windows. For example, if the windows are 12" x 24", then we can cover five windows with just two feet of roll. But if placed sideways, we can only cover 4 windows, with a little waste left over. So this program chooses the best option in this case. As part of assumsion, we do not apply any other “packing/fitting” algorithm. Only consider which direction to put the tint on: 1. up and down (VFit) OR 2. left to right (HFit).

The program calculate the number of rolls needed and provide the best fitting plan as output.
