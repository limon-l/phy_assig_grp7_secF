#include <stdio.h>
int main(){
    double m, w, s;

    printf("Order of diffraction(m): ");
    scanf("%lf", &m);

    printf("Wavelength of light(nm): ");
    scanf("%lf", &w);

    printf("Slit separation(um): ");
    scanf("%lf", &s);

    double w1 = m * w * 10 / s;

    const char *color = "";
    if (w1 >= 380 && w1 <= 450) {
        color = "violet";
    } else if (w1 > 450 && w1 <= 485) {
        color = "blue";
    } else if (w1 > 485 && w1 <= 500) {
        color = "cyan";
    } else if (w1 > 500 && w1 <= 565) {
        color = "green";
    } else if (w1 > 565 && w1 <= 590) {
        color = "yellow";
    } else if (w1 > 590 && w1 <= 625) {
        color = "orange";
    } else if (w1 > 625 && w1 <= 750) {
        color = "red";
    }

    printf("Numeric value of the wavelength: %.2f nm\n", w1);
    printf("Color of the light: %s\n", color);

    return 0;
}

