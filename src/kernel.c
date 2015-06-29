/*
 * BareMetal kernel in C
 * Ian Seyler @ Return Infinity
 * Copyright 2015
 * Distributed under the terms of the BSD license
 */

void main()
{
	init_64();
//	init_pci();
//	init_hdd();
//	init_net();

	b_output("Hello from C");

	for (;;) {}	// Loop forever
}
