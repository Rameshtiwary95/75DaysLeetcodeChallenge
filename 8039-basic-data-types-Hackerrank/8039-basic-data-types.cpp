#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    // Read the space-separated inputs using format specifiers
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    
    // Print each variable on a new line with the specified formatting
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);  // %.3f prints exactly 3 decimal places
    printf("%.9lf\n", d); // %.9lf prints exactly 9 decimal places
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna