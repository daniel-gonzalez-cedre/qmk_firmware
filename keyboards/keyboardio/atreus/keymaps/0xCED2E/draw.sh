#!/bin/bash
qmk c2json kemap.c > keymap.json
keymap parse -c 12 -q keymap.json > keymap.yaml
keymap draw keymap.yaml > keymap.svg
rm keymap.json
rm keymap.yaml
