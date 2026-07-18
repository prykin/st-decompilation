FUN_0074c8a9:
0074C8A9  53                        PUSH EBX
0074C8AA  8B 5C 24 08               MOV EBX,dword ptr [ESP + 0x8]
0074C8AE  56                        PUSH ESI
0074C8AF  57                        PUSH EDI
0074C8B0  8B 83 90 00 00 00         MOV EAX,dword ptr [EBX + 0x90]
0074C8B6  83 EC 18                  SUB ESP,0x18
0074C8B9  8D 74 24 30               LEA ESI,[ESP + 0x30]
0074C8BD  8B 10                     MOV EDX,dword ptr [EAX]
0074C8BF  6A 06                     PUSH 0x6
0074C8C1  59                        POP ECX
0074C8C2  8B FC                     MOV EDI,ESP
0074C8C4  F3 A5                     MOVSD.REP ES:EDI,ESI
0074C8C6  8B C8                     MOV ECX,EAX
0074C8C8  FF 52 40                  CALL dword ptr [EDX + 0x40]
0074C8CB  83 F8 01                  CMP EAX,0x1
0074C8CE  75 16                     JNZ 0x0074c8e6
0074C8D0  8D 44 24 18               LEA EAX,[ESP + 0x18]
0074C8D4  50                        PUSH EAX
0074C8D5  8B 83 90 00 00 00         MOV EAX,dword ptr [EBX + 0x90]
0074C8DB  8B 88 8C 00 00 00         MOV ECX,dword ptr [EAX + 0x8c]
0074C8E1  E8 12 C1 FF FF            CALL 0x007489f8
LAB_0074c8e6:
0074C8E6  5F                        POP EDI
0074C8E7  5E                        POP ESI
0074C8E8  5B                        POP EBX
0074C8E9  C2 20 00                  RET 0x20
