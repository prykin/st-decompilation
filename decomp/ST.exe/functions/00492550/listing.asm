FUN_00492550:
00492550  55                        PUSH EBP
00492551  8B EC                     MOV EBP,ESP
00492553  83 EC 0C                  SUB ESP,0xc
00492556  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
0049255A  53                        PUSH EBX
0049255B  56                        PUSH ESI
0049255C  8D 70 FF                  LEA ESI,[EAX + -0x1]
0049255F  8D 58 01                  LEA EBX,[EAX + 0x1]
00492562  3B F3                     CMP ESI,EBX
00492564  57                        PUSH EDI
00492565  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00492568  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0049256B  0F 8F C1 00 00 00         JG 0x00492632
00492571  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_00492578:
00492578  85 F6                     TEST ESI,ESI
0049257A  0F 8C A9 00 00 00         JL 0x00492629
00492580  0F BF CF                  MOVSX ECX,DI
00492583  8D 41 FF                  LEA EAX,[ECX + -0x1]
00492586  3B F0                     CMP ESI,EAX
00492588  0F 8F 9B 00 00 00         JG 0x00492629
0049258E  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
00492592  8D 50 FF                  LEA EDX,[EAX + -0x1]
00492595  40                        INC EAX
00492596  3B D0                     CMP EDX,EAX
00492598  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049259B  0F 8F 88 00 00 00         JG 0x00492629
004925A1  0F AF CA                  IMUL ECX,EDX
004925A4  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_004925a7:
004925A7  85 D2                     TEST EDX,EDX
004925A9  7C 61                     JL 0x0049260c
004925AB  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004925B2  49                        DEC ECX
004925B3  3B D1                     CMP EDX,ECX
004925B5  7F 55                     JG 0x0049260c
004925B7  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
004925BB  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
004925C2  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004925C9  0F AF C8                  IMUL ECX,EAX
004925CC  0F AF FA                  IMUL EDI,EDX
004925CF  8B DE                     MOV EBX,ESI
004925D1  03 D9                     ADD EBX,ECX
004925D3  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
004925D9  03 FB                     ADD EDI,EBX
004925DB  66 83 3C 79 00            CMP word ptr [ECX + EDI*0x2],0x0
004925E0  75 2A                     JNZ 0x0049260c
004925E2  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004925E9  0F AF C8                  IMUL ECX,EAX
004925EC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004925EF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004925F2  03 C8                     ADD ECX,EAX
004925F4  33 C0                     XOR EAX,EAX
004925F6  8A 87 8E 00 00 00         MOV AL,byte ptr [EDI + 0x8e]
004925FC  03 CE                     ADD ECX,ESI
004925FE  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
00492601  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00492606  83 3C 88 00               CMP dword ptr [EAX + ECX*0x4],0x0
0049260A  74 31                     JZ 0x0049263d
LAB_0049260c:
0049260C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00492613  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00492616  0F BF C7                  MOVSX EAX,DI
00492619  03 C8                     ADD ECX,EAX
0049261B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049261E  42                        INC EDX
0049261F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00492622  3B D0                     CMP EDX,EAX
00492624  7E 81                     JLE 0x004925a7
00492626  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00492629:
00492629  46                        INC ESI
0049262A  3B F3                     CMP ESI,EBX
0049262C  0F 8E 46 FF FF FF         JLE 0x00492578
LAB_00492632:
00492632  5F                        POP EDI
00492633  5E                        POP ESI
00492634  33 C0                     XOR EAX,EAX
00492636  5B                        POP EBX
00492637  8B E5                     MOV ESP,EBP
00492639  5D                        POP EBP
0049263A  C2 18 00                  RET 0x18
LAB_0049263d:
0049263D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00492640  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00492643  5F                        POP EDI
00492644  66 89 31                  MOV word ptr [ECX],SI
00492647  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0049264A  66 89 10                  MOV word ptr [EAX],DX
0049264D  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
00492651  5E                        POP ESI
00492652  66 89 11                  MOV word ptr [ECX],DX
00492655  B8 01 00 00 00            MOV EAX,0x1
0049265A  5B                        POP EBX
0049265B  8B E5                     MOV ESP,EBP
0049265D  5D                        POP EBP
0049265E  C2 18 00                  RET 0x18
