FUN_00490cd0:
00490CD0  55                        PUSH EBP
00490CD1  8B EC                     MOV EBP,ESP
00490CD3  51                        PUSH ECX
00490CD4  56                        PUSH ESI
00490CD5  57                        PUSH EDI
00490CD6  66 8B 7D 12               MOV DI,word ptr [EBP + 0x12]
00490CDA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00490CDD  66 85 FF                  TEST DI,DI
00490CE0  7D 03                     JGE 0x00490ce5
00490CE2  66 33 FF                  XOR DI,DI
LAB_00490ce5:
00490CE5  66 8B 75 14               MOV SI,word ptr [EBP + 0x14]
00490CE9  66 85 F6                  TEST SI,SI
00490CEC  7D 03                     JGE 0x00490cf1
00490CEE  66 33 F6                  XOR SI,SI
LAB_00490cf1:
00490CF1  66 8B 45 16               MOV AX,word ptr [EBP + 0x16]
00490CF5  66 85 C0                  TEST AX,AX
00490CF8  7D 03                     JGE 0x00490cfd
00490CFA  66 33 C0                  XOR AX,AX
LAB_00490cfd:
00490CFD  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
00490D03  53                        PUSH EBX
00490D04  0F BF D1                  MOVSX EDX,CX
00490D07  0F BF DF                  MOVSX EBX,DI
00490D0A  4A                        DEC EDX
00490D0B  3B DA                     CMP EBX,EDX
00490D0D  7E 03                     JLE 0x00490d12
00490D0F  8D 79 FF                  LEA EDI,[ECX + -0x1]
LAB_00490d12:
00490D12  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
00490D19  0F BF CA                  MOVSX ECX,DX
00490D1C  0F BF DE                  MOVSX EBX,SI
00490D1F  49                        DEC ECX
00490D20  3B D9                     CMP EBX,ECX
00490D22  7E 05                     JLE 0x00490d29
00490D24  66 4A                     DEC DX
00490D26  66 8B F2                  MOV SI,DX
LAB_00490d29:
00490D29  8B 0D 44 B2 7F 00         MOV ECX,dword ptr [0x007fb244]
00490D2F  0F BF D1                  MOVSX EDX,CX
00490D32  0F BF D8                  MOVSX EBX,AX
00490D35  4A                        DEC EDX
00490D36  3B DA                     CMP EBX,EDX
00490D38  5B                        POP EBX
00490D39  7E 03                     JLE 0x00490d3e
00490D3B  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_00490d3e:
00490D3E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00490D41  66 89 B9 75 04 00 00      MOV word ptr [ECX + 0x475],DI
00490D48  66 89 B1 77 04 00 00      MOV word ptr [ECX + 0x477],SI
00490D4F  5F                        POP EDI
00490D50  66 89 81 79 04 00 00      MOV word ptr [ECX + 0x479],AX
00490D57  5E                        POP ESI
00490D58  8B E5                     MOV ESP,EBP
00490D5A  5D                        POP EBP
00490D5B  C2 10 00                  RET 0x10
