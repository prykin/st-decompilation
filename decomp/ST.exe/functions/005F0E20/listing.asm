FUN_005f0e20:
005F0E20  55                        PUSH EBP
005F0E21  8B EC                     MOV EBP,ESP
005F0E23  8B C1                     MOV EAX,ECX
005F0E25  56                        PUSH ESI
005F0E26  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F0E29  33 F6                     XOR ESI,ESI
005F0E2B  3B C8                     CMP ECX,EAX
005F0E2D  75 0A                     JNZ 0x005f0e39
005F0E2F  B8 04 00 00 00            MOV EAX,0x4
005F0E34  5E                        POP ESI
005F0E35  5D                        POP EBP
005F0E36  C2 10 00                  RET 0x10
LAB_005f0e39:
005F0E39  85 C9                     TEST ECX,ECX
005F0E3B  74 50                     JZ 0x005f0e8d
005F0E3D  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
005F0E40  33 C0                     XOR EAX,EAX
005F0E42  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F0E47  3B D0                     CMP EDX,EAX
005F0E49  75 42                     JNZ 0x005f0e8d
005F0E4B  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
005F0E4E  83 F8 14                  CMP EAX,0x14
005F0E51  75 16                     JNZ 0x005f0e69
005F0E53  8B 11                     MOV EDX,dword ptr [ECX]
005F0E55  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
005F0E5B  85 C0                     TEST EAX,EAX
005F0E5D  74 2E                     JZ 0x005f0e8d
005F0E5F  B8 03 00 00 00            MOV EAX,0x3
005F0E64  5E                        POP ESI
005F0E65  5D                        POP EBP
005F0E66  C2 10 00                  RET 0x10
LAB_005f0e69:
005F0E69  3D E8 03 00 00            CMP EAX,0x3e8
005F0E6E  74 07                     JZ 0x005f0e77
005F0E70  3D E9 03 00 00            CMP EAX,0x3e9
005F0E75  75 16                     JNZ 0x005f0e8d
LAB_005f0e77:
005F0E77  8B 01                     MOV EAX,dword ptr [ECX]
005F0E79  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
005F0E7F  85 C0                     TEST EAX,EAX
005F0E81  74 0A                     JZ 0x005f0e8d
005F0E83  B8 04 00 00 00            MOV EAX,0x4
005F0E88  5E                        POP ESI
005F0E89  5D                        POP EBP
005F0E8A  C2 10 00                  RET 0x10
LAB_005f0e8d:
005F0E8D  66 8B C6                  MOV AX,SI
005F0E90  5E                        POP ESI
005F0E91  5D                        POP EBP
005F0E92  C2 10 00                  RET 0x10
