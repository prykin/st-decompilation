FUN_0065fa10:
0065FA10  55                        PUSH EBP
0065FA11  8B EC                     MOV EBP,ESP
0065FA13  8B C1                     MOV EAX,ECX
0065FA15  66 8B 50 7D               MOV DX,word ptr [EAX + 0x7d]
0065FA19  66 81 FA FE FF            CMP DX,0xfffe
0065FA1E  74 2A                     JZ 0x0065fa4a
0065FA20  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065FA26  85 C9                     TEST ECX,ECX
0065FA28  74 20                     JZ 0x0065fa4a
0065FA2A  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0065FA2D  52                        PUSH EDX
0065FA2E  50                        PUSH EAX
0065FA2F  E8 C5 62 DA FF            CALL 0x00405cf9
0065FA34  85 C0                     TEST EAX,EAX
0065FA36  74 12                     JZ 0x0065fa4a
0065FA38  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0065FA3B  8B 08                     MOV ECX,dword ptr [EAX]
0065FA3D  52                        PUSH EDX
0065FA3E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0065FA41  52                        PUSH EDX
0065FA42  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0065FA45  52                        PUSH EDX
0065FA46  50                        PUSH EAX
0065FA47  FF 51 18                  CALL dword ptr [ECX + 0x18]
LAB_0065fa4a:
0065FA4A  5D                        POP EBP
0065FA4B  C2 0C 00                  RET 0xc
