FUN_00564dd0:
00564DD0  55                        PUSH EBP
00564DD1  8B EC                     MOV EBP,ESP
00564DD3  83 EC 08                  SUB ESP,0x8
00564DD6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00564DD9  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
00564DDF  53                        PUSH EBX
00564DE0  56                        PUSH ESI
00564DE1  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00564DE4  57                        PUSH EDI
00564DE5  8B 3D 7C 33 80 00         MOV EDI,dword ptr [0x0080337c]
00564DEB  8B 34 91                  MOV ESI,dword ptr [ECX + EDX*0x4]
00564DEE  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
00564DF1  3B C7                     CMP EAX,EDI
00564DF3  A1 EC 32 80 00            MOV EAX,[0x008032ec]
00564DF8  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
00564DFB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00564DFE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00564E01  7D 05                     JGE 0x00564e08
00564E03  A1 78 33 80 00            MOV EAX,[0x00803378]
LAB_00564e08:
00564E08  99                        CDQ
00564E09  2B C2                     SUB EAX,EDX
00564E0B  33 F6                     XOR ESI,ESI
00564E0D  D1 F8                     SAR EAX,0x1
00564E0F  99                        CDQ
00564E10  2B C2                     SUB EAX,EDX
00564E12  8B D8                     MOV EBX,EAX
00564E14  D1 FB                     SAR EBX,0x1
00564E16  85 FF                     TEST EDI,EDI
00564E18  7E 55                     JLE 0x00564e6f
00564E1A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00564E1D  33 FF                     XOR EDI,EDI
00564E1F  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_00564e22:
00564E22  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00564E25  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00564E28  52                        PUSH EDX
00564E29  8B 54 0F 04               MOV EDX,dword ptr [EDI + ECX*0x1 + 0x4]
00564E2D  50                        PUSH EAX
00564E2E  8B 04 0F                  MOV EAX,dword ptr [EDI + ECX*0x1]
00564E31  52                        PUSH EDX
00564E32  50                        PUSH EAX
00564E33  E8 58 81 14 00            CALL 0x006acf90
00564E38  8B C8                     MOV ECX,EAX
00564E3A  A1 78 33 80 00            MOV EAX,[0x00803378]
00564E3F  99                        CDQ
00564E40  2B C2                     SUB EAX,EDX
00564E42  D1 F8                     SAR EAX,0x1
00564E44  03 C3                     ADD EAX,EBX
00564E46  3B C8                     CMP ECX,EAX
00564E48  7D 09                     JGE 0x00564e53
00564E4A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00564E4D  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
LAB_00564e53:
00564E53  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00564E56  A1 7C 33 80 00            MOV EAX,[0x0080337c]
00564E5B  46                        INC ESI
00564E5C  83 C1 04                  ADD ECX,0x4
00564E5F  83 C7 14                  ADD EDI,0x14
00564E62  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00564E65  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
00564E6B  3B F0                     CMP ESI,EAX
00564E6D  7C B3                     JL 0x00564e22
LAB_00564e6f:
00564E6F  3B 35 98 33 80 00         CMP ESI,dword ptr [0x00803398]
00564E75  7D 5E                     JGE 0x00564ed5
00564E77  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00564E7A  8D 3C B6                  LEA EDI,[ESI + ESI*0x4]
00564E7D  C1 E7 02                  SHL EDI,0x2
00564E80  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
00564E83  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00564E86  EB 06                     JMP 0x00564e8e
LAB_00564e88:
00564E88  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
LAB_00564e8e:
00564E8E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00564E91  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00564E94  50                        PUSH EAX
00564E95  8B 44 0F 04               MOV EAX,dword ptr [EDI + ECX*0x1 + 0x4]
00564E99  8B 0C 0F                  MOV ECX,dword ptr [EDI + ECX*0x1]
00564E9C  52                        PUSH EDX
00564E9D  50                        PUSH EAX
00564E9E  51                        PUSH ECX
00564E9F  E8 EC 80 14 00            CALL 0x006acf90
00564EA4  8B C8                     MOV ECX,EAX
00564EA6  A1 EC 32 80 00            MOV EAX,[0x008032ec]
00564EAB  99                        CDQ
00564EAC  2B C2                     SUB EAX,EDX
00564EAE  D1 F8                     SAR EAX,0x1
00564EB0  03 C3                     ADD EAX,EBX
00564EB2  3B C8                     CMP ECX,EAX
00564EB4  7D 09                     JGE 0x00564ebf
00564EB6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00564EB9  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
LAB_00564ebf:
00564EBF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00564EC2  A1 98 33 80 00            MOV EAX,[0x00803398]
00564EC7  46                        INC ESI
00564EC8  83 C7 14                  ADD EDI,0x14
00564ECB  83 C1 04                  ADD ECX,0x4
00564ECE  3B F0                     CMP ESI,EAX
00564ED0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00564ED3  7C B3                     JL 0x00564e88
LAB_00564ed5:
00564ED5  5F                        POP EDI
00564ED6  5E                        POP ESI
00564ED7  5B                        POP EBX
00564ED8  8B E5                     MOV ESP,EBP
00564EDA  5D                        POP EBP
00564EDB  C2 10 00                  RET 0x10
