FUN_0041acf0:
0041ACF0  55                        PUSH EBP
0041ACF1  8B EC                     MOV EBP,ESP
0041ACF3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041ACF6  33 C0                     XOR EAX,EAX
0041ACF8  89 01                     MOV dword ptr [ECX],EAX
0041ACFA  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041ACFD  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0041AD00  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0041AD03  66 89 41 10               MOV word ptr [ECX + 0x10],AX
0041AD07  88 41 12                  MOV byte ptr [ECX + 0x12],AL
0041AD0A  5D                        POP EBP
0041AD0B  C2 04 00                  RET 0x4
