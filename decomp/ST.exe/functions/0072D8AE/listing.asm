__local_unwind2:
0072D8AE  53                        PUSH EBX
0072D8AF  56                        PUSH ESI
0072D8B0  57                        PUSH EDI
0072D8B1  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072D8B5  50                        PUSH EAX
0072D8B6  6A FE                     PUSH -0x2
0072D8B8  68 8C D8 72 00            PUSH 0x72d88c
0072D8BD  64 FF 35 00 00 00 00      PUSH dword ptr FS:[0x0]
0072D8C4  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
LAB_0072d8cb:
0072D8CB  8B 44 24 20               MOV EAX,dword ptr [ESP + 0x20]
0072D8CF  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0072D8D2  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0072D8D5  83 FE FF                  CMP ESI,-0x1
0072D8D8  74 2E                     JZ 0x0072d908
0072D8DA  3B 74 24 24               CMP ESI,dword ptr [ESP + 0x24]
0072D8DE  74 28                     JZ 0x0072d908
0072D8E0  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
0072D8E3  8B 0C B3                  MOV ECX,dword ptr [EBX + ESI*0x4]
0072D8E6  89 4C 24 08               MOV dword ptr [ESP + 0x8],ECX
0072D8EA  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0072D8ED  83 7C B3 04 00            CMP dword ptr [EBX + ESI*0x4 + 0x4],0x0
0072D8F2  75 12                     JNZ 0x0072d906
0072D8F4  68 01 01 00 00            PUSH 0x101
0072D8F9  8B 44 B3 08               MOV EAX,dword ptr [EBX + ESI*0x4 + 0x8]
0072D8FD  E8 40 00 00 00            CALL 0x0072d942
0072D902  FF 54 B3 08               CALL dword ptr [EBX + ESI*0x4 + 0x8]
LAB_0072d906:
0072D906  EB C3                     JMP 0x0072d8cb
LAB_0072d908:
0072D908  64 8F 05 00 00 00 00      POP dword ptr FS:[0x0]
0072D90F  83 C4 0C                  ADD ESP,0xc
0072D912  5F                        POP EDI
0072D913  5E                        POP ESI
0072D914  5B                        POP EBX
0072D915  C3                        RET
