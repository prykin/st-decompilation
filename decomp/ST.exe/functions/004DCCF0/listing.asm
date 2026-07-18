FUN_004dccf0:
004DCCF0  55                        PUSH EBP
004DCCF1  8B EC                     MOV EBP,ESP
004DCCF3  83 EC 44                  SUB ESP,0x44
004DCCF6  56                        PUSH ESI
004DCCF7  8B F1                     MOV ESI,ECX
004DCCF9  57                        PUSH EDI
004DCCFA  B9 0F 00 00 00            MOV ECX,0xf
004DCCFF  33 C0                     XOR EAX,EAX
004DCD01  8D 7D BC                  LEA EDI,[EBP + -0x44]
004DCD04  F3 AB                     STOSD.REP ES:EDI
004DCD06  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004DCD09  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004DCD0D  66 AB                     STOSW ES:EDI
004DCD0F  B8 01 00 00 00            MOV EAX,0x1
004DCD14  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004DCD17  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004DCD1D  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004DCD20  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004DCD23  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DCD26  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004DCD29  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004DCD2F  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004DCD32  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004DCD35  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
004DCD39  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004DCD3D  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
004DCD41  8B 96 B8 05 00 00         MOV EDX,dword ptr [ESI + 0x5b8]
004DCD47  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
004DCD4A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004DCD4D  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004DCD51  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004DCD54  8D 45 BC                  LEA EAX,[EBP + -0x44]
004DCD57  6A 00                     PUSH 0x0
004DCD59  8D 4D FC                  LEA ECX,[EBP + -0x4]
004DCD5C  50                        PUSH EAX
004DCD5D  51                        PUSH ECX
004DCD5E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DCD64  83 C2 4B                  ADD EDX,0x4b
004DCD67  6A 00                     PUSH 0x0
004DCD69  68 86 01 00 00            PUSH 0x186
004DCD6E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004DCD75  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
004DCD7C  C7 45 BC 86 01 00 00      MOV dword ptr [EBP + -0x44],0x186
004DCD83  C7 45 D0 07 00 00 00      MOV dword ptr [EBP + -0x30],0x7
004DCD8A  C7 45 F0 64 00 00 00      MOV dword ptr [EBP + -0x10],0x64
004DCD91  C7 45 EC 0F 00 00 00      MOV dword ptr [EBP + -0x14],0xf
004DCD98  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004DCD9B  E8 22 4E F2 FF            CALL 0x00401bc2
004DCDA0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004DCDA3  85 C0                     TEST EAX,EAX
004DCDA5  74 09                     JZ 0x004dcdb0
004DCDA7  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
004DCDAA  89 96 EC 04 00 00         MOV dword ptr [ESI + 0x4ec],EDX
LAB_004dcdb0:
004DCDB0  5F                        POP EDI
004DCDB1  33 C0                     XOR EAX,EAX
004DCDB3  5E                        POP ESI
004DCDB4  8B E5                     MOV ESP,EBP
004DCDB6  5D                        POP EBP
004DCDB7  C3                        RET
