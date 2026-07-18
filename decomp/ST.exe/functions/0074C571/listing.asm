FUN_0074c571:
0074C571  53                        PUSH EBX
0074C572  8B 5C 24 08               MOV EBX,dword ptr [ESP + 0x8]
0074C576  56                        PUSH ESI
0074C577  57                        PUSH EDI
0074C578  8B B3 CC 00 00 00         MOV ESI,dword ptr [EBX + 0xcc]
0074C57E  8D BB CC 00 00 00         LEA EDI,[EBX + 0xcc]
0074C584  83 C6 5C                  ADD ESI,0x5c
0074C587  56                        PUSH ESI
0074C588  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074C58E  83 7B 0C 00               CMP dword ptr [EBX + 0xc],0x0
0074C592  74 2C                     JZ 0x0074c5c0
0074C594  8B 0F                     MOV ECX,dword ptr [EDI]
0074C596  8B 81 90 00 00 00         MOV EAX,dword ptr [ECX + 0x90]
0074C59C  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074C5A0  74 1E                     JZ 0x0074c5c0
0074C5A2  8B 01                     MOV EAX,dword ptr [ECX]
0074C5A4  FF 50 60                  CALL dword ptr [EAX + 0x60]
0074C5A7  8B F8                     MOV EDI,EAX
0074C5A9  85 FF                     TEST EDI,EDI
0074C5AB  7C 08                     JL 0x0074c5b5
0074C5AD  53                        PUSH EBX
0074C5AE  E8 B8 C3 FF FF            CALL 0x0074896b
0074C5B3  8B F8                     MOV EDI,EAX
LAB_0074c5b5:
0074C5B5  56                        PUSH ESI
0074C5B6  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C5BC  8B C7                     MOV EAX,EDI
0074C5BE  EB 0C                     JMP 0x0074c5cc
LAB_0074c5c0:
0074C5C0  56                        PUSH ESI
0074C5C1  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C5C7  B8 09 02 04 80            MOV EAX,0x80040209
LAB_0074c5cc:
0074C5CC  5F                        POP EDI
0074C5CD  5E                        POP ESI
0074C5CE  5B                        POP EBX
0074C5CF  C2 04 00                  RET 0x4
