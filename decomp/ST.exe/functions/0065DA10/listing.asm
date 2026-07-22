AiFltClassTy::sub_0065DA10:
0065DA10  8B C1                     MOV EAX,ECX
0065DA12  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
0065DA16  66 81 FA FE FF            CMP DX,0xfffe
0065DA1B  74 1F                     JZ 0x0065da3c
0065DA1D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065DA23  85 C9                     TEST ECX,ECX
0065DA25  74 15                     JZ 0x0065da3c
0065DA27  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0065DA2A  52                        PUSH EDX
0065DA2B  50                        PUSH EAX
0065DA2C  E8 C8 82 DA FF            CALL 0x00405cf9
0065DA31  85 C0                     TEST EAX,EAX
0065DA33  74 07                     JZ 0x0065da3c
0065DA35  8B C8                     MOV ECX,EAX
0065DA37  E9 79 53 DA FF            JMP 0x00402db5
LAB_0065da3c:
0065DA3C  33 C0                     XOR EAX,EAX
0065DA3E  C3                        RET
