#include "libmx.h"

char *mx_concat_words(char **words) {
    if (words == NULL || words[0] == 0)
        return NULL;
    char *rez = mx_strdup(words[0]), *t;
    for (int i = -1; words[++i] != NULL; mx_strdel(&t)) {
        t = rez;
        rez = mx_strjoin(rez, mx_strjoin(mx_strdup(" "), mx_strdup(words[i])));
    }
    return rez;
}
