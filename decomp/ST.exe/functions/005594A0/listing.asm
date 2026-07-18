FUN_005594a0:
005594A0  55                        PUSH EBP
005594A1  8B EC                     MOV EBP,ESP
005594A3  51                        PUSH ECX
005594A4  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
005594AA  53                        PUSH EBX
005594AB  56                        PUSH ESI
005594AC  57                        PUSH EDI
005594AD  85 C0                     TEST EAX,EAX
005594AF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005594B2  0F 84 08 01 00 00         JZ 0x005595c0
005594B8  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
005594BB  85 C0                     TEST EAX,EAX
005594BD  0F 84 FD 00 00 00         JZ 0x005595c0
005594C3  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
005594C6  85 F6                     TEST ESI,ESI
005594C8  0F 8C F2 00 00 00         JL 0x005595c0
005594CE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005594D1  83 F8 08                  CMP EAX,0x8
005594D4  0F 83 E6 00 00 00         JNC 0x005595c0
005594DA  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005594E0  85 D2                     TEST EDX,EDX
005594E2  74 11                     JZ 0x005594f5
005594E4  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
005594E7  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
005594EF  0F 83 CB 00 00 00         JNC 0x005595c0
LAB_005594f5:
005594F5  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005594F8  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005594FB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005594FE  F6 C6 10                  TEST DH,0x10
00559501  74 19                     JZ 0x0055951c
00559503  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00559506  52                        PUSH EDX
00559507  56                        PUSH ESI
00559508  50                        PUSH EAX
00559509  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055950C  50                        PUSH EAX
0055950D  57                        PUSH EDI
0055950E  53                        PUSH EBX
0055950F  6A 01                     PUSH 0x1
00559511  E8 EC A5 EA FF            CALL 0x00403b02
00559516  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00559519  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_0055951c:
0055951C  8A 94 08 FC 00 00 00      MOV DL,byte ptr [EAX + ECX*0x1 + 0xfc]
00559523  84 D2                     TEST DL,DL
00559525  0F 84 95 00 00 00         JZ 0x005595c0
0055952B  F6 45 20 02               TEST byte ptr [EBP + 0x20],0x2
0055952F  0F 84 8B 00 00 00         JZ 0x005595c0
00559535  8D 4C 36 01               LEA ECX,[ESI + ESI*0x1 + 0x1]
00559539  2B DE                     SUB EBX,ESI
0055953B  56                        PUSH ESI
0055953C  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
0055953F  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00559542  2B FE                     SUB EDI,ESI
00559544  E8 76 93 EA FF            CALL 0x004028bf
00559549  8B C8                     MOV ECX,EAX
0055954B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0055954E  83 C4 04                  ADD ESP,0x4
00559551  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00559554  85 C0                     TEST EAX,EAX
00559556  7E 68                     JLE 0x005595c0
00559558  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0055955B  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_0055955e:
0055955E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00559561  33 C0                     XOR EAX,EAX
LAB_00559563:
00559563  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00559566  85 C9                     TEST ECX,ECX
00559568  74 09                     JZ 0x00559573
0055956A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055956D  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
00559571  74 32                     JZ 0x005595a5
LAB_00559573:
00559573  85 F6                     TEST ESI,ESI
00559575  7C 2E                     JL 0x005595a5
00559577  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055957A  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
0055957D  3B F1                     CMP ESI,ECX
0055957F  7D 24                     JGE 0x005595a5
00559581  85 FF                     TEST EDI,EDI
00559583  7C 20                     JL 0x005595a5
00559585  3B 7A 24                  CMP EDI,dword ptr [EDX + 0x24]
00559588  7D 1B                     JGE 0x005595a5
0055958A  8B DF                     MOV EBX,EDI
0055958C  0F AF D9                  IMUL EBX,ECX
0055958F  8B 4A 38                  MOV ECX,dword ptr [EDX + 0x38]
00559592  03 DE                     ADD EBX,ESI
00559594  8D 14 59                  LEA EDX,[ECX + EBX*0x2]
00559597  8A 4C 59 01               MOV CL,byte ptr [ECX + EBX*0x2 + 0x1]
0055959B  80 F9 FF                  CMP CL,0xff
0055959E  73 05                     JNC 0x005595a5
005595A0  FE C1                     INC CL
005595A2  88 4A 01                  MOV byte ptr [EDX + 0x1],CL
LAB_005595a5:
005595A5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005595A8  40                        INC EAX
005595A9  46                        INC ESI
005595AA  3B C1                     CMP EAX,ECX
005595AC  7C B5                     JL 0x00559563
005595AE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005595B1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005595B4  03 D1                     ADD EDX,ECX
005595B6  47                        INC EDI
005595B7  48                        DEC EAX
005595B8  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005595BB  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
005595BE  75 9E                     JNZ 0x0055955e
LAB_005595c0:
005595C0  5F                        POP EDI
005595C1  5E                        POP ESI
005595C2  5B                        POP EBX
005595C3  8B E5                     MOV ESP,EBP
005595C5  5D                        POP EBP
005595C6  C2 1C 00                  RET 0x1c
