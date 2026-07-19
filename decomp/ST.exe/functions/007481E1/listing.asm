FUN_007481e1:
007481E1  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
007481E5  85 C0                     TEST EAX,EAX
007481E7  75 07                     JNZ 0x007481f0
007481E9  B8 03 40 00 80            MOV EAX,0x80004003
007481EE  EB 0B                     JMP 0x007481fb
LAB_007481f0:
007481F0  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
007481F4  8B 49 58                  MOV ECX,dword ptr [ECX + 0x58]
007481F7  89 08                     MOV dword ptr [EAX],ECX
007481F9  33 C0                     XOR EAX,EAX
LAB_007481fb:
007481FB  C2 08 00                  RET 0x8
