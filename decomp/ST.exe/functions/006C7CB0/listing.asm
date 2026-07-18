FUN_006c7cb0:
006C7CB0  55                        PUSH EBP
006C7CB1  8B EC                     MOV EBP,ESP
006C7CB3  53                        PUSH EBX
006C7CB4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C7CB7  56                        PUSH ESI
006C7CB8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C7CBB  8B 43 2A                  MOV EAX,dword ptr [EBX + 0x2a]
006C7CBE  56                        PUSH ESI
006C7CBF  50                        PUSH EAX
006C7CC0  FF 15 60 BB 85 00         CALL dword ptr [0x0085bb60]
006C7CC6  85 C0                     TEST EAX,EAX
006C7CC8  74 0B                     JZ 0x006c7cd5
006C7CCA  5E                        POP ESI
006C7CCB  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C7CD0  5B                        POP EBX
006C7CD1  5D                        POP EBP
006C7CD2  C2 0C 00                  RET 0xc
LAB_006c7cd5:
006C7CD5  8B CE                     MOV ECX,ESI
006C7CD7  8B 73 2A                  MOV ESI,dword ptr [EBX + 0x2a]
006C7CDA  8B D1                     MOV EDX,ECX
006C7CDC  57                        PUSH EDI
006C7CDD  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006C7CE0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C7CE3  C1 E9 02                  SHR ECX,0x2
006C7CE6  F3 A5                     MOVSD.REP ES:EDI,ESI
006C7CE8  8B CA                     MOV ECX,EDX
006C7CEA  83 E1 03                  AND ECX,0x3
006C7CED  F3 A4                     MOVSB.REP ES:EDI,ESI
006C7CEF  8B 4B 2A                  MOV ECX,dword ptr [EBX + 0x2a]
006C7CF2  5F                        POP EDI
006C7CF3  03 C8                     ADD ECX,EAX
006C7CF5  5E                        POP ESI
006C7CF6  89 4B 2A                  MOV dword ptr [EBX + 0x2a],ECX
006C7CF9  5B                        POP EBX
006C7CFA  5D                        POP EBP
006C7CFB  C2 0C 00                  RET 0xc
