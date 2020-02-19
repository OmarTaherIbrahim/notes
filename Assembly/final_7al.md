# Chapter 4

## Operand Types [im/reg/mem]

- Immediate [immediate addressing mode]
- Register
- Memory

## Addressing

- Direct Memory [`mov al, var1`]
- Direct-Offset Operands ['mov al, [var1+type]']

### MOV

- doesn't effect flags.
- CS, EIP, IP cannot be **destination**.
- No immediate to segment moves.

### MOVZX

- the extras are all **Zeros**

```
mov bl, 10001111b
movzx ax, bl ; ax=008Fh
```

### MOVSX

- the extras **depend on sign** (1 if negative, 0 if positive)

  ```
  mov bl, 10001111b
  movsx ax,bl ; ax=FF8Fh
  ```

### XCHG

swap.

- 3,1,2

```
.data
arrayD DWORD 1,2,3
.code
main PROC
  mov eax,arrayD
  xchg eax, arrayD+4
  Xchg eax, arrayD+8
  mov arrayD,eax
exit
main ENDP
```

### INC & DEC

no effect on Flags

```
.data
myWord WORD 1000h
myDword DWORD 10000000h
.code
  inc myWord
  dec myWord
  inc myDword

  mov ax, 00FFh
  inc ax
  mov ax, 00FFh
  inc al
```

### ADD & SUB

### NEG

- any nonzero operand set `CF=1`

#### Implementing

`Rval = - Xval + (Yval - Zval)`

```
.data
Rval ?
Xval DWORD 80
Yval DWORD 120
Zval DWORD 20
.code
  mov eax, Xval
  neg eax
  mov ebx,Yval
  sub ebx,Zval
  add eax,ebx
  mov Rval, eax
  call writeInt
  exit
```

## Flags Affected

- Zero flag : destination is zero.
- sign flag : destination is negative.
- carry flag :

  - `ADD` : **carry out of MSB**
  - `SUB` : **inverse(carry out of MSB)**

- Overflow Flag:

  - `ADD` and `SUB` : `CF` XOR **MSB**
