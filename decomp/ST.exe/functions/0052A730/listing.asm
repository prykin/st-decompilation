FUN_0052a730:
0052A730  55                        PUSH EBP
0052A731  8B EC                     MOV EBP,ESP
0052A733  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052A736  33 C9                     XOR ECX,ECX
0052A738  B8 07 00 00 00            MOV EAX,0x7
0052A73D  66 8B 4A 14               MOV CX,word ptr [EDX + 0x14]
0052A741  83 E9 00                  SUB ECX,0x0
0052A744  74 0C                     JZ 0x0052a752
0052A746  83 E9 02                  SUB ECX,0x2
0052A749  75 0C                     JNZ 0x0052a757
0052A74B  B8 08 00 00 00            MOV EAX,0x8
0052A750  5D                        POP EBP
0052A751  C3                        RET
LAB_0052a752:
0052A752  B8 09 00 00 00            MOV EAX,0x9
LAB_0052a757:
0052A757  5D                        POP EBP
0052A758  C3                        RET
