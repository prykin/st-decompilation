FUN_004dfb90:
004DFB90  55                        PUSH EBP
004DFB91  8B EC                     MOV EBP,ESP
004DFB93  51                        PUSH ECX
004DFB94  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DFB97  53                        PUSH EBX
004DFB98  33 DB                     XOR EBX,EBX
004DFB9A  56                        PUSH ESI
004DFB9B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DFB9E  57                        PUSH EDI
004DFB9F  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFBA2  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFBA5  C1 E1 04                  SHL ECX,0x4
004DFBA8  03 C8                     ADD ECX,EAX
004DFBAA  8D 04 4D F2 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57f2]
004DFBB1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DFBB4  8B 08                     MOV ECX,dword ptr [EAX]
004DFBB6  3B CB                     CMP ECX,EBX
004DFBB8  74 5D                     JZ 0x004dfc17
004DFBBA  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DFBBD  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
004DFBC0  3B C3                     CMP EAX,EBX
004DFBC2  7E 53                     JLE 0x004dfc17
004DFBC4  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_004dfbc7:
004DFBC7  8D 55 10                  LEA EDX,[EBP + 0x10]
004DFBCA  52                        PUSH EDX
004DFBCB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DFBCE  E8 9D D0 1C 00            CALL 0x006acc70
004DFBD3  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004DFBD6  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004DFBDC  85 C9                     TEST ECX,ECX
004DFBDE  74 26                     JZ 0x004dfc06
004DFBE0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DFBE3  8B D0                     MOV EDX,EAX
004DFBE5  2B D3                     SUB EDX,EBX
004DFBE7  0F AF D7                  IMUL EDX,EDI
004DFBEA  3B CA                     CMP ECX,EDX
004DFBEC  7D 34                     JGE 0x004dfc22
004DFBEE  8B C1                     MOV EAX,ECX
004DFBF0  99                        CDQ
004DFBF1  F7 FF                     IDIV EDI
004DFBF3  0F AF C7                  IMUL EAX,EDI
004DFBF6  85 C0                     TEST EAX,EAX
004DFBF8  74 0C                     JZ 0x004dfc06
004DFBFA  8B D1                     MOV EDX,ECX
004DFBFC  2B D0                     SUB EDX,EAX
004DFBFE  03 D9                     ADD EBX,ECX
004DFC00  89 96 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDX
LAB_004dfc06:
004DFC06  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DFC09  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DFC0C  40                        INC EAX
004DFC0D  8B 09                     MOV ECX,dword ptr [ECX]
004DFC0F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004DFC12  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
004DFC15  7C B0                     JL 0x004dfbc7
LAB_004dfc17:
004DFC17  5F                        POP EDI
004DFC18  8B C3                     MOV EAX,EBX
004DFC1A  5E                        POP ESI
004DFC1B  5B                        POP EBX
004DFC1C  8B E5                     MOV ESP,EBP
004DFC1E  5D                        POP EBP
004DFC1F  C2 0C 00                  RET 0xc
LAB_004dfc22:
004DFC22  8B D0                     MOV EDX,EAX
004DFC24  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004DFC2A  2B D3                     SUB EDX,EBX
004DFC2C  0F AF D7                  IMUL EDX,EDI
004DFC2F  2B CA                     SUB ECX,EDX
004DFC31  5F                        POP EDI
004DFC32  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
004DFC38  5E                        POP ESI
004DFC39  5B                        POP EBX
004DFC3A  8B E5                     MOV ESP,EBP
004DFC3C  5D                        POP EBP
004DFC3D  C2 0C 00                  RET 0xc
