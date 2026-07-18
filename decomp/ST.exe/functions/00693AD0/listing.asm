FUN_00693ad0:
00693AD0  55                        PUSH EBP
00693AD1  8B EC                     MOV EBP,ESP
00693AD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00693AD6  66 8B 10                  MOV DX,word ptr [EAX]
00693AD9  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
00693ADD  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00693AE1  66 89 41 0E               MOV word ptr [ECX + 0xe],AX
00693AE5  B8 01 00 00 00            MOV EAX,0x1
00693AEA  C7 41 04 05 02 00 8F      MOV dword ptr [ECX + 0x4],0x8f000205
00693AF1  88 81 DF 02 00 00         MOV byte ptr [ECX + 0x2df],AL
00693AF7  88 81 DE 02 00 00         MOV byte ptr [ECX + 0x2de],AL
00693AFD  5D                        POP EBP
00693AFE  C2 04 00                  RET 0x4
