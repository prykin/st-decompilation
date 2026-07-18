FUN_006d5230:
006D5230  55                        PUSH EBP
006D5231  8B EC                     MOV EBP,ESP
006D5233  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5236  85 C0                     TEST EAX,EAX
006D5238  74 06                     JZ 0x006d5240
006D523A  33 C0                     XOR EAX,EAX
006D523C  5D                        POP EBP
006D523D  C2 04 00                  RET 0x4
LAB_006d5240:
006D5240  8B 41 78                  MOV EAX,dword ptr [ECX + 0x78]
006D5243  85 C0                     TEST EAX,EAX
006D5245  75 09                     JNZ 0x006d5250
006D5247  8D 81 50 01 00 00         LEA EAX,[ECX + 0x150]
006D524D  89 41 78                  MOV dword ptr [ECX + 0x78],EAX
LAB_006d5250:
006D5250  8B 41 78                  MOV EAX,dword ptr [ECX + 0x78]
006D5253  5D                        POP EBP
006D5254  C2 04 00                  RET 0x4
