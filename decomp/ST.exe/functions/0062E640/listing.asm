FUN_0062e640:
0062E640  55                        PUSH EBP
0062E641  8B EC                     MOV EBP,ESP
0062E643  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062E646  53                        PUSH EBX
0062E647  56                        PUSH ESI
0062E648  57                        PUSH EDI
0062E649  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062E64C  50                        PUSH EAX
0062E64D  8B F1                     MOV ESI,ECX
0062E64F  57                        PUSH EDI
0062E650  33 DB                     XOR EBX,EBX
0062E652  E8 57 62 DD FF            CALL 0x004048ae
0062E657  85 C0                     TEST EAX,EAX
0062E659  7C 2A                     JL 0x0062e685
0062E65B  8B 54 BE 50               MOV EDX,dword ptr [ESI + EDI*0x4 + 0x50]
0062E65F  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
0062E662  73 15                     JNC 0x0062e679
0062E664  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0062E667  5F                        POP EDI
0062E668  0F AF C8                  IMUL ECX,EAX
0062E66B  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0062E66E  5E                        POP ESI
0062E66F  03 C8                     ADD ECX,EAX
0062E671  5B                        POP EBX
0062E672  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0062E675  5D                        POP EBP
0062E676  C2 08 00                  RET 0x8
LAB_0062e679:
0062E679  33 C9                     XOR ECX,ECX
0062E67B  5F                        POP EDI
0062E67C  5E                        POP ESI
0062E67D  5B                        POP EBX
0062E67E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0062E681  5D                        POP EBP
0062E682  C2 08 00                  RET 0x8
LAB_0062e685:
0062E685  5F                        POP EDI
0062E686  8B C3                     MOV EAX,EBX
0062E688  5E                        POP ESI
0062E689  5B                        POP EBX
0062E68A  5D                        POP EBP
0062E68B  C2 08 00                  RET 0x8
