TransPutDDX:
005404F0  55                        PUSH EBP
005404F1  8B EC                     MOV EBP,ESP
005404F3  83 EC 44                  SUB ESP,0x44
005404F6  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005404FB  56                        PUSH ESI
005404FC  85 C0                     TEST EAX,EAX
005404FE  0F 84 D4 00 00 00         JZ 0x005405d8
00540504  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00540507  85 C0                     TEST EAX,EAX
00540509  0F 84 C9 00 00 00         JZ 0x005405d8
0054050F  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00540514  8D 55 C0                  LEA EDX,[EBP + -0x40]
00540517  8D 4D BC                  LEA ECX,[EBP + -0x44]
0054051A  6A 00                     PUSH 0x0
0054051C  52                        PUSH EDX
0054051D  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00540520  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540526  E8 C5 D2 1E 00            CALL 0x0072d7f0
0054052B  8B F0                     MOV ESI,EAX
0054052D  83 C4 08                  ADD ESP,0x8
00540530  85 F6                     TEST ESI,ESI
00540532  75 6C                     JNZ 0x005405a0
00540534  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00540537  25 FF 00 00 00            AND EAX,0xff
0054053C  48                        DEC EAX
0054053D  74 35                     JZ 0x00540574
0054053F  83 E8 05                  SUB EAX,0x5
00540542  75 4E                     JNZ 0x00540592
00540544  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00540547  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0054054A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0054054D  51                        PUSH ECX
0054054E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00540551  52                        PUSH EDX
00540552  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00540558  56                        PUSH ESI
00540559  56                        PUSH ESI
0054055A  50                        PUSH EAX
0054055B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054055E  50                        PUSH EAX
0054055F  51                        PUSH ECX
00540560  52                        PUSH EDX
00540561  E8 7A 7D 17 00            CALL 0x006b82e0
00540566  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00540569  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054056F  5E                        POP ESI
00540570  8B E5                     MOV ESP,EBP
00540572  5D                        POP EBP
00540573  C3                        RET
LAB_00540574:
00540574  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00540577  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0054057A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054057D  50                        PUSH EAX
0054057E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00540581  6A 00                     PUSH 0x0
00540583  51                        PUSH ECX
00540584  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0054058A  52                        PUSH EDX
0054058B  50                        PUSH EAX
0054058C  51                        PUSH ECX
0054058D  E8 0E 43 17 00            CALL 0x006b48a0
LAB_00540592:
00540592  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00540595  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054059B  5E                        POP ESI
0054059C  8B E5                     MOV ESP,EBP
0054059E  5D                        POP EBP
0054059F  C3                        RET
LAB_005405a0:
005405A0  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005405A3  68 5C 7B 7C 00            PUSH 0x7c7b5c
005405A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005405AD  56                        PUSH ESI
005405AE  6A 00                     PUSH 0x0
005405B0  6A 26                     PUSH 0x26
005405B2  68 2C 7B 7C 00            PUSH 0x7c7b2c
005405B7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005405BC  E8 0F CF 16 00            CALL 0x006ad4d0
005405C1  83 C4 18                  ADD ESP,0x18
005405C4  85 C0                     TEST EAX,EAX
005405C6  74 01                     JZ 0x005405c9
005405C8  CC                        INT3
LAB_005405c9:
005405C9  6A 26                     PUSH 0x26
005405CB  68 2C 7B 7C 00            PUSH 0x7c7b2c
005405D0  6A 00                     PUSH 0x0
005405D2  56                        PUSH ESI
005405D3  E8 68 58 16 00            CALL 0x006a5e40
LAB_005405d8:
005405D8  5E                        POP ESI
005405D9  8B E5                     MOV ESP,EBP
005405DB  5D                        POP EBP
005405DC  C3                        RET
