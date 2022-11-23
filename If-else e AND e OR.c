 main()
 {
     float salario;
     char est_civil;

     printf("Qual o salario: ");
       scanf("%f", &salario);

    printf("Qual o estado civil S/C: ");
    scanf(" %c",&est_civil);

    if (est_civil == 'c' || est_civil == 'C')
        printf("Imposto : %.2f \n", salario * 0.09);
    else 
        if (est_civil == 's' || est_civil == 'S')
            printf("Imposto : %.2f \n", salario * 0.10);
        else
            printf("Estado Civil Invalido!!\n");
    }
