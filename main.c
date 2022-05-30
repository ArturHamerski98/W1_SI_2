#include <stdio.h>
#include <math.h>

const float PI_F = 3.14159265358979f;

struct Points {
    int x;
    int y;
};

float calculateLenght(struct Points punkt1, struct Points punkt2) {

    return (float)pow(((punkt2.x - punkt1.x) * (punkt2.x - punkt1.x) + (punkt2.y - punkt1.y) * (punkt2.y - punkt1.y)), 0.5);

}

void calculateCircle() {
    int menu_choice;
    printf("1 Input dimension\n2 Input coordinates ");
    scanf_s("%d", &menu_choice);
    float radius;
    struct Points punkt[2];
    switch (menu_choice)

    {
    case 1:
        printf("1 Input radius of circle: ");
        scanf_s("%f", &radius);

        printf("Perimeter: %f Field: %f", 2 * PI_F * radius, PI_F * radius * radius);
        break;
    case 2:
        printf("1 Input middle of circle coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[0].x);
        printf("Y: ");
        scanf_s("%d", &punkt[0].y);
        printf("1 Input point on the circle coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[1].x);
        printf("Y: ");
        scanf_s("%d", &punkt[1].y);
        radius = calculateLenght(punkt[0], punkt[1]);
        printf("Perimeter: %f Field: %f", 2 * PI_F * radius, PI_F * radius * radius);
        break;
    default:
        break;
    }
}

void calculateRecktangle() {
    int menu_choice;
    printf("1 Input dimension\n2 Input coordinates ");
    scanf_s("%d", &menu_choice);
    float side_a, side_b;
    struct Points punkt[3];
    switch (menu_choice)

    {
    case 1:
        printf("1 Input length of side a: ");
        scanf_s("%f", &side_a);

        printf("1 Input rlength of side b: ");
        scanf_s("%f", &side_b);

        printf("Perimeter: %f Field: %f", 2 * side_a + 2 * side_b, side_a * side_b);
        break;
    case 2:
        printf("Input point A coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[0].x);
        printf("Y: ");
        scanf_s("%d", &punkt[0].y);
        printf("Input point B coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[1].x);
        printf("Y: ");
        scanf_s("%d", &punkt[1].y);
        printf("Input point C coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[2].x);
        printf("Y: ");
        scanf_s("%d", &punkt[2].y);
        side_a = calculateLenght(punkt[0], punkt[1]);
        side_b = calculateLenght(punkt[1], punkt[2]);
        printf("Perimeter: %f Field: %f", 2 * side_a + 2 * side_b, side_a * side_b);
        break;
    default:
        break;
    }
}

void calculateTriangle() {
    int menu_choice;
    printf("1 Input dimension\n2 Input coordinates ");
    scanf_s("%d", &menu_choice);
    float side_a, side_b, side_c;
    float half_perimeter = 0;
    struct Points punkt[3];
    switch (menu_choice)

    {
    case 1:
        printf("1 Input length of side a: ");
        scanf_s("%f", &side_a);

        printf("1 Input llength of side b: ");
        scanf_s("%f", &side_b);

        printf("1 Input length of side c: ");
        scanf_s("%f", &side_c);

        half_perimeter = (side_a + side_b + side_c) / 2;
        printf("Perimeter: %f Field: %f", side_a + side_b + side_c,
            pow(half_perimeter * (half_perimeter - side_a) * (half_perimeter - side_b) * (half_perimeter - side_c), 0.5));
        break;
    case 2:
        printf("Input point A coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[0].x);
        printf("Y: ");
        scanf_s("%d", &punkt[0].y);
        printf("Input point B coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[1].x);
        printf("Y: ");
        scanf_s("%d", &punkt[1].y);
        printf("Input point C coordinate:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[2].x);
        printf("Y: ");
        scanf_s("%d", &punkt[2].y);
        side_a = calculateLenght(punkt[0], punkt[1]);
        side_b = calculateLenght(punkt[1], punkt[2]);
        side_c = calculateLenght(punkt[2], punkt[0]);
        half_perimeter = (side_a + side_b + side_c) / 2;
        printf("Perimeter: %f Field: %f", side_a + side_b + side_c,
            pow(half_perimeter * (half_perimeter - side_a) * (half_perimeter - side_b) * (half_perimeter - side_c), 0.5));
        break;
    default:
        break;
    }
}

void calculateTrapeze() {
    int menu_choice;
    printf("1 Input dimension\n2 Input coordinates ");
    scanf_s("%d", &menu_choice);
    float long_parallel_side, short_parallel_side, non_parallel_side1, non_parallel_side2;
    float half_perimeter;
    struct Points punkt[4];
    switch (menu_choice)

    {
    case 1:
        printf("Input length of long parallel side: ");
        scanf_s("%f", &long_parallel_side);

        printf("Input length of short parallel side: ");
        scanf_s("%f", &short_parallel_side);

        printf("Input length of first non parallel side: ");
        scanf_s("%f", &non_parallel_side1);

        printf("Input length of second non parallel side: ");
        scanf_s("%f", &non_parallel_side2);
        //https://www.quora.com/How-do-I-calculate-the-area-of-a-trapezium-when-the-sides-are-given
        half_perimeter = (long_parallel_side + short_parallel_side + non_parallel_side1 + non_parallel_side2) / 2;
        printf("Perimeter: %f Field: %f", long_parallel_side + short_parallel_side + non_parallel_side1 + non_parallel_side2,
            (long_parallel_side + short_parallel_side) / (long_parallel_side - short_parallel_side) * pow((half_perimeter - long_parallel_side) *
                (half_perimeter - short_parallel_side) * (half_perimeter - short_parallel_side - non_parallel_side1) * (half_perimeter - short_parallel_side - non_parallel_side2), 0.5));
        break;
    case 2:
        printf("Input point A coordinate of long parallel side:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[0].x);
        printf("Y: ");
        scanf_s("%d", &punkt[0].y);
        printf("Input point B coordinate of long parallel side:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[1].x);
        printf("Y: ");
        scanf_s("%d", &punkt[1].y);
        printf("Input point C coordinate of short parallel side:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[2].x);
        printf("Y: ");
        scanf_s("%d", &punkt[2].y);
        printf("Input point D coordinateof short parallel side:\n ");
        printf("X: ");
        scanf_s("%d", &punkt[3].x);
        printf("Y: ");
        scanf_s("%d", &punkt[3].y);
        long_parallel_side = calculateLenght(punkt[0], punkt[1]);
        short_parallel_side = calculateLenght(punkt[2], punkt[3]);
        non_parallel_side1 = calculateLenght(punkt[1], punkt[2]);
        non_parallel_side2 = calculateLenght(punkt[0], punkt[3]);

        half_perimeter = (long_parallel_side + short_parallel_side + non_parallel_side1 + non_parallel_side2) / 2;
        printf("Perimeter: %f Field: %f", long_parallel_side + short_parallel_side + non_parallel_side1 + non_parallel_side2,
            (long_parallel_side + short_parallel_side) / (long_parallel_side - short_parallel_side) * pow((half_perimeter - long_parallel_side) *
                (half_perimeter - short_parallel_side) * (half_perimeter - short_parallel_side - non_parallel_side1) * (half_perimeter - short_parallel_side - non_parallel_side2), 0.5));
        break;
    default:
        break;
    }
}

int main() {
    int menu_choice;

    while (1 == 1) {
        printf("Choose geometric figure.\n1 Circle\n2 Rectangle\n3 Triangle\n4 Trapeze ");
        scanf_s("%d", &menu_choice);

        switch (menu_choice) {
        case 1:
            calculateCircle();
            break;

        case 2:
            calculateRecktangle();
            break;
        case 3:
            calculateTriangle();
            break;
        case 4:
            calculateTrapeze();
            break;

        default:
            break;
        }
    }

}