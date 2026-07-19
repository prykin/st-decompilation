FUN_0074853b:
0074853B  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0074853E  85 C0                     TEST EAX,EAX
00748540  75 06                     JNZ 0x00748548
00748542  B8 09 02 04 80            MOV EAX,0x80040209
00748547  C3                        RET
LAB_00748548:
00748548  8B 08                     MOV ECX,dword ptr [EAX]
0074854A  50                        PUSH EAX
0074854B  FF 51 40                  CALL dword ptr [ECX + 0x40]
0074854E  C3                        RET
