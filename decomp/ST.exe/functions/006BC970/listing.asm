FUN_006bc970:
006BC970  55                        PUSH EBP
006BC971  8B EC                     MOV EBP,ESP
006BC973  83 EC 1C                  SUB ESP,0x1c
006BC976  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BC979  53                        PUSH EBX
006BC97A  56                        PUSH ESI
006BC97B  57                        PUSH EDI
006BC97C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006BC97F  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006BC986  C1 E0 04                  SHL EAX,0x4
006BC989  8B 8F C0 01 00 00         MOV ECX,dword ptr [EDI + 0x1c0]
006BC98F  8D 54 08 08               LEA EDX,[EAX + ECX*0x1 + 0x8]
006BC993  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006BC996  B9 FF 7F 00 00            MOV ECX,0x7fff
006BC99B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006BC99E  85 C0                     TEST EAX,EAX
006BC9A0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006BC9A3  0F 8E 61 01 00 00         JLE 0x006bcb0a
006BC9A9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BC9AC  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006bc9af:
006BC9AF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BC9B2  8B 31                     MOV ESI,dword ptr [ECX]
006BC9B4  8B 06                     MOV EAX,dword ptr [ESI]
006BC9B6  A8 08                     TEST AL,0x8
006BC9B8  74 41                     JZ 0x006bc9fb
006BC9BA  8B 97 E4 01 00 00         MOV EDX,dword ptr [EDI + 0x1e4]
006BC9C0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006BC9C3  C1 E2 04                  SHL EDX,0x4
006BC9C6  8D 44 3A 14               LEA EAX,[EDX + EDI*0x1 + 0x14]
006BC9CA  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006BC9CD  50                        PUSH EAX
006BC9CE  51                        PUSH ECX
006BC9CF  52                        PUSH EDX
006BC9D0  E8 DB 34 01 00            CALL 0x006cfeb0
006BC9D5  83 C4 0C                  ADD ESP,0xc
006BC9D8  85 C0                     TEST EAX,EAX
006BC9DA  0F 84 0C 01 00 00         JZ 0x006bcaec
006BC9E0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006BC9E3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006BC9E6  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006BC9E9  50                        PUSH EAX
006BC9EA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006BC9ED  51                        PUSH ECX
006BC9EE  52                        PUSH EDX
006BC9EF  50                        PUSH EAX
006BC9F0  57                        PUSH EDI
006BC9F1  E8 3A 01 00 00            CALL 0x006bcb30
006BC9F6  E9 F1 00 00 00            JMP 0x006bcaec
LAB_006bc9fb:
006BC9FB  A8 02                     TEST AL,0x2
006BC9FD  74 0A                     JZ 0x006bca09
006BC9FF  83 7E 68 04               CMP dword ptr [ESI + 0x68],0x4
006BCA03  0F 8F E3 00 00 00         JG 0x006bcaec
LAB_006bca09:
006BCA09  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006BCA0C  8D 5E 04                  LEA EBX,[ESI + 0x4]
006BCA0F  53                        PUSH EBX
006BCA10  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006BCA13  E8 48 3A FF FF            CALL 0x006b0460
006BCA18  85 C0                     TEST EAX,EAX
006BCA1A  0F 84 CC 00 00 00         JZ 0x006bcaec
006BCA20  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
006BCA23  8D 46 68                  LEA EAX,[ESI + 0x68]
006BCA26  83 F9 04                  CMP ECX,0x4
006BCA29  7F 2F                     JG 0x006bca5a
006BCA2B  8B 0E                     MOV ECX,dword ptr [ESI]
006BCA2D  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006BCA30  81 E1 00 20 00 00         AND ECX,0x2000
006BCA36  F7 D9                     NEG ECX
006BCA38  1B C9                     SBB ECX,ECX
006BCA3A  51                        PUSH ECX
006BCA3B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006BCA3E  52                        PUSH EDX
006BCA3F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006BCA42  51                        PUSH ECX
006BCA43  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006BCA46  52                        PUSH EDX
006BCA47  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006BCA4A  51                        PUSH ECX
006BCA4B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006BCA4E  52                        PUSH EDX
006BCA4F  51                        PUSH ECX
006BCA50  6A 04                     PUSH 0x4
006BCA52  50                        PUSH EAX
006BCA53  E8 78 50 01 00            CALL 0x006d1ad0
006BCA58  EB 03                     JMP 0x006bca5d
LAB_006bca5a:
006BCA5A  83 C8 FF                  OR EAX,0xffffffff
LAB_006bca5d:
006BCA5D  8B 0E                     MOV ECX,dword ptr [ESI]
006BCA5F  83 C9 02                  OR ECX,0x2
006BCA62  F6 C5 30                  TEST CH,0x30
006BCA65  89 0E                     MOV dword ptr [ESI],ECX
006BCA67  75 0D                     JNZ 0x006bca76
006BCA69  F6 C5 40                  TEST CH,0x40
006BCA6C  74 7E                     JZ 0x006bcaec
006BCA6E  F7 C1 00 00 02 00         TEST ECX,0x20000
006BCA74  75 76                     JNZ 0x006bcaec
LAB_006bca76:
006BCA76  83 C9 04                  OR ECX,0x4
006BCA79  F6 C5 20                  TEST CH,0x20
006BCA7C  89 0E                     MOV dword ptr [ESI],ECX
006BCA7E  74 2A                     JZ 0x006bcaaa
006BCA80  83 F8 FF                  CMP EAX,-0x1
006BCA83  74 25                     JZ 0x006bcaaa
006BCA85  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
006BCA88  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006BCA8B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BCA8E  6A 01                     PUSH 0x1
006BCA90  52                        PUSH EDX
006BCA91  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006BCA94  50                        PUSH EAX
006BCA95  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006BCA98  51                        PUSH ECX
006BCA99  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006BCA9C  52                        PUSH EDX
006BCA9D  8B 97 C0 01 00 00         MOV EDX,dword ptr [EDI + 0x1c0]
006BCAA3  50                        PUSH EAX
006BCAA4  51                        PUSH ECX
006BCAA5  6A 64                     PUSH 0x64
006BCAA7  52                        PUSH EDX
006BCAA8  EB 22                     JMP 0x006bcacc
LAB_006bcaaa:
006BCAAA  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006BCAAD  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006BCAB0  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006BCAB3  6A 01                     PUSH 0x1
006BCAB5  50                        PUSH EAX
006BCAB6  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BCAB9  51                        PUSH ECX
006BCABA  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006BCABD  52                        PUSH EDX
006BCABE  8B 13                     MOV EDX,dword ptr [EBX]
006BCAC0  50                        PUSH EAX
006BCAC1  8B 87 C0 01 00 00         MOV EAX,dword ptr [EDI + 0x1c0]
006BCAC7  51                        PUSH ECX
006BCAC8  52                        PUSH EDX
006BCAC9  6A 64                     PUSH 0x64
006BCACB  50                        PUSH EAX
LAB_006bcacc:
006BCACC  E8 FF 4F 01 00            CALL 0x006d1ad0
006BCAD1  83 F8 FF                  CMP EAX,-0x1
006BCAD4  74 4A                     JZ 0x006bcb20
006BCAD6  85 C0                     TEST EAX,EAX
006BCAD8  74 12                     JZ 0x006bcaec
006BCADA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BCADD  8D 48 FF                  LEA ECX,[EAX + -0x1]
006BCAE0  3B CA                     CMP ECX,EDX
006BCAE2  7E 33                     JLE 0x006bcb17
006BCAE4  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
006BCAE7  7D 03                     JGE 0x006bcaec
006BCAE9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006bcaec:
006BCAEC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006BCAEF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006BCAF2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006BCAF5  40                        INC EAX
006BCAF6  83 C2 04                  ADD EDX,0x4
006BCAF9  3B C1                     CMP EAX,ECX
006BCAFB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006BCAFE  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006BCB01  0F 8C A8 FE FF FF         JL 0x006bc9af
006BCB07  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006bcb0a:
006BCB0A  8B C1                     MOV EAX,ECX
006BCB0C  2D FF 7F 00 00            SUB EAX,0x7fff
006BCB11  F7 D8                     NEG EAX
006BCB13  1B C0                     SBB EAX,EAX
006BCB15  23 C1                     AND EAX,ECX
LAB_006bcb17:
006BCB17  5F                        POP EDI
006BCB18  5E                        POP ESI
006BCB19  5B                        POP EBX
006BCB1A  8B E5                     MOV ESP,EBP
006BCB1C  5D                        POP EBP
006BCB1D  C2 10 00                  RET 0x10
LAB_006bcb20:
006BCB20  5F                        POP EDI
006BCB21  5E                        POP ESI
006BCB22  83 C8 FF                  OR EAX,0xffffffff
006BCB25  5B                        POP EBX
006BCB26  8B E5                     MOV ESP,EBP
006BCB28  5D                        POP EBP
006BCB29  C2 10 00                  RET 0x10
