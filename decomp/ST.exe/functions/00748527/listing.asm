FUN_00748527:
00748527  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0074852A  85 C0                     TEST EAX,EAX
0074852C  75 06                     JNZ 0x00748534
0074852E  B8 09 02 04 80            MOV EAX,0x80040209
00748533  C3                        RET
LAB_00748534:
00748534  8B 08                     MOV ECX,dword ptr [EAX]
00748536  50                        PUSH EAX
00748537  FF 51 3C                  CALL dword ptr [ECX + 0x3c]
0074853A  C3                        RET
