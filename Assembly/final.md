# Chapter 1

- Translation: complete translation of **L1** program to **L0**
- Inperpretation: L0 program **interprets** and **execute** **L1** instruction.

- Specific Machine Levels:

  - `Level 4` : **High-Level Language**.
  - `Level 3` : **Assembly Language**.
  - `Level 2` : **Instruction Set Architecture**. [A.K.A `Conventional Machine Language`].
  - `Level 1` : **Digital Logic** [Includes CPU, System bus, Memory, transistors]

# Chapter 2

- **ALU** performs :

  - Arithmetic operation
  - Bitwise operation

- **Instruction Execution Cycle**:

  - `Fetch`:
  - `Decode`:
  - `Fetch operands`:
  - `Execute`
  - `Store data`

- Reading From Memory

  - Multiple machine cycles are required.
  - Address places on address bus.
  - Read Line **Low**
  - Cpu waits a cycle.
  - Read Line goes to 1.

- Cache Memory : High-speed expensive static RAM.

  - level-1 : inside.
  - level-2 : outside.

- cache-hit : data is already in cache.

- cache-miss : not in cache.

- Multi-tasking(_software related_):

  - **OS** can run multiple programs at the same time.

## IA-32

- Modes of Operation

  - protected Mode (native mode)
  - Real-address Mode (native to MSDOS)
  - system management Mode
  - Virtual-8086 mode (hybrid of protected)

- Addressable Memory

  - protected mode : 4 GB, 32-bit address.
  - Real-address & Virtual-8086: 1 MB, 20-bit.

- General-purpose Registers:

  - `EAX` Accumulator, `EBX` ,`ECX` Loop Counter, `EDX`
  - `EBP` Extended frame pointer, `ESP` Stack Pointer, [`ESI`, `EDI`] index registers

- 16-bit segment Registers:

  - `CS` code segment, `SS` stack segment, `DS` data segment, [`ES`, `FS`, `GS`] additional
  - C,S & D-G

- EIP - instruction pointer (jmp)

- EFLAGS - status and control flags (pushfd)

## Intel History

1. intel 8080

  - 64KB ram
  - 8-bit Registers

2. intel 8086/8088

  - IBM-PC Used `8088`
  - 1 MB RAM
  - 16-bit registers (8080*2)
  - 16-bit databus , 8-bit `8088`
  - seprate floating unit `8087`

3. intel 80286 [`Protected Memory`]

  - 16 MB Ram (16* 8086[1 MB])
  - Protected Memory

## Intel IA-32 Family

1. Intel386 ['Paging']

  - 4 GB , 32-bit registers, `Paging`(Virtual Memory)

2. Intel 486

  - instruction pipelining.

3. Pentium

  - 32-bit address bus
  - 64-bit internal data path
  - Superscalar

## 64-bit

1. Intel64

  - 64-bit linear addressing space
  - `Pentium Extreme`
  - `Xeon`
  - `Celeron D`
  - `Pentium D`
  - `core 2`, `core i7`

2. IA-32e Mode

  - compatibility mode (for legacy 16-bit 32-bit)

## Intel Technologies

1. HyperThreading technologies (Hardware)[same processor]

  - two tasks execute on a single processor same time.

2. Dual Core processing [Same IC package]

  - multiple **processors cores** in the same IC package.

## CISC and RISC

- **CISC** - `Complex` instruction set.[requires microcode interpreter]
- **RISC** - `Reduced` instruction set.[directly executed by hardwur]

## Real-Address Mode

- 1MB Ram
- single tasking
- supported in MSDOS

## Segmented Memory

- Segmented memory addressing
- absolute(linear) addressing is a combination of 16-bit segment 16-bit offset.

## Protected Mode

- 4 GB Ram
- each program gets a memory partition
- multitasking
- MASM programs uses flat memory model

### Flat Segment Model

- single global descriptor table (GDT).
- each segment map to 32-bit address space.

### Multi-Segment Model

- Each program has a Local descriptor Table(LDT).

### Paging

- supported directly by cpu.
- divides each segment into blocks called **Pages**.
- program memory: 1) part in memory 2) part in disk.
- `Virtual Memory Manager`: OS utility | manages | Loading and Unloading of pages.
- `Page fault`: issued by CPU | when page | must be | load from disk.

## Components

### 1 - Motherboard

- CPU socket
- External cache memory slots
- Main memory slots
- BIOS chips

  #### 2 - Video Output

### 3 - memory

- ROM
- EPROM
- DRAM
- SRAM
- VRAM (optimized for constant video refresh)
- CMOS RAM

### 4 - input output ports (IO)

- USB

  - intelligent high-speed connection.
  - enumeration: computer queries
  - supports hot connection.

- Parallel

  - short cable, high speed
  - bidirectional, parallel data transfer

- Serial

  - RS-232 serial port
  - one bit at a time.

### IO levels

- 3 : high-level language function

- 2 : OS

- 1 : BIOS

  - OS might prevent app-level code on this level
