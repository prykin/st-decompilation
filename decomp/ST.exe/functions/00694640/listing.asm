FUN_00694640:
00694640  55                        PUSH EBP
00694641  8B EC                     MOV EBP,ESP
00694643  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694646  53                        PUSH EBX
00694647  8B 19                     MOV EBX,dword ptr [ECX]
00694649  56                        PUSH ESI
0069464A  3B C3                     CMP EAX,EBX
0069464C  57                        PUSH EDI
0069464D  73 42                     JNC 0x00694691
0069464F  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00694652  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00694655  3B C2                     CMP EAX,EDX
00694657  73 38                     JNC 0x00694691
00694659  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069465C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069465F  3B F8                     CMP EDI,EAX
00694661  73 2E                     JNC 0x00694691
00694663  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00694666  85 F6                     TEST ESI,ESI
00694668  7C 27                     JL 0x00694691
0069466A  83 FE 02                  CMP ESI,0x2
0069466D  7D 22                     JGE 0x00694691
0069466F  0F AF C6                  IMUL EAX,ESI
00694672  03 C7                     ADD EAX,EDI
00694674  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00694677  0F AF C2                  IMUL EAX,EDX
0069467A  03 C6                     ADD EAX,ESI
0069467C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069467F  0F AF C3                  IMUL EAX,EBX
00694682  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
00694685  03 C2                     ADD EAX,EDX
00694687  5F                        POP EDI
00694688  5E                        POP ESI
00694689  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
0069468C  5B                        POP EBX
0069468D  5D                        POP EBP
0069468E  C2 10 00                  RET 0x10
LAB_00694691:
00694691  5F                        POP EDI
00694692  5E                        POP ESI
00694693  33 C0                     XOR EAX,EAX
00694695  5B                        POP EBX
00694696  5D                        POP EBP
00694697  C2 10 00                  RET 0x10
