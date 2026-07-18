FUN_0074f368:
0074F368  55                        PUSH EBP
0074F369  8B EC                     MOV EBP,ESP
0074F36B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074F36E  53                        PUSH EBX
0074F36F  56                        PUSH ESI
0074F370  57                        PUSH EDI
0074F371  85 D2                     TEST EDX,EDX
0074F373  75 07                     JNZ 0x0074f37c
0074F375  B8 03 40 00 80            MOV EAX,0x80004003
0074F37A  EB 3D                     JMP 0x0074f3b9
LAB_0074f37c:
0074F37C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0074F37F  B8 D8 1D 7A 00            MOV EAX,0x7a1dd8
0074F384  85 F6                     TEST ESI,ESI
0074F386  74 0B                     JZ 0x0074f393
0074F388  6A 10                     PUSH 0x10
0074F38A  8B F8                     MOV EDI,EAX
0074F38C  59                        POP ECX
0074F38D  33 DB                     XOR EBX,EBX
0074F38F  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F391  75 12                     JNZ 0x0074f3a5
LAB_0074f393:
0074F393  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0074F396  85 F6                     TEST ESI,ESI
0074F398  74 12                     JZ 0x0074f3ac
0074F39A  6A 10                     PUSH 0x10
0074F39C  8B F8                     MOV EDI,EAX
0074F39E  59                        POP ECX
0074F39F  33 C0                     XOR EAX,EAX
0074F3A1  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F3A3  74 07                     JZ 0x0074f3ac
LAB_0074f3a5:
0074F3A5  B8 57 00 07 80            MOV EAX,0x80070057
0074F3AA  EB 0D                     JMP 0x0074f3b9
LAB_0074f3ac:
0074F3AC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074F3AF  89 02                     MOV dword ptr [EDX],EAX
0074F3B1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0074F3B4  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0074F3B7  33 C0                     XOR EAX,EAX
LAB_0074f3b9:
0074F3B9  5F                        POP EDI
0074F3BA  5E                        POP ESI
0074F3BB  5B                        POP EBX
0074F3BC  5D                        POP EBP
0074F3BD  C2 18 00                  RET 0x18
