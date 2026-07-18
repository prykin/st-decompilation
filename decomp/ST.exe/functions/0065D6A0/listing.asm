FUN_0065d6a0:
0065D6A0  56                        PUSH ESI
0065D6A1  8B F1                     MOV ESI,ECX
0065D6A3  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
0065D6A7  66 3D FE FF               CMP AX,0xfffe
0065D6AB  74 20                     JZ 0x0065d6cd
0065D6AD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065D6B3  85 C9                     TEST ECX,ECX
0065D6B5  74 16                     JZ 0x0065d6cd
0065D6B7  50                        PUSH EAX
0065D6B8  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0065D6BB  50                        PUSH EAX
0065D6BC  E8 38 86 DA FF            CALL 0x00405cf9
0065D6C1  85 C0                     TEST EAX,EAX
0065D6C3  74 08                     JZ 0x0065d6cd
0065D6C5  56                        PUSH ESI
0065D6C6  8B C8                     MOV ECX,EAX
0065D6C8  E8 A3 50 DA FF            CALL 0x00402770
LAB_0065d6cd:
0065D6CD  5E                        POP ESI
0065D6CE  C3                        RET
