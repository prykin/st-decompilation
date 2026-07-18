FUN_006b7780:
006B7780  55                        PUSH EBP
006B7781  8B EC                     MOV EBP,ESP
006B7783  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B7786  85 D2                     TEST EDX,EDX
006B7788  75 06                     JNZ 0x006b7790
006B778A  33 C0                     XOR EAX,EAX
006B778C  5D                        POP EBP
006B778D  C2 08 00                  RET 0x8
LAB_006b7790:
006B7790  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7793  56                        PUSH ESI
006B7794  85 C0                     TEST EAX,EAX
006B7796  75 06                     JNZ 0x006b779e
006B7798  8B C2                     MOV EAX,EDX
006B779A  8B F2                     MOV ESI,EDX
006B779C  EB 02                     JMP 0x006b77a0
LAB_006b779e:
006B779E  8B F0                     MOV ESI,EAX
LAB_006b77a0:
006B77A0  8A 0A                     MOV CL,byte ptr [EDX]
006B77A2  84 C9                     TEST CL,CL
006B77A4  74 12                     JZ 0x006b77b8
LAB_006b77a6:
006B77A6  80 F9 20                  CMP CL,0x20
006B77A9  74 05                     JZ 0x006b77b0
006B77AB  80 F9 09                  CMP CL,0x9
006B77AE  75 08                     JNZ 0x006b77b8
LAB_006b77b0:
006B77B0  8A 4A 01                  MOV CL,byte ptr [EDX + 0x1]
006B77B3  42                        INC EDX
006B77B4  84 C9                     TEST CL,CL
006B77B6  75 EE                     JNZ 0x006b77a6
LAB_006b77b8:
006B77B8  8A 0A                     MOV CL,byte ptr [EDX]
006B77BA  84 C9                     TEST CL,CL
006B77BC  74 15                     JZ 0x006b77d3
LAB_006b77be:
006B77BE  80 F9 20                  CMP CL,0x20
006B77C1  74 10                     JZ 0x006b77d3
006B77C3  80 F9 09                  CMP CL,0x9
006B77C6  74 0B                     JZ 0x006b77d3
006B77C8  88 0E                     MOV byte ptr [ESI],CL
006B77CA  8A 4A 01                  MOV CL,byte ptr [EDX + 0x1]
006B77CD  46                        INC ESI
006B77CE  42                        INC EDX
006B77CF  84 C9                     TEST CL,CL
006B77D1  75 EB                     JNZ 0x006b77be
LAB_006b77d3:
006B77D3  80 3A 00                  CMP byte ptr [EDX],0x0
006B77D6  75 C8                     JNZ 0x006b77a0
006B77D8  C6 06 00                  MOV byte ptr [ESI],0x0
006B77DB  5E                        POP ESI
006B77DC  5D                        POP EBP
006B77DD  C2 08 00                  RET 0x8
