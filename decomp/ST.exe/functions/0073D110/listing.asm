__XcptFilter:
0073D110  55                        PUSH EBP
0073D111  8B EC                     MOV EBP,ESP
0073D113  83 EC 14                  SUB ESP,0x14
0073D116  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073D119  50                        PUSH EAX
0073D11A  E8 A1 01 00 00            CALL 0x0073d2c0
0073D11F  83 C4 04                  ADD ESP,0x4
0073D122  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073D125  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0073D129  74 09                     JZ 0x0073d134
0073D12B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D12E  83 79 08 00               CMP dword ptr [ECX + 0x8],0x0
0073D132  75 0F                     JNZ 0x0073d143
LAB_0073d134:
0073D134  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073D137  52                        PUSH EDX
0073D138  FF 15 34 BC 85 00         CALL dword ptr [0x0085bc34]
0073D13E  E9 72 01 00 00            JMP 0x0073d2b5
LAB_0073d143:
0073D143  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D146  83 78 08 05               CMP dword ptr [EAX + 0x8],0x5
0073D14A  75 14                     JNZ 0x0073d160
0073D14C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D14F  C7 41 08 00 00 00 00      MOV dword ptr [ECX + 0x8],0x0
0073D156  B8 01 00 00 00            MOV EAX,0x1
0073D15B  E9 55 01 00 00            JMP 0x0073d2b5
LAB_0073d160:
0073D160  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D163  83 7A 08 01               CMP dword ptr [EDX + 0x8],0x1
0073D167  75 08                     JNZ 0x0073d171
0073D169  83 C8 FF                  OR EAX,0xffffffff
0073D16C  E9 44 01 00 00            JMP 0x0073d2b5
LAB_0073d171:
0073D171  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D174  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0073D177  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073D17A  8B 15 F4 72 85 00         MOV EDX,dword ptr [0x008572f4]
0073D180  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0073D183  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073D186  A3 F4 72 85 00            MOV [0x008572f4],EAX
0073D18B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D18E  83 79 04 08               CMP dword ptr [ECX + 0x4],0x8
0073D192  0F 85 FA 00 00 00         JNZ 0x0073d292
0073D198  8B 15 E8 1F 7F 00         MOV EDX,dword ptr [0x007f1fe8]
0073D19E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0073D1A1  EB 09                     JMP 0x0073d1ac
LAB_0073d1a3:
0073D1A3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073D1A6  83 C0 01                  ADD EAX,0x1
0073D1A9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0073d1ac:
0073D1AC  8B 0D E8 1F 7F 00         MOV ECX,dword ptr [0x007f1fe8]
0073D1B2  03 0D EC 1F 7F 00         ADD ECX,dword ptr [0x007f1fec]
0073D1B8  39 4D F0                  CMP dword ptr [EBP + -0x10],ECX
0073D1BB  7D 12                     JGE 0x0073d1cf
0073D1BD  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073D1C0  6B D2 0C                  IMUL EDX,EDX,0xc
0073D1C3  C7 82 78 1F 7F 00 00 00 00 00  MOV dword ptr [EDX + 0x7f1f78],0x0
0073D1CD  EB D4                     JMP 0x0073d1a3
LAB_0073d1cf:
0073D1CF  A1 F4 1F 7F 00            MOV EAX,[0x007f1ff4]
0073D1D4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073D1D7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D1DA  81 39 8E 00 00 C0         CMP dword ptr [ECX],0xc000008e
0073D1E0  75 0F                     JNZ 0x0073d1f1
0073D1E2  C7 05 F4 1F 7F 00 83 00 00 00  MOV dword ptr [0x007f1ff4],0x83
0073D1EC  E9 88 00 00 00            JMP 0x0073d279
LAB_0073d1f1:
0073D1F1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D1F4  81 3A 90 00 00 C0         CMP dword ptr [EDX],0xc0000090
0073D1FA  75 0C                     JNZ 0x0073d208
0073D1FC  C7 05 F4 1F 7F 00 81 00 00 00  MOV dword ptr [0x007f1ff4],0x81
0073D206  EB 71                     JMP 0x0073d279
LAB_0073d208:
0073D208  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D20B  81 38 91 00 00 C0         CMP dword ptr [EAX],0xc0000091
0073D211  75 0C                     JNZ 0x0073d21f
0073D213  C7 05 F4 1F 7F 00 84 00 00 00  MOV dword ptr [0x007f1ff4],0x84
0073D21D  EB 5A                     JMP 0x0073d279
LAB_0073d21f:
0073D21F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D222  81 39 93 00 00 C0         CMP dword ptr [ECX],0xc0000093
0073D228  75 0C                     JNZ 0x0073d236
0073D22A  C7 05 F4 1F 7F 00 85 00 00 00  MOV dword ptr [0x007f1ff4],0x85
0073D234  EB 43                     JMP 0x0073d279
LAB_0073d236:
0073D236  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D239  81 3A 8D 00 00 C0         CMP dword ptr [EDX],0xc000008d
0073D23F  75 0C                     JNZ 0x0073d24d
0073D241  C7 05 F4 1F 7F 00 82 00 00 00  MOV dword ptr [0x007f1ff4],0x82
0073D24B  EB 2C                     JMP 0x0073d279
LAB_0073d24d:
0073D24D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D250  81 38 8F 00 00 C0         CMP dword ptr [EAX],0xc000008f
0073D256  75 0C                     JNZ 0x0073d264
0073D258  C7 05 F4 1F 7F 00 86 00 00 00  MOV dword ptr [0x007f1ff4],0x86
0073D262  EB 15                     JMP 0x0073d279
LAB_0073d264:
0073D264  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D267  81 39 92 00 00 C0         CMP dword ptr [ECX],0xc0000092
0073D26D  75 0A                     JNZ 0x0073d279
0073D26F  C7 05 F4 1F 7F 00 8A 00 00 00  MOV dword ptr [0x007f1ff4],0x8a
LAB_0073d279:
0073D279  8B 15 F4 1F 7F 00         MOV EDX,dword ptr [0x007f1ff4]
0073D27F  52                        PUSH EDX
0073D280  6A 08                     PUSH 0x8
0073D282  FF 55 FC                  CALL dword ptr [EBP + -0x4]
0073D285  83 C4 08                  ADD ESP,0x8
0073D288  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073D28B  A3 F4 1F 7F 00            MOV [0x007f1ff4],EAX
0073D290  EB 17                     JMP 0x0073d2a9
LAB_0073d292:
0073D292  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D295  C7 41 08 00 00 00 00      MOV dword ptr [ECX + 0x8],0x0
0073D29C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D29F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073D2A2  50                        PUSH EAX
0073D2A3  FF 55 FC                  CALL dword ptr [EBP + -0x4]
0073D2A6  83 C4 04                  ADD ESP,0x4
LAB_0073d2a9:
0073D2A9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0073D2AC  89 0D F4 72 85 00         MOV dword ptr [0x008572f4],ECX
0073D2B2  83 C8 FF                  OR EAX,0xffffffff
LAB_0073d2b5:
0073D2B5  8B E5                     MOV ESP,EBP
0073D2B7  5D                        POP EBP
0073D2B8  C3                        RET
