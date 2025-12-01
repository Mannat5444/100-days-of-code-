//Print all enum names and integer values using a loop//
#include <stdio.h>

enum Role { ADMIN = 0, USER, GUEST };

int main() {
    enum Role r;

    printf("Enum Values:\n");
    for (r = ADMIN; r <= GUEST; r++) {
        printf("%d - ", r);

        switch(r) {
            case ADMIN:
                printf("ADMIN\n");
                break;
            case USER:
                printf("USER\n");
                break;
            case GUEST:
                printf("GUEST\n");
                break;
        }
    }

    return 0;
}
