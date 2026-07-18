FUN_00493cd0:
00493CD0  F6 81 D1 01 00 00 04      TEST byte ptr [ECX + 0x1d1],0x4
00493CD7  75 20                     JNZ 0x00493cf9
00493CD9  8B 81 36 07 00 00         MOV EAX,dword ptr [ECX + 0x736]
00493CDF  85 C0                     TEST EAX,EAX
00493CE1  75 16                     JNZ 0x00493cf9
00493CE3  8B 81 3A 07 00 00         MOV EAX,dword ptr [ECX + 0x73a]
00493CE9  85 C0                     TEST EAX,EAX
00493CEB  75 0C                     JNZ 0x00493cf9
00493CED  83 B9 C0 05 00 00 03      CMP dword ptr [ECX + 0x5c0],0x3
00493CF4  74 03                     JZ 0x00493cf9
00493CF6  33 C0                     XOR EAX,EAX
00493CF8  C3                        RET
LAB_00493cf9:
00493CF9  B8 01 00 00 00            MOV EAX,0x1
00493CFE  C3                        RET
