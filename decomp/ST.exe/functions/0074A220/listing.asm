FUN_0074a220:
0074A220  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074A224  53                        PUSH EBX
0074A225  8B 5C 24 0C               MOV EBX,dword ptr [ESP + 0xc]
0074A229  56                        PUSH ESI
0074A22A  57                        PUSH EDI
0074A22B  8B 7C 24 18               MOV EDI,dword ptr [ESP + 0x18]
0074A22F  8B F1                     MOV ESI,ECX
0074A231  57                        PUSH EDI
0074A232  8B 08                     MOV ECX,dword ptr [EAX]
0074A234  53                        PUSH EBX
0074A235  50                        PUSH EAX
0074A236  FF 51 14                  CALL dword ptr [ECX + 0x14]
0074A239  85 C0                     TEST EAX,EAX
0074A23B  7C 2C                     JL 0x0074a269
0074A23D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0074A240  3B 43 04                  CMP EAX,dword ptr [EBX + 0x4]
0074A243  7F 0F                     JG 0x0074a254
0074A245  7C 06                     JL 0x0074a24d
0074A247  8B 07                     MOV EAX,dword ptr [EDI]
0074A249  3B 03                     CMP EAX,dword ptr [EBX]
0074A24B  73 07                     JNC 0x0074a254
LAB_0074a24d:
0074A24D  B8 28 02 04 80            MOV EAX,0x80040228
0074A252  EB 17                     JMP 0x0074a26b
LAB_0074a254:
0074A254  83 7E 18 00               CMP dword ptr [ESI + 0x18],0x0
0074A258  74 0F                     JZ 0x0074a269
0074A25A  8B 06                     MOV EAX,dword ptr [ESI]
0074A25C  57                        PUSH EDI
0074A25D  53                        PUSH EBX
0074A25E  8B CE                     MOV ECX,ESI
0074A260  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074A264  FF 50 5C                  CALL dword ptr [EAX + 0x5c]
0074A267  EB 02                     JMP 0x0074a26b
LAB_0074a269:
0074A269  33 C0                     XOR EAX,EAX
LAB_0074a26b:
0074A26B  5F                        POP EDI
0074A26C  5E                        POP ESI
0074A26D  5B                        POP EBX
0074A26E  C2 0C 00                  RET 0xc
