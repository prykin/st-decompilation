FUN_0067be20:
0067BE20  55                        PUSH EBP
0067BE21  8B EC                     MOV EBP,ESP
0067BE23  83 EC 10                  SUB ESP,0x10
0067BE26  53                        PUSH EBX
0067BE27  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0067BE2A  57                        PUSH EDI
0067BE2B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067BE2E  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
0067BE31  4F                        DEC EDI
0067BE32  78 7E                     JS 0x0067beb2
0067BE34  56                        PUSH ESI
LAB_0067be35:
0067BE35  3B 7B 0C                  CMP EDI,dword ptr [EBX + 0xc]
0067BE38  73 74                     JNC 0x0067beae
0067BE3A  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
0067BE3D  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0067BE40  0F AF F7                  IMUL ESI,EDI
0067BE43  03 F1                     ADD ESI,ECX
0067BE45  85 F6                     TEST ESI,ESI
0067BE47  74 65                     JZ 0x0067beae
0067BE49  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067BE4C  66 8B 06                  MOV AX,word ptr [ESI]
0067BE4F  6A 01                     PUSH 0x1
0067BE51  50                        PUSH EAX
0067BE52  8A 91 40 06 00 00         MOV DL,byte ptr [ECX + 0x640]
0067BE58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067BE5E  52                        PUSH EDX
0067BE5F  E8 56 6A D8 FF            CALL 0x004028ba
0067BE64  85 C0                     TEST EAX,EAX
0067BE66  74 3F                     JZ 0x0067bea7
0067BE68  50                        PUSH EAX
0067BE69  8D 45 F0                  LEA EAX,[EBP + -0x10]
0067BE6C  50                        PUSH EAX
0067BE6D  E8 50 99 D8 FF            CALL 0x004057c2
0067BE72  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
0067BE76  66 8B 55 F2               MOV DX,word ptr [EBP + -0xe]
0067BE7A  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
0067BE7E  66 89 4E 04               MOV word ptr [ESI + 0x4],CX
0067BE82  66 8B 4D F6               MOV CX,word ptr [EBP + -0xa]
0067BE86  66 89 56 06               MOV word ptr [ESI + 0x6],DX
0067BE8A  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
0067BE8E  66 89 46 08               MOV word ptr [ESI + 0x8],AX
0067BE92  66 8B 45 FA               MOV AX,word ptr [EBP + -0x6]
0067BE96  83 C4 08                  ADD ESP,0x8
0067BE99  66 89 4E 0A               MOV word ptr [ESI + 0xa],CX
0067BE9D  66 89 56 0C               MOV word ptr [ESI + 0xc],DX
0067BEA1  66 89 46 0E               MOV word ptr [ESI + 0xe],AX
0067BEA5  EB 07                     JMP 0x0067beae
LAB_0067bea7:
0067BEA7  57                        PUSH EDI
0067BEA8  53                        PUSH EBX
0067BEA9  E8 C2 4D 03 00            CALL 0x006b0c70
LAB_0067beae:
0067BEAE  4F                        DEC EDI
0067BEAF  79 84                     JNS 0x0067be35
0067BEB1  5E                        POP ESI
LAB_0067beb2:
0067BEB2  5F                        POP EDI
0067BEB3  5B                        POP EBX
0067BEB4  8B E5                     MOV ESP,EBP
0067BEB6  5D                        POP EBP
0067BEB7  C2 04 00                  RET 0x4
