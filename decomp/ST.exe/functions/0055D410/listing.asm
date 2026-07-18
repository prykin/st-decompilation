FUN_0055d410:
0055D410  8B 81 A8 06 00 00         MOV EAX,dword ptr [ECX + 0x6a8]
0055D416  8D 91 88 06 00 00         LEA EDX,[ECX + 0x688]
0055D41C  50                        PUSH EAX
0055D41D  8D 81 48 06 00 00         LEA EAX,[ECX + 0x648]
0055D423  52                        PUSH EDX
0055D424  50                        PUSH EAX
0055D425  FF 15 30 C0 85 00         CALL dword ptr [0x0085c030]
0055D42B  C3                        RET
