FUN_0065fd00:
0065FD00  8B C1                     MOV EAX,ECX
0065FD02  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
0065FD06  66 81 FA FE FF            CMP DX,0xfffe
0065FD0B  74 26                     JZ 0x0065fd33
0065FD0D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065FD13  85 C9                     TEST ECX,ECX
0065FD15  74 1C                     JZ 0x0065fd33
0065FD17  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0065FD1A  52                        PUSH EDX
0065FD1B  50                        PUSH EAX
0065FD1C  E8 D8 5F DA FF            CALL 0x00405cf9
0065FD21  85 C0                     TEST EAX,EAX
0065FD23  74 0E                     JZ 0x0065fd33
0065FD25  8B 10                     MOV EDX,dword ptr [EAX]
0065FD27  6A 00                     PUSH 0x0
0065FD29  6A 03                     PUSH 0x3
0065FD2B  8B C8                     MOV ECX,EAX
0065FD2D  FF 52 08                  CALL dword ptr [EDX + 0x8]
0065FD30  33 C0                     XOR EAX,EAX
0065FD32  C3                        RET
LAB_0065fd33:
0065FD33  83 C8 FF                  OR EAX,0xffffffff
0065FD36  C3                        RET
