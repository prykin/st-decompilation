STGroupBoatC::sub_0049A500:
0049A500  55                        PUSH EBP
0049A501  8B EC                     MOV EBP,ESP
0049A503  83 EC 1C                  SUB ESP,0x1c
0049A506  56                        PUSH ESI
0049A507  8B F1                     MOV ESI,ECX
0049A509  33 D2                     XOR EDX,EDX
0049A50B  57                        PUSH EDI
0049A50C  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
0049A50F  66 39 56 27               CMP word ptr [ESI + 0x27],DX
0049A513  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0049A516  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0049A519  0F 86 B8 00 00 00         JBE 0x0049a5d7
0049A51F  53                        PUSH EBX
0049A520  33 DB                     XOR EBX,EBX
0049A522  33 FF                     XOR EDI,EDI
0049A524  3B C2                     CMP EAX,EDX
0049A526  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0049A529  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0049A52C  76 63                     JBE 0x0049a591
LAB_0049a52e:
0049A52E  8D 4D F4                  LEA ECX,[EBP + -0xc]
0049A531  51                        PUSH ECX
0049A532  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049A535  E8 36 27 21 00            CALL 0x006acc70
0049A53A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A53D  66 3D FF FF               CMP AX,0xffff
0049A541  74 3A                     JZ 0x0049a57d
0049A543  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0049A546  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A54C  6A 01                     PUSH 0x1
0049A54E  50                        PUSH EAX
0049A54F  52                        PUSH EDX
0049A550  E8 65 83 F6 FF            CALL 0x004028ba
0049A555  8D 4D E8                  LEA ECX,[EBP + -0x18]
0049A558  8D 55 EC                  LEA EDX,[EBP + -0x14]
0049A55B  51                        PUSH ECX
0049A55C  8D 4D F0                  LEA ECX,[EBP + -0x10]
0049A55F  52                        PUSH EDX
0049A560  51                        PUSH ECX
0049A561  8B C8                     MOV ECX,EAX
0049A563  E8 5D 73 F6 FF            CALL 0x004018c5
0049A568  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0049A56B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0049A56E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049A571  03 FA                     ADD EDI,EDX
0049A573  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0049A576  03 D9                     ADD EBX,ECX
0049A578  03 C2                     ADD EAX,EDX
0049A57A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0049a57d:
0049A57D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049A580  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049A583  42                        INC EDX
0049A584  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0049A587  81 E2 FF FF 00 00         AND EDX,0xffff
0049A58D  3B D0                     CMP EDX,EAX
0049A58F  72 9D                     JC 0x0049a52e
LAB_0049a591:
0049A591  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0049A594  85 C9                     TEST ECX,ECX
0049A596  74 11                     JZ 0x0049a5a9
0049A598  33 D2                     XOR EDX,EDX
0049A59A  66 8B 56 27               MOV DX,word ptr [ESI + 0x27]
0049A59E  0F BF C7                  MOVSX EAX,DI
0049A5A1  8B FA                     MOV EDI,EDX
0049A5A3  99                        CDQ
0049A5A4  F7 FF                     IDIV EDI
0049A5A6  66 89 01                  MOV word ptr [ECX],AX
LAB_0049a5a9:
0049A5A9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0049A5AC  85 C9                     TEST ECX,ECX
0049A5AE  74 0F                     JZ 0x0049a5bf
0049A5B0  0F BF C3                  MOVSX EAX,BX
0049A5B3  33 FF                     XOR EDI,EDI
0049A5B5  66 8B 7E 27               MOV DI,word ptr [ESI + 0x27]
0049A5B9  99                        CDQ
0049A5BA  F7 FF                     IDIV EDI
0049A5BC  66 89 01                  MOV word ptr [ECX],AX
LAB_0049a5bf:
0049A5BF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0049A5C2  5B                        POP EBX
0049A5C3  85 C9                     TEST ECX,ECX
0049A5C5  74 10                     JZ 0x0049a5d7
0049A5C7  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0049A5CB  33 FF                     XOR EDI,EDI
0049A5CD  66 8B 7E 27               MOV DI,word ptr [ESI + 0x27]
0049A5D1  99                        CDQ
0049A5D2  F7 FF                     IDIV EDI
0049A5D4  66 89 01                  MOV word ptr [ECX],AX
LAB_0049a5d7:
0049A5D7  5F                        POP EDI
0049A5D8  5E                        POP ESI
0049A5D9  8B E5                     MOV ESP,EBP
0049A5DB  5D                        POP EBP
0049A5DC  C2 0C 00                  RET 0xc
