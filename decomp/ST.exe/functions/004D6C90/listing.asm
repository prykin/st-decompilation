FUN_004d6c90:
004D6C90  55                        PUSH EBP
004D6C91  8B EC                     MOV EBP,ESP
004D6C93  8B C1                     MOV EAX,ECX
004D6C95  56                        PUSH ESI
004D6C96  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004D6C99  33 F6                     XOR ESI,ESI
004D6C9B  3B C8                     CMP ECX,EAX
004D6C9D  75 0A                     JNZ 0x004d6ca9
004D6C9F  B8 04 00 00 00            MOV EAX,0x4
004D6CA4  5E                        POP ESI
004D6CA5  5D                        POP EBP
004D6CA6  C2 10 00                  RET 0x10
LAB_004d6ca9:
004D6CA9  85 C9                     TEST ECX,ECX
004D6CAB  74 4E                     JZ 0x004d6cfb
004D6CAD  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
004D6CB0  57                        PUSH EDI
004D6CB1  8B 78 24                  MOV EDI,dword ptr [EAX + 0x24]
004D6CB4  3B D7                     CMP EDX,EDI
004D6CB6  5F                        POP EDI
004D6CB7  75 42                     JNZ 0x004d6cfb
004D6CB9  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004D6CBC  83 F8 14                  CMP EAX,0x14
004D6CBF  75 16                     JNZ 0x004d6cd7
004D6CC1  8B 01                     MOV EAX,dword ptr [ECX]
004D6CC3  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
004D6CC9  85 C0                     TEST EAX,EAX
004D6CCB  74 2E                     JZ 0x004d6cfb
004D6CCD  B8 03 00 00 00            MOV EAX,0x3
004D6CD2  5E                        POP ESI
004D6CD3  5D                        POP EBP
004D6CD4  C2 10 00                  RET 0x10
LAB_004d6cd7:
004D6CD7  3D E8 03 00 00            CMP EAX,0x3e8
004D6CDC  74 07                     JZ 0x004d6ce5
004D6CDE  3D E9 03 00 00            CMP EAX,0x3e9
004D6CE3  75 16                     JNZ 0x004d6cfb
LAB_004d6ce5:
004D6CE5  8B 11                     MOV EDX,dword ptr [ECX]
004D6CE7  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
004D6CED  85 C0                     TEST EAX,EAX
004D6CEF  74 0A                     JZ 0x004d6cfb
004D6CF1  B8 04 00 00 00            MOV EAX,0x4
004D6CF6  5E                        POP ESI
004D6CF7  5D                        POP EBP
004D6CF8  C2 10 00                  RET 0x10
LAB_004d6cfb:
004D6CFB  66 8B C6                  MOV AX,SI
004D6CFE  5E                        POP ESI
004D6CFF  5D                        POP EBP
004D6D00  C2 10 00                  RET 0x10
