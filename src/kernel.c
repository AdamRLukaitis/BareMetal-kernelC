void b_output(const char *str);

void main()
{
	init_64();
	b_output("Hello from C");
	for (;;) {}	// Loop forever
}

void b_output(const char *str)
{
	volatile char *videomem = (volatile char*)0xB8000;
	while(*str != 0)
	{
		*videomem++ = *str++;
		*videomem++ = 0x07;
	}
}
