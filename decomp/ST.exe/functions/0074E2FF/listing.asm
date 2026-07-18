FUN_0074e2ff:
0074E2FF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0074E302  85 C0                     TEST EAX,EAX
0074E304  74 09                     JZ 0x0074e30f
0074E306  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0074E309  FF 49 04                  DEC dword ptr [ECX + 0x4]
0074E30C  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
LAB_0074e30f:
0074E30F  C3                        RET
