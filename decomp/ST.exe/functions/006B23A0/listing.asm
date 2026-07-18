FUN_006b23a0:
006B23A0  55                        PUSH EBP
006B23A1  8B EC                     MOV EBP,ESP
006B23A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B23A6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B23A9  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006B23AF  73 29                     JNC 0x006b23da
006B23B1  8B 91 B0 01 00 00         MOV EDX,dword ptr [ECX + 0x1b0]
006B23B7  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006B23BA  8B 10                     MOV EDX,dword ptr [EAX]
006B23BC  81 E2 00 C0 00 00         AND EDX,0xc000
006B23C2  81 FA 00 C0 00 00         CMP EDX,0xc000
006B23C8  75 10                     JNZ 0x006b23da
006B23CA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B23CD  50                        PUSH EAX
006B23CE  51                        PUSH ECX
006B23CF  89 90 CC 00 00 00         MOV dword ptr [EAX + 0xcc],EDX
006B23D5  E8 06 00 00 00            CALL 0x006b23e0
LAB_006b23da:
006B23DA  5D                        POP EBP
006B23DB  C2 0C 00                  RET 0xc
