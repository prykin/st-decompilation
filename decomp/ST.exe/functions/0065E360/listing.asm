AiFltClassTy::sub_0065E360:
0065E360  55                        PUSH EBP
0065E361  8B EC                     MOV EBP,ESP
0065E363  8B C1                     MOV EAX,ECX
0065E365  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
0065E369  66 81 FA FE FF            CMP DX,0xfffe
0065E36E  74 27                     JZ 0x0065e397
0065E370  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E376  85 C9                     TEST ECX,ECX
0065E378  74 1D                     JZ 0x0065e397
0065E37A  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0065E37D  52                        PUSH EDX
0065E37E  50                        PUSH EAX
0065E37F  E8 75 79 DA FF            CALL 0x00405cf9
0065E384  85 C0                     TEST EAX,EAX
0065E386  74 0F                     JZ 0x0065e397
0065E388  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065E38B  51                        PUSH ECX
0065E38C  8B C8                     MOV ECX,EAX
0065E38E  E8 B3 59 DA FF            CALL 0x00403d46
0065E393  5D                        POP EBP
0065E394  C2 04 00                  RET 0x4
LAB_0065e397:
0065E397  33 C0                     XOR EAX,EAX
0065E399  5D                        POP EBP
0065E39A  C2 04 00                  RET 0x4
