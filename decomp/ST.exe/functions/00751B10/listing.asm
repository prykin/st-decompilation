FUN_00751b10:
00751B10  55                        PUSH EBP
00751B11  8B EC                     MOV EBP,ESP
00751B13  56                        PUSH ESI
00751B14  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00751B17  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00751B1A  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00751B1D  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
00751B20  85 C0                     TEST EAX,EAX
00751B22  74 0D                     JZ 0x00751b31
00751B24  3B D0                     CMP EDX,EAX
00751B26  72 09                     JC 0x00751b31
00751B28  8B 49 38                  MOV ECX,dword ptr [ECX + 0x38]
00751B2B  03 C8                     ADD ECX,EAX
00751B2D  3B D1                     CMP EDX,ECX
00751B2F  72 19                     JC 0x00751b4a
LAB_00751b31:
00751B31  8B 06                     MOV EAX,dword ptr [ESI]
00751B33  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00751B36  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
00751B39  85 C0                     TEST EAX,EAX
00751B3B  74 17                     JZ 0x00751b54
00751B3D  3B D0                     CMP EDX,EAX
00751B3F  72 13                     JC 0x00751b54
00751B41  8B 49 38                  MOV ECX,dword ptr [ECX + 0x38]
00751B44  03 C8                     ADD ECX,EAX
00751B46  3B D1                     CMP EDX,ECX
00751B48  73 0A                     JNC 0x00751b54
LAB_00751b4a:
00751B4A  B8 01 00 00 00            MOV EAX,0x1
00751B4F  5E                        POP ESI
00751B50  5D                        POP EBP
00751B51  C2 08 00                  RET 0x8
LAB_00751b54:
00751B54  33 C0                     XOR EAX,EAX
00751B56  5E                        POP ESI
00751B57  5D                        POP EBP
00751B58  C2 08 00                  RET 0x8
