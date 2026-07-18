FUN_0071c9f0:
0071C9F0  55                        PUSH EBP
0071C9F1  8B EC                     MOV EBP,ESP
0071C9F3  83 EC 0C                  SUB ESP,0xc
0071C9F6  53                        PUSH EBX
0071C9F7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0071C9FA  56                        PUSH ESI
0071C9FB  57                        PUSH EDI
0071C9FC  33 FF                     XOR EDI,EDI
0071C9FE  8B F1                     MOV ESI,ECX
0071CA00  3B DF                     CMP EBX,EDI
0071CA02  74 40                     JZ 0x0071ca44
0071CA04  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0071CA07  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
0071CA0A  39 79 0C                  CMP dword ptr [ECX + 0xc],EDI
0071CA0D  7E 35                     JLE 0x0071ca44
LAB_0071ca0f:
0071CA0F  8D 45 F4                  LEA EAX,[EBP + -0xc]
0071CA12  8B D7                     MOV EDX,EDI
0071CA14  50                        PUSH EAX
0071CA15  E8 56 02 F9 FF            CALL 0x006acc70
0071CA1A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071CA1D  39 59 08                  CMP dword ptr [ECX + 0x8],EBX
0071CA20  75 0C                     JNZ 0x0071ca2e
0071CA22  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
0071CA25  57                        PUSH EDI
0071CA26  52                        PUSH EDX
0071CA27  E8 44 42 F9 FF            CALL 0x006b0c70
0071CA2C  EB 0E                     JMP 0x0071ca3c
LAB_0071ca2e:
0071CA2E  F6 45 F4 02               TEST byte ptr [EBP + -0xc],0x2
0071CA32  74 07                     JZ 0x0071ca3b
0071CA34  C7 46 58 01 00 00 00      MOV dword ptr [ESI + 0x58],0x1
LAB_0071ca3b:
0071CA3B  47                        INC EDI
LAB_0071ca3c:
0071CA3C  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0071CA3F  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
0071CA42  7C CB                     JL 0x0071ca0f
LAB_0071ca44:
0071CA44  5F                        POP EDI
0071CA45  5E                        POP ESI
0071CA46  5B                        POP EBX
0071CA47  8B E5                     MOV ESP,EBP
0071CA49  5D                        POP EBP
0071CA4A  C2 04 00                  RET 0x4
