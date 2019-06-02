/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** functions that allows the map to be created
*/
#include "proto.h"

arr_t *get_map(void)
{
    arr_t *arr = malloc(sizeof(* arr));
    FILE *map_file = NULL;
    size_t size = 0;

    arr->coll_map = malloc(sizeof(char *) * 156);
    map_file = fopen("map", "r");
    for (int i = 0; i < 155; i++) {
        arr->coll_map[i] = malloc(sizeof(char) * 112);
        getline(&arr->coll_map[i], &size, map_file);
    }
    arr->coll_map[155] = NULL;
    return (arr);
}