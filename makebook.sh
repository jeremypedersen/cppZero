#!/bin/bash

rm classBook.pdf

gs -dBATCH -dNOPAUSE -q -sDEVICE=pdfwrite -sOutputFile=classBook.pdf $(find * | grep .pdf)
