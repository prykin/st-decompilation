FUN_00664650:
00664650  55                        PUSH EBP
00664651  8B EC                     MOV EBP,ESP
00664653  57                        PUSH EDI
00664654  8B F9                     MOV EDI,ECX
00664656  8B 8F 17 02 00 00         MOV ECX,dword ptr [EDI + 0x217]
0066465C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0066465F  85 C0                     TEST EAX,EAX
00664661  75 08                     JNZ 0x0066466b
00664663  83 C8 FF                  OR EAX,0xffffffff
00664666  5F                        POP EDI
00664667  5D                        POP EBP
00664668  C2 04 00                  RET 0x4
LAB_0066466b:
0066466B  56                        PUSH ESI
0066466C  33 F6                     XOR ESI,ESI
0066466E  85 C0                     TEST EAX,EAX
00664670  7E 31                     JLE 0x006646a3
00664672  53                        PUSH EBX
00664673  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00664676  3B F0                     CMP ESI,EAX
LAB_00664678:
00664678  73 0D                     JNC 0x00664687
0066467A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0066467D  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00664680  0F AF C6                  IMUL EAX,ESI
00664683  03 C2                     ADD EAX,EDX
00664685  EB 02                     JMP 0x00664689
LAB_00664687:
00664687  33 C0                     XOR EAX,EAX
LAB_00664689:
00664689  39 18                     CMP dword ptr [EAX],EBX
0066468B  75 07                     JNZ 0x00664694
0066468D  56                        PUSH ESI
0066468E  51                        PUSH ECX
0066468F  E8 DC C5 04 00            CALL 0x006b0c70
LAB_00664694:
00664694  8B 8F 17 02 00 00         MOV ECX,dword ptr [EDI + 0x217]
0066469A  46                        INC ESI
0066469B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0066469E  3B F0                     CMP ESI,EAX
006646A0  7C D6                     JL 0x00664678
006646A2  5B                        POP EBX
LAB_006646a3:
006646A3  8B 87 17 02 00 00         MOV EAX,dword ptr [EDI + 0x217]
006646A9  5E                        POP ESI
006646AA  5F                        POP EDI
006646AB  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006646AE  5D                        POP EBP
006646AF  C2 04 00                  RET 0x4
