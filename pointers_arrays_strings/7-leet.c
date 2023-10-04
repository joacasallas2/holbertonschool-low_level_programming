/**
  * leet -  function that encodes a string into 1337.
  *
  * @str: The pointer to the string
  * Return: A pointer to the resulting string
  */
char *leet(char *str)
{
	char *arr1 = "aeotl";
	char *arr2 = "AEOTL";
	char arr3[5] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == arr1[j] || str[i] == arr2[j])
			{
				str[i] = 48 + arr3[j];
			}
		}
	}
	return (str);
}
