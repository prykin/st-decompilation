FUN_007561d0:
007561D0  55                        PUSH EBP
007561D1  8B EC                     MOV EBP,ESP
007561D3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007561D6  85 C0                     TEST EAX,EAX
007561D8  7F 14                     JG 0x007561ee
007561DA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007561DD  83 C8 FF                  OR EAX,0xffffffff
007561E0  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
007561E3  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
007561E6  89 44 D1 44               MOV dword ptr [ECX + EDX*0x8 + 0x44],EAX
007561EA  5D                        POP EBP
007561EB  C2 08 00                  RET 0x8
LAB_007561ee:
007561EE  50                        PUSH EAX
007561EF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007561F2  50                        PUSH EAX
007561F3  E8 88 DA FF FF            CALL 0x00753c80
007561F8  5D                        POP EBP
007561F9  C2 08 00                  RET 0x8
