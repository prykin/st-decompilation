FUN_006b2300:
006B2300  55                        PUSH EBP
006B2301  8B EC                     MOV EBP,ESP
006B2303  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B2306  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B2309  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B230C  6A 00                     PUSH 0x0
006B230E  50                        PUSH EAX
006B230F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B2312  6A FF                     PUSH -0x1
006B2314  6A FF                     PUSH -0x1
006B2316  51                        PUSH ECX
006B2317  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B231A  52                        PUSH EDX
006B231B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B231E  6A 01                     PUSH 0x1
006B2320  50                        PUSH EAX
006B2321  51                        PUSH ECX
006B2322  52                        PUSH EDX
006B2323  E8 28 FA FF FF            CALL 0x006b1d50
006B2328  5D                        POP EBP
006B2329  C2 18 00                  RET 0x18
