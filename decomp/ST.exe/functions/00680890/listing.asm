FUN_00680890:
00680890  55                        PUSH EBP
00680891  8B EC                     MOV EBP,ESP
00680893  81 EC 04 04 00 00         SUB ESP,0x404
00680899  53                        PUSH EBX
0068089A  56                        PUSH ESI
0068089B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068089E  57                        PUSH EDI
0068089F  56                        PUSH ESI
006808A0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006808A7  E8 CD 1F D8 FF            CALL 0x00402879
006808AC  8B F8                     MOV EDI,EAX
006808AE  83 C4 04                  ADD ESP,0x4
006808B1  80 3F 00                  CMP byte ptr [EDI],0x0
006808B4  75 17                     JNZ 0x006808cd
006808B6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006808BB  68 FF 00 00 00            PUSH 0xff
006808C0  68 04 56 7D 00            PUSH 0x7d5604
006808C5  50                        PUSH EAX
006808C6  6A CC                     PUSH -0x34
006808C8  E8 73 55 02 00            CALL 0x006a5e40
LAB_006808cd:
006808CD  8D 4D FC                  LEA ECX,[EBP + -0x4]
006808D0  51                        PUSH ECX
006808D1  E8 34 1B D8 FF            CALL 0x0040240a
006808D6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006808D9  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006808DC  8B 0D D0 89 84 00         MOV ECX,dword ptr [0x008489d0]
006808E2  50                        PUSH EAX
006808E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006808E6  52                        PUSH EDX
006808E7  53                        PUSH EBX
006808E8  50                        PUSH EAX
006808E9  57                        PUSH EDI
006808EA  56                        PUSH ESI
006808EB  E8 00 0B 07 00            CALL 0x006f13f0
006808F0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006808F3  8B 0D 0C 8A 84 00         MOV ECX,dword ptr [0x00848a0c]
006808F9  8B 15 10 8A 84 00         MOV EDX,dword ptr [0x00848a10]
006808FF  03 C8                     ADD ECX,EAX
00680901  42                        INC EDX
00680902  50                        PUSH EAX
00680903  89 0D 0C 8A 84 00         MOV dword ptr [0x00848a0c],ECX
00680909  89 15 10 8A 84 00         MOV dword ptr [0x00848a10],EDX
0068090F  E8 F6 1A D8 FF            CALL 0x0040240a
00680914  81 E6 FF 00 00 00         AND ESI,0xff
0068091A  25 FF 00 00 00            AND EAX,0xff
0068091F  50                        PUSH EAX
00680920  A1 18 76 80 00            MOV EAX,[0x00807618]
00680925  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
00680928  53                        PUSH EBX
00680929  57                        PUSH EDI
0068092A  8D 14 4D A4 F0 7E 00      LEA EDX,[ECX*0x2 + 0x7ef0a4]
00680931  52                        PUSH EDX
00680932  50                        PUSH EAX
00680933  68 5A 1B 00 00            PUSH 0x1b5a
00680938  E8 03 F8 02 00            CALL 0x006b0140
0068093D  8D 8D FC FB FF FF         LEA ECX,[EBP + 0xfffffbfc]
00680943  50                        PUSH EAX
00680944  51                        PUSH ECX
00680945  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0068094B  8D 95 FC FB FF FF         LEA EDX,[EBP + 0xfffffbfc]
00680951  52                        PUSH EDX
00680952  E8 EE 25 D8 FF            CALL 0x00402f45
00680957  83 C4 20                  ADD ESP,0x20
0068095A  B8 01 00 00 00            MOV EAX,0x1
0068095F  5F                        POP EDI
00680960  5E                        POP ESI
00680961  5B                        POP EBX
00680962  8B E5                     MOV ESP,EBP
00680964  5D                        POP EBP
00680965  C3                        RET
