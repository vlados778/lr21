FROM debian:latest

RUN apt update && apt install -y gcc gcc-multilib

WORKDIR /home

COPY asm.s .
COPY c.c .

RUN gcc -m32 -no-pie asm.s -o asm
RUN gcc c.c -o c
