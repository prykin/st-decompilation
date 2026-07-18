FUN_00627390:
00627390  8B 81 AE 02 00 00         MOV EAX,dword ptr [ECX + 0x2ae]
00627396  85 C0                     TEST EAX,EAX
00627398  74 05                     JZ 0x0062739f
0062739A  83 F8 01                  CMP EAX,0x1
0062739D  75 38                     JNZ 0x006273d7
LAB_0062739f:
0062739F  33 C0                     XOR EAX,EAX
006273A1  C7 81 AE 02 00 00 02 00 00 00  MOV dword ptr [ECX + 0x2ae],0x2
006273AB  8A 81 AD 02 00 00         MOV AL,byte ptr [ECX + 0x2ad]
006273B1  56                        PUSH ESI
006273B2  8B 04 85 A4 02 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d02a4]
006273B9  99                        CDQ
006273BA  83 E2 03                  AND EDX,0x3
006273BD  03 C2                     ADD EAX,EDX
006273BF  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006273C5  C1 F8 02                  SAR EAX,0x2
006273C8  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
006273CE  03 C6                     ADD EAX,ESI
006273D0  5E                        POP ESI
006273D1  89 81 0F 03 00 00         MOV dword ptr [ECX + 0x30f],EAX
LAB_006273d7:
006273D7  C3                        RET
