FUN_004f9480:
004F9480  55                        PUSH EBP
004F9481  8B EC                     MOV EBP,ESP
004F9483  83 EC 4C                  SUB ESP,0x4c
004F9486  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F948B  56                        PUSH ESI
004F948C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F948F  57                        PUSH EDI
004F9490  8D 55 B8                  LEA EDX,[EBP + -0x48]
004F9493  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004F9496  6A 00                     PUSH 0x0
004F9498  52                        PUSH EDX
004F9499  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004F949C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F94A2  E8 49 43 23 00            CALL 0x0072d7f0
004F94A7  8B F0                     MOV ESI,EAX
004F94A9  83 C4 08                  ADD ESP,0x8
004F94AC  85 F6                     TEST ESI,ESI
004F94AE  75 76                     JNZ 0x004f9526
004F94B0  6A 0A                     PUSH 0xa
004F94B2  6A 0A                     PUSH 0xa
004F94B4  50                        PUSH EAX
004F94B5  E8 36 C0 1B 00            CALL 0x006b54f0
004F94BA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F94BD  8B 0D C7 C4 80 00         MOV ECX,dword ptr [0x0080c4c7]
004F94C3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F94C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F94C9  85 C0                     TEST EAX,EAX
004F94CB  8D 3C 06                  LEA EDI,[ESI + EAX*0x1]
004F94CE  7F 03                     JG 0x004f94d3
004F94D0  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
LAB_004f94d3:
004F94D3  3B F7                     CMP ESI,EDI
004F94D5  7D 2E                     JGE 0x004f9505
004F94D7  EB 06                     JMP 0x004f94df
LAB_004f94d9:
004F94D9  8B 0D C7 C4 80 00         MOV ECX,dword ptr [0x0080c4c7]
LAB_004f94df:
004F94DF  3B 71 08                  CMP ESI,dword ptr [ECX + 0x8]
004F94E2  7D 08                     JGE 0x004f94ec
004F94E4  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
004F94E7  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
004F94EA  EB 02                     JMP 0x004f94ee
LAB_004f94ec:
004F94EC  33 C0                     XOR EAX,EAX
LAB_004f94ee:
004F94EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F94F1  68 1C 22 7C 00            PUSH 0x7c221c
004F94F6  50                        PUSH EAX
004F94F7  51                        PUSH ECX
004F94F8  E8 A3 80 F0 FF            CALL 0x004015a0
004F94FD  83 C4 0C                  ADD ESP,0xc
004F9500  46                        INC ESI
004F9501  3B F7                     CMP ESI,EDI
004F9503  7C D4                     JL 0x004f94d9
LAB_004f9505:
004F9505  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F9508  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F950B  8D 45 FC                  LEA EAX,[EBP + -0x4]
004F950E  52                        PUSH EDX
004F950F  50                        PUSH EAX
004F9510  E8 06 9C F0 FF            CALL 0x0040311b
004F9515  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004F9518  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F951E  5F                        POP EDI
004F951F  5E                        POP ESI
004F9520  8B E5                     MOV ESP,EBP
004F9522  5D                        POP EBP
004F9523  C2 0C 00                  RET 0xc
LAB_004f9526:
004F9526  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004F9529  68 F0 21 7C 00            PUSH 0x7c21f0
004F952E  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F9533  56                        PUSH ESI
004F9534  6A 00                     PUSH 0x0
004F9536  68 42 03 00 00            PUSH 0x342
004F953B  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9540  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F9546  E8 85 3F 1B 00            CALL 0x006ad4d0
004F954B  83 C4 18                  ADD ESP,0x18
004F954E  85 C0                     TEST EAX,EAX
004F9550  74 01                     JZ 0x004f9553
004F9552  CC                        INT3
LAB_004f9553:
004F9553  68 42 03 00 00            PUSH 0x342
004F9558  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F955D  6A 00                     PUSH 0x0
004F955F  56                        PUSH ESI
004F9560  E8 DB C8 1A 00            CALL 0x006a5e40
004F9565  5F                        POP EDI
004F9566  5E                        POP ESI
004F9567  8B E5                     MOV ESP,EBP
004F9569  5D                        POP EBP
004F956A  C2 0C 00                  RET 0xc
