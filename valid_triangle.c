#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(int triangle_sides[]);

const int sides_number = 3;

int main(void)
{   
    int triangle_sides[sides_number];
    for(int i=0; i < sides_number; i++)
    {
        while (1) {
            printf("Side %i: ", i+1);
            scanf("%d", &triangle_sides[i]);
            if (triangle_sides[i] > 0) {
                break;
            } else {
                printf("Length of a side must be larger than 0\n");
            }
        }
    }

    int is_valid = valid_triangle(triangle_sides);

    printf("Is valid triangle? %s\n", is_valid ? "true" : "false");

}

bool valid_triangle(int triangle_sides[])
{
    if (triangle_sides[0] + triangle_sides[1] == triangle_sides[2]) {
        return true;
    }
    else if (triangle_sides[1] + triangle_sides[2] == triangle_sides[0]) {
        return true;
    }
    else if (triangle_sides[0] + triangle_sides[2] == triangle_sides[1]) {
        return true;
    }
    else {
        return false;
    }
}