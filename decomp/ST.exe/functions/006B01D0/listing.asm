FUN_006b01d0:
006B01D0  55                        PUSH EBP
006B01D1  8B EC                     MOV EBP,ESP
006B01D3  6A FF                     PUSH -0x1
006B01D5  68 70 D8 79 00            PUSH 0x79d870
006B01DA  68 64 D9 72 00            PUSH 0x72d964
006B01DF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B01E5  50                        PUSH EAX
006B01E6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B01ED  83 EC 08                  SUB ESP,0x8
006B01F0  53                        PUSH EBX
006B01F1  56                        PUSH ESI
006B01F2  57                        PUSH EDI
006B01F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B01F6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B01F9  85 C0                     TEST EAX,EAX
006B01FB  7E 78                     JLE 0x006b0275
006B01FD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B0200  85 C0                     TEST EAX,EAX
006B0202  7E 71                     JLE 0x006b0275
006B0204  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B0207  0F AF 45 14               IMUL EAX,dword ptr [EBP + 0x14]
006B020B  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006B020E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B0211  03 F0                     ADD ESI,EAX
006B0213  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006b021a:
006B021A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B021D  8B C8                     MOV ECX,EAX
006B021F  48                        DEC EAX
006B0220  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006B0223  85 C9                     TEST ECX,ECX
006B0225  74 47                     JZ 0x006b026e
006B0227  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B022A  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
006B022D  8B FE                     MOV EDI,ESI
006B022F  8B D1                     MOV EDX,ECX
006B0231  8A D8                     MOV BL,AL
006B0233  8A FB                     MOV BH,BL
006B0235  8B C3                     MOV EAX,EBX
006B0237  C1 E0 10                  SHL EAX,0x10
006B023A  66 8B C3                  MOV AX,BX
006B023D  C1 E9 02                  SHR ECX,0x2
006B0240  F3 AB                     STOSD.REP ES:EDI
006B0242  8B CA                     MOV ECX,EDX
006B0244  83 E1 03                  AND ECX,0x3
006B0247  F3 AA                     STOSB.REP ES:EDI
006B0249  03 75 0C                  ADD ESI,dword ptr [EBP + 0xc]
006B024C  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006B024F  EB C9                     JMP 0x006b021a
LAB_006b026e:
006B026E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006b0275:
006B0275  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B0278  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B027F  5F                        POP EDI
006B0280  5E                        POP ESI
006B0281  5B                        POP EBX
006B0282  8B E5                     MOV ESP,EBP
006B0284  5D                        POP EBP
006B0285  C2 1C 00                  RET 0x1c
