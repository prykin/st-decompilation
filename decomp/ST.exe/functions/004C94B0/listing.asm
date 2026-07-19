TLOBaseTy::procResult:
004C94B0  55                        PUSH EBP
004C94B1  8B EC                     MOV EBP,ESP
004C94B3  83 EC 4C                  SUB ESP,0x4c
004C94B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004C94BB  56                        PUSH ESI
004C94BC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004C94BF  57                        PUSH EDI
004C94C0  8D 55 B8                  LEA EDX,[EBP + -0x48]
004C94C3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004C94C6  6A 00                     PUSH 0x0
004C94C8  52                        PUSH EDX
004C94C9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004C94D0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004C94D3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C94D9  E8 12 43 26 00            CALL 0x0072d7f0
004C94DE  8B F0                     MOV ESI,EAX
004C94E0  83 C4 08                  ADD ESP,0x8
004C94E3  85 F6                     TEST ESI,ESI
004C94E5  0F 85 1E 01 00 00         JNZ 0x004c9609
004C94EB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004C94EE  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004C94F4  48                        DEC EAX
004C94F5  83 F8 07                  CMP EAX,0x7
004C94F8  0F 87 F7 00 00 00         JA 0x004c95f5
switchD_004c94fe::switchD:
004C94FE  FF 24 85 50 96 4C 00      JMP dword ptr [EAX*0x4 + 0x4c9650]
switchD_004c94fe::caseD_1:
004C9505  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004C950B  8B CE                     MOV ECX,ESI
004C950D  50                        PUSH EAX
004C950E  E8 8C 95 F3 FF            CALL 0x00402a9f
004C9513  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C9516  8B F8                     MOV EDI,EAX
004C9518  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C951E  5F                        POP EDI
004C951F  5E                        POP ESI
004C9520  8B E5                     MOV ESP,EBP
004C9522  5D                        POP EBP
004C9523  C3                        RET
switchD_004c94fe::caseD_2:
004C9524  8B 8E 69 03 00 00         MOV ECX,dword ptr [ESI + 0x369]
004C952A  51                        PUSH ECX
004C952B  8B CE                     MOV ECX,ESI
004C952D  E8 80 91 F3 FF            CALL 0x004026b2
004C9532  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C9535  8B F8                     MOV EDI,EAX
004C9537  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C953D  5F                        POP EDI
004C953E  5E                        POP ESI
004C953F  8B E5                     MOV ESP,EBP
004C9541  5D                        POP EBP
004C9542  C3                        RET
switchD_004c94fe::caseD_3:
004C9543  8B CE                     MOV ECX,ESI
004C9545  E8 0C B1 F3 FF            CALL 0x00404656
004C954A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C954D  8B F8                     MOV EDI,EAX
004C954F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C9555  5F                        POP EDI
004C9556  5E                        POP ESI
004C9557  8B E5                     MOV ESP,EBP
004C9559  5D                        POP EBP
004C955A  C3                        RET
switchD_004c94fe::caseD_5:
004C955B  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004C9561  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C9567  BF 01 00 00 00            MOV EDI,0x1
004C956C  52                        PUSH EDX
004C956D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004C9570  E8 42 B4 F3 FF            CALL 0x004049b7
004C9575  8A C8                     MOV CL,AL
004C9577  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C957D  81 E1 FF 00 00 00         AND ECX,0xff
004C9583  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C9586  03 CA                     ADD ECX,EDX
004C9588  8B 04 8D 78 41 7E 00      MOV EAX,dword ptr [ECX*0x4 + 0x7e4178]
004C958F  8B CE                     MOV ECX,ESI
004C9591  89 86 41 02 00 00         MOV dword ptr [ESI + 0x241],EAX
004C9597  E8 CC C1 F3 FF            CALL 0x00405768
004C959C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C959F  8B C7                     MOV EAX,EDI
004C95A1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C95A7  5F                        POP EDI
004C95A8  5E                        POP ESI
004C95A9  8B E5                     MOV ESP,EBP
004C95AB  5D                        POP EBP
004C95AC  C3                        RET
switchD_004c94fe::caseD_6:
004C95AD  8B CE                     MOV ECX,ESI
004C95AF  E8 54 86 F3 FF            CALL 0x00401c08
004C95B4  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C95B7  8B F8                     MOV EDI,EAX
004C95B9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C95BF  5F                        POP EDI
004C95C0  5E                        POP ESI
004C95C1  8B E5                     MOV ESP,EBP
004C95C3  5D                        POP EBP
004C95C4  C3                        RET
switchD_004c94fe::caseD_4:
004C95C5  8B CE                     MOV ECX,ESI
004C95C7  E8 CD 8B F3 FF            CALL 0x00402199
004C95CC  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C95CF  8B F8                     MOV EDI,EAX
004C95D1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C95D7  5F                        POP EDI
004C95D8  5E                        POP ESI
004C95D9  8B E5                     MOV ESP,EBP
004C95DB  5D                        POP EBP
004C95DC  C3                        RET
switchD_004c94fe::caseD_8:
004C95DD  8B CE                     MOV ECX,ESI
004C95DF  E8 71 C0 F3 FF            CALL 0x00405655
004C95E4  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C95E7  8B F8                     MOV EDI,EAX
004C95E9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C95EF  5F                        POP EDI
004C95F0  5E                        POP ESI
004C95F1  8B E5                     MOV ESP,EBP
004C95F3  5D                        POP EBP
004C95F4  C3                        RET
switchD_004c94fe::caseD_7:
004C95F5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004C95F8  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004C95FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C9601  8B C7                     MOV EAX,EDI
004C9603  5F                        POP EDI
004C9604  5E                        POP ESI
004C9605  8B E5                     MOV ESP,EBP
004C9607  5D                        POP EBP
004C9608  C3                        RET
LAB_004c9609:
004C9609  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004C960C  68 EC D3 7A 00            PUSH 0x7ad3ec
004C9611  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C9616  56                        PUSH ESI
004C9617  6A 00                     PUSH 0x0
004C9619  68 91 02 00 00            PUSH 0x291
004C961E  68 B4 D3 7A 00            PUSH 0x7ad3b4
004C9623  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004C9629  E8 A2 3E 1E 00            CALL 0x006ad4d0
004C962E  83 C4 18                  ADD ESP,0x18
004C9631  85 C0                     TEST EAX,EAX
004C9633  74 01                     JZ 0x004c9636
004C9635  CC                        INT3
LAB_004c9636:
004C9636  68 92 02 00 00            PUSH 0x292
004C963B  68 B4 D3 7A 00            PUSH 0x7ad3b4
004C9640  6A 00                     PUSH 0x0
004C9642  56                        PUSH ESI
004C9643  E8 F8 C7 1D 00            CALL 0x006a5e40
004C9648  5F                        POP EDI
004C9649  33 C0                     XOR EAX,EAX
004C964B  5E                        POP ESI
004C964C  8B E5                     MOV ESP,EBP
004C964E  5D                        POP EBP
004C964F  C3                        RET
