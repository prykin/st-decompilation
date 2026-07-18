FUN_004dc720:
004DC720  55                        PUSH EBP
004DC721  8B EC                     MOV EBP,ESP
004DC723  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DC726  85 C0                     TEST EAX,EAX
004DC728  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004DC72E  7F 13                     JG 0x004dc743
004DC730  83 B9 D0 04 00 00 01      CMP dword ptr [ECX + 0x4d0],0x1
004DC737  75 0A                     JNZ 0x004dc743
004DC739  C7 81 D8 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4d8],0x0
LAB_004dc743:
004DC743  33 C0                     XOR EAX,EAX
004DC745  5D                        POP EBP
004DC746  C2 04 00                  RET 0x4
