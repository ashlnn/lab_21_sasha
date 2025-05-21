#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
    double z;
} Point3D;

double calculateDistance(Point3D a, Point3D b) {
    return sqrt((a.x - b.x)*(a.x - b.x) +
                (a.y - b.y)*(a.y - b.y) +
                (a.z - b.z)*(a.z - b.z));
}

int main() {
    int N;
    printf("Enter number of point pairs: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        Point3D p1, p2;
        printf("Enter coordinates for point 1 (x y z): ");
        scanf("%lf %lf %lf", &p1.x, &p1.y, &p1.z);
        printf("Enter coordinates for point 2 (x y z): ");
        scanf("%lf %lf %lf", &p2.x, &p2.y, &p2.z);

        double distance = calculateDistance(p1, p2);
        printf("Distance between point %d: %.2lf\n", i + 1, distance);
    }

    return 0;
}
