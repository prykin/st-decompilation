__setjmp3:
0072D7F0  8B 54 24 04               MOV EDX,dword ptr [ESP + 0x4]
0072D7F4  89 2A                     MOV dword ptr [EDX],EBP
0072D7F6  89 5A 04                  MOV dword ptr [EDX + 0x4],EBX
0072D7F9  89 7A 08                  MOV dword ptr [EDX + 0x8],EDI
0072D7FC  89 72 0C                  MOV dword ptr [EDX + 0xc],ESI
0072D7FF  89 62 10                  MOV dword ptr [EDX + 0x10],ESP
0072D802  8B 04 24                  MOV EAX,dword ptr [ESP]
0072D805  89 42 14                  MOV dword ptr [EDX + 0x14],EAX
0072D808  C7 42 20 30 32 43 56      MOV dword ptr [EDX + 0x20],0x56433230
0072D80F  C7 42 24 00 00 00 00      MOV dword ptr [EDX + 0x24],0x0
0072D816  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0072D81C  89 42 18                  MOV dword ptr [EDX + 0x18],EAX
0072D81F  83 F8 FF                  CMP EAX,-0x1
0072D822  75 09                     JNZ 0x0072d82d
0072D824  C7 42 1C FF FF FF FF      MOV dword ptr [EDX + 0x1c],0xffffffff
0072D82B  EB 3B                     JMP 0x0072d868
LAB_0072d82d:
0072D82D  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0072D831  0B C9                     OR ECX,ECX
0072D833  74 0A                     JZ 0x0072d83f
0072D835  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0072D839  89 42 24                  MOV dword ptr [EDX + 0x24],EAX
0072D83C  49                        DEC ECX
0072D83D  75 08                     JNZ 0x0072d847
LAB_0072d83f:
0072D83F  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0072D842  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
0072D845  EB 21                     JMP 0x0072d868
LAB_0072d847:
0072D847  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072D84B  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
0072D84E  49                        DEC ECX
0072D84F  74 17                     JZ 0x0072d868
0072D851  56                        PUSH ESI
0072D852  57                        PUSH EDI
0072D853  8D 74 24 1C               LEA ESI,[ESP + 0x1c]
0072D857  8D 7A 28                  LEA EDI,[EDX + 0x28]
0072D85A  83 F9 06                  CMP ECX,0x6
0072D85D  76 05                     JBE 0x0072d864
0072D85F  B9 06 00 00 00            MOV ECX,0x6
LAB_0072d864:
0072D864  F3 A5                     MOVSD.REP ES:EDI,ESI
0072D866  5F                        POP EDI
0072D867  5E                        POP ESI
LAB_0072d868:
0072D868  2B C0                     SUB EAX,EAX
0072D86A  C3                        RET
