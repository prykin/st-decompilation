FUN_0061fe80:
0061FE80  55                        PUSH EBP
0061FE81  8B EC                     MOV EBP,ESP
0061FE83  83 EC 0C                  SUB ESP,0xc
0061FE86  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0061FE8B  53                        PUSH EBX
0061FE8C  56                        PUSH ESI
0061FE8D  8B F1                     MOV ESI,ECX
0061FE8F  8B 98 E4 00 00 00         MOV EBX,dword ptr [EAX + 0xe4]
0061FE95  33 C9                     XOR ECX,ECX
0061FE97  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0061FE9D  57                        PUSH EDI
0061FE9E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0061FEA1  3B CF                     CMP ECX,EDI
0061FEA3  0F 84 17 01 00 00         JZ 0x0061ffc0
0061FEA9  3B 9E C1 00 00 00         CMP EBX,dword ptr [ESI + 0xc1]
0061FEAF  0F 82 0B 01 00 00         JC 0x0061ffc0
0061FEB5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061FEB8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061FEBB  57                        PUSH EDI
0061FEBC  52                        PUSH EDX
0061FEBD  50                        PUSH EAX
0061FEBE  53                        PUSH EBX
0061FEBF  8B CE                     MOV ECX,ESI
0061FEC1  E8 D9 12 DE FF            CALL 0x0040119f
0061FEC6  85 C0                     TEST EAX,EAX
0061FEC8  7D 15                     JGE 0x0061fedf
0061FECA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061FECD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061FED0  57                        PUSH EDI
0061FED1  51                        PUSH ECX
0061FED2  52                        PUSH EDX
0061FED3  53                        PUSH EBX
0061FED4  8B CE                     MOV ECX,ESI
0061FED6  E8 C2 5A DE FF            CALL 0x0040599d
0061FEDB  85 C0                     TEST EAX,EAX
0061FEDD  7D 09                     JGE 0x0061fee8
LAB_0061fedf:
0061FEDF  83 F8 02                  CMP EAX,0x2
0061FEE2  0F 85 D8 00 00 00         JNZ 0x0061ffc0
LAB_0061fee8:
0061FEE8  33 C0                     XOR EAX,EAX
0061FEEA  A0 4E 87 80 00            MOV AL,[0x0080874e]
0061FEEF  48                        DEC EAX
0061FEF0  74 60                     JZ 0x0061ff52
0061FEF2  48                        DEC EAX
0061FEF3  74 32                     JZ 0x0061ff27
0061FEF5  48                        DEC EAX
0061FEF6  0F 85 C4 00 00 00         JNZ 0x0061ffc0
0061FEFC  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0061FEFF  2D A6 00 00 00            SUB EAX,0xa6
0061FF04  74 1A                     JZ 0x0061ff20
0061FF06  48                        DEC EAX
0061FF07  74 10                     JZ 0x0061ff19
0061FF09  83 E8 16                  SUB EAX,0x16
0061FF0C  0F 85 AE 00 00 00         JNZ 0x0061ffc0
0061FF12  B8 8E 00 00 00            MOV EAX,0x8e
0061FF17  EB 5E                     JMP 0x0061ff77
LAB_0061ff19:
0061FF19  B8 8B 00 00 00            MOV EAX,0x8b
0061FF1E  EB 57                     JMP 0x0061ff77
LAB_0061ff20:
0061FF20  B8 88 00 00 00            MOV EAX,0x88
0061FF25  EB 50                     JMP 0x0061ff77
LAB_0061ff27:
0061FF27  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0061FF2A  2D A6 00 00 00            SUB EAX,0xa6
0061FF2F  74 1A                     JZ 0x0061ff4b
0061FF31  48                        DEC EAX
0061FF32  74 10                     JZ 0x0061ff44
0061FF34  83 E8 16                  SUB EAX,0x16
0061FF37  0F 85 83 00 00 00         JNZ 0x0061ffc0
0061FF3D  B8 8D 00 00 00            MOV EAX,0x8d
0061FF42  EB 33                     JMP 0x0061ff77
LAB_0061ff44:
0061FF44  B8 8A 00 00 00            MOV EAX,0x8a
0061FF49  EB 2C                     JMP 0x0061ff77
LAB_0061ff4b:
0061FF4B  B8 87 00 00 00            MOV EAX,0x87
0061FF50  EB 25                     JMP 0x0061ff77
LAB_0061ff52:
0061FF52  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0061FF55  2D A6 00 00 00            SUB EAX,0xa6
0061FF5A  74 16                     JZ 0x0061ff72
0061FF5C  48                        DEC EAX
0061FF5D  74 0C                     JZ 0x0061ff6b
0061FF5F  83 E8 16                  SUB EAX,0x16
0061FF62  75 5C                     JNZ 0x0061ffc0
0061FF64  B8 8C 00 00 00            MOV EAX,0x8c
0061FF69  EB 0C                     JMP 0x0061ff77
LAB_0061ff6b:
0061FF6B  B8 89 00 00 00            MOV EAX,0x89
0061FF70  EB 05                     JMP 0x0061ff77
LAB_0061ff72:
0061FF72  B8 86 00 00 00            MOV EAX,0x86
LAB_0061ff77:
0061FF77  33 C9                     XOR ECX,ECX
0061FF79  8D 55 F4                  LEA EDX,[EBP + -0xc]
0061FF7C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0061FF7F  6A 00                     PUSH 0x0
0061FF81  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061FF84  52                        PUSH EDX
0061FF85  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0061FF88  83 C9 FF                  OR ECX,0xffffffff
0061FF8B  50                        PUSH EAX
0061FF8C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0061FF8F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061FF92  6A 00                     PUSH 0x0
0061FF94  6A 06                     PUSH 0x6
0061FF96  B9 58 76 80 00            MOV ECX,0x807658
0061FF9B  E8 38 4C DE FF            CALL 0x00404bd8
0061FFA0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061FFA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061FFA6  68 8E 00 00 00            PUSH 0x8e
0061FFAB  50                        PUSH EAX
0061FFAC  51                        PUSH ECX
0061FFAD  8B CE                     MOV ECX,ESI
0061FFAF  E8 AE 5D DE FF            CALL 0x00405d62
0061FFB4  81 C3 FA 00 00 00         ADD EBX,0xfa
0061FFBA  89 9E C1 00 00 00         MOV dword ptr [ESI + 0xc1],EBX
LAB_0061ffc0:
0061FFC0  5F                        POP EDI
0061FFC1  5E                        POP ESI
0061FFC2  5B                        POP EBX
0061FFC3  8B E5                     MOV ESP,EBP
0061FFC5  5D                        POP EBP
0061FFC6  C2 14 00                  RET 0x14
