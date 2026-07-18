__IsZeroMan:
00740060  55                        PUSH EBP
00740061  8B EC                     MOV EBP,ESP
00740063  51                        PUSH ECX
00740064  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0074006B  EB 09                     JMP 0x00740076
LAB_0074006d:
0074006D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00740070  83 C0 01                  ADD EAX,0x1
00740073  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00740076:
00740076  83 7D FC 03               CMP dword ptr [EBP + -0x4],0x3
0074007A  7D 12                     JGE 0x0074008e
0074007C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074007F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740082  83 3C 8A 00               CMP dword ptr [EDX + ECX*0x4],0x0
00740086  74 04                     JZ 0x0074008c
00740088  33 C0                     XOR EAX,EAX
0074008A  EB 07                     JMP 0x00740093
LAB_0074008c:
0074008C  EB DF                     JMP 0x0074006d
LAB_0074008e:
0074008E  B8 01 00 00 00            MOV EAX,0x1
LAB_00740093:
00740093  8B E5                     MOV ESP,EBP
00740095  5D                        POP EBP
00740096  C3                        RET
