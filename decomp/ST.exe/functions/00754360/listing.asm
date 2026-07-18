FUN_00754360:
00754360  55                        PUSH EBP
00754361  8B EC                     MOV EBP,ESP
00754363  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00754366  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00754369  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075436C  56                        PUSH ESI
0075436D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00754370  50                        PUSH EAX
00754371  51                        PUSH ECX
00754372  56                        PUSH ESI
00754373  52                        PUSH EDX
00754374  E8 77 06 F8 FF            CALL 0x006d49f0
00754379  85 C0                     TEST EAX,EAX
0075437B  74 08                     JZ 0x00754385
0075437D  83 C8 FF                  OR EAX,0xffffffff
00754380  5E                        POP ESI
00754381  5D                        POP EBP
00754382  C2 10 00                  RET 0x10
LAB_00754385:
00754385  8B C6                     MOV EAX,ESI
00754387  5E                        POP ESI
00754388  5D                        POP EBP
00754389  C2 10 00                  RET 0x10
