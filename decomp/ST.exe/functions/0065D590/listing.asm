FUN_0065d590:
0065D590  8B 91 0B 02 00 00         MOV EDX,dword ptr [ECX + 0x20b]
0065D596  56                        PUSH ESI
0065D597  57                        PUSH EDI
0065D598  33 FF                     XOR EDI,EDI
0065D59A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0065D59D  33 F6                     XOR ESI,ESI
0065D59F  3B C7                     CMP EAX,EDI
0065D5A1  7E 2F                     JLE 0x0065d5d2
0065D5A3  53                        PUSH EBX
0065D5A4  3B F0                     CMP ESI,EAX
LAB_0065d5a6:
0065D5A6  73 0D                     JNC 0x0065d5b5
0065D5A8  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0065D5AB  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0065D5AE  0F AF C6                  IMUL EAX,ESI
0065D5B1  03 C3                     ADD EAX,EBX
0065D5B3  EB 02                     JMP 0x0065d5b7
LAB_0065d5b5:
0065D5B5  33 C0                     XOR EAX,EAX
LAB_0065d5b7:
0065D5B7  89 78 24                  MOV dword ptr [EAX + 0x24],EDI
0065D5BA  8B 91 0B 02 00 00         MOV EDX,dword ptr [ECX + 0x20b]
0065D5C0  46                        INC ESI
0065D5C1  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0065D5C4  3B F0                     CMP ESI,EAX
0065D5C6  7C DE                     JL 0x0065d5a6
0065D5C8  89 B9 84 02 00 00         MOV dword ptr [ECX + 0x284],EDI
0065D5CE  5B                        POP EBX
0065D5CF  5F                        POP EDI
0065D5D0  5E                        POP ESI
0065D5D1  C3                        RET
LAB_0065d5d2:
0065D5D2  89 B9 84 02 00 00         MOV dword ptr [ECX + 0x284],EDI
0065D5D8  5F                        POP EDI
0065D5D9  5E                        POP ESI
0065D5DA  C3                        RET
