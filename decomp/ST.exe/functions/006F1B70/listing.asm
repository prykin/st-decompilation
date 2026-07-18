FUN_006f1b70:
006F1B70  55                        PUSH EBP
006F1B71  8B EC                     MOV EBP,ESP
006F1B73  81 EC 68 03 00 00         SUB ESP,0x368
006F1B79  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F1B7E  56                        PUSH ESI
006F1B7F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F1B82  57                        PUSH EDI
006F1B83  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F1B86  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F1B89  6A 00                     PUSH 0x0
006F1B8B  52                        PUSH EDX
006F1B8C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F1B8F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1B95  E8 56 BC 03 00            CALL 0x0072d7f0
006F1B9A  8B F0                     MOV ESI,EAX
006F1B9C  83 C4 08                  ADD ESP,0x8
006F1B9F  85 F6                     TEST ESI,ESI
006F1BA1  75 7A                     JNZ 0x006f1c1d
006F1BA3  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
006F1BA6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F1BA9  88 85 98 FC FF FF         MOV byte ptr [EBP + 0xfffffc98],AL
006F1BAF  8B FE                     MOV EDI,ESI
006F1BB1  83 C9 FF                  OR ECX,0xffffffff
006F1BB4  33 C0                     XOR EAX,EAX
006F1BB6  F2 AE                     SCASB.REPNE ES:EDI
006F1BB8  F7 D1                     NOT ECX
006F1BBA  49                        DEC ECX
006F1BBB  8D BD B0 FC FF FF         LEA EDI,[EBP + 0xfffffcb0]
006F1BC1  66 89 8D AE FC FF FF      MOV word ptr [EBP + 0xfffffcae],CX
006F1BC8  50                        PUSH EAX
006F1BC9  0F BF C9                  MOVSX ECX,CX
006F1BCC  8B D1                     MOV EDX,ECX
006F1BCE  50                        PUSH EAX
006F1BCF  C1 E9 02                  SHR ECX,0x2
006F1BD2  F3 A5                     MOVSD.REP ES:EDI,ESI
006F1BD4  8B CA                     MOV ECX,EDX
006F1BD6  8D 85 98 FC FF FF         LEA EAX,[EBP + 0xfffffc98]
006F1BDC  83 E1 03                  AND ECX,0x3
006F1BDF  50                        PUSH EAX
006F1BE0  F3 A4                     MOVSB.REP ES:EDI,ESI
006F1BE2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F1BE5  8B 11                     MOV EDX,dword ptr [ECX]
006F1BE7  52                        PUSH EDX
006F1BE8  E8 93 FD 05 00            CALL 0x00751980
006F1BED  8B F0                     MOV ESI,EAX
006F1BEF  83 FE FC                  CMP ESI,-0x4
006F1BF2  75 16                     JNZ 0x006f1c0a
006F1BF4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F1BF9  68 A4 01 00 00            PUSH 0x1a4
006F1BFE  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1C03  50                        PUSH EAX
006F1C04  56                        PUSH ESI
006F1C05  E8 36 42 FB FF            CALL 0x006a5e40
LAB_006f1c0a:
006F1C0A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F1C0D  8B C6                     MOV EAX,ESI
006F1C0F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1C15  5F                        POP EDI
006F1C16  5E                        POP ESI
006F1C17  8B E5                     MOV ESP,EBP
006F1C19  5D                        POP EBP
006F1C1A  C2 0C 00                  RET 0xc
LAB_006f1c1d:
006F1C1D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F1C20  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F1C23  85 C0                     TEST EAX,EAX
006F1C25  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F1C2B  75 05                     JNZ 0x006f1c32
006F1C2D  83 FE FC                  CMP ESI,-0x4
006F1C30  74 6A                     JZ 0x006f1c9c
LAB_006f1c32:
006F1C32  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F1C35  50                        PUSH EAX
006F1C36  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F1C39  25 FF 00 00 00            AND EAX,0xff
006F1C3E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006F1C41  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1C44  05 31 02 00 00            ADD EAX,0x231
006F1C49  8D 14 4D A4 F0 7E 00      LEA EDX,[ECX*0x2 + 0x7ef0a4]
006F1C50  8D 8D B4 FE FF FF         LEA ECX,[EBP + 0xfffffeb4]
006F1C56  52                        PUSH EDX
006F1C57  50                        PUSH EAX
006F1C58  68 80 FB 7E 00            PUSH 0x7efb80
006F1C5D  51                        PUSH ECX
006F1C5E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F1C64  8D 95 B4 FE FF FF         LEA EDX,[EBP + 0xfffffeb4]
006F1C6A  52                        PUSH EDX
006F1C6B  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F1C70  56                        PUSH ESI
006F1C71  6A 00                     PUSH 0x0
006F1C73  68 AA 01 00 00            PUSH 0x1aa
006F1C78  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1C7D  E8 4E B8 FB FF            CALL 0x006ad4d0
006F1C82  83 C4 2C                  ADD ESP,0x2c
006F1C85  85 C0                     TEST EAX,EAX
006F1C87  74 01                     JZ 0x006f1c8a
006F1C89  CC                        INT3
LAB_006f1c8a:
006F1C8A  68 AC 01 00 00            PUSH 0x1ac
006F1C8F  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1C94  6A 00                     PUSH 0x0
006F1C96  56                        PUSH ESI
006F1C97  E8 A4 41 FB FF            CALL 0x006a5e40
LAB_006f1c9c:
006F1C9C  5F                        POP EDI
006F1C9D  33 C0                     XOR EAX,EAX
006F1C9F  5E                        POP ESI
006F1CA0  8B E5                     MOV ESP,EBP
006F1CA2  5D                        POP EBP
006F1CA3  C2 0C 00                  RET 0xc
