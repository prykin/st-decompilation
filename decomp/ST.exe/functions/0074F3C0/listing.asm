FUN_0074f3c0:
0074F3C0  55                        PUSH EBP
0074F3C1  8B EC                     MOV EBP,ESP
0074F3C3  53                        PUSH EBX
0074F3C4  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0074F3C7  56                        PUSH ESI
0074F3C8  57                        PUSH EDI
0074F3C9  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0074F3CC  33 C0                     XOR EAX,EAX
0074F3CE  83 E7 03                  AND EDI,0x3
0074F3D1  83 E3 03                  AND EBX,0x3
0074F3D4  39 45 18                  CMP dword ptr [EBP + 0x18],EAX
0074F3D7  74 0A                     JZ 0x0074f3e3
0074F3D9  39 45 14                  CMP dword ptr [EBP + 0x14],EAX
0074F3DC  74 0F                     JZ 0x0074f3ed
0074F3DE  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
0074F3E1  75 1E                     JNZ 0x0074f401
LAB_0074f3e3:
0074F3E3  39 45 10                  CMP dword ptr [EBP + 0x10],EAX
0074F3E6  74 23                     JZ 0x0074f40b
0074F3E8  39 45 0C                  CMP dword ptr [EBP + 0xc],EAX
0074F3EB  75 0A                     JNZ 0x0074f3f7
LAB_0074f3ed:
0074F3ED  B8 03 40 00 80            MOV EAX,0x80004003
0074F3F2  E9 B3 00 00 00            JMP 0x0074f4aa
LAB_0074f3f7:
0074F3F7  83 FB 01                  CMP EBX,0x1
0074F3FA  74 0F                     JZ 0x0074f40b
0074F3FC  83 FB 02                  CMP EBX,0x2
0074F3FF  74 0A                     JZ 0x0074f40b
LAB_0074f401:
0074F401  B8 57 00 07 80            MOV EAX,0x80070057
0074F406  E9 9F 00 00 00            JMP 0x0074f4aa
LAB_0074f40b:
0074F40B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074F40E  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
0074F411  50                        PUSH EAX
0074F412  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0074F415  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F41B  83 FB 01                  CMP EBX,0x1
0074F41E  75 10                     JNZ 0x0074f430
0074F420  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074F423  8B 08                     MOV ECX,dword ptr [EAX]
0074F425  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
0074F428  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0074F42B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0074F42E  EB 13                     JMP 0x0074f443
LAB_0074f430:
0074F430  83 FB 02                  CMP EBX,0x2
0074F433  75 0E                     JNZ 0x0074f443
0074F435  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074F438  8B 08                     MOV ECX,dword ptr [EAX]
0074F43A  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0074F43D  01 4E 18                  ADD dword ptr [ESI + 0x18],ECX
0074F440  11 46 1C                  ADC dword ptr [ESI + 0x1c],EAX
LAB_0074f443:
0074F443  83 FF 01                  CMP EDI,0x1
0074F446  75 0D                     JNZ 0x0074f455
0074F448  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074F44B  8B 08                     MOV ECX,dword ptr [EAX]
0074F44D  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
0074F450  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0074F453  EB 31                     JMP 0x0074f486
LAB_0074f455:
0074F455  83 FF 03                  CMP EDI,0x3
0074F458  75 16                     JNZ 0x0074f470
0074F45A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074F45D  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0074F460  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0074F463  03 08                     ADD ECX,dword ptr [EAX]
0074F465  13 50 04                  ADC EDX,dword ptr [EAX + 0x4]
0074F468  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
0074F46B  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
0074F46E  EB 19                     JMP 0x0074f489
LAB_0074f470:
0074F470  83 FF 02                  CMP EDI,0x2
0074F473  75 14                     JNZ 0x0074f489
0074F475  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074F478  8B 08                     MOV ECX,dword ptr [EAX]
0074F47A  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0074F47D  03 4E 20                  ADD ECX,dword ptr [ESI + 0x20]
0074F480  13 46 24                  ADC EAX,dword ptr [ESI + 0x24]
0074F483  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
LAB_0074f486:
0074F486  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
FUN_0074f3c0::cf_common_exit_0074F489:
0074F489  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074F48C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F492  33 C0                     XOR EAX,EAX
0074F494  85 FF                     TEST EDI,EDI
0074F496  74 07                     JZ 0x0074f49f
0074F498  8B 06                     MOV EAX,dword ptr [ESI]
0074F49A  8B CE                     MOV ECX,ESI
0074F49C  FF 50 54                  CALL dword ptr [EAX + 0x54]
LAB_0074f49f:
0074F49F  85 DB                     TEST EBX,EBX
0074F4A1  74 07                     JZ 0x0074f4aa
0074F4A3  8B 06                     MOV EAX,dword ptr [ESI]
0074F4A5  8B CE                     MOV ECX,ESI
0074F4A7  FF 50 50                  CALL dword ptr [EAX + 0x50]
LAB_0074f4aa:
0074F4AA  5F                        POP EDI
0074F4AB  5E                        POP ESI
0074F4AC  5B                        POP EBX
0074F4AD  5D                        POP EBP
0074F4AE  C2 14 00                  RET 0x14
