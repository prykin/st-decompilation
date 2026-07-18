FUN_005411a0:
005411A0  55                        PUSH EBP
005411A1  8B EC                     MOV EBP,ESP
005411A3  83 EC 48                  SUB ESP,0x48
005411A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005411AB  53                        PUSH EBX
005411AC  56                        PUSH ESI
005411AD  57                        PUSH EDI
005411AE  8D 55 BC                  LEA EDX,[EBP + -0x44]
005411B1  8D 4D B8                  LEA ECX,[EBP + -0x48]
005411B4  6A 00                     PUSH 0x0
005411B6  52                        PUSH EDX
005411B7  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005411BA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005411C0  E8 2B C6 1E 00            CALL 0x0072d7f0
005411C5  83 C4 08                  ADD ESP,0x8
005411C8  85 C0                     TEST EAX,EAX
005411CA  0F 85 91 00 00 00         JNZ 0x00541261
005411D0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005411D3  85 C0                     TEST EAX,EAX
005411D5  74 7A                     JZ 0x00541251
005411D7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005411DA  85 DB                     TEST EBX,EBX
005411DC  74 73                     JZ 0x00541251
005411DE  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005411E1  85 F6                     TEST ESI,ESI
005411E3  74 6C                     JZ 0x00541251
005411E5  8B FB                     MOV EDI,EBX
005411E7  83 C9 FF                  OR ECX,0xffffffff
005411EA  33 C0                     XOR EAX,EAX
005411EC  F2 AE                     SCASB.REPNE ES:EDI
005411EE  F7 D1                     NOT ECX
005411F0  49                        DEC ECX
005411F1  8B FE                     MOV EDI,ESI
005411F3  8B D1                     MOV EDX,ECX
005411F5  83 C9 FF                  OR ECX,0xffffffff
005411F8  F2 AE                     SCASB.REPNE ES:EDI
005411FA  F7 D1                     NOT ECX
005411FC  49                        DEC ECX
005411FD  8D 44 0A 04               LEA EAX,[EDX + ECX*0x1 + 0x4]
00541201  50                        PUSH EAX
00541202  E8 69 9A 16 00            CALL 0x006aac70
00541207  85 C0                     TEST EAX,EAX
00541209  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0054120C  74 43                     JZ 0x00541251
0054120E  53                        PUSH EBX
0054120F  56                        PUSH ESI
00541210  50                        PUSH EAX
00541211  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00541217  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054121A  6A 0A                     PUSH 0xa
0054121C  51                        PUSH ECX
0054121D  E8 3E D3 1E 00            CALL 0x0072e560
00541222  83 C4 14                  ADD ESP,0x14
00541225  85 C0                     TEST EAX,EAX
00541227  74 12                     JZ 0x0054123b
LAB_00541229:
00541229  6A 0A                     PUSH 0xa
0054122B  50                        PUSH EAX
0054122C  C6 00 20                  MOV byte ptr [EAX],0x20
0054122F  E8 2C D3 1E 00            CALL 0x0072e560
00541234  83 C4 08                  ADD ESP,0x8
00541237  85 C0                     TEST EAX,EAX
00541239  75 EE                     JNZ 0x00541229
LAB_0054123b:
0054123B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0054123E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00541241  52                        PUSH EDX
00541242  50                        PUSH EAX
00541243  E8 58 48 17 00            CALL 0x006b5aa0
00541248  8D 4D FC                  LEA ECX,[EBP + -0x4]
0054124B  51                        PUSH ECX
0054124C  E8 0F 9E 16 00            CALL 0x006ab060
LAB_00541251:
00541251  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00541254  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054125A  5F                        POP EDI
0054125B  5E                        POP ESI
0054125C  5B                        POP EBX
0054125D  8B E5                     MOV ESP,EBP
0054125F  5D                        POP EBP
00541260  C3                        RET
LAB_00541261:
00541261  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00541264  5F                        POP EDI
00541265  5E                        POP ESI
00541266  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054126B  5B                        POP EBX
0054126C  8B E5                     MOV ESP,EBP
0054126E  5D                        POP EBP
0054126F  C3                        RET
