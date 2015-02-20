void b_output(const char *str);
void init_64();

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

void init_64()
{
	volatile char *videomem = (volatile char*)0xB8000;
	int i;
	for (i=0; i<2000; i++)
	{
		*videomem++ = 0x20;	// Space
		*videomem++ = 0x07;	// Background
	}
}
