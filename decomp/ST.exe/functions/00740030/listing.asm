__FillZeroMan:
00740030  55                        PUSH EBP
00740031  8B EC                     MOV EBP,ESP
00740033  51                        PUSH ECX
00740034  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0074003B  EB 09                     JMP 0x00740046
LAB_0074003d:
0074003D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00740040  83 C0 01                  ADD EAX,0x1
00740043  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00740046:
00740046  83 7D FC 03               CMP dword ptr [EBP + -0x4],0x3
0074004A  7D 0F                     JGE 0x0074005b
0074004C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074004F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740052  C7 04 8A 00 00 00 00      MOV dword ptr [EDX + ECX*0x4],0x0
00740059  EB E2                     JMP 0x0074003d
LAB_0074005b:
0074005B  8B E5                     MOV ESP,EBP
0074005D  5D                        POP EBP
0074005E  C3                        RET
