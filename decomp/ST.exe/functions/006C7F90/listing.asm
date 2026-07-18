FUN_006c7f90:
006C7F90  55                        PUSH EBP
006C7F91  8B EC                     MOV EBP,ESP
006C7F93  81 EC 10 09 00 00         SUB ESP,0x910
006C7F99  53                        PUSH EBX
006C7F9A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C7F9D  66 83 7B 0E 08            CMP word ptr [EBX + 0xe],0x8
006C7FA2  0F 85 B8 01 00 00         JNZ 0x006c8160
006C7FA8  56                        PUSH ESI
006C7FA9  57                        PUSH EDI
006C7FAA  B9 40 00 00 00            MOV ECX,0x40
006C7FAF  33 C0                     XOR EAX,EAX
006C7FB1  8D BD F4 FE FF FF         LEA EDI,[EBP + 0xfffffef4]
006C7FB7  F3 AB                     STOSD.REP ES:EDI
006C7FB9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C7FBC  85 C0                     TEST EAX,EAX
006C7FBE  7C 0E                     JL 0x006c7fce
006C7FC0  3D 00 01 00 00            CMP EAX,0x100
006C7FC5  7D 07                     JGE 0x006c7fce
006C7FC7  88 84 05 F4 FE FF FF      MOV byte ptr [EBP + EAX*0x1 + 0xfffffef4],AL
LAB_006c7fce:
006C7FCE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C7FD1  85 C0                     TEST EAX,EAX
006C7FD3  75 06                     JNZ 0x006c7fdb
006C7FD5  53                        PUSH EBX
006C7FD6  E8 C5 CF FE FF            CALL 0x006b4fa0
LAB_006c7fdb:
006C7FDB  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
006C7FDE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C7FE1  33 C0                     XOR EAX,EAX
006C7FE3  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006C7FE6  66 8B 43 0E               MOV AX,word ptr [EBX + 0xe]
006C7FEA  8D 7B 28                  LEA EDI,[EBX + 0x28]
006C7FED  0F AF F0                  IMUL ESI,EAX
006C7FF0  83 C6 1F                  ADD ESI,0x1f
006C7FF3  53                        PUSH EBX
006C7FF4  C1 EE 03                  SHR ESI,0x3
006C7FF7  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C7FFA  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006C8000  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C8003  E8 D8 CF FE FF            CALL 0x006b4fe0
006C8008  6A 00                     PUSH 0x0
006C800A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006C800D  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
006C8013  8D 95 F0 F6 FF FF         LEA EDX,[EBP + 0xfffff6f0]
006C8019  8B D8                     MOV EBX,EAX
006C801B  52                        PUSH EDX
006C801C  68 00 01 00 00            PUSH 0x100
006C8021  6A 00                     PUSH 0x0
006C8023  53                        PUSH EBX
006C8024  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
006C802A  53                        PUSH EBX
006C802B  6A 00                     PUSH 0x0
006C802D  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
006C8033  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C8036  8D 85 F4 FA FF FF         LEA EAX,[EBP + 0xfffffaf4]
006C803C  50                        PUSH EAX
006C803D  68 00 01 00 00            PUSH 0x100
006C8042  6A 00                     PUSH 0x0
006C8044  51                        PUSH ECX
006C8045  FF 15 A0 BA 85 00         CALL dword ptr [0x0085baa0]
006C804B  33 D2                     XOR EDX,EDX
006C804D  8D 85 F4 FA FF FF         LEA EAX,[EBP + 0xfffffaf4]
006C8053  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006C8056  B9 00 01 00 00            MOV ECX,0x100
LAB_006c805b:
006C805B  F6 40 03 02               TEST byte ptr [EAX + 0x3],0x2
006C805F  74 12                     JZ 0x006c8073
006C8061  33 DB                     XOR EBX,EBX
006C8063  BA 01 00 00 00            MOV EDX,0x1
006C8068  8A 18                     MOV BL,byte ptr [EAX]
006C806A  8B 9C 9D F0 F6 FF FF      MOV EBX,dword ptr [EBP + EBX*0x4 + 0xfffff6f0]
006C8071  89 18                     MOV dword ptr [EAX],EBX
LAB_006c8073:
006C8073  83 C0 04                  ADD EAX,0x4
006C8076  49                        DEC ECX
006C8077  75 E2                     JNZ 0x006c805b
006C8079  85 D2                     TEST EDX,EDX
006C807B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006C807E  74 22                     JZ 0x006c80a2
006C8080  8D 95 F0 FA FF FF         LEA EDX,[EBP + 0xfffffaf0]
006C8086  66 C7 85 F0 FA FF FF 00 03  MOV word ptr [EBP + 0xfffffaf0],0x300
006C808F  52                        PUSH EDX
006C8090  66 C7 85 F2 FA FF FF 00 01  MOV word ptr [EBP + 0xfffffaf2],0x100
006C8099  FF 15 7C BA 85 00         CALL dword ptr [0x0085ba7c]
006C809F  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006c80a2:
006C80A2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C80A5  33 DB                     XOR EBX,EBX
006C80A7  85 C0                     TEST EAX,EAX
006C80A9  7E 3A                     JLE 0x006c80e5
LAB_006c80ab:
006C80AB  3B 5D 14                  CMP EBX,dword ptr [EBP + 0x14]
006C80AE  74 2A                     JZ 0x006c80da
006C80B0  33 C0                     XOR EAX,EAX
006C80B2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C80B5  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
006C80B8  33 C9                     XOR ECX,ECX
006C80BA  8A 27                     MOV AH,byte ptr [EDI]
006C80BC  8A 4F 02                  MOV CL,byte ptr [EDI + 0x2]
006C80BF  C1 E0 08                  SHL EAX,0x8
006C80C2  0B C1                     OR EAX,ECX
006C80C4  50                        PUSH EAX
006C80C5  52                        PUSH EDX
006C80C6  FF 15 A8 BA 85 00         CALL dword ptr [0x0085baa8]
006C80CC  83 F8 FF                  CMP EAX,-0x1
006C80CF  75 02                     JNZ 0x006c80d3
006C80D1  33 C0                     XOR EAX,EAX
LAB_006c80d3:
006C80D3  88 84 1D F4 FE FF FF      MOV byte ptr [EBP + EBX*0x1 + 0xfffffef4],AL
LAB_006c80da:
006C80DA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C80DD  83 C7 04                  ADD EDI,0x4
006C80E0  43                        INC EBX
006C80E1  3B D8                     CMP EBX,EAX
006C80E3  7C C6                     JL 0x006c80ab
LAB_006c80e5:
006C80E5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C80E8  8B C8                     MOV ECX,EAX
006C80EA  48                        DEC EAX
006C80EB  85 C9                     TEST ECX,ECX
006C80ED  7E 24                     JLE 0x006c8113
006C80EF  8D 78 01                  LEA EDI,[EAX + 0x1]
LAB_006c80f2:
006C80F2  85 F6                     TEST ESI,ESI
006C80F4  7E 1A                     JLE 0x006c8110
006C80F6  8D 0E                     LEA ECX,[ESI]
LAB_006c80f8:
006C80F8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C80FB  33 D2                     XOR EDX,EDX
006C80FD  8A 10                     MOV DL,byte ptr [EAX]
006C80FF  40                        INC EAX
006C8100  49                        DEC ECX
006C8101  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C8104  8A 94 15 F4 FE FF FF      MOV DL,byte ptr [EBP + EDX*0x1 + 0xfffffef4]
006C810B  88 50 FF                  MOV byte ptr [EAX + -0x1],DL
006C810E  75 E8                     JNZ 0x006c80f8
LAB_006c8110:
006C8110  4F                        DEC EDI
006C8111  75 DF                     JNZ 0x006c80f2
LAB_006c8113:
006C8113  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C8116  8D 95 F3 FA FF FF         LEA EDX,[EBP + 0xfffffaf3]
006C811C  8D B5 F4 FA FF FF         LEA ESI,[EBP + 0xfffffaf4]
006C8122  8D BD F5 FA FF FF         LEA EDI,[EBP + 0xfffffaf5]
006C8128  2B D1                     SUB EDX,ECX
006C812A  2B F1                     SUB ESI,ECX
006C812C  8D 41 01                  LEA EAX,[ECX + 0x1]
006C812F  2B F9                     SUB EDI,ECX
006C8131  B9 00 01 00 00            MOV ECX,0x100
LAB_006c8136:
006C8136  8A 1C 02                  MOV BL,byte ptr [EDX + EAX*0x1]
006C8139  88 58 01                  MOV byte ptr [EAX + 0x1],BL
006C813C  8A 1C 06                  MOV BL,byte ptr [ESI + EAX*0x1]
006C813F  88 18                     MOV byte ptr [EAX],BL
006C8141  8A 1C 07                  MOV BL,byte ptr [EDI + EAX*0x1]
006C8144  88 58 FF                  MOV byte ptr [EAX + -0x1],BL
006C8147  83 C0 04                  ADD EAX,0x4
006C814A  49                        DEC ECX
006C814B  75 E9                     JNZ 0x006c8136
006C814D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C8150  5F                        POP EDI
006C8151  85 C0                     TEST EAX,EAX
006C8153  5E                        POP ESI
006C8154  74 0A                     JZ 0x006c8160
006C8156  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C8159  50                        PUSH EAX
006C815A  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
LAB_006c8160:
006C8160  5B                        POP EBX
006C8161  8B E5                     MOV ESP,EBP
006C8163  5D                        POP EBP
006C8164  C2 10 00                  RET 0x10
