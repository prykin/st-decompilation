FUN_0062b4a0:
0062B4A0  55                        PUSH EBP
0062B4A1  8B EC                     MOV EBP,ESP
0062B4A3  83 EC 10                  SUB ESP,0x10
0062B4A6  8B 51 46                  MOV EDX,dword ptr [ECX + 0x46]
0062B4A9  53                        PUSH EBX
0062B4AA  56                        PUSH ESI
0062B4AB  57                        PUSH EDI
0062B4AC  85 D2                     TEST EDX,EDX
0062B4AE  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0062B4B1  B8 79 19 8C 02            MOV EAX,0x28c1979
0062B4B6  7C 13                     JL 0x0062b4cb
0062B4B8  F7 EA                     IMUL EDX
0062B4BA  D1 FA                     SAR EDX,0x1
0062B4BC  8B C2                     MOV EAX,EDX
0062B4BE  C1 E8 1F                  SHR EAX,0x1f
0062B4C1  03 D0                     ADD EDX,EAX
0062B4C3  0F BF DA                  MOVSX EBX,DX
0062B4C6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0062B4C9  EB 14                     JMP 0x0062b4df
LAB_0062b4cb:
0062B4CB  F7 EA                     IMUL EDX
0062B4CD  D1 FA                     SAR EDX,0x1
0062B4CF  8B C2                     MOV EAX,EDX
0062B4D1  C1 E8 1F                  SHR EAX,0x1f
0062B4D4  03 D0                     ADD EDX,EAX
0062B4D6  0F BF DA                  MOVSX EBX,DX
0062B4D9  8D 53 FF                  LEA EDX,[EBX + -0x1]
0062B4DC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0062b4df:
0062B4DF  8B 79 4A                  MOV EDI,dword ptr [ECX + 0x4a]
0062B4E2  B8 79 19 8C 02            MOV EAX,0x28c1979
0062B4E7  85 FF                     TEST EDI,EDI
0062B4E9  7C 13                     JL 0x0062b4fe
0062B4EB  F7 EF                     IMUL EDI
0062B4ED  D1 FA                     SAR EDX,0x1
0062B4EF  8B C2                     MOV EAX,EDX
0062B4F1  C1 E8 1F                  SHR EAX,0x1f
0062B4F4  03 D0                     ADD EDX,EAX
0062B4F6  0F BF F2                  MOVSX ESI,DX
0062B4F9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062B4FC  EB 14                     JMP 0x0062b512
LAB_0062b4fe:
0062B4FE  F7 EF                     IMUL EDI
0062B500  D1 FA                     SAR EDX,0x1
0062B502  8B C2                     MOV EAX,EDX
0062B504  C1 E8 1F                  SHR EAX,0x1f
0062B507  03 D0                     ADD EDX,EAX
0062B509  0F BF F2                  MOVSX ESI,DX
0062B50C  8D 56 FF                  LEA EDX,[ESI + -0x1]
0062B50F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0062b512:
0062B512  8B 49 4E                  MOV ECX,dword ptr [ECX + 0x4e]
0062B515  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062B51A  85 C9                     TEST ECX,ECX
0062B51C  7C 14                     JL 0x0062b532
0062B51E  F7 E9                     IMUL ECX
0062B520  C1 FA 06                  SAR EDX,0x6
0062B523  8B C2                     MOV EAX,EDX
0062B525  C1 E8 1F                  SHR EAX,0x1f
0062B528  03 D0                     ADD EDX,EAX
0062B52A  0F BF CA                  MOVSX ECX,DX
0062B52D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0062B530  EB 13                     JMP 0x0062b545
LAB_0062b532:
0062B532  F7 E9                     IMUL ECX
0062B534  C1 FA 06                  SAR EDX,0x6
0062B537  8B C2                     MOV EAX,EDX
0062B539  C1 E8 1F                  SHR EAX,0x1f
0062B53C  03 D0                     ADD EDX,EAX
0062B53E  0F BF C2                  MOVSX EAX,DX
0062B541  48                        DEC EAX
0062B542  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0062b545:
0062B545  85 FF                     TEST EDI,EDI
0062B547  7D 01                     JGE 0x0062b54a
0062B549  4E                        DEC ESI
LAB_0062b54a:
0062B54A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0062B54D  85 C0                     TEST EAX,EAX
0062B54F  8B C3                     MOV EAX,EBX
0062B551  7D 03                     JGE 0x0062b556
0062B553  8D 43 FF                  LEA EAX,[EBX + -0x1]
LAB_0062b556:
0062B556  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062B55C  3B 41 48                  CMP EAX,dword ptr [ECX + 0x48]
0062B55F  0F 8C AF 00 00 00         JL 0x0062b614
0062B565  3B 41 58                  CMP EAX,dword ptr [ECX + 0x58]
0062B568  0F 8F A6 00 00 00         JG 0x0062b614
0062B56E  3B 71 44                  CMP ESI,dword ptr [ECX + 0x44]
0062B571  0F 8C 9D 00 00 00         JL 0x0062b614
0062B577  3B 71 54                  CMP ESI,dword ptr [ECX + 0x54]
0062B57A  0F 8F 94 00 00 00         JG 0x0062b614
0062B580  6A 00                     PUSH 0x0
0062B582  56                        PUSH ESI
0062B583  50                        PUSH EAX
0062B584  E8 47 26 0B 00            CALL 0x006ddbd0
0062B589  8B D8                     MOV EBX,EAX
0062B58B  85 DB                     TEST EBX,EBX
0062B58D  0F 84 83 00 00 00         JZ 0x0062b616
0062B593  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0062B599  85 F6                     TEST ESI,ESI
0062B59B  74 79                     JZ 0x0062b616
0062B59D  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0062B5A4  74 70                     JZ 0x0062b616
0062B5A6  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0062B5AC  85 C0                     TEST EAX,EAX
0062B5AE  74 66                     JZ 0x0062b616
0062B5B0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062B5B3  8D 4D F8                  LEA ECX,[EBP + -0x8]
0062B5B6  8D 55 F0                  LEA EDX,[EBP + -0x10]
0062B5B9  51                        PUSH ECX
0062B5BA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0062B5BD  52                        PUSH EDX
0062B5BE  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
0062B5C4  50                        PUSH EAX
0062B5C5  51                        PUSH ECX
0062B5C6  52                        PUSH EDX
0062B5C7  8B CE                     MOV ECX,ESI
0062B5C9  E8 85 89 DD FF            CALL 0x00403f53
0062B5CE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062B5D1  85 C0                     TEST EAX,EAX
0062B5D3  7C 41                     JL 0x0062b616
0062B5D5  83 F8 05                  CMP EAX,0x5
0062B5D8  7D 3C                     JGE 0x0062b616
0062B5DA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0062B5DD  85 D2                     TEST EDX,EDX
0062B5DF  7C 35                     JL 0x0062b616
0062B5E1  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0062B5E4  3B D1                     CMP EDX,ECX
0062B5E6  7D 2E                     JGE 0x0062b616
0062B5E8  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0062B5EF  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0062B5F2  03 C7                     ADD EAX,EDI
0062B5F4  85 C0                     TEST EAX,EAX
0062B5F6  7C 1E                     JL 0x0062b616
0062B5F8  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0062B5FB  7D 19                     JGE 0x0062b616
0062B5FD  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0062B600  85 F6                     TEST ESI,ESI
0062B602  74 12                     JZ 0x0062b616
0062B604  0F AF C1                  IMUL EAX,ECX
0062B607  03 C6                     ADD EAX,ESI
0062B609  33 C9                     XOR ECX,ECX
0062B60B  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0062B60E  8B C1                     MOV EAX,ECX
0062B610  85 C0                     TEST EAX,EAX
0062B612  75 02                     JNZ 0x0062b616
LAB_0062b614:
0062B614  33 DB                     XOR EBX,EBX
FUN_0062b4a0::cf_common_exit_0062B616:
0062B616  5F                        POP EDI
0062B617  8A C3                     MOV AL,BL
0062B619  5E                        POP ESI
0062B61A  5B                        POP EBX
0062B61B  8B E5                     MOV ESP,EBP
0062B61D  5D                        POP EBP
0062B61E  C3                        RET
