FUN_007184b0:
007184B0  55                        PUSH EBP
007184B1  8B EC                     MOV EBP,ESP
007184B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007184B6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007184B9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
007184BC  89 11                     MOV dword ptr [ECX],EDX
007184BE  8B 10                     MOV EDX,dword ptr [EAX]
007184C0  81 FA 00 C0 79 44         CMP EDX,0x4479c000
007184C6  75 0A                     JNZ 0x007184d2
007184C8  33 C0                     XOR EAX,EAX
007184CA  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
007184CD  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
007184D0  5D                        POP EBP
007184D1  C3                        RET
LAB_007184d2:
007184D2  D9 00                     FLD float ptr [EAX]
007184D4  DC 0D 78 E2 79 00         FMUL double ptr [0x0079e278]
007184DA  D9 FF                     FCOS
007184DC  D8 48 08                  FMUL float ptr [EAX + 0x8]
007184DF  D9 59 04                  FSTP float ptr [ECX + 0x4]
007184E2  D9 00                     FLD float ptr [EAX]
007184E4  DC 0D 78 E2 79 00         FMUL double ptr [0x0079e278]
007184EA  D9 FE                     FSIN
007184EC  D8 48 08                  FMUL float ptr [EAX + 0x8]
007184EF  D9 59 08                  FSTP float ptr [ECX + 0x8]
007184F2  5D                        POP EBP
007184F3  C3                        RET
