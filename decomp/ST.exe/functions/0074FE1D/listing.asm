FUN_0074fe1d:
0074FE1D  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0074FE21  85 C9                     TEST ECX,ECX
0074FE23  75 07                     JNZ 0x0074fe2c
0074FE25  B8 03 40 00 80            MOV EAX,0x80004003
0074FE2A  EB 18                     JMP 0x0074fe44
LAB_0074fe2c:
0074FE2C  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074FE30  83 78 04 00               CMP dword ptr [EAX + 0x4],0x0
0074FE34  74 07                     JZ 0x0074fe3d
0074FE36  B8 04 40 00 80            MOV EAX,0x80004004
0074FE3B  EB 07                     JMP 0x0074fe44
LAB_0074fe3d:
0074FE3D  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
0074FE40  89 01                     MOV dword ptr [ECX],EAX
0074FE42  33 C0                     XOR EAX,EAX
LAB_0074fe44:
0074FE44  C2 08 00                  RET 0x8
