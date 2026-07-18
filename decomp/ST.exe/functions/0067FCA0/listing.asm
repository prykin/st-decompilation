FUN_0067fca0:
0067FCA0  55                        PUSH EBP
0067FCA1  8B EC                     MOV EBP,ESP
0067FCA3  8B 0D 38 8A 84 00         MOV ECX,dword ptr [0x00848a38]
0067FCA9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067FCAC  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0067FCAF  73 13                     JNC 0x0067fcc4
0067FCB1  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067FCB4  0F AF C2                  IMUL EAX,EDX
0067FCB7  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0067FCBA  85 C0                     TEST EAX,EAX
0067FCBC  74 06                     JZ 0x0067fcc4
0067FCBE  8B 00                     MOV EAX,dword ptr [EAX]
0067FCC0  85 C0                     TEST EAX,EAX
0067FCC2  75 02                     JNZ 0x0067fcc6
LAB_0067fcc4:
0067FCC4  33 C0                     XOR EAX,EAX
LAB_0067fcc6:
0067FCC6  5D                        POP EBP
0067FCC7  C3                        RET
