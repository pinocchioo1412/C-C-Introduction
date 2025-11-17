#include <cstdio>
#include <cstring>

struct HoVaTen {
   char Ho[10];
   char Dem[10];
   char Ten[10];
};

struct HoVaTen sv[10];

void input(){
    for (int i = 0; i < 10; i++){
        printf("Ho cua sinh vien %i = ", i + 1);
        scanf("%s", sv[i].Ho);
        printf("Dem cua sinh vien %i = ", i + 1);
        scanf("%s", sv[i].Dem);
        printf("Ten cua sinh vien %i  = ", i + 1);
        scanf("%s", sv[i].Ten);

        strcat(sv[i].Ho, " ");
        strcat(sv[i].Ho, sv[i].Dem);
        strcat(sv[i].Ho, " ");
        strcat(sv[i].Ho, sv[i].Ten);
    }
}

void sapXep(){
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (strcmp(sv[j].Ten, sv[j + 1].Ten) > 0) {
                struct HoVaTen temp = sv[j];
                sv[j] = sv[j + 1];
                sv[j + 1] = temp;
            }
        }
    }

}

void danhSach(){
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < 10; i++) {
        printf("%i: %s \n", i+1, sv[i].Ho);
    }
}

int main () {
    input();
    sapXep();
    danhSach();
    return 0;
}
