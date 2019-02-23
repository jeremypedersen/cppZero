#!/bin/bash

# A small script to clean up the mess left by TexShop when building PDFs
rm $(find * | grep .synctex)
rm $(find * | grep .aux)
rm $(find * | grep .log)

# Also clean up stale executables
rm $(find * | grep .out)


