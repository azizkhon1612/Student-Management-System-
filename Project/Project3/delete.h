#ifndef __DELETE_H__
#define __DELETE_H__
////Delete
void delete(st** list, int* cnt) {
    int i, j;


    //Search
    char delname[21];
    printf("Name:");
    scanf("%s", delname);

    for (i = 0; i < *cnt; i++) {
        //cnt-1 starts from 0 till 2
        //first find str and changes into changes str two times and reduces the cnt
        if (strcmp(list[i]->name, delname) == 0) {
            for (j = i; j < *cnt - 1; j++) {
                *list[j] = *list[j + 1];
            }
            (*cnt)--;
        }
    }
}

#endif