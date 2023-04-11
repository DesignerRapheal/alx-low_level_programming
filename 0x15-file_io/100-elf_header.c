#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define EI_NIDENT 16

typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_error(const char* message) {
    fprintf(stderr, "Error: %s (%s)\n", message, strerror(errno));
}

void print_header_info(const Elf64_Ehdr* header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("Class:   %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
    printf("Data:    %s-endian\n", header->e_ident[5] == 1 ? "little" : "big");
    printf("Version: %d\n", header->e_ident[6]);
    printf("OS/ABI:  ");
    switch (header->e_ident[7]) {
        case 0: printf("System V\n"); break;
        case 1: printf("HP-UX\n"); break;
        case 2: printf("NetBSD\n"); break;
        case 3: printf("Linux\n"); break;
        case 4: printf("GNU Hurd\n"); break;
        case 6: printf("Solaris\n"); break;
        case 7: printf("AIX\n"); break;
        case 8: printf("IRIX\n"); break;
        case 9: printf("FreeBSD\n"); break;
        case 10: printf("Tru64\n"); break;
        case 11: printf("Novell Modesto\n"); break;
        case 12: printf("OpenBSD\n"); break;
        case 13: printf("OpenVMS\n"); break;
        case 14: printf("NonStop Kernel\n"); break;
        case 15: printf("AROS\n"); break;
        case 16: printf("Fenix OS\n"); break;
        case 17: printf("CloudABI\n"); break;
        case 18: printf("Stratus Technologies OpenVOS\n"); break;
        default: printf("Unknown\n"); break;
    }
    printf("ABI Version: %d\n", header->e_ident[8]);
    printf("Type:    ");
    switch (header->e_type) {
        case 0: printf("No file type\n"); break;
        case 1: printf("Relocatable file\n"); break;
        case 2: printf("Executable file\n"); break;
        case 3: printf("Shared object file\n"); break;
        case 4: printf("Core file\n"); break;
        default: printf("Unknown\n"); break;
    }
    printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
       

}
