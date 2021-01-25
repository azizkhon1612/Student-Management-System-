#ifndef __EXIT_H__
#define __EXIT_H__
///Exit
void renew(st** list, int* cnt) {
    FILE* fp;
    fp = fopen("PHONE_BOOK.txt", "w");

    for (int i = 0; i < *cnt; i++) {
        fprintf(fp, "%s %s %s", list[i]->name, list[i]->phn, list[i]->phn);


    }
    fclose(fp);




}
#endif