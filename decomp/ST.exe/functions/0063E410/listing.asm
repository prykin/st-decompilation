FUN_0063e410:
0063E410  55                        PUSH EBP
0063E411  8B EC                     MOV EBP,ESP
0063E413  83 EC 10                  SUB ESP,0x10
0063E416  53                        PUSH EBX
0063E417  56                        PUSH ESI
0063E418  57                        PUSH EDI
0063E419  8B F9                     MOV EDI,ECX
0063E41B  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063E421  85 C0                     TEST EAX,EAX
0063E423  0F 84 B0 01 00 00         JZ 0x0063e5d9
0063E429  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0063E42C  8B 87 C0 02 00 00         MOV EAX,dword ptr [EDI + 0x2c0]
0063E432  85 C0                     TEST EAX,EAX
0063E434  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0063E437  7E 19                     JLE 0x0063e452
0063E439  83 F8 4B                  CMP EAX,0x4b
0063E43C  7D 14                     JGE 0x0063e452
0063E43E  8B 8F BC 02 00 00         MOV ECX,dword ptr [EDI + 0x2bc]
0063E444  48                        DEC EAX
0063E445  0F AF C1                  IMUL EAX,ECX
0063E448  03 C8                     ADD ECX,EAX
0063E44A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0063E44D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0063E450  EB 19                     JMP 0x0063e46b
LAB_0063e452:
0063E452  83 C0 05                  ADD EAX,0x5
0063E455  B9 0A 00 00 00            MOV ECX,0xa
0063E45A  99                        CDQ
0063E45B  F7 F9                     IDIV ECX
0063E45D  8B 87 BC 02 00 00         MOV EAX,dword ptr [EDI + 0x2bc]
0063E463  03 C2                     ADD EAX,EDX
0063E465  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063E468  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0063e46b:
0063E46B  33 DB                     XOR EBX,EBX
0063E46D  85 F6                     TEST ESI,ESI
0063E46F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0063E472  0F 8E 61 01 00 00         JLE 0x0063e5d9
LAB_0063e478:
0063E478  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063E47E  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0063E481  0F 83 43 01 00 00         JNC 0x0063e5ca
0063E487  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063E48A  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0063E48D  0F AF F3                  IMUL ESI,EBX
0063E490  03 F1                     ADD ESI,ECX
0063E492  85 F6                     TEST ESI,ESI
0063E494  0F 84 30 01 00 00         JZ 0x0063e5ca
0063E49A  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0063E49D  85 D2                     TEST EDX,EDX
0063E49F  0F 8C 25 01 00 00         JL 0x0063e5ca
0063E4A5  83 7E 04 01               CMP dword ptr [ESI + 0x4],0x1
0063E4A9  0F 85 8A 00 00 00         JNZ 0x0063e539
0063E4AF  3B 5D F8                  CMP EBX,dword ptr [EBP + -0x8]
0063E4B2  0F 8C 12 01 00 00         JL 0x0063e5ca
0063E4B8  3B 5D F4                  CMP EBX,dword ptr [EBP + -0xc]
0063E4BB  0F 8D 09 01 00 00         JGE 0x0063e5ca
0063E4C1  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0063E4C4  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
0063E4CB  8B 0C 85 98 1F 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d1f98]
0063E4D2  51                        PUSH ECX
0063E4D3  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063E4D9  6A 00                     PUSH 0x0
0063E4DB  52                        PUSH EDX
0063E4DC  E8 8F BD 0A 00            CALL 0x006ea270
0063E4E1  D9 46 10                  FLD float ptr [ESI + 0x10]
0063E4E4  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063E4EA  51                        PUSH ECX
0063E4EB  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0063E4EE  D9 1C 24                  FSTP float ptr [ESP]
0063E4F1  DB 46 0C                  FILD dword ptr [ESI + 0xc]
0063E4F4  51                        PUSH ECX
0063E4F5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063E4FB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063E501  D9 1C 24                  FSTP float ptr [ESP]
0063E504  DB 46 08                  FILD dword ptr [ESI + 0x8]
0063E507  51                        PUSH ECX
0063E508  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063E50E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063E514  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063E51A  D9 1C 24                  FSTP float ptr [ESP]
0063E51D  52                        PUSH EDX
0063E51E  E8 3D C4 0A 00            CALL 0x006ea960
0063E523  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
0063E526  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063E52C  6A 00                     PUSH 0x0
0063E52E  50                        PUSH EAX
0063E52F  E8 6C C5 0A 00            CALL 0x006eaaa0
0063E534  E9 91 00 00 00            JMP 0x0063e5ca
LAB_0063e539:
0063E539  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063E53F  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0063E545  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063E548  8B D8                     MOV EBX,EAX
0063E54A  2B D9                     SUB EBX,ECX
0063E54C  83 FB 02                  CMP EBX,0x2
0063E54F  73 04                     JNC 0x0063e555
0063E551  3B C1                     CMP EAX,ECX
0063E553  75 72                     JNZ 0x0063e5c7
LAB_0063e555:
0063E555  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0063E558  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0063E55B  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0063E55E  48                        DEC EAX
0063E55F  3B C8                     CMP ECX,EAX
0063E561  7C 05                     JL 0x0063e568
0063E563  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0063E566  EB 04                     JMP 0x0063e56c
LAB_0063e568:
0063E568  41                        INC ECX
0063E569  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
LAB_0063e56c:
0063E56C  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0063E56F  8B 0C 85 98 1F 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d1f98]
0063E576  51                        PUSH ECX
0063E577  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063E57D  6A 00                     PUSH 0x0
0063E57F  52                        PUSH EDX
0063E580  E8 EB BC 0A 00            CALL 0x006ea270
0063E585  D9 46 10                  FLD float ptr [ESI + 0x10]
0063E588  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063E58E  51                        PUSH ECX
0063E58F  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0063E592  D9 1C 24                  FSTP float ptr [ESP]
0063E595  DB 46 0C                  FILD dword ptr [ESI + 0xc]
0063E598  51                        PUSH ECX
0063E599  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063E59F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063E5A5  D9 1C 24                  FSTP float ptr [ESP]
0063E5A8  DB 46 08                  FILD dword ptr [ESI + 0x8]
0063E5AB  51                        PUSH ECX
0063E5AC  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063E5B2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063E5B8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063E5BE  D9 1C 24                  FSTP float ptr [ESP]
0063E5C1  52                        PUSH EDX
0063E5C2  E8 99 C3 0A 00            CALL 0x006ea960
LAB_0063e5c7:
0063E5C7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0063e5ca:
0063E5CA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063E5CD  43                        INC EBX
0063E5CE  3B D8                     CMP EBX,EAX
0063E5D0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0063E5D3  0F 8C 9F FE FF FF         JL 0x0063e478
LAB_0063e5d9:
0063E5D9  5F                        POP EDI
0063E5DA  5E                        POP ESI
0063E5DB  5B                        POP EBX
0063E5DC  8B E5                     MOV ESP,EBP
0063E5DE  5D                        POP EBP
0063E5DF  C3                        RET
