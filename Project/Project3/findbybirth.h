#ifndef __FINDBYBIRTH_H__
#define __FINDBYBIRTH_H__
////Find_by_birth

void find_by_birth(st** list, int cnt) {
    int i, ibirth, birth;
    char cbirth[3] = { 0 };
    printf("Birth:");

    scanf("%d", &birth);

    for (i = 0; i < cnt; i++) {
        cbirth[0] = list[i]->brth[4];
        cbirth[1] = list[i]->brth[5];

        ///char birth to int

        ibirth = atoi(cbirth);

        if (ibirth == birth) {
            printf("%s %s %s\n", list[i]->name, list[i]->phn, list[i]->brth);
        }
    }
}
#endif
