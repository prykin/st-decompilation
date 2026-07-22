AiFltClassTy::sub_0065D720:
0065D720  8B C1                     MOV EAX,ECX
0065D722  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
0065D726  66 81 FA FE FF            CMP DX,0xfffe
0065D72B  74 1F                     JZ 0x0065d74c
0065D72D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065D733  85 C9                     TEST ECX,ECX
0065D735  74 15                     JZ 0x0065d74c
0065D737  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0065D73A  52                        PUSH EDX
0065D73B  50                        PUSH EAX
0065D73C  E8 B8 85 DA FF            CALL 0x00405cf9
0065D741  85 C0                     TEST EAX,EAX
0065D743  74 07                     JZ 0x0065d74c
0065D745  8B C8                     MOV ECX,EAX
0065D747  E9 5B 82 DA FF            JMP 0x004059a7
LAB_0065d74c:
0065D74C  C3                        RET
