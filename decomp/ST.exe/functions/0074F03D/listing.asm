FUN_0074f03d:
0074F03D  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074F041  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0074F044  50                        PUSH EAX
0074F045  8B 08                     MOV ECX,dword ptr [EAX]
0074F047  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074F04A  C2 04 00                  RET 0x4
