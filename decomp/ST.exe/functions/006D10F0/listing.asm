FUN_006d10f0:
006D10F0  55                        PUSH EBP
006D10F1  8B EC                     MOV EBP,ESP
006D10F3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D10F6  3D 00 01 00 00            CMP EAX,0x100
006D10FB  7E 05                     JLE 0x006d1102
006D10FD  33 C0                     XOR EAX,EAX
006D10FF  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_006d1102:
006D1102  53                        PUSH EBX
006D1103  56                        PUSH ESI
006D1104  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D1107  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D110A  0F AF 75 10               IMUL ESI,dword ptr [EBP + 0x10]
006D110E  83 C6 1F                  ADD ESI,0x1f
006D1111  57                        PUSH EDI
006D1112  C1 EE 03                  SHR ESI,0x3
006D1115  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006D111B  8D 3C 85 28 00 00 00      LEA EDI,[EAX*0x4 + 0x28]
006D1122  0F AF 75 0C               IMUL ESI,dword ptr [EBP + 0xc]
006D1126  85 C9                     TEST ECX,ECX
006D1128  8B C7                     MOV EAX,EDI
006D112A  74 02                     JZ 0x006d112e
006D112C  03 C6                     ADD EAX,ESI
LAB_006d112e:
006D112E  50                        PUSH EAX
006D112F  E8 3C 9B FD FF            CALL 0x006aac70
006D1134  8B D0                     MOV EDX,EAX
006D1136  85 D2                     TEST EDX,EDX
006D1138  0F 84 9E 00 00 00         JZ 0x006d11dc
006D113E  8B CF                     MOV ECX,EDI
006D1140  33 C0                     XOR EAX,EAX
006D1142  8B D9                     MOV EBX,ECX
006D1144  8B FA                     MOV EDI,EDX
006D1146  C1 E9 02                  SHR ECX,0x2
006D1149  F3 AB                     STOSD.REP ES:EDI
006D114B  8B CB                     MOV ECX,EBX
006D114D  BB 03 00 00 00            MOV EBX,0x3
006D1152  23 CB                     AND ECX,EBX
006D1154  F3 AA                     STOSB.REP ES:EDI
006D1156  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D1159  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D115C  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006D115F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1162  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
006D1165  33 C0                     XOR EAX,EAX
006D1167  83 F9 10                  CMP ECX,0x10
006D116A  89 72 14                  MOV dword ptr [EDX + 0x14],ESI
006D116D  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D1170  C7 02 28 00 00 00         MOV dword ptr [EDX],0x28
006D1176  0F 9D C0                  SETGE AL
006D1179  48                        DEC EAX
006D117A  66 C7 42 0C 01 00         MOV word ptr [EDX + 0xc],0x1
006D1180  23 C6                     AND EAX,ESI
006D1182  3B F3                     CMP ESI,EBX
006D1184  66 89 4A 0E               MOV word ptr [EDX + 0xe],CX
006D1188  C7 42 10 00 00 00 00      MOV dword ptr [EDX + 0x10],0x0
006D118F  89 42 20                  MOV dword ptr [EDX + 0x20],EAX
006D1192  75 48                     JNZ 0x006d11dc
006D1194  83 F9 10                  CMP ECX,0x10
006D1197  8D 42 28                  LEA EAX,[EDX + 0x28]
006D119A  75 22                     JNZ 0x006d11be
006D119C  C7 00 00 F8 00 00         MOV dword ptr [EAX],0xf800
006D11A2  83 C0 04                  ADD EAX,0x4
006D11A5  5F                        POP EDI
006D11A6  5E                        POP ESI
006D11A7  C7 00 E0 07 00 00         MOV dword ptr [EAX],0x7e0
006D11AD  C7 40 04 1F 00 00 00      MOV dword ptr [EAX + 0x4],0x1f
006D11B4  89 5A 10                  MOV dword ptr [EDX + 0x10],EBX
006D11B7  8B C2                     MOV EAX,EDX
006D11B9  5B                        POP EBX
006D11BA  5D                        POP EBP
006D11BB  C2 14 00                  RET 0x14
LAB_006d11be:
006D11BE  83 F9 20                  CMP ECX,0x20
006D11C1  75 19                     JNZ 0x006d11dc
006D11C3  C7 00 00 00 FF 00         MOV dword ptr [EAX],0xff0000
006D11C9  83 C0 04                  ADD EAX,0x4
006D11CC  C7 00 00 FF 00 00         MOV dword ptr [EAX],0xff00
006D11D2  C7 40 04 FF 00 00 00      MOV dword ptr [EAX + 0x4],0xff
006D11D9  89 5A 10                  MOV dword ptr [EDX + 0x10],EBX
LAB_006d11dc:
006D11DC  5F                        POP EDI
006D11DD  5E                        POP ESI
006D11DE  8B C2                     MOV EAX,EDX
006D11E0  5B                        POP EBX
006D11E1  5D                        POP EBP
006D11E2  C2 14 00                  RET 0x14
