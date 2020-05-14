int main(void) {
    // Declara variáveis
    float sv = 0.0;
    float rj = 0.0;
    int    i  = 0;

    // Obtém dados
    scanf("%f", &sv);

    // Calcula a taxa:
    if ( sv >= 0.00 && sv < 400.01 )
    {
        i = 15;
        rj = sv * 0.15;
        sv = sv * 1.15;
        printf("Novo salario: %.2f\n", sv);
        printf("Reajuste ganho: %.2f\n", rj);
        printf("Em percentual: %d %%\n", i);
    }
    else if ( sv < 800.01 )
    {
        i = 12;
        rj = sv * 0.12;
        sv = sv * 1.12;
        printf("Novo salario: %.2f\n", sv);
        printf("Reajuste ganho: %.2f\n", rj);
        printf("Em percentual: %d %%\n", i);
    }
    else if ( sv < 1200.01 )
    {
        i = 10;
        rj = sv * 0.10;
        sv = sv * 1.10;
        printf("Novo salario: %.2f\n", sv);
        printf("Reajuste ganho: %.2f\n", rj);
        printf("Em percentual: %d %%\n", i);
    }
    else if ( sv <= 2000.00 )
    {
        i = 7;
        rj = sv * 0.07;
        sv = sv * 1.07;
        printf("Novo salario: %.2f\n", sv);
        printf("Reajuste ganho: %.2f\n", rj);
        printf("Em percentual: %d %%\n", i);
    }
    else
    {
        i = 4;
        rj = sv * 0.04;
        sv = sv * 1.04;
        printf("Novo salario: %.2f\n", sv);
        printf("Reajuste ganho: %.2f\n", rj);
        printf("Em percentual: %d %%\n", i);
    }

    // Retorna:
    return 0;
}
