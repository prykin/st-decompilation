FUN_0048fa80:
0048FA80  33 C0                     XOR EAX,EAX
0048FA82  81 C1 CC 02 00 00         ADD ECX,0x2cc
LAB_0048fa88:
0048FA88  83 F8 02                  CMP EAX,0x2
0048FA8B  74 05                     JZ 0x0048fa92
0048FA8D  83 39 01                  CMP dword ptr [ECX],0x1
0048FA90  74 0F                     JZ 0x0048faa1
LAB_0048fa92:
0048FA92  40                        INC EAX
0048FA93  83 C1 04                  ADD ECX,0x4
0048FA96  83 F8 17                  CMP EAX,0x17
0048FA99  7C ED                     JL 0x0048fa88
0048FA9B  B8 01 00 00 00            MOV EAX,0x1
0048FAA0  C3                        RET
LAB_0048faa1:
0048FAA1  33 C0                     XOR EAX,EAX
0048FAA3  C3                        RET
