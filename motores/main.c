#include <stdio.h>
#include <stdlib.h>

int main(){
    //especificaciones del motor
    struct specs{
        float diameter;
        float length;
    };
    //informacion del motor
    struct engine{
        //char engine_code;
        int cilinders_num;
        float capacity;
        struct specs eng_specs; //eng_specs para llamar a engine specs
    };
    //definiendo informaciones
    struct engine engine_specs;
    engine_specs.cilinders_num = 6;
    engine_specs.capacity = 2.0;
    engine_specs.eng_specs.diameter = 2.1;
    engine_specs.eng_specs.length=2.2;

    int menu = 1;
    printf("welcome to engines !!!\n");
    printf("1.-Continue\n2.-Stop\n");
    while (menu == 1){
        scanf("%d",&menu);
        if (menu == 1){
            printf("okay ^-^\n");
            printf("engine codes o-o \n");
            //printf("%s\n",eng_var.engine_code);
            printf("engine cilinders = %d\n", engine_specs.cilinders_num);
            printf("capacity = %.2f\n",engine_specs.capacity);
            printf("do you want the specs?\n1.-yes\n2.-no\n");

            int menu2 = -1;
            if (menu2 == -1){
                printf("engine specs !\n");
                printf("engine diameter = %.2f\n", engine_specs.eng_specs.diameter);
                printf("engine_length = %.2f\n", engine_specs.eng_specs.length);
            }
            printf("OwO continue?\n1.-yes\n2.-no");
        }
        else if (menu != 1) {
            printf("okay o-o");
            break;
        }
    }

return 0;
}
