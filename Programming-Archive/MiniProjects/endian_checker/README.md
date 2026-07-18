# Endianness Checker

A small C project I made to actually understand Endianness instead of just reading about it.

It checks whether your device stores data as Little Endian or Big Endian.

I take the number `0x01020304`, read only the first byte using a pointer. If it's `0x04`, the device is Little Endian, otherwise it's Big Endian.