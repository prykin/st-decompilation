FUN_00746e32:
00746E32  56                        PUSH ESI
00746E33  57                        PUSH EDI
00746E34  8B F9                     MOV EDI,ECX
00746E36  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00746E39  85 C0                     TEST EAX,EAX
00746E3B  75 07                     JNZ 0x00746e44
00746E3D  B8 13 02 04 80            MOV EAX,0x80040213
00746E42  EB 1C                     JMP 0x00746e60
LAB_00746e44:
00746E44  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00746E48  8B 08                     MOV ECX,dword ptr [EAX]
00746E4A  56                        PUSH ESI
00746E4B  50                        PUSH EAX
00746E4C  FF 51 0C                  CALL dword ptr [ECX + 0xc]
00746E4F  85 C0                     TEST EAX,EAX
00746E51  7C 0D                     JL 0x00746e60
00746E53  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00746E56  29 06                     SUB dword ptr [ESI],EAX
00746E58  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00746E5B  19 46 04                  SBB dword ptr [ESI + 0x4],EAX
00746E5E  33 C0                     XOR EAX,EAX
LAB_00746e60:
00746E60  5F                        POP EDI
00746E61  5E                        POP ESI
00746E62  C2 04 00                  RET 0x4
