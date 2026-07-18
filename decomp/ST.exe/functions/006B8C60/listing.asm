FUN_006b8c60:
006B8C60  55                        PUSH EBP
006B8C61  8B EC                     MOV EBP,ESP
006B8C63  83 EC 10                  SUB ESP,0x10
006B8C66  56                        PUSH ESI
006B8C67  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8C6A  57                        PUSH EDI
006B8C6B  33 FF                     XOR EDI,EDI
006B8C6D  85 F6                     TEST ESI,ESI
006B8C6F  0F 84 C7 00 00 00         JZ 0x006b8d3c
006B8C75  8B 06                     MOV EAX,dword ptr [ESI]
006B8C77  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006B8C7A  F6 C5 01                  TEST CH,0x1
006B8C7D  0F 85 B9 00 00 00         JNZ 0x006b8d3c
006B8C83  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B8C8A  74 0C                     JZ 0x006b8c98
006B8C8C  05 F0 04 00 00            ADD EAX,0x4f0
006B8C91  50                        PUSH EAX
006B8C92  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b8c98:
006B8C98  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B8C9B  85 C0                     TEST EAX,EAX
006B8C9D  7D 12                     JGE 0x006b8cb1
006B8C9F  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006B8CA2  83 F8 FF                  CMP EAX,-0x1
006B8CA5  75 01                     JNZ 0x006b8ca8
006B8CA7  42                        INC EDX
LAB_006b8ca8:
006B8CA8  3B 56 2C                  CMP EDX,dword ptr [ESI + 0x2c]
006B8CAB  7C 08                     JL 0x006b8cb5
006B8CAD  33 D2                     XOR EDX,EDX
006B8CAF  EB 04                     JMP 0x006b8cb5
LAB_006b8cb1:
006B8CB1  99                        CDQ
006B8CB2  F7 7E 2C                  IDIV dword ptr [ESI + 0x2c]
LAB_006b8cb5:
006B8CB5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B8CB8  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006B8CBB  3B C8                     CMP ECX,EAX
006B8CBD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B8CC0  75 0A                     JNZ 0x006b8ccc
006B8CC2  39 4E 0C                  CMP dword ptr [ESI + 0xc],ECX
006B8CC5  75 05                     JNZ 0x006b8ccc
006B8CC7  39 56 28                  CMP dword ptr [ESI + 0x28],EDX
006B8CCA  74 33                     JZ 0x006b8cff
LAB_006b8ccc:
006B8CCC  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006B8CCF  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8CD2  F6 C4 80                  TEST AH,0x80
006B8CD5  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006B8CD8  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
006B8CDB  74 22                     JZ 0x006b8cff
006B8CDD  80 E4 DF                  AND AH,0xdf
006B8CE0  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B8CE3  8D 45 F0                  LEA EAX,[EBP + -0x10]
006B8CE6  50                        PUSH EAX
006B8CE7  56                        PUSH ESI
006B8CE8  E8 23 02 00 00            CALL 0x006b8f10
006B8CED  8B F8                     MOV EDI,EAX
006B8CEF  85 FF                     TEST EDI,EDI
006B8CF1  75 0C                     JNZ 0x006b8cff
006B8CF3  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B8CF6  51                        PUSH ECX
006B8CF7  56                        PUSH ESI
006B8CF8  E8 B3 05 00 00            CALL 0x006b92b0
006B8CFD  8B F8                     MOV EDI,EAX
LAB_006b8cff:
006B8CFF  8B 36                     MOV ESI,dword ptr [ESI]
006B8D01  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B8D08  74 0D                     JZ 0x006b8d17
006B8D0A  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B8D10  56                        PUSH ESI
006B8D11  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b8d17:
006B8D17  85 FF                     TEST EDI,EDI
006B8D19  74 21                     JZ 0x006b8d3c
006B8D1B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B8D21  68 3A 01 00 00            PUSH 0x13a
006B8D26  68 18 DC 7E 00            PUSH 0x7edc18
006B8D2B  52                        PUSH EDX
006B8D2C  57                        PUSH EDI
006B8D2D  E8 0E D1 FE FF            CALL 0x006a5e40
006B8D32  8B C7                     MOV EAX,EDI
006B8D34  5F                        POP EDI
006B8D35  5E                        POP ESI
006B8D36  8B E5                     MOV ESP,EBP
006B8D38  5D                        POP EBP
006B8D39  C2 10 00                  RET 0x10
LAB_006b8d3c:
006B8D3C  5F                        POP EDI
006B8D3D  33 C0                     XOR EAX,EAX
006B8D3F  5E                        POP ESI
006B8D40  8B E5                     MOV ESP,EBP
006B8D42  5D                        POP EBP
006B8D43  C2 10 00                  RET 0x10
