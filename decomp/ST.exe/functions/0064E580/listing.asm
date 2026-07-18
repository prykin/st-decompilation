FUN_0064e580:
0064E580  55                        PUSH EBP
0064E581  8B EC                     MOV EBP,ESP
0064E583  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064E586  50                        PUSH EAX
0064E587  E8 54 63 DB FF            CALL 0x004048e0
0064E58C  85 C0                     TEST EAX,EAX
0064E58E  74 0A                     JZ 0x0064e59a
0064E590  33 C9                     XOR ECX,ECX
0064E592  8A 08                     MOV CL,byte ptr [EAX]
0064E594  8B C1                     MOV EAX,ECX
0064E596  5D                        POP EBP
0064E597  C2 04 00                  RET 0x4
LAB_0064e59a:
0064E59A  B8 01 00 00 00            MOV EAX,0x1
0064E59F  5D                        POP EBP
0064E5A0  C2 04 00                  RET 0x4
