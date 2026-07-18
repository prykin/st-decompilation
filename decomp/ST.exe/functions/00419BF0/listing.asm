FUN_00419bf0:
00419BF0  56                        PUSH ESI
00419BF1  8B F1                     MOV ESI,ECX
00419BF3  8B 06                     MOV EAX,dword ptr [ESI]
00419BF5  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
00419BF8  85 C0                     TEST EAX,EAX
00419BFA  75 1F                     JNZ 0x00419c1b
00419BFC  83 BE F4 00 00 00 01      CMP dword ptr [ESI + 0xf4],0x1
00419C03  75 16                     JNZ 0x00419c1b
00419C05  8B 16                     MOV EDX,dword ptr [ESI]
00419C07  8B CE                     MOV ECX,ESI
00419C09  FF 52 20                  CALL dword ptr [EDX + 0x20]
00419C0C  C7 86 F4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xf4],0x0
00419C16  B8 01 00 00 00            MOV EAX,0x1
LAB_00419c1b:
00419C1B  5E                        POP ESI
00419C1C  C3                        RET
