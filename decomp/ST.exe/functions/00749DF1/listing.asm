FUN_00749df1:
00749DF1  56                        PUSH ESI
00749DF2  8B F1                     MOV ESI,ECX
00749DF4  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
00749DF7  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
00749DFB  74 1A                     JZ 0x00749e17
00749DFD  83 7E 70 01               CMP dword ptr [ESI + 0x70],0x1
00749E01  74 14                     JZ 0x00749e17
00749E03  8B 06                     MOV EAX,dword ptr [ESI]
00749E05  FF 90 A0 00 00 00         CALL dword ptr [EAX + 0xa0]
00749E0B  83 F8 01                  CMP EAX,0x1
00749E0E  75 14                     JNZ 0x00749e24
00749E10  83 7C 24 08 00            CMP dword ptr [ESP + 0x8],0x0
00749E15  74 0D                     JZ 0x00749e24
LAB_00749e17:
00749E17  FF 76 5C                  PUSH dword ptr [ESI + 0x5c]
00749E1A  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
00749E20  33 C0                     XOR EAX,EAX
00749E22  EB 0C                     JMP 0x00749e30
LAB_00749e24:
00749E24  FF 76 5C                  PUSH dword ptr [ESI + 0x5c]
00749E27  FF 15 98 BC 85 00         CALL dword ptr [0x0085bc98]
00749E2D  6A 01                     PUSH 0x1
00749E2F  58                        POP EAX
LAB_00749e30:
00749E30  5E                        POP ESI
00749E31  C2 04 00                  RET 0x4
