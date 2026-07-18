FUN_007178c0:
007178C0  55                        PUSH EBP
007178C1  8B EC                     MOV EBP,ESP
007178C3  8B C1                     MOV EAX,ECX
007178C5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007178C8  3B 88 BA 04 00 00         CMP ECX,dword ptr [EAX + 0x4ba]
007178CE  75 31                     JNZ 0x00717901
007178D0  8B 90 B2 04 00 00         MOV EDX,dword ptr [EAX + 0x4b2]
007178D6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007178D9  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
007178DD  03 D1                     ADD EDX,ECX
007178DF  8B 88 6E 04 00 00         MOV ECX,dword ptr [EAX + 0x46e]
007178E5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
007178E8  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
007178EB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007178EE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007178F1  80 F2 07                  XOR DL,0x7
007178F4  0F AB 11                  BTS [ECX],EDX
007178F7  C7 80 6A 04 00 00 01 00 00 00  MOV dword ptr [EAX + 0x46a],0x1
LAB_00717901:
00717901  5D                        POP EBP
00717902  C2 0C 00                  RET 0xc
