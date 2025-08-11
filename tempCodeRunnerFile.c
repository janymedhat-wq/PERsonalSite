  printf("Euler Integration of dy/dt = -2y + t\n");
    printf("--------------------------------------\n"); 
    //using for loop to calculate the euler integration
    for (int i=0;  i<steps; i++) { 
        printf("Step %d: t = %.2f, y = %.4f\n", i, t, y); 
        y += euler_integration(t, y) * dt; //updating the value of y using the euler integration formula
        t += dt; //updating the value of t