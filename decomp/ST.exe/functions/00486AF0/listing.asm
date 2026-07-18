FUN_00486af0:
00486AF0  55                        PUSH EBP
00486AF1  8B EC                     MOV EBP,ESP
00486AF3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00486AF6  85 D2                     TEST EDX,EDX
00486AF8  7D 0E                     JGE 0x00486b08
00486AFA  C7 81 16 07 00 00 01 00 00 00  MOV dword ptr [ECX + 0x716],0x1
00486B04  5D                        POP EBP
00486B05  C2 04 00                  RET 0x4
LAB_00486b08:
00486B08  8B 81 12 07 00 00         MOV EAX,dword ptr [ECX + 0x712]
00486B0E  3B D0                     CMP EDX,EAX
00486B10  7E 0A                     JLE 0x00486b1c
00486B12  89 81 16 07 00 00         MOV dword ptr [ECX + 0x716],EAX
00486B18  5D                        POP EBP
00486B19  C2 04 00                  RET 0x4
LAB_00486b1c:
00486B1C  89 91 16 07 00 00         MOV dword ptr [ECX + 0x716],EDX
00486B22  5D                        POP EBP
00486B23  C2 04 00                  RET 0x4
