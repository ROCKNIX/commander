#include "palette.h"

void Palette::init(bool dark) {
    panel = { 56,  60,  72};
    text_body = {171, 178, 191};
    text_header = {255, 255, 255};
    highlight = {224, 108, 117};
    bg_selection = { 80,  80,  80};
    bg_selection_alt = {100, 100, 100};
    bg_normal = { 30,  34,  40};
    bg_alternate = { 36,  40,  48};
    icon_dir = { 97, 175, 239};
    icon_file = {171, 178, 191};

    if (dark) {
        panel.invert();
        text_body.invert();
        text_header.invert();
        highlight.invert();
        bg_selection.invert();
        bg_selection_alt.invert();
        bg_normal.invert();
        bg_alternate.invert();
        icon_dir.invert();
        icon_file.invert();
    }
}

Palette g_palette;
