FUN_0041d860:
0041D860  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0041D863  8A 91 8E 00 00 00         MOV DL,byte ptr [ECX + 0x8e]
0041D869  50                        PUSH EAX
0041D86A  66 8B 41 5F               MOV AX,word ptr [ECX + 0x5f]
0041D86E  51                        PUSH ECX
0041D86F  52                        PUSH EDX
0041D870  66 8B 51 5D               MOV DX,word ptr [ECX + 0x5d]
0041D874  50                        PUSH EAX
0041D875  66 8B 41 5B               MOV AX,word ptr [ECX + 0x5b]
0041D879  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0041D87F  52                        PUSH EDX
0041D880  50                        PUSH EAX
0041D881  E8 9F 3A FE FF            CALL 0x00401325
0041D886  C3                        RET
