FUN_006a5130:
006A5130  55                        PUSH EBP
006A5131  8B EC                     MOV EBP,ESP
006A5133  6A FF                     PUSH -0x1
006A5135  68 50 D8 79 00            PUSH 0x79d850
006A513A  68 64 D9 72 00            PUSH 0x72d964
006A513F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006A5145  50                        PUSH EAX
006A5146  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006A514D  83 EC 0C                  SUB ESP,0xc
006A5150  53                        PUSH EBX
006A5151  56                        PUSH ESI
006A5152  57                        PUSH EDI
006A5153  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006A5156  B8 01 00 00 00            MOV EAX,0x1
006A515B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006A5162  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A5165  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006a5168:
006A5168  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A516B  8B D1                     MOV EDX,ECX
006A516D  49                        DEC ECX
006A516E  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006A5171  85 D2                     TEST EDX,EDX
006A5173  74 49                     JZ 0x006a51be
006A5175  8A 0E                     MOV CL,byte ptr [ESI]
006A5177  46                        INC ESI
006A5178  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006A517B  3A CB                     CMP CL,BL
006A517D  74 E9                     JZ 0x006a5168
006A517F  8D 46 FF                  LEA EAX,[ESI + -0x1]
006A5182  8B D3                     MOV EDX,EBX
006A5184  81 E2 FF 00 00 00         AND EDX,0xff
006A518A  52                        PUSH EDX
006A518B  33 C9                     XOR ECX,ECX
006A518D  8A 08                     MOV CL,byte ptr [EAX]
006A518F  51                        PUSH ECX
006A5190  50                        PUSH EAX
006A5191  68 B0 C6 7E 00            PUSH 0x7ec6b0
006A5196  6A 00                     PUSH 0x0
006A5198  6A 00                     PUSH 0x0
006A519A  6A 00                     PUSH 0x0
006A519C  6A 00                     PUSH 0x0
006A519E  E8 FD BD 08 00            CALL 0x00730fa0
006A51A3  83 C4 20                  ADD ESP,0x20
006A51A6  83 F8 01                  CMP EAX,0x1
006A51A9  75 01                     JNZ 0x006a51ac
006A51AB  CC                        INT3
LAB_006a51ac:
006A51AC  33 C0                     XOR EAX,EAX
006A51AE  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006A51B1  EB B5                     JMP 0x006a5168
LAB_006a51be:
006A51BE  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006A51C5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A51C8  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006A51CF  5F                        POP EDI
006A51D0  5E                        POP ESI
006A51D1  5B                        POP EBX
006A51D2  8B E5                     MOV ESP,EBP
006A51D4  5D                        POP EBP
006A51D5  C3                        RET
