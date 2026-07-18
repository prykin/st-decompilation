FUN_0055beb0:
0055BEB0  55                        PUSH EBP
0055BEB1  8B EC                     MOV EBP,ESP
0055BEB3  56                        PUSH ESI
0055BEB4  8B F1                     MOV ESI,ECX
0055BEB6  FF 15 48 C0 85 00         CALL dword ptr [0x0085c048]
0055BEBC  85 C0                     TEST EAX,EAX
0055BEBE  74 2F                     JZ 0x0055beef
0055BEC0  8A 46 09                  MOV AL,byte ptr [ESI + 0x9]
0055BEC3  C6 46 08 00               MOV byte ptr [ESI + 0x8],0x0
0055BEC7  84 C0                     TEST AL,AL
0055BEC9  75 24                     JNZ 0x0055beef
0055BECB  A1 4C 17 81 00            MOV EAX,[0x0081174c]
0055BED0  85 C0                     TEST EAX,EAX
0055BED2  74 1B                     JZ 0x0055beef
0055BED4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055BED7  C7 46 1B 4F 61 00 00      MOV dword ptr [ESI + 0x1b],0x614f
0055BEDE  89 46 1F                  MOV dword ptr [ESI + 0x1f],EAX
0055BEE1  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055BEE7  83 C6 0B                  ADD ESI,0xb
0055BEEA  8B 11                     MOV EDX,dword ptr [ECX]
0055BEEC  56                        PUSH ESI
0055BEED  FF 12                     CALL dword ptr [EDX]
LAB_0055beef:
0055BEEF  5E                        POP ESI
0055BEF0  5D                        POP EBP
0055BEF1  C2 04 00                  RET 0x4
