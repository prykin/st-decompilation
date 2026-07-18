FUN_006d02e0:
006D02E0  55                        PUSH EBP
006D02E1  8B EC                     MOV EBP,ESP
006D02E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D02E6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D02E9  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006D02EF  73 3A                     JNC 0x006d032b
006D02F1  8B 91 B0 01 00 00         MOV EDX,dword ptr [ECX + 0x1b0]
006D02F7  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006D02FA  8B 10                     MOV EDX,dword ptr [EAX]
006D02FC  81 E2 00 C0 00 00         AND EDX,0xc000
006D0302  81 FA 00 C0 00 00         CMP EDX,0xc000
006D0308  75 21                     JNZ 0x006d032b
006D030A  8B 80 C0 00 00 00         MOV EAX,dword ptr [EAX + 0xc0]
006D0310  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D0313  56                        PUSH ESI
006D0314  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D0317  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D031A  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
006D031D  8B 00                     MOV EAX,dword ptr [EAX]
006D031F  56                        PUSH ESI
006D0320  52                        PUSH EDX
006D0321  6A FF                     PUSH -0x1
006D0323  50                        PUSH EAX
006D0324  51                        PUSH ECX
006D0325  E8 16 33 FE FF            CALL 0x006b3640
006D032A  5E                        POP ESI
LAB_006d032b:
006D032B  5D                        POP EBP
006D032C  C2 10 00                  RET 0x10
