FUN_006dad00:
006DAD00  55                        PUSH EBP
006DAD01  8B EC                     MOV EBP,ESP
006DAD03  6A FF                     PUSH -0x1
006DAD05  68 48 DF 79 00            PUSH 0x79df48
006DAD0A  68 64 D9 72 00            PUSH 0x72d964
006DAD0F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006DAD15  50                        PUSH EAX
006DAD16  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006DAD1D  83 EC 20                  SUB ESP,0x20
006DAD20  53                        PUSH EBX
006DAD21  56                        PUSH ESI
006DAD22  57                        PUSH EDI
006DAD23  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DAD26  33 DB                     XOR EBX,EBX
006DAD28  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006DAD2B  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006DAD2E  25 00 11 00 00            AND EAX,0x1100
006DAD33  3D 00 01 00 00            CMP EAX,0x100
006DAD38  0F 84 4B 01 00 00         JZ 0x006dae89
006DAD3E  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006DAD45  74 0D                     JZ 0x006dad54
006DAD47  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006DAD4D  51                        PUSH ECX
006DAD4E  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006dad54:
006DAD54  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006DAD57  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006DAD5A  03 D7                     ADD EDX,EDI
006DAD5C  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006DAD5F  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006DAD62  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006DAD65  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006DAD68  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006DAD6B  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006DAD6E  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006DAD71  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006DAD74  8D 86 84 04 00 00         LEA EAX,[ESI + 0x484]
006DAD7A  50                        PUSH EAX
006DAD7B  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006DAD7E  51                        PUSH ECX
006DAD7F  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006DAD82  52                        PUSH EDX
006DAD83  E8 28 51 FF FF            CALL 0x006cfeb0
006DAD88  83 C4 0C                  ADD ESP,0xc
006DAD8B  85 C0                     TEST EAX,EAX
006DAD8D  0F 84 B1 00 00 00         JZ 0x006dae44
006DAD93  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006DAD96  2B 46 10                  SUB EAX,dword ptr [ESI + 0x10]
006DAD99  2B C7                     SUB EAX,EDI
006DAD9B  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006DAD9E  03 F8                     ADD EDI,EAX
006DADA0  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006DADA3  2B 4E 14                  SUB ECX,dword ptr [ESI + 0x14]
006DADA6  2B 4D 10                  SUB ECX,dword ptr [EBP + 0x10]
006DADA9  01 4D 24                  ADD dword ptr [EBP + 0x24],ECX
006DADAC  56                        PUSH ESI
006DADAD  E8 FE 0A FE FF            CALL 0x006bb8b0
006DADB2  8B D8                     MOV EBX,EAX
006DADB4  85 DB                     TEST EBX,EBX
006DADB6  75 7A                     JNZ 0x006dae32
006DADB8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DADBB  8B 8E 78 04 00 00         MOV ECX,dword ptr [ESI + 0x478]
006DADC1  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006DADC4  52                        PUSH EDX
006DADC5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006DADC8  50                        PUSH EAX
006DADC9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006DADCC  52                        PUSH EDX
006DADCD  57                        PUSH EDI
006DADCE  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006DADD1  50                        PUSH EAX
006DADD2  83 C0 07                  ADD EAX,0x7
006DADD5  0F AF 45 24               IMUL EAX,dword ptr [EBP + 0x24]
006DADD9  99                        CDQ
006DADDA  83 E2 07                  AND EDX,0x7
006DADDD  03 D0                     ADD EDX,EAX
006DADDF  C1 FA 03                  SAR EDX,0x3
006DADE2  8B C7                     MOV EAX,EDI
006DADE4  8B FA                     MOV EDI,EDX
006DADE6  99                        CDQ
006DADE7  83 E2 07                  AND EDX,0x7
006DADEA  03 C2                     ADD EAX,EDX
006DADEC  C1 F8 03                  SAR EAX,0x3
006DADEF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006DADF2  03 D7                     ADD EDX,EDI
006DADF4  03 C2                     ADD EAX,EDX
006DADF6  50                        PUSH EAX
006DADF7  51                        PUSH ECX
006DADF8  0F AF 4D D8               IMUL ECX,dword ptr [EBP + -0x28]
006DADFC  03 8E 74 04 00 00         ADD ECX,dword ptr [ESI + 0x474]
006DAE02  03 4D D4                  ADD ECX,dword ptr [EBP + -0x2c]
006DAE05  51                        PUSH ECX
006DAE06  E8 65 FE FF FF            CALL 0x006dac70
006DAE0B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DAE12  EB 18                     JMP 0x006dae2c
LAB_006dae2c:
006DAE2C  56                        PUSH ESI
006DAE2D  E8 4E 0B FE FF            CALL 0x006bb980
LAB_006dae32:
006DAE32  81 FB A0 00 76 88         CMP EBX,0x887600a0
006DAE38  74 08                     JZ 0x006dae42
006DAE3A  81 FB AE 01 76 88         CMP EBX,0x887601ae
006DAE40  75 02                     JNZ 0x006dae44
LAB_006dae42:
006DAE42  33 DB                     XOR EBX,EBX
LAB_006dae44:
006DAE44  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006DAE4B  74 0D                     JZ 0x006dae5a
006DAE4D  81 C6 F0 04 00 00         ADD ESI,0x4f0
006DAE53  56                        PUSH ESI
006DAE54  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006dae5a:
006DAE5A  85 DB                     TEST EBX,EBX
006DAE5C  74 2B                     JZ 0x006dae89
006DAE5E  68 77 01 00 00            PUSH 0x177
006DAE63  68 00 E4 7E 00            PUSH 0x7ee400
006DAE68  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006DAE6D  50                        PUSH EAX
006DAE6E  53                        PUSH EBX
006DAE6F  E8 CC AF FC FF            CALL 0x006a5e40
006DAE74  8B C3                     MOV EAX,EBX
006DAE76  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DAE79  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006DAE80  5F                        POP EDI
006DAE81  5E                        POP ESI
006DAE82  5B                        POP EBX
006DAE83  8B E5                     MOV ESP,EBP
006DAE85  5D                        POP EBP
006DAE86  C2 2C 00                  RET 0x2c
LAB_006dae89:
006DAE89  33 C0                     XOR EAX,EAX
006DAE8B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DAE8E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006DAE95  5F                        POP EDI
006DAE96  5E                        POP ESI
006DAE97  5B                        POP EBX
006DAE98  8B E5                     MOV ESP,EBP
006DAE9A  5D                        POP EBP
006DAE9B  C2 2C 00                  RET 0x2c
