TLOBaseTy::sub_00417D30:
00417D30  56                        PUSH ESI
00417D31  8B F1                     MOV ESI,ECX
00417D33  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00417D36  85 C0                     TEST EAX,EAX
00417D38  75 2A                     JNZ 0x00417d64
00417D3A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00417D3D  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00417D43  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
00417D47  50                        PUSH EAX
00417D48  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00417D4C  56                        PUSH ESI
00417D4D  51                        PUSH ECX
00417D4E  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00417D52  52                        PUSH EDX
00417D53  50                        PUSH EAX
00417D54  51                        PUSH ECX
00417D55  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417D5B  E8 61 D1 FE FF            CALL 0x00404ec1
00417D60  5E                        POP ESI
00417D61  C2 0C 00                  RET 0xc
LAB_00417d64:
00417D64  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00417D67  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00417D6D  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00417D71  52                        PUSH EDX
00417D72  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00417D76  56                        PUSH ESI
00417D77  50                        PUSH EAX
00417D78  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00417D7C  51                        PUSH ECX
00417D7D  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417D83  52                        PUSH EDX
00417D84  50                        PUSH EAX
00417D85  E8 37 D1 FE FF            CALL 0x00404ec1
00417D8A  85 C0                     TEST EAX,EAX
00417D8C  74 07                     JZ 0x00417d95
00417D8E  83 C8 FF                  OR EAX,0xffffffff
00417D91  5E                        POP ESI
00417D92  C2 0C 00                  RET 0xc
LAB_00417d95:
00417D95  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00417D98  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00417D9E  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00417DA2  51                        PUSH ECX
00417DA3  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00417DA7  56                        PUSH ESI
00417DA8  52                        PUSH EDX
00417DA9  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00417DAD  50                        PUSH EAX
00417DAE  66 42                     INC DX
00417DB0  51                        PUSH ECX
00417DB1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417DB7  52                        PUSH EDX
00417DB8  E8 04 D1 FE FF            CALL 0x00404ec1
00417DBD  85 C0                     TEST EAX,EAX
00417DBF  74 07                     JZ 0x00417dc8
00417DC1  83 C8 FF                  OR EAX,0xffffffff
00417DC4  5E                        POP ESI
00417DC5  C2 0C 00                  RET 0xc
LAB_00417dc8:
00417DC8  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00417DCB  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00417DD1  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
00417DD5  50                        PUSH EAX
00417DD6  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00417DDA  56                        PUSH ESI
00417DDB  51                        PUSH ECX
00417DDC  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00417DE0  66 40                     INC AX
00417DE2  52                        PUSH EDX
00417DE3  50                        PUSH EAX
00417DE4  51                        PUSH ECX
00417DE5  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417DEB  E8 D1 D0 FE FF            CALL 0x00404ec1
00417DF0  85 C0                     TEST EAX,EAX
00417DF2  74 07                     JZ 0x00417dfb
00417DF4  83 C8 FF                  OR EAX,0xffffffff
00417DF7  5E                        POP ESI
00417DF8  C2 0C 00                  RET 0xc
LAB_00417dfb:
00417DFB  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00417DFE  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00417E04  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00417E08  52                        PUSH EDX
00417E09  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00417E0D  56                        PUSH ESI
00417E0E  50                        PUSH EAX
00417E0F  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00417E13  66 42                     INC DX
00417E15  51                        PUSH ECX
00417E16  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417E1C  66 40                     INC AX
00417E1E  52                        PUSH EDX
00417E1F  50                        PUSH EAX
00417E20  E8 9C D0 FE FF            CALL 0x00404ec1
00417E25  5E                        POP ESI
00417E26  C2 0C 00                  RET 0xc
