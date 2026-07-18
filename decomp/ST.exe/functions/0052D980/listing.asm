FUN_0052d980:
0052D980  55                        PUSH EBP
0052D981  8B EC                     MOV EBP,ESP
0052D983  83 EC 58                  SUB ESP,0x58
0052D986  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052D98B  53                        PUSH EBX
0052D98C  56                        PUSH ESI
0052D98D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0052D990  57                        PUSH EDI
0052D991  8D 55 AC                  LEA EDX,[EBP + -0x54]
0052D994  8D 4D A8                  LEA ECX,[EBP + -0x58]
0052D997  6A 00                     PUSH 0x0
0052D999  52                        PUSH EDX
0052D99A  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0052D99D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052D9A3  E8 48 FE 1F 00            CALL 0x0072d7f0
0052D9A8  8B F0                     MOV ESI,EAX
0052D9AA  83 C4 08                  ADD ESP,0x8
0052D9AD  85 F6                     TEST ESI,ESI
0052D9AF  0F 85 25 01 00 00         JNZ 0x0052dada
0052D9B5  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0052D9B8  B9 E8 FF FF FF            MOV ECX,0xffffffe8
0052D9BD  33 DB                     XOR EBX,EBX
0052D9BF  2B CF                     SUB ECX,EDI
0052D9C1  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0052D9C4  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0052D9C7  C7 45 F8 1E 00 00 00      MOV dword ptr [EBP + -0x8],0x1e
0052D9CE  8D 77 18                  LEA ESI,[EDI + 0x18]
0052D9D1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0052D9D4  EB 03                     JMP 0x0052d9d9
LAB_0052d9d6:
0052D9D6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0052d9d9:
0052D9D9  A1 42 73 80 00            MOV EAX,[0x00807342]
0052D9DE  85 C0                     TEST EAX,EAX
0052D9E0  0F 84 9B 00 00 00         JZ 0x0052da81
0052D9E6  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0052D9E9  8A 97 9C 00 00 00         MOV DL,byte ptr [EDI + 0x9c]
0052D9EF  3A C2                     CMP AL,DL
0052D9F1  0F 83 8A 00 00 00         JNC 0x0052da81
0052D9F7  8B 87 98 00 00 00         MOV EAX,dword ptr [EDI + 0x98]
0052D9FD  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0052DA00  3B DA                     CMP EBX,EDX
0052DA02  7D 0D                     JGE 0x0052da11
0052DA04  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0052DA07  03 D9                     ADD EBX,ECX
0052DA09  8B 0C 33                  MOV ECX,dword ptr [EBX + ESI*0x1]
0052DA0C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0052DA0F  EB 02                     JMP 0x0052da13
LAB_0052da11:
0052DA11  33 C9                     XOR ECX,ECX
LAB_0052da13:
0052DA13  85 C9                     TEST ECX,ECX
0052DA15  74 6A                     JZ 0x0052da81
0052DA17  3B DA                     CMP EBX,EDX
0052DA19  7D 0D                     JGE 0x0052da28
0052DA1B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052DA1E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0052DA21  03 C8                     ADD ECX,EAX
0052DA23  8B 04 31                  MOV EAX,dword ptr [ECX + ESI*0x1]
0052DA26  EB 02                     JMP 0x0052da2a
LAB_0052da28:
0052DA28  33 C0                     XOR EAX,EAX
LAB_0052da2a:
0052DA2A  8B 8F 94 00 00 00         MOV ECX,dword ptr [EDI + 0x94]
0052DA30  50                        PUSH EAX
0052DA31  E8 DA 36 1E 00            CALL 0x00711110
0052DA36  8B 97 90 00 00 00         MOV EDX,dword ptr [EDI + 0x90]
0052DA3C  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0052DA3F  3B C1                     CMP EAX,ECX
0052DA41  7C 02                     JL 0x0052da45
0052DA43  8B C1                     MOV EAX,ECX
LAB_0052da45:
0052DA45  6A 13                     PUSH 0x13
0052DA47  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0052DA4A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052DA50  50                        PUSH EAX
0052DA51  8B 06                     MOV EAX,dword ptr [ESI]
0052DA53  50                        PUSH EAX
0052DA54  51                        PUSH ECX
0052DA55  E8 A6 4D 18 00            CALL 0x006b2800
0052DA5A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052DA5D  8B 06                     MOV EAX,dword ptr [ESI]
0052DA5F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052DA65  52                        PUSH EDX
0052DA66  6A 0D                     PUSH 0xd
0052DA68  6A FF                     PUSH -0x1
0052DA6A  50                        PUSH EAX
0052DA6B  51                        PUSH ECX
0052DA6C  E8 CF 5B 18 00            CALL 0x006b3640
0052DA71  8B 16                     MOV EDX,dword ptr [ESI]
0052DA73  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0052DA78  52                        PUSH EDX
0052DA79  50                        PUSH EAX
0052DA7A  E8 B1 59 18 00            CALL 0x006b3430
0052DA7F  EB 29                     JMP 0x0052daaa
LAB_0052da81:
0052DA81  C7 46 3C 00 00 00 00      MOV dword ptr [ESI + 0x3c],0x0
0052DA88  8B 0E                     MOV ECX,dword ptr [ESI]
0052DA8A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0052DA90  6A 13                     PUSH 0x13
0052DA92  6A 00                     PUSH 0x0
0052DA94  51                        PUSH ECX
0052DA95  52                        PUSH EDX
0052DA96  E8 65 4D 18 00            CALL 0x006b2800
0052DA9B  8B 06                     MOV EAX,dword ptr [ESI]
0052DA9D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052DAA3  50                        PUSH EAX
0052DAA4  51                        PUSH ECX
0052DAA5  E8 46 60 18 00            CALL 0x006b3af0
LAB_0052daaa:
0052DAAA  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0052DAAD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052DAB0  FE C0                     INC AL
0052DAB2  43                        INC EBX
0052DAB3  83 C6 04                  ADD ESI,0x4
0052DAB6  83 C2 13                  ADD EDX,0x13
0052DAB9  3C 0F                     CMP AL,0xf
0052DABB  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0052DABE  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0052DAC1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0052DAC4  0F 82 0C FF FF FF         JC 0x0052d9d6
0052DACA  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0052DACD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052DAD3  5F                        POP EDI
0052DAD4  5E                        POP ESI
0052DAD5  5B                        POP EBX
0052DAD6  8B E5                     MOV ESP,EBP
0052DAD8  5D                        POP EBP
0052DAD9  C3                        RET
LAB_0052dada:
0052DADA  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0052DADD  68 10 70 7C 00            PUSH 0x7c7010
0052DAE2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052DAE7  56                        PUSH ESI
0052DAE8  6A 00                     PUSH 0x0
0052DAEA  68 95 00 00 00            PUSH 0x95
0052DAEF  68 84 6F 7C 00            PUSH 0x7c6f84
0052DAF4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052DAF9  E8 D2 F9 17 00            CALL 0x006ad4d0
0052DAFE  83 C4 18                  ADD ESP,0x18
0052DB01  85 C0                     TEST EAX,EAX
0052DB03  74 01                     JZ 0x0052db06
0052DB05  CC                        INT3
LAB_0052db06:
0052DB06  68 95 00 00 00            PUSH 0x95
0052DB0B  68 84 6F 7C 00            PUSH 0x7c6f84
0052DB10  6A 00                     PUSH 0x0
0052DB12  56                        PUSH ESI
0052DB13  E8 28 83 17 00            CALL 0x006a5e40
0052DB18  5F                        POP EDI
0052DB19  5E                        POP ESI
0052DB1A  5B                        POP EBX
0052DB1B  8B E5                     MOV ESP,EBP
0052DB1D  5D                        POP EBP
0052DB1E  C3                        RET
