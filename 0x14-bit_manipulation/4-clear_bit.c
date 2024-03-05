/**
 * clear_bit - function that sets the value of a bit to 0  at a given index.
 * @n: pointer to the number
 * @index: the index.
 * Description: find the bit at the given index and change it to 0.
 *
 * Return: the new n.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((*n = *n & ~1lu << index));
}
