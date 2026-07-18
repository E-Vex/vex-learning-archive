# Byte Swap / Endianness Project

Small C project I made to mess around with endianness swapping.

Basically I needed this for a bigger project I'm working on (packet analysis), so I pulled it out into its own thing to test it separately first.

## What it does

Reads `raw_bytes.bin` 8 bytes at a time (based on `virtual_struct_t`), then swaps the byte order using a `field_descriptor_t`. You just tell it the offset and size of the field you want swapped, instead of writing a separate swap function for every data type.

## Files

- `virtual_struct.h`: the struct we read data into (just has one `uint64_t` field, `v1`, for now)
- `byte_swap.c` / `byte_swap.h`:
  - `swap_bytes()`: flips the byte order for any block of memory given its size
  - `swap_fields()`: loops over an array of `field_descriptor_t` and swaps whatever fields you point it at
- `main.c`: opens `raw_bytes.bin`, reads it 8 bytes at a time as `virtual_struct_t`, swaps `v1`, prints it in hex
- `raw_bytes.bin`: test data

## Run it

    gcc main.c byte_swap.c -o test
    ./test

Just make sure `raw_bytes.bin` is in the same folder when you run it.

## Note

Educational project, not production code. Wanted to actually understand endianness and byte manipulation instead of just reading about it.