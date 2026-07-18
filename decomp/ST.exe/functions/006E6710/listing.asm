FUN_006e6710:
006E6710  55                        PUSH EBP
006E6711  8B EC                     MOV EBP,ESP
006E6713  53                        PUSH EBX
006E6714  56                        PUSH ESI
006E6715  8B B1 4E 04 00 00         MOV ESI,dword ptr [ECX + 0x44e]
006E671B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006E671E  57                        PUSH EDI
006E671F  8D B9 4E 04 00 00         LEA EDI,[ECX + 0x44e]
006E6725  85 F6                     TEST ESI,ESI
006E6727  74 11                     JZ 0x006e673a
LAB_006e6729:
006E6729  39 5E 04                  CMP dword ptr [ESI + 0x4],EBX
006E672C  74 08                     JZ 0x006e6736
006E672E  8B 36                     MOV ESI,dword ptr [ESI]
006E6730  85 F6                     TEST ESI,ESI
006E6732  75 F5                     JNZ 0x006e6729
006E6734  EB 04                     JMP 0x006e673a
LAB_006e6736:
006E6736  85 F6                     TEST ESI,ESI
006E6738  75 14                     JNZ 0x006e674e
LAB_006e673a:
006E673A  6A 18                     PUSH 0x18
006E673C  E8 CF 44 FC FF            CALL 0x006aac10
006E6741  8B F0                     MOV ESI,EAX
006E6743  85 F6                     TEST ESI,ESI
006E6745  74 27                     JZ 0x006e676e
006E6747  56                        PUSH ESI
006E6748  57                        PUSH EDI
006E6749  E8 C2 31 FD FF            CALL 0x006b9910
LAB_006e674e:
006E674E  D9 45 10                  FLD float ptr [EBP + 0x10]
006E6751  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
006E6754  E8 2F 7B 04 00            CALL 0x0072e288
006E6759  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E675C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E675F  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006E6762  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6765  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006E6768  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
006E676B  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
LAB_006e676e:
006E676E  5F                        POP EDI
006E676F  5E                        POP ESI
006E6770  5B                        POP EBX
006E6771  5D                        POP EBP
006E6772  C2 14 00                  RET 0x14
