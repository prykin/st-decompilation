FUN_006028a0:
006028A0  55                        PUSH EBP
006028A1  8B EC                     MOV EBP,ESP
006028A3  51                        PUSH ECX
006028A4  8B 89 11 02 00 00         MOV ECX,dword ptr [ECX + 0x211]
006028AA  53                        PUSH EBX
006028AB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006028AE  56                        PUSH ESI
006028AF  8B 41 48                  MOV EAX,dword ptr [ECX + 0x48]
006028B2  57                        PUSH EDI
006028B3  3B D8                     CMP EBX,EAX
006028B5  0F 8C AF 00 00 00         JL 0x0060296a
006028BB  3B 59 58                  CMP EBX,dword ptr [ECX + 0x58]
006028BE  0F 8F A6 00 00 00         JG 0x0060296a
006028C4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006028C7  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006028CA  3B F8                     CMP EDI,EAX
006028CC  0F 8C 98 00 00 00         JL 0x0060296a
006028D2  3B 79 54                  CMP EDI,dword ptr [ECX + 0x54]
006028D5  0F 8F 8F 00 00 00         JG 0x0060296a
006028DB  6A 00                     PUSH 0x0
006028DD  57                        PUSH EDI
006028DE  53                        PUSH EBX
006028DF  E8 EC B2 0D 00            CALL 0x006ddbd0
006028E4  85 C0                     TEST EAX,EAX
006028E6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006028E9  0F 84 82 00 00 00         JZ 0x00602971
006028EF  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
006028F5  85 F6                     TEST ESI,ESI
006028F7  74 78                     JZ 0x00602971
006028F9  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00602900  74 6F                     JZ 0x00602971
00602902  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
00602908  85 C0                     TEST EAX,EAX
0060290A  74 65                     JZ 0x00602971
0060290C  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
00602912  8D 45 FC                  LEA EAX,[EBP + -0x4]
00602915  8D 4D 0C                  LEA ECX,[EBP + 0xc]
00602918  50                        PUSH EAX
00602919  51                        PUSH ECX
0060291A  57                        PUSH EDI
0060291B  53                        PUSH EBX
0060291C  52                        PUSH EDX
0060291D  8B CE                     MOV ECX,ESI
0060291F  E8 2F 16 E0 FF            CALL 0x00403f53
00602924  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00602927  85 C0                     TEST EAX,EAX
00602929  7C 46                     JL 0x00602971
0060292B  83 F8 05                  CMP EAX,0x5
0060292E  7D 41                     JGE 0x00602971
00602930  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00602933  85 D2                     TEST EDX,EDX
00602935  7C 3A                     JL 0x00602971
00602937  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0060293A  3B D1                     CMP EDX,ECX
0060293C  7D 33                     JGE 0x00602971
0060293E  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00602945  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00602948  03 C7                     ADD EAX,EDI
0060294A  85 C0                     TEST EAX,EAX
0060294C  7C 23                     JL 0x00602971
0060294E  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00602951  7D 1E                     JGE 0x00602971
00602953  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00602956  85 F6                     TEST ESI,ESI
00602958  74 17                     JZ 0x00602971
0060295A  0F AF C1                  IMUL EAX,ECX
0060295D  03 C6                     ADD EAX,ESI
0060295F  33 C9                     XOR ECX,ECX
00602961  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00602964  8B C1                     MOV EAX,ECX
00602966  85 C0                     TEST EAX,EAX
00602968  75 07                     JNZ 0x00602971
LAB_0060296a:
0060296A  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_00602971:
00602971  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00602974  5F                        POP EDI
00602975  5E                        POP ESI
00602976  5B                        POP EBX
00602977  8B E5                     MOV ESP,EBP
00602979  5D                        POP EBP
0060297A  C2 0C 00                  RET 0xc
