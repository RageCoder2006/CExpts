D = pow(b,2)-4*a*c;
    if (D>0){
        xone = (-b + D)/(2*a);
        xtwo = (-b - D)/(2*a);
        printf("Roots are: %f, %f",xone,xtwo);
    }