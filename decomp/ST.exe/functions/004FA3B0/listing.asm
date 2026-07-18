FUN_004fa3b0:
004FA3B0  8A 81 63 0B 00 00         MOV AL,byte ptr [ECX + 0xb63]
004FA3B6  84 C0                     TEST AL,AL
004FA3B8  74 14                     JZ 0x004fa3ce
004FA3BA  8A 81 64 0B 00 00         MOV AL,byte ptr [ECX + 0xb64]
004FA3C0  84 C0                     TEST AL,AL
004FA3C2  74 0A                     JZ 0x004fa3ce
004FA3C4  6A 01                     PUSH 0x1
004FA3C6  6A 00                     PUSH 0x0
004FA3C8  E8 48 7A F0 FF            CALL 0x00401e15
004FA3CD  C3                        RET
LAB_004fa3ce:
004FA3CE  8A 81 51 0C 00 00         MOV AL,byte ptr [ECX + 0xc51]
004FA3D4  84 C0                     TEST AL,AL
004FA3D6  74 13                     JZ 0x004fa3eb
004FA3D8  8A 81 52 0C 00 00         MOV AL,byte ptr [ECX + 0xc52]
004FA3DE  84 C0                     TEST AL,AL
004FA3E0  74 09                     JZ 0x004fa3eb
004FA3E2  6A 01                     PUSH 0x1
004FA3E4  6A 01                     PUSH 0x1
004FA3E6  E8 2A 7A F0 FF            CALL 0x00401e15
LAB_004fa3eb:
004FA3EB  C3                        RET
