FUN_0067bf30:
0067BF30  8B 81 A4 00 00 00         MOV EAX,dword ptr [ECX + 0xa4]
0067BF36  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0067BF3C  05 39 30 00 00            ADD EAX,0x3039
0067BF41  89 81 A4 00 00 00         MOV dword ptr [ECX + 0xa4],EAX
0067BF47  C1 E8 10                  SHR EAX,0x10
0067BF4A  83 E0 01                  AND EAX,0x1
0067BF4D  40                        INC EAX
0067BF4E  C3                        RET
