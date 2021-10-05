#include <stdio.h>

void printPatternA() {
    printf("# # # # # # # # # # #\n");
    printf("  # # # # # # # # # \n");
    printf("    # # # # # # #\n");
    printf("      # # # # #\n");
    printf("        # # #\n");
    printf("          #\n");
    printf("         (a)    \n\n\n");
}

void printPatternB() {
    printf("          #\n");
    printf("        # # #\n");
    printf("      # # # # #\n");
    printf("    # # # # # # #\n");
    printf("  # # # # # # # # #\n");
    printf("# # # # # # # # # # #\n");
    printf("         (b)");
}

void printPatternC() {
    printf("            #\n");
    printf("          # # #\n");
    printf("        # # # # #\n");
    printf("      # # # # # # #\n");
    printf("    # # # # # # # # #\n");
    printf("  # # # # # # # # # # #\n");
	printf("    # # # # # # # # #\n");
	printf("      # # # # # # #\n");
	printf("        # # # # #\n");
	printf("          # # #\n");
	printf("            #\n");
    printf("           (c)");
}

void printNewLines() {
    printf("\n");
    printf("\n");
    printf("\n");
}

int main() {


printPatternA();
printNewLines();

printPatternB();
printNewLines();

printPatternC();

    return 0;

}
