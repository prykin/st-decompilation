FUN_00602660:
00602660  55                        PUSH EBP
00602661  8B EC                     MOV EBP,ESP
00602663  8B C1                     MOV EAX,ECX
00602665  56                        PUSH ESI
00602666  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00602669  57                        PUSH EDI
0060266A  B9 5F 00 00 00            MOV ECX,0x5f
0060266F  8D B8 31 02 00 00         LEA EDI,[EAX + 0x231]
00602675  F3 A5                     MOVSD.REP ES:EDI,ESI
00602677  66 A5                     MOVSW ES:EDI,ESI
00602679  8B 88 41 02 00 00         MOV ECX,dword ptr [EAX + 0x241]
0060267F  5F                        POP EDI
00602680  83 F9 01                  CMP ECX,0x1
00602683  C7 80 9B 03 00 00 FF FF FF FF  MOV dword ptr [EAX + 0x39b],0xffffffff
0060268D  5E                        POP ESI
0060268E  75 21                     JNZ 0x006026b1
00602690  66 8B 88 55 02 00 00      MOV CX,word ptr [EAX + 0x255]
00602697  66 8B 90 57 02 00 00      MOV DX,word ptr [EAX + 0x257]
0060269E  66 89 48 47               MOV word ptr [EAX + 0x47],CX
006026A2  66 8B 88 59 02 00 00      MOV CX,word ptr [EAX + 0x259]
006026A9  66 89 50 49               MOV word ptr [EAX + 0x49],DX
006026AD  66 89 48 4B               MOV word ptr [EAX + 0x4b],CX
LAB_006026b1:
006026B1  66 8B 90 7B 03 00 00      MOV DX,word ptr [EAX + 0x37b]
006026B8  66 8B 88 7F 03 00 00      MOV CX,word ptr [EAX + 0x37f]
006026BF  66 89 50 41               MOV word ptr [EAX + 0x41],DX
006026C3  66 8B 90 83 03 00 00      MOV DX,word ptr [EAX + 0x383]
006026CA  66 89 48 43               MOV word ptr [EAX + 0x43],CX
006026CE  66 89 50 45               MOV word ptr [EAX + 0x45],DX
006026D2  B8 7E 01 00 00            MOV EAX,0x17e
006026D7  5D                        POP EBP
006026D8  C2 04 00                  RET 0x4
