# ataritools
Tools to convert text files from ASCII to ATASCII

These are a couple of tools to convert text files from ASCII to ATASCII and back. 
ATASCII is different from ASCII mainly in that it does not have lowercase characters
and the new line character is `155` instead of `10` (there are other differences, but
they do not affect most Atari BASIC code).

This project provides two command line tools to convert files back and forth:

- `asc2atari input.bas OUTPUT.LST` converts an ASCII file into ATASCII (that you can, e.g., load using `ENTER`)
- `atari2asc INPUT.LST output.bas` converts an ATASCII file into ASCII (so you can edit it on your computer).
