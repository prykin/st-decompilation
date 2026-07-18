FUN_006d822b:
006D822B  51                        PUSH ECX
006D822C  53                        PUSH EBX
006D822D  68 00 02 00 00            PUSH 0x200
006D8232  FF 75 F4                  PUSH dword ptr [EBP + -0xc]
006D8235  FF 75 08                  PUSH dword ptr [EBP + 0x8]
006D8238  FF 55 FC                  CALL dword ptr [EBP + -0x4]
006D823B  0B C0                     OR EAX,EAX
006D823D  7E 0A                     JLE 0x006d8249
006D823F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D8242  8B D6                     MOV EDX,ESI
006D8244  03 D0                     ADD EDX,EAX
006D8246  F8                        CLC
006D8247  EB 08                     JMP 0x006d8251
LAB_006d8249:
006D8249  75 05                     JNZ 0x006d8250
006D824B  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006d8250:
006D8250  F9                        STC
LAB_006d8251:
006D8251  5B                        POP EBX
006D8252  59                        POP ECX
006D8253  C3                        RET
