FUN_004de410:
004DE410  55                        PUSH EBP
004DE411  8B EC                     MOV EBP,ESP
004DE413  83 EC 08                  SUB ESP,0x8
004DE416  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DE419  53                        PUSH EBX
004DE41A  33 D2                     XOR EDX,EDX
004DE41C  56                        PUSH ESI
004DE41D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DE420  57                        PUSH EDI
004DE421  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004DE424  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004DE427  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
004DE42A  C1 E1 04                  SHL ECX,0x4
004DE42D  03 C8                     ADD ECX,EAX
004DE42F  8D 04 4D EE 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57ee]
004DE436  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DE439  8B 08                     MOV ECX,dword ptr [EAX]
004DE43B  85 C9                     TEST ECX,ECX
004DE43D  74 70                     JZ 0x004de4af
004DE43F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DE442  33 FF                     XOR EDI,EDI
004DE444  85 C0                     TEST EAX,EAX
004DE446  7E 67                     JLE 0x004de4af
004DE448  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_004de44b:
004DE44B  8D 55 08                  LEA EDX,[EBP + 0x8]
004DE44E  52                        PUSH EDX
004DE44F  8B D7                     MOV EDX,EDI
004DE451  E8 1A E8 1C 00            CALL 0x006acc70
004DE456  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DE459  53                        PUSH EBX
004DE45A  E8 EF 46 F2 FF            CALL 0x00402b4e
004DE45F  8B F0                     MOV ESI,EAX
004DE461  85 F6                     TEST ESI,ESI
004DE463  74 1B                     JZ 0x004de480
004DE465  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DE468  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004DE46B  8B D1                     MOV EDX,ECX
004DE46D  2B D0                     SUB EDX,EAX
004DE46F  3B F2                     CMP ESI,EDX
004DE471  7D 24                     JGE 0x004de497
004DE473  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DE476  56                        PUSH ESI
004DE477  53                        PUSH EBX
004DE478  E8 E4 33 F2 FF            CALL 0x00401861
004DE47D  01 75 FC                  ADD dword ptr [EBP + -0x4],ESI
LAB_004de480:
004DE480  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004DE483  47                        INC EDI
004DE484  8B 08                     MOV ECX,dword ptr [EAX]
004DE486  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DE489  7C C0                     JL 0x004de44b
004DE48B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004DE48E  5F                        POP EDI
004DE48F  5E                        POP ESI
004DE490  5B                        POP EBX
004DE491  8B E5                     MOV ESP,EBP
004DE493  5D                        POP EBP
004DE494  C2 0C 00                  RET 0xc
LAB_004de497:
004DE497  2B C8                     SUB ECX,EAX
004DE499  51                        PUSH ECX
004DE49A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DE49D  53                        PUSH EBX
004DE49E  E8 BE 33 F2 FF            CALL 0x00401861
004DE4A3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004DE4A6  5F                        POP EDI
004DE4A7  5E                        POP ESI
004DE4A8  5B                        POP EBX
004DE4A9  8B E5                     MOV ESP,EBP
004DE4AB  5D                        POP EBP
004DE4AC  C2 0C 00                  RET 0xc
LAB_004de4af:
004DE4AF  5F                        POP EDI
004DE4B0  5E                        POP ESI
004DE4B1  8B C2                     MOV EAX,EDX
004DE4B3  5B                        POP EBX
004DE4B4  8B E5                     MOV ESP,EBP
004DE4B6  5D                        POP EBP
004DE4B7  C2 0C 00                  RET 0xc
