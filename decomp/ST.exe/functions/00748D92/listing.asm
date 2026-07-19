FUN_00748d92:
00748D92  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00748D96  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00748D9A  3B 41 14                  CMP EAX,dword ptr [ECX + 0x14]
00748D9D  7E 07                     JLE 0x00748da6
00748D9F  B8 0D 02 04 80            MOV EAX,0x8004020d
00748DA4  EB 05                     JMP 0x00748dab
LAB_00748da6:
00748DA6  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
00748DA9  33 C0                     XOR EAX,EAX
LAB_00748dab:
00748DAB  C2 08 00                  RET 0x8
