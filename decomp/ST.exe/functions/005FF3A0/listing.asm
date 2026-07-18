FUN_005ff3a0:
005FF3A0  55                        PUSH EBP
005FF3A1  8B EC                     MOV EBP,ESP
005FF3A3  66 8B 81 24 02 00 00      MOV AX,word ptr [ECX + 0x224]
005FF3AA  8A 89 0A 02 00 00         MOV CL,byte ptr [ECX + 0x20a]
005FF3B0  56                        PUSH ESI
005FF3B1  57                        PUSH EDI
005FF3B2  6A 01                     PUSH 0x1
005FF3B4  50                        PUSH EAX
005FF3B5  51                        PUSH ECX
005FF3B6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FF3BC  33 FF                     XOR EDI,EDI
005FF3BE  E8 F7 34 E0 FF            CALL 0x004028ba
005FF3C3  8B F0                     MOV ESI,EAX
005FF3C5  85 F6                     TEST ESI,ESI
005FF3C7  74 34                     JZ 0x005ff3fd
005FF3C9  8B 16                     MOV EDX,dword ptr [ESI]
005FF3CB  8B CE                     MOV ECX,ESI
005FF3CD  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
005FF3D3  85 C0                     TEST EAX,EAX
005FF3D5  74 26                     JZ 0x005ff3fd
005FF3D7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FF3DA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FF3DD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005FF3E0  53                        PUSH EBX
005FF3E1  57                        PUSH EDI
005FF3E2  50                        PUSH EAX
005FF3E3  51                        PUSH ECX
005FF3E4  8B CE                     MOV ECX,ESI
005FF3E6  BB 01 00 00 00            MOV EBX,0x1
005FF3EB  E8 F3 3D E0 FF            CALL 0x004031e3
005FF3F0  66 83 07 E2               ADD word ptr [EDI],-0x1e
005FF3F4  8B C3                     MOV EAX,EBX
005FF3F6  5B                        POP EBX
005FF3F7  5F                        POP EDI
005FF3F8  5E                        POP ESI
005FF3F9  5D                        POP EBP
005FF3FA  C2 0C 00                  RET 0xc
LAB_005ff3fd:
005FF3FD  8B C7                     MOV EAX,EDI
005FF3FF  5F                        POP EDI
005FF400  5E                        POP ESI
005FF401  5D                        POP EBP
005FF402  C2 0C 00                  RET 0xc
