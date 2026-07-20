AiFltClassTy::sub_0065D9C0:
0065D9C0  8B C1                     MOV EAX,ECX
0065D9C2  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
0065D9C6  66 81 FA FE FF            CMP DX,0xfffe
0065D9CB  74 25                     JZ 0x0065d9f2
0065D9CD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065D9D3  85 C9                     TEST ECX,ECX
0065D9D5  74 1B                     JZ 0x0065d9f2
0065D9D7  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0065D9DA  52                        PUSH EDX
0065D9DB  50                        PUSH EAX
0065D9DC  E8 18 83 DA FF            CALL 0x00405cf9
0065D9E1  85 C0                     TEST EAX,EAX
0065D9E3  74 0D                     JZ 0x0065d9f2
0065D9E5  8B C8                     MOV ECX,EAX
0065D9E7  E8 49 3D DA FF            CALL 0x00401735
0065D9EC  25 FF FF 00 00            AND EAX,0xffff
0065D9F1  C3                        RET
LAB_0065d9f2:
0065D9F2  33 C0                     XOR EAX,EAX
0065D9F4  C3                        RET
