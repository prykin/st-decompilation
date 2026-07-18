FUN_00423c70:
00423C70  55                        PUSH EBP
00423C71  8B EC                     MOV EBP,ESP
00423C73  83 EC 24                  SUB ESP,0x24
00423C76  53                        PUSH EBX
00423C77  56                        PUSH ESI
00423C78  8B F1                     MOV ESI,ECX
00423C7A  57                        PUSH EDI
00423C7B  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
00423C7E  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00423C81  83 C8 FF                  OR EAX,0xffffffff
00423C84  85 DB                     TEST EBX,EBX
00423C86  0F 86 A7 00 00 00         JBE 0x00423d33
00423C8C  33 FF                     XOR EDI,EDI
00423C8E  85 DB                     TEST EBX,EBX
00423C90  0F 86 9D 00 00 00         JBE 0x00423d33
00423C96  33 D2                     XOR EDX,EDX
LAB_00423c98:
00423C98  8D 4D FC                  LEA ECX,[EBP + -0x4]
00423C9B  51                        PUSH ECX
00423C9C  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
00423C9F  E8 CC 8F 28 00            CALL 0x006acc70
00423CA4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00423CA7  66 3B 45 08               CMP AX,word ptr [EBP + 0x8]
00423CAB  74 19                     JZ 0x00423cc6
00423CAD  47                        INC EDI
00423CAE  8B D7                     MOV EDX,EDI
00423CB0  81 E2 FF FF 00 00         AND EDX,0xffff
00423CB6  3B D3                     CMP EDX,EBX
00423CB8  72 DE                     JC 0x00423c98
00423CBA  5F                        POP EDI
00423CBB  5E                        POP ESI
00423CBC  83 C8 FF                  OR EAX,0xffffffff
00423CBF  5B                        POP EBX
00423CC0  8B E5                     MOV ESP,EBP
00423CC2  5D                        POP EBP
00423CC3  C2 04 00                  RET 0x4
LAB_00423cc6:
00423CC6  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00423CC9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00423CCF  6A 01                     PUSH 0x1
00423CD1  50                        PUSH EAX
00423CD2  52                        PUSH EDX
00423CD3  E8 E2 EB FD FF            CALL 0x004028ba
00423CD8  8B D8                     MOV EBX,EAX
00423CDA  68 FF FF 00 00            PUSH 0xffff
00423CDF  8B CB                     MOV ECX,EBX
00423CE1  E8 D8 F6 FD FF            CALL 0x004033be
00423CE6  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
00423CE9  8D 45 FC                  LEA EAX,[EBP + -0x4]
00423CEC  81 E7 FF FF 00 00         AND EDI,0xffff
00423CF2  50                        PUSH EAX
00423CF3  57                        PUSH EDI
00423CF4  51                        PUSH ECX
00423CF5  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
00423CFC  E8 3F A4 28 00            CALL 0x006ae140
00423D01  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00423D04  33 FF                     XOR EDI,EDI
00423D06  66 FF 4E 27               DEC word ptr [ESI + 0x27]
00423D0A  85 C9                     TEST ECX,ECX
00423D0C  74 23                     JZ 0x00423d31
00423D0E  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
00423D12  C7 45 EC 96 5D 00 00      MOV dword ptr [EBP + -0x14],0x5d96
00423D19  66 C7 45 F0 01 00         MOV word ptr [EBP + -0x10],0x1
00423D1F  66 89 55 F2               MOV word ptr [EBP + -0xe],DX
00423D23  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00423D26  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00423D29  8B 11                     MOV EDX,dword ptr [ECX]
00423D2B  8D 45 DC                  LEA EAX,[EBP + -0x24]
00423D2E  50                        PUSH EAX
00423D2F  FF 12                     CALL dword ptr [EDX]
LAB_00423d31:
00423D31  8B C7                     MOV EAX,EDI
LAB_00423d33:
00423D33  5F                        POP EDI
00423D34  5E                        POP ESI
00423D35  5B                        POP EBX
00423D36  8B E5                     MOV ESP,EBP
00423D38  5D                        POP EBP
00423D39  C2 04 00                  RET 0x4
