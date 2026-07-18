FUN_0072b700:
0072B700  56                        PUSH ESI
0072B701  8B F1                     MOV ESI,ECX
0072B703  E8 A8 A8 FB FF            CALL 0x006e5fb0
0072B708  33 C0                     XOR EAX,EAX
0072B70A  C7 06 60 E3 79 00         MOV dword ptr [ESI],0x79e360
0072B710  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0072B713  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0072B716  89 86 E0 00 00 00         MOV dword ptr [ESI + 0xe0],EAX
0072B71C  89 86 28 01 00 00         MOV dword ptr [ESI + 0x128],EAX
0072B722  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
0072B725  89 46 5C                  MOV dword ptr [ESI + 0x5c],EAX
0072B728  89 46 70                  MOV dword ptr [ESI + 0x70],EAX
0072B72B  89 86 84 00 00 00         MOV dword ptr [ESI + 0x84],EAX
0072B731  89 86 80 00 00 00         MOV dword ptr [ESI + 0x80],EAX
0072B737  89 86 88 00 00 00         MOV dword ptr [ESI + 0x88],EAX
0072B73D  89 86 9C 00 00 00         MOV dword ptr [ESI + 0x9c],EAX
0072B743  89 86 AC 00 00 00         MOV dword ptr [ESI + 0xac],EAX
0072B749  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
0072B74F  89 86 D4 00 00 00         MOV dword ptr [ESI + 0xd4],EAX
0072B755  89 86 D0 00 00 00         MOV dword ptr [ESI + 0xd0],EAX
0072B75B  89 86 D8 00 00 00         MOV dword ptr [ESI + 0xd8],EAX
0072B761  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
0072B767  B8 01 00 00 00            MOV EAX,0x1
0072B76C  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0072B76F  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0072B772  8B C6                     MOV EAX,ESI
0072B774  5E                        POP ESI
0072B775  C3                        RET
