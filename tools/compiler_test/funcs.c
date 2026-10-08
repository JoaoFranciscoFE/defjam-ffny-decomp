extern char D_003CA618[];
struct S1 { char pad[0x28]; int count; int arr; };
void *func_00199D48(struct S1 *s, int i) {
    if (i < 0 || i >= s->count) return D_003CA618;
    return (void *)(i * 0x4C0 + s->arr + 0x434);
}
struct S2 { unsigned char n; char pad[3]; int v[1]; };
int func_0022FF00(struct S2 *s) {
    int i;
    for (i = 0; i < s->n; i++)
        if (s->v[i]) return 1;
    return 0;
}

struct S3 { int max; int pad; int cur; int prev; int flag; };
void func_00216F48(struct S3 *s) {
    s->prev = s->cur;
    if (++s->cur >= s->max) s->cur = 0;
    s->flag = 0;
}

struct S5 { int data[4]; unsigned int count; };
int func_001C7018(struct S5 *s, int x) {
    unsigned int i;
    int *p = (int *)s;
    for (i = 0; i < s->count; i++) x ^= p[i];
    return x;
}

struct S6 { char pad[0x34]; int v; char pad2[0x936 - 0x38]; unsigned char flags; };
void func_002FF2B0(struct S6 *s, int v) {
    if (v == -1) s->v++;
    else s->v = v;
    s->flags |= 1;
}
