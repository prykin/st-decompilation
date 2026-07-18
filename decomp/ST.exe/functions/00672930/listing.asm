FUN_00672930:
00672930  55                        PUSH EBP
00672931  8B EC                     MOV EBP,ESP
00672933  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00672936  A1 44 19 81 00            MOV EAX,[0x00811944]
0067293B  85 C9                     TEST ECX,ECX
0067293D  89 0D 44 19 81 00         MOV dword ptr [0x00811944],ECX
00672943  C7 05 1C 2D 7D 00 28 29 40 00  MOV dword ptr [0x007d2d1c],0x402928
0067294D  75 0A                     JNZ 0x00672959
0067294F  C7 05 1C 2D 7D 00 2C 2F 40 00  MOV dword ptr [0x007d2d1c],0x402f2c
LAB_00672959:
00672959  5D                        POP EBP
0067295A  C2 04 00                  RET 0x4
