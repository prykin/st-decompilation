FUN_0052a770:
0052A770  55                        PUSH EBP
0052A771  8B EC                     MOV EBP,ESP
0052A773  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052A776  33 C9                     XOR ECX,ECX
0052A778  B8 05 00 00 00            MOV EAX,0x5
0052A77D  66 8B 4A 14               MOV CX,word ptr [EDX + 0x14]
0052A781  83 E9 00                  SUB ECX,0x0
0052A784  74 0C                     JZ 0x0052a792
0052A786  83 E9 02                  SUB ECX,0x2
0052A789  75 0C                     JNZ 0x0052a797
0052A78B  B8 04 00 00 00            MOV EAX,0x4
0052A790  5D                        POP EBP
0052A791  C3                        RET
LAB_0052a792:
0052A792  B8 06 00 00 00            MOV EAX,0x6
LAB_0052a797:
0052A797  5D                        POP EBP
0052A798  C3                        RET
