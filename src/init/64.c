void init_64()
{
	// Clear system variable memory
	
	// Clear screen
	volatile char *videomem = (volatile char*)0xB8000;
	int i;
	for (i=0; i<2000; i++)
	{
		*videomem++ = 0x20;	// Space
		*videomem++ = 0x07;	// Background
	}
	
	// Create exception gate stubs (Pure64 has already set the correct gate markers)
	
	// Create interrupt gate stubs (Pure64 has already set the correct gate markers)
	
	// Set up the exception gates for all of the CPU exceptions
	
	// Set up the IRQ handlers (Network IRQ handler is configured in init_net)
	
	// Set up RTC
	
	// Set color palette
	
	// Grab data from Pure64's infomap
	
	// Build to OS memory table
	
	// Initialize all AP's to run our reset code. Skip the BSP
	
	// Enable specific interrupts
}
