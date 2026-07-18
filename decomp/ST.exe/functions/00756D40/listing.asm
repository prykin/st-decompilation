FUN_00756d40:
00756D40  55                        PUSH EBP
00756D41  8B EC                     MOV EBP,ESP
00756D43  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00756D46  57                        PUSH EDI
00756D47  8B 42 44                  MOV EAX,dword ptr [EDX + 0x44]
00756D4A  85 C0                     TEST EAX,EAX
00756D4C  75 73                     JNZ 0x00756dc1
00756D4E  8B 82 1E 01 00 00         MOV EAX,dword ptr [EDX + 0x11e]
00756D54  85 C0                     TEST EAX,EAX
00756D56  75 69                     JNZ 0x00756dc1
00756D58  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
00756D5B  B8 03 00 00 00            MOV EAX,0x3
00756D60  3B C8                     CMP ECX,EAX
00756D62  75 5D                     JNZ 0x00756dc1
00756D64  39 42 1C                  CMP dword ptr [EDX + 0x1c],EAX
00756D67  75 58                     JNZ 0x00756dc1
00756D69  83 7A 24 02               CMP dword ptr [EDX + 0x24],0x2
00756D6D  75 52                     JNZ 0x00756dc1
00756D6F  39 42 70                  CMP dword ptr [EDX + 0x70],EAX
00756D72  75 4D                     JNZ 0x00756dc1
00756D74  8B 8A D0 00 00 00         MOV ECX,dword ptr [EDX + 0xd0]
00756D7A  83 79 08 02               CMP dword ptr [ECX + 0x8],0x2
00756D7E  75 41                     JNZ 0x00756dc1
00756D80  8B 79 5C                  MOV EDI,dword ptr [ECX + 0x5c]
00756D83  B8 01 00 00 00            MOV EAX,0x1
00756D88  3B F8                     CMP EDI,EAX
00756D8A  75 35                     JNZ 0x00756dc1
00756D8C  39 81 B0 00 00 00         CMP dword ptr [ECX + 0xb0],EAX
00756D92  75 2D                     JNZ 0x00756dc1
00756D94  83 79 0C 02               CMP dword ptr [ECX + 0xc],0x2
00756D98  7F 27                     JG 0x00756dc1
00756D9A  39 41 60                  CMP dword ptr [ECX + 0x60],EAX
00756D9D  75 22                     JNZ 0x00756dc1
00756D9F  39 81 B4 00 00 00         CMP dword ptr [ECX + 0xb4],EAX
00756DA5  75 1A                     JNZ 0x00756dc1
00756DA7  8B 92 2A 01 00 00         MOV EDX,dword ptr [EDX + 0x12a]
00756DAD  8B 79 24                  MOV EDI,dword ptr [ECX + 0x24]
00756DB0  3B FA                     CMP EDI,EDX
00756DB2  75 0D                     JNZ 0x00756dc1
00756DB4  39 51 78                  CMP dword ptr [ECX + 0x78],EDX
00756DB7  75 08                     JNZ 0x00756dc1
00756DB9  39 91 CC 00 00 00         CMP dword ptr [ECX + 0xcc],EDX
00756DBF  74 02                     JZ 0x00756dc3
LAB_00756dc1:
00756DC1  33 C0                     XOR EAX,EAX
LAB_00756dc3:
00756DC3  5F                        POP EDI
00756DC4  5D                        POP EBP
00756DC5  C2 04 00                  RET 0x4
