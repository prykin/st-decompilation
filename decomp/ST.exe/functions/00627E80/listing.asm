FUN_00627e80:
00627E80  8B 81 AE 02 00 00         MOV EAX,dword ptr [ECX + 0x2ae]
00627E86  85 C0                     TEST EAX,EAX
00627E88  74 08                     JZ 0x00627e92
00627E8A  83 F8 01                  CMP EAX,0x1
00627E8D  74 03                     JZ 0x00627e92
00627E8F  33 C0                     XOR EAX,EAX
00627E91  C3                        RET
LAB_00627e92:
00627E92  B8 64 00 00 00            MOV EAX,0x64
00627E97  C3                        RET
