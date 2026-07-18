FUN_00757280:
00757280  55                        PUSH EBP
00757281  8B EC                     MOV EBP,ESP
00757283  56                        PUSH ESI
00757284  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00757287  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0075728A  85 C0                     TEST EAX,EAX
0075728C  75 0C                     JNZ 0x0075729a
0075728E  8B 06                     MOV EAX,dword ptr [ESI]
00757290  6A 1C                     PUSH 0x1c
00757292  6A 01                     PUSH 0x1
00757294  56                        PUSH ESI
00757295  FF 10                     CALL dword ptr [EAX]
00757297  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
LAB_0075729a:
0075729A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0075729D  C7 41 08 F0 72 75 00      MOV dword ptr [ECX + 0x8],0x7572f0
007572A4  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
007572A7  C7 42 0C 00 73 75 00      MOV dword ptr [EDX + 0xc],0x757300
007572AE  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
007572B1  C7 40 10 30 73 75 00      MOV dword ptr [EAX + 0x10],0x757330
007572B8  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
007572BB  C7 41 14 D0 7C 75 00      MOV dword ptr [ECX + 0x14],0x757cd0
007572C2  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
007572C5  C7 42 18 50 73 75 00      MOV dword ptr [EDX + 0x18],0x757350
007572CC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
007572CF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007572D2  C7 40 04 FF FF FF 7F      MOV dword ptr [EAX + 0x4],0x7fffffff
007572D9  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
007572DC  5E                        POP ESI
007572DD  89 11                     MOV dword ptr [ECX],EDX
007572DF  5D                        POP EBP
007572E0  C2 08 00                  RET 0x8
