FUN_004c2810:
004C2810  8B 91 65 02 00 00         MOV EDX,dword ptr [ECX + 0x265]
004C2816  33 C0                     XOR EAX,EAX
004C2818  85 D2                     TEST EDX,EDX
004C281A  74 05                     JZ 0x004c2821
004C281C  B8 64 00 00 00            MOV EAX,0x64
LAB_004c2821:
004C2821  C3                        RET
