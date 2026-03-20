
int main()
{
float valor1,valor2,resultado;
char op;
    
    printf("digite o valor 1:");
    scanf("%f", &valor1);
    
    printf("digite o valor 2:");
    scanf("%f", &valor2);
    
    printf("escolha sua operação +,-,*,/:");
    scanf(" %c", &op);
     
if (op == '+')
{resultado = valor1+valor2;
    
    printf("seu resultado é %f",resultado);
    scanf("%f",&resultado);}
        
        
else if (op == '-')
{resultado = valor1-valor2;
    
    printf("seu resultado é %f",resultado);
    }
else if (op == '*')
{resultado = valor1*valor2;
    
     printf("seu resultado é %f",resultado);
    }
    
else if (op == '/')
{resultado = valor1/valor2;
    
    printf("seu resultado é %f",resultado);
    }
else 
    {printf("ta chapando meu irmao");
    }
   

return 0;}

