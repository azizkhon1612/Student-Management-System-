#ifndef __SHOWALL_H__
#define __SHOWALL_H__
////Showall
void showall(st** list, int cnt) {
    int i;
    for (i = 0; i < cnt; i++) {
        printf("%s %s %s\n", list[i]->name, list[i]->phn, list[i]->brth);
    }

}
#endif