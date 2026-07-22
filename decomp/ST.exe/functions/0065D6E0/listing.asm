AiFltClassTy::sub_0065D6E0:
0065D6E0  8B C1                     MOV EAX,ECX
0065D6E2  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
0065D6E6  66 81 FA FE FF            CMP DX,0xfffe
0065D6EB  74 21                     JZ 0x0065d70e
0065D6ED  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065D6F3  85 C9                     TEST ECX,ECX
0065D6F5  74 17                     JZ 0x0065d70e
0065D6F7  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0065D6FA  52                        PUSH EDX
0065D6FB  50                        PUSH EAX
0065D6FC  E8 F8 85 DA FF            CALL 0x00405cf9
0065D701  85 C0                     TEST EAX,EAX
0065D703  74 09                     JZ 0x0065d70e
0065D705  6A 00                     PUSH 0x0
0065D707  8B C8                     MOV ECX,EAX
0065D709  E8 62 50 DA FF            CALL 0x00402770
LAB_0065d70e:
0065D70E  C3                        RET
