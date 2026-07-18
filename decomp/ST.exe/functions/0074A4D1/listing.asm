FUN_0074a4d1:
0074A4D1  53                        PUSH EBX
0074A4D2  55                        PUSH EBP
0074A4D3  56                        PUSH ESI
0074A4D4  8B F1                     MOV ESI,ECX
0074A4D6  57                        PUSH EDI
0074A4D7  8B 06                     MOV EAX,dword ptr [ESI]
0074A4D9  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074A4DD  FF 90 98 00 00 00         CALL dword ptr [EAX + 0x98]
0074A4E3  8B C8                     MOV ECX,EAX
0074A4E5  85 C9                     TEST ECX,ECX
0074A4E7  7D 10                     JGE 0x0074a4f9
0074A4E9  2D 2B 02 04 80            SUB EAX,0x8004022b
0074A4EE  F7 D8                     NEG EAX
0074A4F0  1B C0                     SBB EAX,EAX
0074A4F2  23 C1                     AND EAX,ECX
0074A4F4  E9 D8 00 00 00            JMP 0x0074a5d1
LAB_0074a4f9:
0074A4F9  83 7E 14 01               CMP dword ptr [ESI + 0x14],0x1
0074A4FD  8B 1D 8C BB 85 00         MOV EBX,dword ptr [0x0085bb8c]
0074A503  8B 3D 90 BB 85 00         MOV EDI,dword ptr [0x0085bb90]
0074A509  75 55                     JNZ 0x0074a560
0074A50B  8B 06                     MOV EAX,dword ptr [ESI]
0074A50D  8B CE                     MOV ECX,ESI
0074A50F  FF 50 50                  CALL dword ptr [EAX + 0x50]
0074A512  8D 6E 7C                  LEA EBP,[ESI + 0x7c]
0074A515  C7 86 B4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb4],0x0
0074A51F  55                        PUSH EBP
0074A520  FF D3                     CALL EBX
0074A522  83 7E 14 00               CMP dword ptr [ESI + 0x14],0x0
0074A526  75 08                     JNZ 0x0074a530
0074A528  55                        PUSH EBP
0074A529  FF D7                     CALL EDI
0074A52B  E9 9F 00 00 00            JMP 0x0074a5cf
LAB_0074a530:
0074A530  8D AE 94 00 00 00         LEA EBP,[ESI + 0x94]
0074A536  C7 86 B4 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xb4],0x1
0074A540  55                        PUSH EBP
0074A541  FF D3                     CALL EBX
0074A543  8B 06                     MOV EAX,dword ptr [ESI]
0074A545  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074A549  8B CE                     MOV ECX,ESI
0074A54B  FF 50 34                  CALL dword ptr [EAX + 0x34]
0074A54E  55                        PUSH EBP
0074A54F  FF D7                     CALL EDI
0074A551  8D 46 7C                  LEA EAX,[ESI + 0x7c]
0074A554  50                        PUSH EAX
0074A555  FF D7                     CALL EDI
0074A557  FF 76 5C                  PUSH dword ptr [ESI + 0x5c]
0074A55A  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
LAB_0074a560:
0074A560  8B 06                     MOV EAX,dword ptr [ESI]
0074A562  8B CE                     MOV ECX,ESI
0074A564  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0074A567  85 C0                     TEST EAX,EAX
0074A569  7D 0C                     JGE 0x0074a577
0074A56B  C7 86 B4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb4],0x0
0074A575  EB 58                     JMP 0x0074a5cf
LAB_0074a577:
0074A577  8B 06                     MOV EAX,dword ptr [ESI]
0074A579  8B CE                     MOV ECX,ESI
0074A57B  FF 50 50                  CALL dword ptr [EAX + 0x50]
0074A57E  8D 6E 7C                  LEA EBP,[ESI + 0x7c]
0074A581  C7 86 B4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb4],0x0
0074A58B  55                        PUSH EBP
0074A58C  89 6C 24 18               MOV dword ptr [ESP + 0x18],EBP
0074A590  FF D3                     CALL EBX
0074A592  83 7E 14 00               CMP dword ptr [ESI + 0x14],0x0
0074A596  75 03                     JNZ 0x0074a59b
0074A598  55                        PUSH EBP
0074A599  EB 32                     JMP 0x0074a5cd
LAB_0074a59b:
0074A59B  8D AE 94 00 00 00         LEA EBP,[ESI + 0x94]
0074A5A1  55                        PUSH EBP
0074A5A2  FF D3                     CALL EBX
0074A5A4  8B 06                     MOV EAX,dword ptr [ESI]
0074A5A6  FF 76 6C                  PUSH dword ptr [ESI + 0x6c]
0074A5A9  8B CE                     MOV ECX,ESI
0074A5AB  FF 90 A8 00 00 00         CALL dword ptr [EAX + 0xa8]
0074A5B1  8B 06                     MOV EAX,dword ptr [ESI]
0074A5B3  8B CE                     MOV ECX,ESI
0074A5B5  FF 50 70                  CALL dword ptr [EAX + 0x70]
0074A5B8  8B 06                     MOV EAX,dword ptr [ESI]
0074A5BA  8B CE                     MOV ECX,ESI
0074A5BC  FF 50 60                  CALL dword ptr [EAX + 0x60]
0074A5BF  8B 06                     MOV EAX,dword ptr [ESI]
0074A5C1  8B CE                     MOV ECX,ESI
0074A5C3  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0074A5C6  55                        PUSH EBP
0074A5C7  FF D7                     CALL EDI
0074A5C9  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
LAB_0074a5cd:
0074A5CD  FF D7                     CALL EDI
LAB_0074a5cf:
0074A5CF  33 C0                     XOR EAX,EAX
LAB_0074a5d1:
0074A5D1  5F                        POP EDI
0074A5D2  5E                        POP ESI
0074A5D3  5D                        POP EBP
0074A5D4  5B                        POP EBX
0074A5D5  C2 04 00                  RET 0x4
