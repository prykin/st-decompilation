FUN_006c7e30:
006C7E30  55                        PUSH EBP
006C7E31  8B EC                     MOV EBP,ESP
006C7E33  53                        PUSH EBX
006C7E34  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C7E37  56                        PUSH ESI
006C7E38  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C7E3B  8B 43 36                  MOV EAX,dword ptr [EBX + 0x36]
006C7E3E  56                        PUSH ESI
006C7E3F  50                        PUSH EAX
006C7E40  FF 15 60 BB 85 00         CALL dword ptr [0x0085bb60]
006C7E46  85 C0                     TEST EAX,EAX
006C7E48  74 0B                     JZ 0x006c7e55
006C7E4A  5E                        POP ESI
006C7E4B  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C7E50  5B                        POP EBX
006C7E51  5D                        POP EBP
006C7E52  C2 0C 00                  RET 0xc
LAB_006c7e55:
006C7E55  8B CE                     MOV ECX,ESI
006C7E57  8B 73 36                  MOV ESI,dword ptr [EBX + 0x36]
006C7E5A  8B D1                     MOV EDX,ECX
006C7E5C  57                        PUSH EDI
006C7E5D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006C7E60  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C7E63  C1 E9 02                  SHR ECX,0x2
006C7E66  F3 A5                     MOVSD.REP ES:EDI,ESI
006C7E68  8B CA                     MOV ECX,EDX
006C7E6A  83 E1 03                  AND ECX,0x3
006C7E6D  F3 A4                     MOVSB.REP ES:EDI,ESI
006C7E6F  8B 4B 36                  MOV ECX,dword ptr [EBX + 0x36]
006C7E72  5F                        POP EDI
006C7E73  03 C8                     ADD ECX,EAX
006C7E75  5E                        POP ESI
006C7E76  89 4B 36                  MOV dword ptr [EBX + 0x36],ECX
006C7E79  5B                        POP EBX
006C7E7A  5D                        POP EBP
006C7E7B  C2 0C 00                  RET 0xc
