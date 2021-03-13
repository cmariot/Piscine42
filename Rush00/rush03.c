void rush (int col , int raw)
{
    int i;
    i = 1;
    int j;
    j = 1;
   
       while( j <= raw)
    {
        i = 1;
        while( i <= col)
        {
            if ((i == 1) && ((j == 1 ) || (j >= raw)))
            {
                ft_putchar('A');
             
            }
            else if (( i ==col ) && (( j == 1 ) || ( j >=raw )))
            {
            ft_putchar('C');
            }
            
            else if (( j == 1 ) || ( i == 1 ) || ( j == raw) || ( i == col))
            {
                ft_putchar('B');
            }
            
            else

            {
                ft_putchar(32);
            }
            i= i+1;
        }
          ft_putchar(10);
          j = j+1;
    }

}
    
