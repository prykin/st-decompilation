FUN_0067dc20:
0067DC20  55                        PUSH EBP
0067DC21  8B EC                     MOV EBP,ESP
0067DC23  81 EC E8 02 00 00         SUB ESP,0x2e8
0067DC29  53                        PUSH EBX
0067DC2A  56                        PUSH ESI
0067DC2B  57                        PUSH EDI
0067DC2C  B9 80 00 00 00            MOV ECX,0x80
0067DC31  33 C0                     XOR EAX,EAX
0067DC33  8D BD 18 FD FF FF         LEA EDI,[EBP + 0xfffffd18]
0067DC39  F3 AB                     STOSD.REP ES:EDI
0067DC3B  33 F6                     XOR ESI,ESI
0067DC3D  8D 55 B8                  LEA EDX,[EBP + -0x48]
0067DC40  AA                        STOSB ES:EDI
0067DC41  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067DC46  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0067DC49  56                        PUSH ESI
0067DC4A  52                        PUSH EDX
0067DC4B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0067DC4E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0067DC51  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0067DC54  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067DC5A  E8 91 FB 0A 00            CALL 0x0072d7f0
0067DC5F  8B F8                     MOV EDI,EAX
0067DC61  83 C4 08                  ADD ESP,0x8
0067DC64  3B FE                     CMP EDI,ESI
0067DC66  0F 85 6F 01 00 00         JNZ 0x0067dddb
0067DC6C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0067DC6F  3B DE                     CMP EBX,ESI
0067DC71  75 17                     JNZ 0x0067dc8a
0067DC73  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067DC78  68 3F 01 00 00            PUSH 0x13f
0067DC7D  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DC82  50                        PUSH EAX
0067DC83  6A CC                     PUSH -0x34
0067DC85  E8 B6 81 02 00            CALL 0x006a5e40
LAB_0067dc8a:
0067DC8A  6A 05                     PUSH 0x5
0067DC8C  68 98 00 00 00            PUSH 0x98
0067DC91  6A 05                     PUSH 0x5
0067DC93  56                        PUSH ESI
0067DC94  E8 F7 05 03 00            CALL 0x006ae290
0067DC99  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0067DC9C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067DC9F  83 C9 FF                  OR ECX,0xffffffff
0067DCA2  33 C0                     XOR EAX,EAX
0067DCA4  F2 AE                     SCASB.REPNE ES:EDI
0067DCA6  F7 D1                     NOT ECX
0067DCA8  2B F9                     SUB EDI,ECX
0067DCAA  8D 95 19 FD FF FF         LEA EDX,[EBP + 0xfffffd19]
0067DCB0  8B C1                     MOV EAX,ECX
0067DCB2  8B F7                     MOV ESI,EDI
0067DCB4  8B FA                     MOV EDI,EDX
0067DCB6  C6 85 18 FD FF FF 0C      MOV byte ptr [EBP + 0xfffffd18],0xc
0067DCBD  C1 E9 02                  SHR ECX,0x2
0067DCC0  F3 A5                     MOVSD.REP ES:EDI,ESI
0067DCC2  8B C8                     MOV ECX,EAX
0067DCC4  83 E1 03                  AND ECX,0x3
0067DCC7  F3 A4                     MOVSB.REP ES:EDI,ESI
0067DCC9  8D 8D 18 FD FF FF         LEA ECX,[EBP + 0xfffffd18]
0067DCCF  51                        PUSH ECX
0067DCD0  68 10 2D 6F 00            PUSH 0x6f2d10
0067DCD5  8B CB                     MOV ECX,EBX
0067DCD7  E8 D4 35 07 00            CALL 0x006f12b0
0067DCDC  8B CB                     MOV ECX,EBX
0067DCDE  E8 AD 4A 07 00            CALL 0x006f2790
0067DCE3  8B F0                     MOV ESI,EAX
0067DCE5  85 F6                     TEST ESI,ESI
0067DCE7  0F 84 DC 00 00 00         JZ 0x0067ddc9
0067DCED  EB 03                     JMP 0x0067dcf2
LAB_0067dcef:
0067DCEF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0067dcf2:
0067DCF2  6A 01                     PUSH 0x1
0067DCF4  6A 00                     PUSH 0x0
0067DCF6  56                        PUSH ESI
0067DCF7  53                        PUSH EBX
0067DCF8  E8 93 50 07 00            CALL 0x006f2d90
0067DCFD  8B D0                     MOV EDX,EAX
0067DCFF  83 C4 10                  ADD ESP,0x10
0067DD02  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0067DD05  8B 82 0A 01 00 00         MOV EAX,dword ptr [EDX + 0x10a]
0067DD0B  85 C0                     TEST EAX,EAX
0067DD0D  8B D8                     MOV EBX,EAX
0067DD0F  75 05                     JNZ 0x0067dd16
0067DD11  BB 01 00 00 00            MOV EBX,0x1
LAB_0067dd16:
0067DD16  85 D2                     TEST EDX,EDX
0067DD18  0F 84 99 00 00 00         JZ 0x0067ddb7
0067DD1E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067DD21  85 C0                     TEST EAX,EAX
0067DD23  74 08                     JZ 0x0067dd2d
0067DD25  0F BF 4A 19               MOVSX ECX,word ptr [EDX + 0x19]
0067DD29  3B C1                     CMP EAX,ECX
0067DD2B  75 7E                     JNZ 0x0067ddab
LAB_0067dd2d:
0067DD2D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0067DD30  85 D8                     TEST EAX,EBX
0067DD32  74 77                     JZ 0x0067ddab
0067DD34  B9 26 00 00 00            MOV ECX,0x26
0067DD39  33 C0                     XOR EAX,EAX
0067DD3B  8D BD 1C FF FF FF         LEA EDI,[EBP + 0xffffff1c]
0067DD41  83 C2 1B                  ADD EDX,0x1b
0067DD44  F3 AB                     STOSD.REP ES:EDI
0067DD46  6A 3F                     PUSH 0x3f
0067DD48  8D 8D 1C FF FF FF         LEA ECX,[EBP + 0xffffff1c]
0067DD4E  52                        PUSH EDX
0067DD4F  51                        PUSH ECX
0067DD50  E8 EB 05 0B 00            CALL 0x0072e340
0067DD55  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067DD58  6A 0B                     PUSH 0xb
0067DD5A  83 C2 5B                  ADD EDX,0x5b
0067DD5D  8D 85 5C FF FF FF         LEA EAX,[EBP + 0xffffff5c]
0067DD63  52                        PUSH EDX
0067DD64  50                        PUSH EAX
0067DD65  E8 D6 05 0B 00            CALL 0x0072e340
0067DD6A  6A 1F                     PUSH 0x1f
0067DD6C  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
0067DD72  56                        PUSH ESI
0067DD73  51                        PUSH ECX
0067DD74  E8 C7 05 0B 00            CALL 0x0072e340
0067DD79  8B 15 18 D7 79 00         MOV EDX,dword ptr [0x0079d718]
0067DD7F  6A 1F                     PUSH 0x1f
0067DD81  8D 45 8C                  LEA EAX,[EBP + -0x74]
0067DD84  52                        PUSH EDX
0067DD85  50                        PUSH EAX
0067DD86  E8 B5 05 0B 00            CALL 0x0072e340
0067DD8B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067DD8E  83 C4 30                  ADD ESP,0x30
0067DD91  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
0067DD94  8D 85 1C FF FF FF         LEA EAX,[EBP + 0xffffff1c]
0067DD9A  0F BF 51 19               MOVSX EDX,word ptr [ECX + 0x19]
0067DD9E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0067DDA1  50                        PUSH EAX
0067DDA2  51                        PUSH ECX
0067DDA3  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0067DDA6  E8 15 04 03 00            CALL 0x006ae1c0
LAB_0067ddab:
0067DDAB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067DDAE  8D 55 FC                  LEA EDX,[EBP + -0x4]
0067DDB1  52                        PUSH EDX
0067DDB2  E8 29 43 07 00            CALL 0x006f20e0
LAB_0067ddb7:
0067DDB7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067DDBA  E8 D1 49 07 00            CALL 0x006f2790
0067DDBF  8B F0                     MOV ESI,EAX
0067DDC1  85 F6                     TEST ESI,ESI
0067DDC3  0F 85 26 FF FF FF         JNZ 0x0067dcef
LAB_0067ddc9:
0067DDC9  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0067DDCC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067DDD1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067DDD4  5F                        POP EDI
0067DDD5  5E                        POP ESI
0067DDD6  5B                        POP EBX
0067DDD7  8B E5                     MOV ESP,EBP
0067DDD9  5D                        POP EBP
0067DDDA  C3                        RET
LAB_0067dddb:
0067DDDB  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0067DDDE  68 08 30 7D 00            PUSH 0x7d3008
0067DDE3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067DDE8  57                        PUSH EDI
0067DDE9  56                        PUSH ESI
0067DDEA  68 56 01 00 00            PUSH 0x156
0067DDEF  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DDF4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067DDFA  E8 D1 F6 02 00            CALL 0x006ad4d0
0067DDFF  83 C4 18                  ADD ESP,0x18
0067DE02  85 C0                     TEST EAX,EAX
0067DE04  74 01                     JZ 0x0067de07
0067DE06  CC                        INT3
LAB_0067de07:
0067DE07  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067DE0A  3B C6                     CMP EAX,ESI
0067DE0C  74 06                     JZ 0x0067de14
0067DE0E  50                        PUSH EAX
0067DE0F  E8 FC 02 03 00            CALL 0x006ae110
LAB_0067de14:
0067DE14  68 58 01 00 00            PUSH 0x158
0067DE19  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DE1E  56                        PUSH ESI
0067DE1F  57                        PUSH EDI
0067DE20  E8 1B 80 02 00            CALL 0x006a5e40
0067DE25  5F                        POP EDI
0067DE26  5E                        POP ESI
0067DE27  33 C0                     XOR EAX,EAX
0067DE29  5B                        POP EBX
0067DE2A  8B E5                     MOV ESP,EBP
0067DE2C  5D                        POP EBP
0067DE2D  C3                        RET
