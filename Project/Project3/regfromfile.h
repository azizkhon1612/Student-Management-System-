#ifndef __REGFROMFILE.H__
#define __REGFROMFILE_H__
//RegFromFile

void RegFromFile(st** list, int* cnt, int max_num) {
    FILE* fp;
    int i, j, cnt2 = 0;

    //swapper
    st sttemp = { 0 };

    //buffer for names,data
    char temp[100] = { 0 };
    i = *cnt;




    fp = fopen("PHONE_BOOK.txt", "r");



    while (1) {
        if (i > max_num) {
            printf("Overflow\n");
            break;
        }

        fscanf(fp, "%s", temp);

        //for newline detection founds at the end it will duplicate
        if (i > 0 && strcmp(temp, list[i - 1]->brth) == 0) {
            break;
        }

        list[i]->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(list[i]->name, temp);


        fscanf(fp, "%s", temp);
        list[i]->phn = (char*)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(list[i]->phn, temp);


        fscanf(fp, "%s", temp);
        list[i]->brth = (char*)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(list[i]->brth, temp);

        i++;
        cnt2++;

    }
    fclose(fp);

    (*cnt) += cnt2;

    ///Sorting
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



}
#endif