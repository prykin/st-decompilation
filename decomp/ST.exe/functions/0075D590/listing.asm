FUN_0075d590:
0075D590  55                        PUSH EBP
0075D591  8B EC                     MOV EBP,ESP
0075D593  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D596  53                        PUSH EBX
0075D597  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075D59A  57                        PUSH EDI
0075D59B  8B 38                     MOV EDI,dword ptr [EAX]
0075D59D  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
0075D5A4  8B 83 26 01 00 00         MOV EAX,dword ptr [EBX + 0x126]
0075D5AA  85 C0                     TEST EAX,EAX
0075D5AC  7E 3C                     JLE 0x0075d5ea
0075D5AE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075D5B1  56                        PUSH ESI
0075D5B2  2B D7                     SUB EDX,EDI
0075D5B4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0075d5b7:
0075D5B7  8B 07                     MOV EAX,dword ptr [EDI]
0075D5B9  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0075D5BC  8B 34 3A                  MOV ESI,dword ptr [EDX + EDI*0x1]
0075D5BF  03 C8                     ADD ECX,EAX
0075D5C1  3B C1                     CMP EAX,ECX
0075D5C3  73 10                     JNC 0x0075d5d5
LAB_0075d5c5:
0075D5C5  8A 16                     MOV DL,byte ptr [ESI]
0075D5C7  46                        INC ESI
0075D5C8  88 10                     MOV byte ptr [EAX],DL
0075D5CA  40                        INC EAX
0075D5CB  88 10                     MOV byte ptr [EAX],DL
0075D5CD  40                        INC EAX
0075D5CE  3B C1                     CMP EAX,ECX
0075D5D0  72 F3                     JC 0x0075d5c5
0075D5D2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_0075d5d5:
0075D5D5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D5D8  8B 8B 26 01 00 00         MOV ECX,dword ptr [EBX + 0x126]
0075D5DE  40                        INC EAX
0075D5DF  83 C7 04                  ADD EDI,0x4
0075D5E2  3B C1                     CMP EAX,ECX
0075D5E4  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075D5E7  7C CE                     JL 0x0075d5b7
0075D5E9  5E                        POP ESI
LAB_0075d5ea:
0075D5EA  5F                        POP EDI
0075D5EB  5B                        POP EBX
0075D5EC  5D                        POP EBP
0075D5ED  C2 10 00                  RET 0x10
