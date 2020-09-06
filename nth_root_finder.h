#ifndef ROOT_H
#define ROOT_H

int FindNthRoot(int number, int n, int precision);
double xPre = rand() % 10;
    double eps = 1.0;
    double p = 1.0;
    
    for (int i = 1; i<= precision; i++) {
        eps /= 10;
        p *= 10;
    }

  
    double delX = 2147483647;

    
    double xK = 0.0;

    while (delX > eps) {

        xK = ((n - 1.0) * xPre +
            (double) number / pow(xPre, n - 1)) / (double) n;
        delX = abs(xK - xPre);
        xPre = xK;
    }
    double scale = pow(10, precision);
    xK = round(xK * scale) / scale;
    return to_string(xK);
}

#endif
