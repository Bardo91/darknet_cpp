#ifndef BOX_H
#define BOX_H
#include "../include/darknet.h"

typedef struct{
    float dx, dy, dw, dh;
} dbox;

float box_rmse(darknet_box a, darknet_box b);
dbox diou(darknet_box a, darknet_box b);
darknet_box decode_box(darknet_box b, darknet_box anchor);
darknet_box encode_box(darknet_box b, darknet_box anchor);

#endif
