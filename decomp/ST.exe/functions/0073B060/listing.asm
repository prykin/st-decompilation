FUN_0073b060:
0073B060  55                        PUSH EBP
0073B061  8B EC                     MOV EBP,ESP
0073B063  83 EC 08                  SUB ESP,0x8
0073B066  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0073B06A  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0073B06E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0073B075  EB 09                     JMP 0x0073b080
LAB_0073b077:
0073B077  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B07A  83 C1 01                  ADD ECX,0x1
0073B07D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0073b080:
0073B080  83 7D F8 0A               CMP dword ptr [EBP + -0x8],0xa
0073B084  73 20                     JNC 0x0073b0a6
0073B086  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073B089  81 E2 FF FF 00 00         AND EDX,0xffff
0073B08F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B092  33 C9                     XOR ECX,ECX
0073B094  66 8B 0C 45 14 1C 7F 00   MOV CX,word ptr [EAX*0x2 + 0x7f1c14]
0073B09C  3B D1                     CMP EDX,ECX
0073B09E  75 04                     JNZ 0x0073b0a4
0073B0A0  33 C0                     XOR EAX,EAX
0073B0A2  EB 07                     JMP 0x0073b0ab
LAB_0073b0a4:
0073B0A4  EB D1                     JMP 0x0073b077
LAB_0073b0a6:
0073B0A6  B8 01 00 00 00            MOV EAX,0x1
LAB_0073b0ab:
0073B0AB  8B E5                     MOV ESP,EBP
0073B0AD  5D                        POP EBP
0073B0AE  C3                        RET
