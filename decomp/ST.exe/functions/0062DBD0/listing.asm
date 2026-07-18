FUN_0062dbd0:
0062DBD0  55                        PUSH EBP
0062DBD1  8B EC                     MOV EBP,ESP
0062DBD3  83 EC 0C                  SUB ESP,0xc
0062DBD6  53                        PUSH EBX
0062DBD7  56                        PUSH ESI
0062DBD8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062DBDB  8B D9                     MOV EBX,ECX
0062DBDD  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0062DBE4  8B 44 B3 50               MOV EAX,dword ptr [EBX + ESI*0x4 + 0x50]
0062DBE8  85 C0                     TEST EAX,EAX
0062DBEA  75 0B                     JNZ 0x0062dbf7
0062DBEC  5E                        POP ESI
0062DBED  83 C8 FF                  OR EAX,0xffffffff
0062DBF0  5B                        POP EBX
0062DBF1  8B E5                     MOV ESP,EBP
0062DBF3  5D                        POP EBP
0062DBF4  C2 08 00                  RET 0x8
LAB_0062dbf7:
0062DBF7  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0062DBFA  57                        PUSH EDI
0062DBFB  33 FF                     XOR EDI,EDI
0062DBFD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062DC00  85 D2                     TEST EDX,EDX
0062DC02  0F 8E AB 00 00 00         JLE 0x0062dcb3
LAB_0062dc08:
0062DC08  8B 4C B3 50               MOV ECX,dword ptr [EBX + ESI*0x4 + 0x50]
0062DC0C  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
0062DC0F  73 55                     JNC 0x0062dc66
0062DC11  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062DC14  0F AF C7                  IMUL EAX,EDI
0062DC17  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0062DC1A  85 C0                     TEST EAX,EAX
0062DC1C  74 48                     JZ 0x0062dc66
0062DC1E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062DC21  39 08                     CMP dword ptr [EAX],ECX
0062DC23  75 41                     JNZ 0x0062dc66
0062DC25  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0062DC28  8D 70 10                  LEA ESI,[EAX + 0x10]
0062DC2B  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
LAB_0062dc32:
0062DC32  8B 06                     MOV EAX,dword ptr [ESI]
0062DC34  85 C0                     TEST EAX,EAX
0062DC36  76 0E                     JBE 0x0062dc46
0062DC38  50                        PUSH EAX
0062DC39  8B CB                     MOV ECX,EBX
0062DC3B  E8 AC 6F DD FF            CALL 0x00404bec
0062DC40  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0062dc46:
0062DC46  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062DC49  83 C6 04                  ADD ESI,0x4
0062DC4C  48                        DEC EAX
0062DC4D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062DC50  75 E0                     JNZ 0x0062dc32
0062DC52  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062DC55  57                        PUSH EDI
0062DC56  8B 44 93 50               MOV EAX,dword ptr [EBX + EDX*0x4 + 0x50]
0062DC5A  50                        PUSH EAX
0062DC5B  E8 10 30 08 00            CALL 0x006b0c70
0062DC60  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0062DC63  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0062dc66:
0062DC66  47                        INC EDI
0062DC67  3B FA                     CMP EDI,EDX
0062DC69  7C 9D                     JL 0x0062dc08
0062DC6B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062DC6E  85 C0                     TEST EAX,EAX
0062DC70  7C 41                     JL 0x0062dcb3
0062DC72  8B 4C B3 70               MOV ECX,dword ptr [EBX + ESI*0x4 + 0x70]
0062DC76  85 C9                     TEST ECX,ECX
0062DC78  74 39                     JZ 0x0062dcb3
0062DC7A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0062DC7D  33 D2                     XOR EDX,EDX
0062DC7F  85 C0                     TEST EAX,EAX
0062DC81  7E 30                     JLE 0x0062dcb3
0062DC83  3B D0                     CMP EDX,EAX
LAB_0062dc85:
0062DC85  73 1D                     JNC 0x0062dca4
0062DC87  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062DC8A  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
0062DC8D  0F AF C2                  IMUL EAX,EDX
0062DC90  03 C6                     ADD EAX,ESI
0062DC92  85 C0                     TEST EAX,EAX
0062DC94  74 0E                     JZ 0x0062dca4
0062DC96  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0062DC99  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0062DC9C  3B CE                     CMP ECX,ESI
0062DC9E  7E 04                     JLE 0x0062dca4
0062DCA0  49                        DEC ECX
0062DCA1  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
LAB_0062dca4:
0062DCA4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062DCA7  42                        INC EDX
0062DCA8  8B 4C 8B 70               MOV ECX,dword ptr [EBX + ECX*0x4 + 0x70]
0062DCAC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0062DCAF  3B D0                     CMP EDX,EAX
0062DCB1  7C D2                     JL 0x0062dc85
LAB_0062dcb3:
0062DCB3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062DCB6  5F                        POP EDI
0062DCB7  5E                        POP ESI
0062DCB8  5B                        POP EBX
0062DCB9  8B E5                     MOV ESP,EBP
0062DCBB  5D                        POP EBP
0062DCBC  C2 08 00                  RET 0x8
