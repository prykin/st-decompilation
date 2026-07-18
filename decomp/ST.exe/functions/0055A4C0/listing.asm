FUN_0055a4c0:
0055A4C0  55                        PUSH EBP
0055A4C1  8B EC                     MOV EBP,ESP
0055A4C3  51                        PUSH ECX
0055A4C4  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055A4CA  53                        PUSH EBX
0055A4CB  56                        PUSH ESI
0055A4CC  57                        PUSH EDI
0055A4CD  85 C0                     TEST EAX,EAX
0055A4CF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055A4D2  0F 84 E7 00 00 00         JZ 0x0055a5bf
0055A4D8  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055A4DB  85 F6                     TEST ESI,ESI
0055A4DD  0F 8C DC 00 00 00         JL 0x0055a5bf
0055A4E3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055A4E6  83 F8 08                  CMP EAX,0x8
0055A4E9  0F 83 D0 00 00 00         JNC 0x0055a5bf
0055A4EF  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0055A4F5  85 D2                     TEST EDX,EDX
0055A4F7  74 11                     JZ 0x0055a50a
0055A4F9  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0055A4FC  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
0055A504  0F 83 B5 00 00 00         JNC 0x0055a5bf
LAB_0055a50a:
0055A50A  8B 94 81 B4 00 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0xb4]
0055A511  85 D2                     TEST EDX,EDX
0055A513  0F 84 A6 00 00 00         JZ 0x0055a5bf
0055A519  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0055A51C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0055A51F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055A522  52                        PUSH EDX
0055A523  56                        PUSH ESI
0055A524  50                        PUSH EAX
0055A525  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A528  50                        PUSH EAX
0055A529  57                        PUSH EDI
0055A52A  53                        PUSH EBX
0055A52B  6A 05                     PUSH 0x5
0055A52D  E8 B3 76 EA FF            CALL 0x00401be5
0055A532  8D 4C 36 01               LEA ECX,[ESI + ESI*0x1 + 0x1]
0055A536  2B DE                     SUB EBX,ESI
0055A538  56                        PUSH ESI
0055A539  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0055A53C  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0055A53F  2B FE                     SUB EDI,ESI
0055A541  E8 79 83 EA FF            CALL 0x004028bf
0055A546  8B C8                     MOV ECX,EAX
0055A548  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0055A54B  83 C4 04                  ADD ESP,0x4
0055A54E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0055A551  85 C0                     TEST EAX,EAX
0055A553  7E 6A                     JLE 0x0055a5bf
0055A555  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0055A558  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0055a55b:
0055A55B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055A55E  33 C0                     XOR EAX,EAX
LAB_0055a560:
0055A560  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055A563  85 C9                     TEST ECX,ECX
0055A565  74 09                     JZ 0x0055a570
0055A567  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055A56A  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
0055A56E  74 34                     JZ 0x0055a5a4
LAB_0055a570:
0055A570  85 F6                     TEST ESI,ESI
0055A572  7C 30                     JL 0x0055a5a4
0055A574  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055A577  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
0055A57A  3B F1                     CMP ESI,ECX
0055A57C  7D 26                     JGE 0x0055a5a4
0055A57E  85 FF                     TEST EDI,EDI
0055A580  7C 22                     JL 0x0055a5a4
0055A582  3B 7A 24                  CMP EDI,dword ptr [EDX + 0x24]
0055A585  7D 1D                     JGE 0x0055a5a4
0055A587  8B DF                     MOV EBX,EDI
0055A589  0F AF D9                  IMUL EBX,ECX
0055A58C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A58F  03 9C 8A B4 00 00 00      ADD EBX,dword ptr [EDX + ECX*0x4 + 0xb4]
0055A596  8A 0C 33                  MOV CL,byte ptr [EBX + ESI*0x1]
0055A599  84 C9                     TEST CL,CL
0055A59B  8D 14 33                  LEA EDX,[EBX + ESI*0x1]
0055A59E  76 04                     JBE 0x0055a5a4
0055A5A0  FE C9                     DEC CL
0055A5A2  88 0A                     MOV byte ptr [EDX],CL
LAB_0055a5a4:
0055A5A4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0055A5A7  40                        INC EAX
0055A5A8  46                        INC ESI
0055A5A9  3B C1                     CMP EAX,ECX
0055A5AB  7C B3                     JL 0x0055a560
0055A5AD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055A5B0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A5B3  03 D1                     ADD EDX,ECX
0055A5B5  47                        INC EDI
0055A5B6  48                        DEC EAX
0055A5B7  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0055A5BA  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0055A5BD  75 9C                     JNZ 0x0055a55b
LAB_0055a5bf:
0055A5BF  5F                        POP EDI
0055A5C0  5E                        POP ESI
0055A5C1  5B                        POP EBX
0055A5C2  8B E5                     MOV ESP,EBP
0055A5C4  5D                        POP EBP
0055A5C5  C2 18 00                  RET 0x18
