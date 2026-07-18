FUN_006b08f0:
006B08F0  55                        PUSH EBP
006B08F1  8B EC                     MOV EBP,ESP
006B08F3  81 EC 08 04 00 00         SUB ESP,0x408
006B08F9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B08FC  53                        PUSH EBX
006B08FD  33 DB                     XOR EBX,EBX
006B08FF  56                        PUSH ESI
006B0900  3B C3                     CMP EAX,EBX
006B0902  57                        PUSH EDI
006B0903  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006B0906  0F 84 FF 00 00 00         JZ 0x006b0a0b
006B090C  39 58 40                  CMP dword ptr [EAX + 0x40],EBX
006B090F  0F 84 F6 00 00 00         JZ 0x006b0a0b
006B0915  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006B0918  F7 C1 01 00 00 20         TEST ECX,0x20000001
006B091E  75 38                     JNZ 0x006b0958
006B0920  83 78 24 08               CMP dword ptr [EAX + 0x24],0x8
006B0924  7F 32                     JG 0x006b0958
006B0926  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006B0929  83 FF 0A                  CMP EDI,0xa
006B092C  7D 13                     JGE 0x006b0941
006B092E  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B0931  BB 0A 00 00 00            MOV EBX,0xa
006B0936  2B DF                     SUB EBX,EDI
006B0938  BF 0A 00 00 00            MOV EDI,0xa
006B093D  2B F3                     SUB ESI,EBX
006B093F  EB 03                     JMP 0x006b0944
LAB_006b0941:
006B0941  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_006b0944:
006B0944  8D 14 37                  LEA EDX,[EDI + ESI*0x1]
006B0947  81 FA F6 00 00 00         CMP EDX,0xf6
006B094D  7E 0F                     JLE 0x006b095e
006B094F  BE F6 00 00 00            MOV ESI,0xf6
006B0954  2B F7                     SUB ESI,EDI
006B0956  EB 06                     JMP 0x006b095e
LAB_006b0958:
006B0958  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B095B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_006b095e:
006B095E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B0961  85 D2                     TEST EDX,EDX
006B0963  0F 84 A2 00 00 00         JZ 0x006b0a0b
006B0969  85 F6                     TEST ESI,ESI
006B096B  0F 8E 9A 00 00 00         JLE 0x006b0a0b
006B0971  F7 C1 00 00 00 04         TEST ECX,0x4000000
006B0977  74 0F                     JZ 0x006b0988
006B0979  05 F0 04 00 00            ADD EAX,0x4f0
006B097E  50                        PUSH EAX
006B097F  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006B0985  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006b0988:
006B0988  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B098B  56                        PUSH ESI
006B098C  57                        PUSH EDI
006B098D  8D 14 99                  LEA EDX,[ECX + EBX*0x4]
006B0990  8D 8D F8 FB FF FF         LEA ECX,[EBP + 0xfffffbf8]
006B0996  52                        PUSH EDX
006B0997  51                        PUSH ECX
006B0998  50                        PUSH EAX
006B0999  E8 02 FD FF FF            CALL 0x006b06a0
006B099E  85 C0                     TEST EAX,EAX
006B09A0  75 0A                     JNZ 0x006b09ac
006B09A2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B09A5  BE 03 FF FF FF            MOV ESI,0xffffff03
006B09AA  EB 26                     JMP 0x006b09d2
LAB_006b09ac:
006B09AC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B09AF  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
006B09B2  85 C0                     TEST EAX,EAX
006B09B4  74 19                     JZ 0x006b09cf
006B09B6  8B 10                     MOV EDX,dword ptr [EAX]
006B09B8  8D 8D FC FB FF FF         LEA ECX,[EBP + 0xfffffbfc]
006B09BE  51                        PUSH ECX
006B09BF  68 00 01 00 00            PUSH 0x100
006B09C4  6A 00                     PUSH 0x0
006B09C6  6A 00                     PUSH 0x0
006B09C8  50                        PUSH EAX
006B09C9  FF 52 18                  CALL dword ptr [EDX + 0x18]
006B09CC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006b09cf:
006B09CF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006b09d2:
006B09D2  F7 47 08 00 00 00 04      TEST dword ptr [EDI + 0x8],0x4000000
006B09D9  74 0D                     JZ 0x006b09e8
006B09DB  81 C7 F0 04 00 00         ADD EDI,0x4f0
006B09E1  57                        PUSH EDI
006B09E2  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b09e8:
006B09E8  81 FE 3C 02 76 88         CMP ESI,0x8876023c
006B09EE  74 1B                     JZ 0x006b0a0b
006B09F0  81 FE 4D 02 76 88         CMP ESI,0x8876024d
006B09F6  74 13                     JZ 0x006b0a0b
006B09F8  81 FE 01 40 00 80         CMP ESI,0x80004001
006B09FE  74 0B                     JZ 0x006b0a0b
006B0A00  8B C6                     MOV EAX,ESI
006B0A02  5F                        POP EDI
006B0A03  5E                        POP ESI
006B0A04  5B                        POP EBX
006B0A05  8B E5                     MOV ESP,EBP
006B0A07  5D                        POP EBP
006B0A08  C2 10 00                  RET 0x10
LAB_006b0a0b:
006B0A0B  5F                        POP EDI
006B0A0C  5E                        POP ESI
006B0A0D  33 C0                     XOR EAX,EAX
006B0A0F  5B                        POP EBX
006B0A10  8B E5                     MOV ESP,EBP
006B0A12  5D                        POP EBP
006B0A13  C2 10 00                  RET 0x10
