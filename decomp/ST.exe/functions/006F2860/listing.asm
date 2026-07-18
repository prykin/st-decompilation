cMf32::RecKeyGetNext:
006F2860  55                        PUSH EBP
006F2861  8B EC                     MOV EBP,ESP
006F2863  83 EC 48                  SUB ESP,0x48
006F2866  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F286B  56                        PUSH ESI
006F286C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F286F  57                        PUSH EDI
006F2870  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F2873  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F2876  6A 00                     PUSH 0x0
006F2878  52                        PUSH EDX
006F2879  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F287C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2882  E8 69 AF 03 00            CALL 0x0072d7f0
006F2887  8B F0                     MOV ESI,EAX
006F2889  83 C4 08                  ADD ESP,0x8
006F288C  85 F6                     TEST ESI,ESI
006F288E  75 5E                     JNZ 0x006f28ee
006F2890  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F2893  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F2896  85 F6                     TEST ESI,ESI
006F2898  75 03                     JNZ 0x006f289d
006F289A  8D 72 18                  LEA ESI,[EDX + 0x18]
LAB_006f289d:
006F289D  B9 86 00 00 00            MOV ECX,0x86
006F28A2  33 C0                     XOR EAX,EAX
006F28A4  8B FE                     MOV EDI,ESI
006F28A6  6A 00                     PUSH 0x0
006F28A8  F3 AB                     STOSD.REP ES:EDI
006F28AA  AA                        STOSB ES:EDI
006F28AB  8B 02                     MOV EAX,dword ptr [EDX]
006F28AD  6A 00                     PUSH 0x0
006F28AF  56                        PUSH ESI
006F28B0  50                        PUSH EAX
006F28B1  E8 EA F2 05 00            CALL 0x00751ba0
006F28B6  83 F8 FC                  CMP EAX,-0x4
006F28B9  75 13                     JNZ 0x006f28ce
006F28BB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F28BE  33 C0                     XOR EAX,EAX
006F28C0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F28C6  5F                        POP EDI
006F28C7  5E                        POP ESI
006F28C8  8B E5                     MOV ESP,EBP
006F28CA  5D                        POP EBP
006F28CB  C2 04 00                  RET 0x4
LAB_006f28ce:
006F28CE  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F28D1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F28D7  0F BF 46 16               MOVSX EAX,word ptr [ESI + 0x16]
006F28DB  C6 44 30 18 00            MOV byte ptr [EAX + ESI*0x1 + 0x18],0x0
006F28E0  8D 4C 30 18               LEA ECX,[EAX + ESI*0x1 + 0x18]
006F28E4  8B C6                     MOV EAX,ESI
006F28E6  5F                        POP EDI
006F28E7  5E                        POP ESI
006F28E8  8B E5                     MOV ESP,EBP
006F28EA  5D                        POP EBP
006F28EB  C2 04 00                  RET 0x4
LAB_006f28ee:
006F28EE  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F28F1  68 E0 FC 7E 00            PUSH 0x7efce0
006F28F6  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F28FB  56                        PUSH ESI
006F28FC  6A 00                     PUSH 0x0
006F28FE  68 21 03 00 00            PUSH 0x321
006F2903  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2908  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F290E  E8 BD AB FB FF            CALL 0x006ad4d0
006F2913  83 C4 18                  ADD ESP,0x18
006F2916  85 C0                     TEST EAX,EAX
006F2918  74 01                     JZ 0x006f291b
006F291A  CC                        INT3
LAB_006f291b:
006F291B  68 23 03 00 00            PUSH 0x323
006F2920  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2925  6A 00                     PUSH 0x0
006F2927  56                        PUSH ESI
006F2928  E8 13 35 FB FF            CALL 0x006a5e40
006F292D  5F                        POP EDI
006F292E  33 C0                     XOR EAX,EAX
006F2930  5E                        POP ESI
006F2931  8B E5                     MOV ESP,EBP
006F2933  5D                        POP EBP
006F2934  C2 04 00                  RET 0x4
