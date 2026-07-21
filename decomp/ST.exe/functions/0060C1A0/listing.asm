STFieldC::FUN_0060c1a0:
0060C1A0  55                        PUSH EBP
0060C1A1  8B EC                     MOV EBP,ESP
0060C1A3  51                        PUSH ECX
0060C1A4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060C1A7  33 C0                     XOR EAX,EAX
0060C1A9  53                        PUSH EBX
0060C1AA  56                        PUSH ESI
0060C1AB  85 D2                     TEST EDX,EDX
0060C1AD  8B D9                     MOV EBX,ECX
0060C1AF  0F 84 CF 00 00 00         JZ 0x0060c284
0060C1B5  85 DB                     TEST EBX,EBX
0060C1B7  57                        PUSH EDI
0060C1B8  74 08                     JZ 0x0060c1c2
0060C1BA  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
0060C1C0  EB 02                     JMP 0x0060c1c4
LAB_0060c1c2:
0060C1C2  33 FF                     XOR EDI,EDI
LAB_0060c1c4:
0060C1C4  B9 20 00 00 00            MOV ECX,0x20
0060C1C9  8B F2                     MOV ESI,EDX
0060C1CB  F3 A5                     MOVSD.REP ES:EDI,ESI
0060C1CD  66 A5                     MOVSW ES:EDI,ESI
0060C1CF  A4                        MOVSB ES:EDI,ESI
0060C1D0  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
0060C1D6  BE 83 00 00 00            MOV ESI,0x83
0060C1DB  85 C0                     TEST EAX,EAX
0060C1DD  74 7E                     JZ 0x0060c25d
0060C1DF  8D BA 87 00 00 00         LEA EDI,[EDX + 0x87]
0060C1E5  57                        PUSH EDI
0060C1E6  6A 00                     PUSH 0x0
0060C1E8  E8 73 3E 0A 00            CALL 0x006b0060
0060C1ED  8A 8B 25 02 00 00         MOV CL,byte ptr [EBX + 0x225]
0060C1F3  89 83 34 02 00 00         MOV dword ptr [EBX + 0x234],EAX
0060C1F9  84 C9                     TEST CL,CL
0060C1FB  C7 45 FC 0A 01 00 00      MOV dword ptr [EBP + -0x4],0x10a
0060C202  75 04                     JNZ 0x0060c208
0060C204  85 C0                     TEST EAX,EAX
0060C206  74 43                     JZ 0x0060c24b
LAB_0060c208:
0060C208  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0060C20B  33 D2                     XOR EDX,EDX
0060C20D  85 F6                     TEST ESI,ESI
0060C20F  7E 29                     JLE 0x0060c23a
0060C211  8B C8                     MOV ECX,EAX
0060C213  8B C6                     MOV EAX,ESI
0060C215  83 CE FF                  OR ESI,0xffffffff
0060C218  3B D0                     CMP EDX,EAX
LAB_0060c21a:
0060C21A  73 0B                     JNC 0x0060c227
0060C21C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0060C21F  0F AF C2                  IMUL EAX,EDX
0060C222  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0060C225  EB 02                     JMP 0x0060c229
LAB_0060c227:
0060C227  33 C0                     XOR EAX,EAX
LAB_0060c229:
0060C229  89 70 3C                  MOV dword ptr [EAX + 0x3c],ESI
0060C22C  8B 8B 34 02 00 00         MOV ECX,dword ptr [EBX + 0x234]
0060C232  42                        INC EDX
0060C233  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0060C236  3B D0                     CMP EDX,EAX
0060C238  7C E0                     JL 0x0060c21a
LAB_0060c23a:
0060C23A  8A 83 25 02 00 00         MOV AL,byte ptr [EBX + 0x225]
0060C240  84 C0                     TEST AL,AL
0060C242  74 07                     JZ 0x0060c24b
0060C244  8B CB                     MOV ECX,EBX
0060C246  E8 AA 4E DF FF            CALL 0x004010f5
LAB_0060c24b:
0060C24B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060C24E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0060C251  8B 88 83 00 00 00         MOV ECX,dword ptr [EAX + 0x83]
0060C257  8D 44 0F 04               LEA EAX,[EDI + ECX*0x1 + 0x4]
0060C25B  EB 06                     JMP 0x0060c263
LAB_0060c25d:
0060C25D  8D 82 83 00 00 00         LEA EAX,[EDX + 0x83]
LAB_0060c263:
0060C263  8B 8B 3C 02 00 00         MOV ECX,dword ptr [EBX + 0x23c]
0060C269  5F                        POP EDI
0060C26A  85 C9                     TEST ECX,ECX
0060C26C  74 14                     JZ 0x0060c282
0060C26E  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060C274  85 C9                     TEST ECX,ECX
0060C276  74 0A                     JZ 0x0060c282
0060C278  50                        PUSH EAX
0060C279  8B CB                     MOV ECX,EBX
0060C27B  E8 CC 60 DF FF            CALL 0x0040234c
0060C280  03 F0                     ADD ESI,EAX
LAB_0060c282:
0060C282  8B C6                     MOV EAX,ESI
LAB_0060c284:
0060C284  5E                        POP ESI
0060C285  5B                        POP EBX
0060C286  8B E5                     MOV ESP,EBP
0060C288  5D                        POP EBP
0060C289  C2 04 00                  RET 0x4
