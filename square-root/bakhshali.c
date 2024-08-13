#include <stdio.h>
#include <math.h>

double bakhshaliEstimation(double number, int precision);
double precisionSet(double number, int decimalPlace);

int main(){
    double inputNumber;
    int precision;
    printf("Input a number for which you want to find square root of: ");
    scanf("%lf", &inputNumber);
    printf("Input precision: ");
    scanf("%d", &precision);
    double root = bakhshaliEstimation(inputNumber, precision);
    printf("root = %0.05lf", precisionSet(root, precision));

    return 1;
}

/**
 * The function `bakhshaliEstimation` uses the Bakhshali approximation method to estimate the square
 * root of a number with a specified precision.
 * 
 * @param number The `number` parameter represents the number for which you want to estimate the square
 * root using the Bakhshali approximation method. This method is an ancient Indian algorithm for
 * finding square roots. If you provide a number, I can help you estimate its square root using the
 * Bakhshali method.
 * @param precision The `precision` parameter in the `bakhshaliEstimation` function represents the
 * number of decimal places to which you want to calculate the square root of the given `number`. The
 * higher the precision value, the more accurate the estimation will be, but it may also require more
 * iterations to converge
 * 
 * @return The function `bakhshaliEstimation` returns an estimation of the square root of the input
 * `number` with the specified `precision`.
 */
double bakhshaliEstimation(double number, int precision){
    double root = 1;
    double previousRoot = 0;

    while(precisionSet(root, precision) != precisionSet(previousRoot, precision)){
        previousRoot = root;
        double a = (number - root * root) / (2 * root);
        double b = a + root;
        root = b + (a * a) / (2 * b);
    }

    return precisionSet(root, precision);
}

/**
 * The function `precisionSet` rounds a given number to a specified precision level.
 * 
 * @param number The `number` parameter is the double-precision floating-point number that you want to
 * set the precision for.
 * @param precision The `precision` parameter in the `double precisionSet` function refers to the
 * number of decimal places to which you want to round the `number` parameter.
 * 
 * @return The function `double precisionSet(double number, int precision)` is returning a double
 * precision number that has been rounded to the specified precision. It achieves this by multiplying
 * the input number by 10 raised to the power of the precision, then flooring the result to remove any
 * decimal places beyond the specified precision, and finally dividing by 10 raised to the power of the
 * precision to get the final rounded number.
 */
double precisionSet(double number, int precision){
    return floor(pow(10,precision)*number)/pow(10,precision);
}