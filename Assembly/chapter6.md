# Bit-Mapped Sets

```
;if the data is
.data
setX byte 01100001b
```

- **Set Complement**

  ```asm
  mov eax, setX
  not eax
  ```

- **Set Intersection**

  ```asm
  mov eax, setX
  and eax, setY
  ```

- **Set Union**

  ```asm
  mov eax, setX
  or  eax, setY
  ```
