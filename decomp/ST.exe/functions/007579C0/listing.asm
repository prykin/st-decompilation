FUN_007579c0:
007579C0  55                        PUSH EBP
007579C1  8B EC                     MOV EBP,ESP
007579C3  56                        PUSH ESI
007579C4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007579C7  57                        PUSH EDI
007579C8  8B BE A2 01 00 00         MOV EDI,dword ptr [ESI + 0x1a2]
007579CE  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
007579D1  85 C0                     TEST EAX,EAX
007579D3  74 0B                     JZ 0x007579e0
007579D5  5F                        POP EDI
007579D6  B8 02 00 00 00            MOV EAX,0x2
007579DB  5E                        POP ESI
007579DC  5D                        POP EBP
007579DD  C2 04 00                  RET 0x4
LAB_007579e0:
007579E0  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
007579E6  53                        PUSH EBX
007579E7  56                        PUSH ESI
007579E8  FF 50 04                  CALL dword ptr [EAX + 0x4]
007579EB  8B D8                     MOV EBX,EAX
007579ED  48                        DEC EAX
007579EE  74 66                     JZ 0x00757a56
007579F0  48                        DEC EAX
007579F1  0F 85 A0 00 00 00         JNZ 0x00757a97
007579F7  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
007579FA  C7 47 14 01 00 00 00      MOV dword ptr [EDI + 0x14],0x1
00757A01  85 C0                     TEST EAX,EAX
00757A03  74 32                     JZ 0x00757a37
00757A05  8B 8E A6 01 00 00         MOV ECX,dword ptr [ESI + 0x1a6]
00757A0B  8B 41 54                  MOV EAX,dword ptr [ECX + 0x54]
00757A0E  85 C0                     TEST EAX,EAX
00757A10  0F 84 81 00 00 00         JZ 0x00757a97
00757A16  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00757A1C  68 3F 01 00 00            PUSH 0x13f
00757A21  68 98 2D 7F 00            PUSH 0x7f2d98
00757A26  52                        PUSH EDX
00757A27  6A 3A                     PUSH 0x3a
00757A29  E8 12 E4 F4 FF            CALL 0x006a5e40
00757A2E  8B C3                     MOV EAX,EBX
00757A30  5B                        POP EBX
00757A31  5F                        POP EDI
00757A32  5E                        POP ESI
00757A33  5D                        POP EBP
00757A34  C2 04 00                  RET 0x4
LAB_00757a37:
00757A37  8B 86 88 00 00 00         MOV EAX,dword ptr [ESI + 0x88]
00757A3D  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
00757A43  3B C8                     CMP ECX,EAX
00757A45  7E 50                     JLE 0x00757a97
00757A47  89 86 90 00 00 00         MOV dword ptr [ESI + 0x90],EAX
00757A4D  8B C3                     MOV EAX,EBX
00757A4F  5B                        POP EBX
00757A50  5F                        POP EDI
00757A51  5E                        POP ESI
00757A52  5D                        POP EBP
00757A53  C2 04 00                  RET 0x4
LAB_00757a56:
00757A56  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00757A59  85 C0                     TEST EAX,EAX
00757A5B  74 16                     JZ 0x00757a73
00757A5D  56                        PUSH ESI
00757A5E  E8 3D 00 00 00            CALL 0x00757aa0
00757A63  8B C3                     MOV EAX,EBX
00757A65  C7 47 18 00 00 00 00      MOV dword ptr [EDI + 0x18],0x0
00757A6C  5B                        POP EBX
00757A6D  5F                        POP EDI
00757A6E  5E                        POP ESI
00757A6F  5D                        POP EBP
00757A70  C2 04 00                  RET 0x4
LAB_00757a73:
00757A73  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00757A76  85 C0                     TEST EAX,EAX
00757A78  75 17                     JNZ 0x00757a91
00757A7A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00757A7F  68 37 01 00 00            PUSH 0x137
00757A84  68 98 2D 7F 00            PUSH 0x7f2d98
00757A89  50                        PUSH EAX
00757A8A  6A 22                     PUSH 0x22
00757A8C  E8 AF E3 F4 FF            CALL 0x006a5e40
LAB_00757a91:
00757A91  56                        PUSH ESI
00757A92  E8 79 FC FF FF            CALL 0x00757710
LAB_00757a97:
00757A97  8B C3                     MOV EAX,EBX
00757A99  5B                        POP EBX
00757A9A  5F                        POP EDI
00757A9B  5E                        POP ESI
00757A9C  5D                        POP EBP
00757A9D  C2 04 00                  RET 0x4
