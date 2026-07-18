FUN_005ff150:
005FF150  55                        PUSH EBP
005FF151  8B EC                     MOV EBP,ESP
005FF153  83 EC 08                  SUB ESP,0x8
005FF156  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FF159  33 C9                     XOR ECX,ECX
005FF15B  85 C0                     TEST EAX,EAX
005FF15D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005FF160  7E 5D                     JLE 0x005ff1bf
005FF162  53                        PUSH EBX
005FF163  56                        PUSH ESI
005FF164  57                        PUSH EDI
005FF165  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_005ff168:
005FF168  8B 07                     MOV EAX,dword ptr [EDI]
005FF16A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FF16D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005FF170  8B 74 C2 10               MOV ESI,dword ptr [EDX + EAX*0x8 + 0x10]
005FF174  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
005FF177  03 70 0C                  ADD ESI,dword ptr [EAX + 0xc]
005FF17A  85 C9                     TEST ECX,ECX
005FF17C  7E 30                     JLE 0x005ff1ae
005FF17E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005FF181  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_005ff184:
005FF184  8B 02                     MOV EAX,dword ptr [EDX]
005FF186  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005FF189  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005FF18C  8D 0C CB                  LEA ECX,[EBX + ECX*0x8]
005FF18F  8B 59 10                  MOV EBX,dword ptr [ECX + 0x10]
005FF192  03 59 0C                  ADD EBX,dword ptr [ECX + 0xc]
005FF195  3B F3                     CMP ESI,EBX
005FF197  7C 06                     JL 0x005ff19f
005FF199  8B 0F                     MOV ECX,dword ptr [EDI]
005FF19B  89 0A                     MOV dword ptr [EDX],ECX
005FF19D  89 07                     MOV dword ptr [EDI],EAX
LAB_005ff19f:
005FF19F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FF1A2  83 C2 04                  ADD EDX,0x4
005FF1A5  48                        DEC EAX
005FF1A6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FF1A9  75 D9                     JNZ 0x005ff184
005FF1AB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_005ff1ae:
005FF1AE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FF1B1  41                        INC ECX
005FF1B2  83 C7 04                  ADD EDI,0x4
005FF1B5  3B C8                     CMP ECX,EAX
005FF1B7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005FF1BA  7C AC                     JL 0x005ff168
005FF1BC  5F                        POP EDI
005FF1BD  5E                        POP ESI
005FF1BE  5B                        POP EBX
LAB_005ff1bf:
005FF1BF  8B E5                     MOV ESP,EBP
005FF1C1  5D                        POP EBP
005FF1C2  C2 0C 00                  RET 0xc
