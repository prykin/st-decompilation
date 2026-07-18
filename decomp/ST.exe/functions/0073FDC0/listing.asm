FUN_0073fdc0:
0073FDC0  55                        PUSH EBP
0073FDC1  8B EC                     MOV EBP,ESP
0073FDC3  83 EC 0C                  SUB ESP,0xc
0073FDC6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073FDC9  99                        CDQ
0073FDCA  83 E2 1F                  AND EDX,0x1f
0073FDCD  03 C2                     ADD EAX,EDX
0073FDCF  C1 F8 05                  SAR EAX,0x5
0073FDD2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073FDD5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073FDD8  25 1F 00 00 80            AND EAX,0x8000001f
0073FDDD  79 05                     JNS 0x0073fde4
0073FDDF  48                        DEC EAX
0073FDE0  83 C8 E0                  OR EAX,0xffffffe0
0073FDE3  40                        INC EAX
LAB_0073fde4:
0073FDE4  B9 1F 00 00 00            MOV ECX,0x1f
0073FDE9  2B C8                     SUB ECX,EAX
0073FDEB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073FDEE  83 CA FF                  OR EDX,0xffffffff
0073FDF1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FDF4  D3 E2                     SHL EDX,CL
0073FDF6  F7 D2                     NOT EDX
0073FDF8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0073FDFB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073FDFE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FE01  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0073FE04  23 55 F8                  AND EDX,dword ptr [EBP + -0x8]
0073FE07  85 D2                     TEST EDX,EDX
0073FE09  74 04                     JZ 0x0073fe0f
0073FE0B  33 C0                     XOR EAX,EAX
0073FE0D  EB 31                     JMP 0x0073fe40
LAB_0073fe0f:
0073FE0F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073FE12  83 C0 01                  ADD EAX,0x1
0073FE15  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073FE18  EB 09                     JMP 0x0073fe23
LAB_0073fe1a:
0073FE1A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073FE1D  83 C1 01                  ADD ECX,0x1
0073FE20  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0073fe23:
0073FE23  83 7D F4 03               CMP dword ptr [EBP + -0xc],0x3
0073FE27  7D 12                     JGE 0x0073fe3b
0073FE29  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073FE2C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FE2F  83 3C 90 00               CMP dword ptr [EAX + EDX*0x4],0x0
0073FE33  74 04                     JZ 0x0073fe39
0073FE35  33 C0                     XOR EAX,EAX
0073FE37  EB 07                     JMP 0x0073fe40
LAB_0073fe39:
0073FE39  EB DF                     JMP 0x0073fe1a
LAB_0073fe3b:
0073FE3B  B8 01 00 00 00            MOV EAX,0x1
LAB_0073fe40:
0073FE40  8B E5                     MOV ESP,EBP
0073FE42  5D                        POP EBP
0073FE43  C3                        RET
