FUN_0041d820:
0041D820  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0041D823  8A 91 8E 00 00 00         MOV DL,byte ptr [ECX + 0x8e]
0041D829  50                        PUSH EAX
0041D82A  66 8B 41 5F               MOV AX,word ptr [ECX + 0x5f]
0041D82E  51                        PUSH ECX
0041D82F  52                        PUSH EDX
0041D830  66 8B 51 5D               MOV DX,word ptr [ECX + 0x5d]
0041D834  50                        PUSH EAX
0041D835  66 8B 41 5B               MOV AX,word ptr [ECX + 0x5b]
0041D839  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0041D83F  52                        PUSH EDX
0041D840  50                        PUSH EAX
0041D841  E8 7B 76 FE FF            CALL 0x00404ec1
0041D846  C3                        RET
