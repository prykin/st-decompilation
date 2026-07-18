FUN_0054b6d0:
0054B6D0  A1 88 16 80 00            MOV EAX,[0x00801688]
0054B6D5  85 C0                     TEST EAX,EAX
0054B6D7  74 15                     JZ 0x0054b6ee
0054B6D9  8B 80 94 00 00 00         MOV EAX,dword ptr [EAX + 0x94]
0054B6DF  8B 91 B6 04 00 00         MOV EDX,dword ptr [ECX + 0x4b6]
0054B6E5  2B C2                     SUB EAX,EDX
0054B6E7  40                        INC EAX
0054B6E8  89 81 BE 04 00 00         MOV dword ptr [ECX + 0x4be],EAX
LAB_0054b6ee:
0054B6EE  C3                        RET
