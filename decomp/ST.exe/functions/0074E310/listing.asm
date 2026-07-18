FUN_0074e310:
0074E310  8B 01                     MOV EAX,dword ptr [ECX]
0074E312  85 C0                     TEST EAX,EAX
0074E314  74 06                     JZ 0x0074e31c
0074E316  8B 08                     MOV ECX,dword ptr [EAX]
0074E318  50                        PUSH EAX
0074E319  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074e31c:
0074E31C  C3                        RET
