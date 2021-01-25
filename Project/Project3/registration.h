#ifndef __REGISTRATION_H__
#define __REGISTRATION_H__
void registration(st** list, int* cnt) {
    int i, j;
    //buffer
    st sttemp = { 0 };

    //buffer for names,data
    char temp[100] = { 0 };

    ///Entering info

    printf("Name:");
    scanf("%s", temp);

    list[*cnt]->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));

    strcpy(list[*cnt]->name, temp);

    printf("Phone_number:");
    scanf("%s", temp);

    list[*cnt]->phn = (char*)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(list[*cnt]->phn, temp);

    printf("Birth:");
    scanf("%s", temp);
    list[*cnt]->brth = (char*)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(list[*cnt]->brth, temp);

    //Sorting
    for (i = 0; i < *cnt; i++) {
        for (j = 0; j < *cnt - 1; j++) {
            //If str2 is less then str1 swap
            if (strcmp(list[j]->name, list[j + 1]->name) > 0) {
                sttemp = *list[j];
                *list[j] = *list[j + 1];
                *list[j + 1] = sttemp;
            }
        }
    }
    (*cnt)++;
    printf("<<%d>>\n", *cnt);
}
#endif
