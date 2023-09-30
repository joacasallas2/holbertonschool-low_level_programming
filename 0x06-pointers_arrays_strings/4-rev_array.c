/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: The pointer to the array
  * @n: The number of elements of the array
  * Return: Nothing (void function)
  */
void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i <= ((n - 1) / 2); i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}

