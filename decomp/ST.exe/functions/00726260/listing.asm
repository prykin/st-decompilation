FUN_00726260:
00726260  55                        PUSH EBP
00726261  8B EC                     MOV EBP,ESP
00726263  53                        PUSH EBX
00726264  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00726267  8B 03                     MOV EAX,dword ptr [EBX]
00726269  85 C0                     TEST EAX,EAX
0072626B  74 3D                     JZ 0x007262aa
0072626D  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
00726271  0F BF 10                  MOVSX EDX,word ptr [EAX]
00726274  0F AF CA                  IMUL ECX,EDX
00726277  56                        PUSH ESI
00726278  33 F6                     XOR ESI,ESI
0072627A  85 C9                     TEST ECX,ECX
0072627C  7E 25                     JLE 0x007262a3
0072627E  57                        PUSH EDI
0072627F  33 FF                     XOR EDI,EDI
LAB_00726281:
00726281  8D 4C 07 12               LEA ECX,[EDI + EAX*0x1 + 0x12]
00726285  51                        PUSH ECX
00726286  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00726289  E8 52 BE FC FF            CALL 0x006f20e0
0072628E  8B 03                     MOV EAX,dword ptr [EBX]
00726290  46                        INC ESI
00726291  83 C7 0A                  ADD EDI,0xa
00726294  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00726298  0F BF 08                  MOVSX ECX,word ptr [EAX]
0072629B  0F AF D1                  IMUL EDX,ECX
0072629E  3B F2                     CMP ESI,EDX
007262A0  7C DF                     JL 0x00726281
007262A2  5F                        POP EDI
LAB_007262a3:
007262A3  53                        PUSH EBX
007262A4  E8 B7 4D F8 FF            CALL 0x006ab060
007262A9  5E                        POP ESI
LAB_007262aa:
007262AA  5B                        POP EBX
007262AB  5D                        POP EBP
007262AC  C3                        RET
