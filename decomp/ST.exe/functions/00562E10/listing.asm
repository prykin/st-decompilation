FUN_00562e10:
00562E10  55                        PUSH EBP
00562E11  8B EC                     MOV EBP,ESP
00562E13  83 EC 08                  SUB ESP,0x8
00562E16  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00562E19  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
00562E1F  53                        PUSH EBX
00562E20  56                        PUSH ESI
00562E21  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00562E24  57                        PUSH EDI
00562E25  8B 3D 7C 33 80 00         MOV EDI,dword ptr [0x0080337c]
00562E2B  8B 34 91                  MOV ESI,dword ptr [ECX + EDX*0x4]
00562E2E  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
00562E31  3B C7                     CMP EAX,EDI
00562E33  A1 EC 32 80 00            MOV EAX,[0x008032ec]
00562E38  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
00562E3B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00562E3E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00562E41  7D 05                     JGE 0x00562e48
00562E43  A1 78 33 80 00            MOV EAX,[0x00803378]
LAB_00562e48:
00562E48  99                        CDQ
00562E49  2B C2                     SUB EAX,EDX
00562E4B  33 F6                     XOR ESI,ESI
00562E4D  D1 F8                     SAR EAX,0x1
00562E4F  85 FF                     TEST EDI,EDI
00562E51  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00562E54  7E 4C                     JLE 0x00562ea2
00562E56  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00562E59  33 FF                     XOR EDI,EDI
LAB_00562e5b:
00562E5B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00562E5E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00562E61  50                        PUSH EAX
00562E62  8B 44 0F 04               MOV EAX,dword ptr [EDI + ECX*0x1 + 0x4]
00562E66  8B 0C 0F                  MOV ECX,dword ptr [EDI + ECX*0x1]
00562E69  52                        PUSH EDX
00562E6A  50                        PUSH EAX
00562E6B  51                        PUSH ECX
00562E6C  E8 1F A1 14 00            CALL 0x006acf90
00562E71  8B C8                     MOV ECX,EAX
00562E73  A1 78 33 80 00            MOV EAX,[0x00803378]
00562E78  99                        CDQ
00562E79  2B C2                     SUB EAX,EDX
00562E7B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00562E7E  D1 F8                     SAR EAX,0x1
00562E80  03 C2                     ADD EAX,EDX
00562E82  3B C8                     CMP ECX,EAX
00562E84  7D 06                     JGE 0x00562e8c
00562E86  C7 03 FF FF FF FF         MOV dword ptr [EBX],0xffffffff
LAB_00562e8c:
00562E8C  A1 7C 33 80 00            MOV EAX,[0x0080337c]
00562E91  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
00562E97  46                        INC ESI
00562E98  83 C7 14                  ADD EDI,0x14
00562E9B  83 C3 04                  ADD EBX,0x4
00562E9E  3B F0                     CMP ESI,EAX
00562EA0  7C B9                     JL 0x00562e5b
LAB_00562ea2:
00562EA2  3B 35 98 33 80 00         CMP ESI,dword ptr [0x00803398]
00562EA8  7D 55                     JGE 0x00562eff
00562EAA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00562EAD  8D 3C B6                  LEA EDI,[ESI + ESI*0x4]
00562EB0  C1 E7 02                  SHL EDI,0x2
00562EB3  8D 1C B2                  LEA EBX,[EDX + ESI*0x4]
00562EB6  EB 06                     JMP 0x00562ebe
LAB_00562eb8:
00562EB8  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
LAB_00562ebe:
00562EBE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00562EC1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00562EC4  50                        PUSH EAX
00562EC5  8B 44 0F 04               MOV EAX,dword ptr [EDI + ECX*0x1 + 0x4]
00562EC9  8B 0C 0F                  MOV ECX,dword ptr [EDI + ECX*0x1]
00562ECC  52                        PUSH EDX
00562ECD  50                        PUSH EAX
00562ECE  51                        PUSH ECX
00562ECF  E8 BC A0 14 00            CALL 0x006acf90
00562ED4  8B C8                     MOV ECX,EAX
00562ED6  A1 EC 32 80 00            MOV EAX,[0x008032ec]
00562EDB  99                        CDQ
00562EDC  2B C2                     SUB EAX,EDX
00562EDE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00562EE1  D1 F8                     SAR EAX,0x1
00562EE3  03 C2                     ADD EAX,EDX
00562EE5  3B C8                     CMP ECX,EAX
00562EE7  7D 06                     JGE 0x00562eef
00562EE9  C7 03 FF FF FF FF         MOV dword ptr [EBX],0xffffffff
LAB_00562eef:
00562EEF  A1 98 33 80 00            MOV EAX,[0x00803398]
00562EF4  46                        INC ESI
00562EF5  83 C7 14                  ADD EDI,0x14
00562EF8  83 C3 04                  ADD EBX,0x4
00562EFB  3B F0                     CMP ESI,EAX
00562EFD  7C B9                     JL 0x00562eb8
LAB_00562eff:
00562EFF  5F                        POP EDI
00562F00  5E                        POP ESI
00562F01  5B                        POP EBX
00562F02  8B E5                     MOV ESP,EBP
00562F04  5D                        POP EBP
00562F05  C2 10 00                  RET 0x10
