FUN_0073ff00:
0073FF00  55                        PUSH EBP
0073FF01  8B EC                     MOV EBP,ESP
0073FF03  83 EC 1C                  SUB ESP,0x1c
0073FF06  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0073FF0D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073FF10  83 E8 01                  SUB EAX,0x1
0073FF13  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073FF16  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FF19  83 C1 01                  ADD ECX,0x1
0073FF1C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0073FF1F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073FF22  99                        CDQ
0073FF23  83 E2 1F                  AND EDX,0x1f
0073FF26  03 C2                     ADD EAX,EDX
0073FF28  C1 F8 05                  SAR EAX,0x5
0073FF2B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0073FF2E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073FF31  81 E2 1F 00 00 80         AND EDX,0x8000001f
0073FF37  79 05                     JNS 0x0073ff3e
0073FF39  4A                        DEC EDX
0073FF3A  83 CA E0                  OR EDX,0xffffffe0
0073FF3D  42                        INC EDX
LAB_0073ff3e:
0073FF3E  B8 1F 00 00 00            MOV EAX,0x1f
0073FF43  2B C2                     SUB EAX,EDX
0073FF45  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073FF48  BA 01 00 00 00            MOV EDX,0x1
0073FF4D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073FF50  D3 E2                     SHL EDX,CL
0073FF52  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0073FF55  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0073FF58  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FF5B  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0073FF5E  23 55 E4                  AND EDX,dword ptr [EBP + -0x1c]
0073FF61  85 D2                     TEST EDX,EDX
0073FF63  74 2A                     JZ 0x0073ff8f
0073FF65  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073FF68  83 C0 01                  ADD EAX,0x1
0073FF6B  50                        PUSH EAX
0073FF6C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FF6F  51                        PUSH ECX
0073FF70  E8 4B FE FF FF            CALL 0x0073fdc0
0073FF75  83 C4 08                  ADD ESP,0x8
0073FF78  85 C0                     TEST EAX,EAX
0073FF7A  75 13                     JNZ 0x0073ff8f
0073FF7C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073FF7F  52                        PUSH EDX
0073FF80  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FF83  50                        PUSH EAX
0073FF84  E8 C7 FE FF FF            CALL 0x0073fe50
0073FF89  83 C4 08                  ADD ESP,0x8
0073FF8C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0073ff8f:
0073FF8F  83 CA FF                  OR EDX,0xffffffff
0073FF92  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073FF95  D3 E2                     SHL EDX,CL
0073FF97  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0073FF9A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FF9D  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
0073FFA0  23 C2                     AND EAX,EDX
0073FFA2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0073FFA5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FFA8  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
0073FFAB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0073FFAE  83 C0 01                  ADD EAX,0x1
0073FFB1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073FFB4  EB 09                     JMP 0x0073ffbf
LAB_0073ffb6:
0073FFB6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073FFB9  83 C1 01                  ADD ECX,0x1
0073FFBC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0073ffbf:
0073FFBF  83 7D F0 03               CMP dword ptr [EBP + -0x10],0x3
0073FFC3  7D 0F                     JGE 0x0073ffd4
0073FFC5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073FFC8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FFCB  C7 04 90 00 00 00 00      MOV dword ptr [EAX + EDX*0x4],0x0
0073FFD2  EB E2                     JMP 0x0073ffb6
LAB_0073ffd4:
0073FFD4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0073FFD7  8B E5                     MOV ESP,EBP
0073FFD9  5D                        POP EBP
0073FFDA  C3                        RET
