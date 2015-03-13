unsigned char inportb(unsigned short port) {
        unsigned char rv;
        asm volatile ("inb %%dx, %%al" : "=a"(rv) : "d"(port));
        return rv;
}

void outportb(unsigned short port, unsigned char data) {
        asm volatile ("outb %%al, %%dx" : : "d"(port), "a"(data));
}

unsigned short inports(unsigned short port) {
        unsigned short rv;
        asm volatile ("inw %%dx, %%ax" : "=a"(rv) : "d"(port));
        return rv;
}

void outports(unsigned short port, unsigned short data) {
        asm volatile ("outw %%ax, %%dx" : : "d"(port), "a"(data));
}

unsigned int inportl(unsigned short port) {
        unsigned int rv;
        asm volatile ("inl %%dx, %%eax" : "=a"(rv) : "d"(port));
        return rv;
}

void outportl(unsigned short port, unsigned int data) {
        asm volatile ("outl %%eax, %%dx" : : "d"(port), "a"(data));
}
