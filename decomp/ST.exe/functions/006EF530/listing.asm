FUN_006ef530:
006EF530  55                        PUSH EBP
006EF531  8B EC                     MOV EBP,ESP
006EF533  83 EC 44                  SUB ESP,0x44
006EF536  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EF53B  56                        PUSH ESI
006EF53C  8D 55 C0                  LEA EDX,[EBP + -0x40]
006EF53F  8D 4D BC                  LEA ECX,[EBP + -0x44]
006EF542  6A 00                     PUSH 0x0
006EF544  52                        PUSH EDX
006EF545  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EF548  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF54E  E8 9D E2 03 00            CALL 0x0072d7f0
006EF553  8B F0                     MOV ESI,EAX
006EF555  83 C4 08                  ADD ESP,0x8
006EF558  85 F6                     TEST ESI,ESI
006EF55A  0F 85 97 00 00 00         JNZ 0x006ef5f7
006EF560  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EF563  85 F6                     TEST ESI,ESI
006EF565  75 14                     JNZ 0x006ef57b
006EF567  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006EF56C  6A 66                     PUSH 0x66
006EF56E  68 88 EF 7E 00            PUSH 0x7eef88
006EF573  50                        PUSH EAX
006EF574  6A CC                     PUSH -0x34
006EF576  E8 C5 68 FB FF            CALL 0x006a5e40
LAB_006ef57b:
006EF57B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006EF57E  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
006EF581  6A 01                     PUSH 0x1
006EF583  51                        PUSH ECX
006EF584  52                        PUSH EDX
006EF585  E8 46 17 00 00            CALL 0x006f0cd0
006EF58A  0F BF 10                  MOVSX EDX,word ptr [EAX]
006EF58D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EF590  83 C4 0C                  ADD ESP,0xc
006EF593  89 51 1C                  MOV dword ptr [ECX + 0x1c],EDX
006EF596  8D 50 14                  LEA EDX,[EAX + 0x14]
006EF599  89 51 20                  MOV dword ptr [ECX + 0x20],EDX
006EF59C  66 8B 71 4E               MOV SI,word ptr [ECX + 0x4e]
006EF5A0  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
006EF5A4  89 51 24                  MOV dword ptr [ECX + 0x24],EDX
006EF5A7  0F BF 10                  MOVSX EDX,word ptr [EAX]
006EF5AA  F7 C6 00 10 00 00         TEST ESI,0x1000
006EF5B0  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006EF5B3  8D 54 90 14               LEA EDX,[EAX + EDX*0x4 + 0x14]
006EF5B7  89 51 28                  MOV dword ptr [ECX + 0x28],EDX
006EF5BA  74 09                     JZ 0x006ef5c5
006EF5BC  C1 EE 08                  SHR ESI,0x8
006EF5BF  83 E6 0F                  AND ESI,0xf
006EF5C2  4E                        DEC ESI
006EF5C3  EB 06                     JMP 0x006ef5cb
LAB_006ef5c5:
006EF5C5  C1 EE 08                  SHR ESI,0x8
006EF5C8  83 E6 0F                  AND ESI,0xf
LAB_006ef5cb:
006EF5CB  8B D6                     MOV EDX,ESI
006EF5CD  88 51 48                  MOV byte ptr [ECX + 0x48],DL
006EF5D0  83 C1 2C                  ADD ECX,0x2c
006EF5D3  83 C0 04                  ADD EAX,0x4
006EF5D6  BA 04 00 00 00            MOV EDX,0x4
LAB_006ef5db:
006EF5DB  8B 30                     MOV ESI,dword ptr [EAX]
006EF5DD  83 C0 04                  ADD EAX,0x4
006EF5E0  89 31                     MOV dword ptr [ECX],ESI
006EF5E2  83 C1 04                  ADD ECX,0x4
006EF5E5  4A                        DEC EDX
006EF5E6  75 F3                     JNZ 0x006ef5db
006EF5E8  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006EF5EB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006EF5F0  33 C0                     XOR EAX,EAX
006EF5F2  5E                        POP ESI
006EF5F3  8B E5                     MOV ESP,EBP
006EF5F5  5D                        POP EBP
006EF5F6  C3                        RET
LAB_006ef5f7:
006EF5F7  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006EF5FA  68 C4 EF 7E 00            PUSH 0x7eefc4
006EF5FF  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EF604  56                        PUSH ESI
006EF605  6A 00                     PUSH 0x0
006EF607  6A 70                     PUSH 0x70
006EF609  68 88 EF 7E 00            PUSH 0x7eef88
006EF60E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF614  E8 B7 DE FB FF            CALL 0x006ad4d0
006EF619  83 C4 18                  ADD ESP,0x18
006EF61C  85 C0                     TEST EAX,EAX
006EF61E  74 01                     JZ 0x006ef621
006EF620  CC                        INT3
LAB_006ef621:
006EF621  6A 72                     PUSH 0x72
006EF623  68 88 EF 7E 00            PUSH 0x7eef88
006EF628  6A 00                     PUSH 0x0
006EF62A  56                        PUSH ESI
006EF62B  E8 10 68 FB FF            CALL 0x006a5e40
006EF630  8B C6                     MOV EAX,ESI
006EF632  5E                        POP ESI
006EF633  8B E5                     MOV ESP,EBP
006EF635  5D                        POP EBP
006EF636  C3                        RET
