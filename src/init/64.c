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
