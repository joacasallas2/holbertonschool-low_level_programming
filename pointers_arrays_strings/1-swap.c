/**
  * swap_int -  function that swaps the values of two integers.
  * @a: pointer to first value
  * @b: pointer to second value
  * Return: Nothing (void function)
  */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

