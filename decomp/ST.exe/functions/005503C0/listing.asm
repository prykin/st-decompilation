FUN_005503c0:
005503C0  55                        PUSH EBP
005503C1  8B EC                     MOV EBP,ESP
005503C3  A1 88 87 80 00            MOV EAX,[0x00808788]
005503C8  85 C0                     TEST EAX,EAX
005503CA  75 3F                     JNZ 0x0055040b
005503CC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005503CF  89 81 F4 00 00 00         MOV dword ptr [ECX + 0xf4],EAX
005503D5  A1 DC 16 80 00            MOV EAX,[0x008016dc]
005503DA  85 C0                     TEST EAX,EAX
005503DC  C7 05 88 87 80 00 01 00 00 00  MOV dword ptr [0x00808788],0x1
005503E6  74 0D                     JZ 0x005503f5
005503E8  6A 07                     PUSH 0x7
005503EA  8B C8                     MOV ECX,EAX
005503EC  E8 25 4B EB FF            CALL 0x00404f16
005503F1  5D                        POP EBP
005503F2  C2 04 00                  RET 0x4
LAB_005503f5:
005503F5  8B 11                     MOV EDX,dword ptr [ECX]
005503F7  8D 81 C0 00 00 00         LEA EAX,[ECX + 0xc0]
005503FD  50                        PUSH EAX
005503FE  C7 81 D0 00 00 00 FF 44 00 00  MOV dword ptr [ECX + 0xd0],0x44ff
00550408  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0055040b:
0055040B  5D                        POP EBP
0055040C  C2 04 00                  RET 0x4
