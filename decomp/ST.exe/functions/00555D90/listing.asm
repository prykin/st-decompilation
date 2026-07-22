TraksClassTy::sub_00555D90:
00555D90  55                        PUSH EBP
00555D91  8B EC                     MOV EBP,ESP
00555D93  8B 91 28 08 00 00         MOV EDX,dword ptr [ECX + 0x828]
00555D99  56                        PUSH ESI
00555D9A  85 D2                     TEST EDX,EDX
00555D9C  57                        PUSH EDI
00555D9D  7C 35                     JL 0x00555dd4
00555D9F  0F BF 44 51 28            MOVSX EAX,word ptr [ECX + EDX*0x2 + 0x28]
00555DA4  4A                        DEC EDX
00555DA5  85 C0                     TEST EAX,EAX
00555DA7  89 91 28 08 00 00         MOV dword ptr [ECX + 0x828],EDX
00555DAD  7C 25                     JL 0x00555dd4
00555DAF  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
00555DB2  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
00555DB5  73 7D                     JNC 0x00555e34
00555DB7  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00555DBA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00555DBD  0F AF F8                  IMUL EDI,EAX
00555DC0  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00555DC3  B9 0F 00 00 00            MOV ECX,0xf
00555DC8  03 F8                     ADD EDI,EAX
00555DCA  33 C0                     XOR EAX,EAX
00555DCC  F3 A5                     MOVSD.REP ES:EDI,ESI
00555DCE  5F                        POP EDI
00555DCF  5E                        POP ESI
00555DD0  5D                        POP EBP
00555DD1  C2 04 00                  RET 0x4
LAB_00555dd4:
00555DD4  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
00555DD7  33 D2                     XOR EDX,EDX
00555DD9  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
00555DDC  85 F6                     TEST ESI,ESI
00555DDE  7E 1F                     JLE 0x00555dff
00555DE0  3B D6                     CMP EDX,ESI
LAB_00555de2:
00555DE2  73 0D                     JNC 0x00555df1
00555DE4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00555DE7  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00555DEA  0F AF C2                  IMUL EAX,EDX
00555DED  03 C7                     ADD EAX,EDI
00555DEF  EB 02                     JMP 0x00555df3
LAB_00555df1:
00555DF1  33 C0                     XOR EAX,EAX
LAB_00555df3:
00555DF3  8B 78 32                  MOV EDI,dword ptr [EAX + 0x32]
00555DF6  85 FF                     TEST EDI,EDI
00555DF8  7C 15                     JL 0x00555e0f
00555DFA  42                        INC EDX
00555DFB  3B D6                     CMP EDX,ESI
00555DFD  7C E3                     JL 0x00555de2
LAB_00555dff:
00555DFF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00555E02  50                        PUSH EAX
00555E03  51                        PUSH ECX
00555E04  E8 B7 83 15 00            CALL 0x006ae1c0
00555E09  5F                        POP EDI
00555E0A  5E                        POP ESI
00555E0B  5D                        POP EBP
00555E0C  C2 04 00                  RET 0x4
LAB_00555e0f:
00555E0F  85 D2                     TEST EDX,EDX
00555E11  7C EC                     JL 0x00555dff
00555E13  3B D6                     CMP EDX,ESI
00555E15  73 1D                     JNC 0x00555e34
00555E17  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00555E1A  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00555E1D  0F AF FA                  IMUL EDI,EDX
00555E20  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00555E23  03 F8                     ADD EDI,EAX
00555E25  B9 0F 00 00 00            MOV ECX,0xf
00555E2A  33 C0                     XOR EAX,EAX
00555E2C  F3 A5                     MOVSD.REP ES:EDI,ESI
00555E2E  5F                        POP EDI
00555E2F  5E                        POP ESI
00555E30  5D                        POP EBP
00555E31  C2 04 00                  RET 0x4
LAB_00555e34:
00555E34  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00555E37  33 FF                     XOR EDI,EDI
00555E39  B9 0F 00 00 00            MOV ECX,0xf
00555E3E  33 C0                     XOR EAX,EAX
00555E40  F3 A5                     MOVSD.REP ES:EDI,ESI
00555E42  5F                        POP EDI
00555E43  5E                        POP ESI
00555E44  5D                        POP EBP
00555E45  C2 04 00                  RET 0x4
