FUN_005b6450:
005B6450  55                        PUSH EBP
005B6451  8B EC                     MOV EBP,ESP
005B6453  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B6456  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
005B6459  83 E8 02                  SUB EAX,0x2
005B645C  75 0C                     JNZ 0x005b646a
005B645E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B6464  89 91 5B 1A 00 00         MOV dword ptr [ECX + 0x1a5b],EDX
LAB_005b646a:
005B646A  5D                        POP EBP
005B646B  C2 04 00                  RET 0x4
