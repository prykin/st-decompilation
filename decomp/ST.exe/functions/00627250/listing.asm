FUN_00627250:
00627250  8B 81 AE 02 00 00         MOV EAX,dword ptr [ECX + 0x2ae]
00627256  85 C0                     TEST EAX,EAX
00627258  74 08                     JZ 0x00627262
0062725A  83 F8 01                  CMP EAX,0x1
0062725D  74 03                     JZ 0x00627262
0062725F  33 C0                     XOR EAX,EAX
00627261  C3                        RET
LAB_00627262:
00627262  B8 01 00 00 00            MOV EAX,0x1
00627267  C3                        RET
