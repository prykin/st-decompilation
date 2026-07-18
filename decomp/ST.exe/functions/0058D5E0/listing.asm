FUN_0058d5e0:
0058D5E0  55                        PUSH EBP
0058D5E1  8B EC                     MOV EBP,ESP
0058D5E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0058D5E6  53                        PUSH EBX
0058D5E7  57                        PUSH EDI
0058D5E8  33 FF                     XOR EDI,EDI
0058D5EA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058D5ED  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058D5F0  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0058D5F3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0058D5F6  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0058D5F9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058D5FC  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058D5FF  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0058D602  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0058D605  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0058D608  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058D60B  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058D60E  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0058D611  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0058D614  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0058D617  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058D61A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058D61D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0058D620  A1 20 17 81 00            MOV EAX,[0x00811720]
0058D625  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0058D628  8D 58 FF                  LEA EBX,[EAX + -0x1]
0058D62B  85 DB                     TEST EBX,EBX
0058D62D  7C 72                     JL 0x0058d6a1
0058D62F  56                        PUSH ESI
LAB_0058d630:
0058D630  8B 0D 1C 17 81 00         MOV ECX,dword ptr [0x0081171c]
0058D636  8B 34 99                  MOV ESI,dword ptr [ECX + EBX*0x4]
0058D639  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0058D63C  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0058D640  3B C1                     CMP EAX,ECX
0058D642  7C 53                     JL 0x0058d697
0058D644  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
0058D647  7F 4E                     JG 0x0058d697
0058D649  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0058D64D  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0058D650  7C 45                     JL 0x0058d697
0058D652  3B 45 14                  CMP EAX,dword ptr [EBP + 0x14]
0058D655  7F 40                     JG 0x0058d697
0058D657  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0058D65A  83 F8 01                  CMP EAX,0x1
0058D65D  75 1C                     JNZ 0x0058d67b
0058D65F  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0058D662  2D 0E 01 00 00            SUB EAX,0x10e
0058D667  74 05                     JZ 0x0058d66e
0058D669  83 E8 0A                  SUB EAX,0xa
0058D66C  75 1E                     JNZ 0x0058d68c
LAB_0058d66e:
0058D66E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0058D671  8B 16                     MOV EDX,dword ptr [ESI]
0058D673  50                        PUSH EAX
0058D674  8B CE                     MOV ECX,ESI
0058D676  FF 12                     CALL dword ptr [EDX]
0058D678  47                        INC EDI
0058D679  EB 11                     JMP 0x0058d68c
LAB_0058d67b:
0058D67B  85 C0                     TEST EAX,EAX
0058D67D  75 0D                     JNZ 0x0058d68c
0058D67F  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0058D682  83 E8 32                  SUB EAX,0x32
0058D685  74 05                     JZ 0x0058d68c
0058D687  83 E8 5A                  SUB EAX,0x5a
0058D68A  75 0B                     JNZ 0x0058d697
LAB_0058d68c:
0058D68C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0058D68F  8B 16                     MOV EDX,dword ptr [ESI]
0058D691  50                        PUSH EAX
0058D692  8B CE                     MOV ECX,ESI
0058D694  FF 12                     CALL dword ptr [EDX]
0058D696  47                        INC EDI
LAB_0058d697:
0058D697  4B                        DEC EBX
0058D698  79 96                     JNS 0x0058d630
0058D69A  8B C7                     MOV EAX,EDI
0058D69C  5E                        POP ESI
0058D69D  5F                        POP EDI
0058D69E  5B                        POP EBX
0058D69F  5D                        POP EBP
0058D6A0  C3                        RET
LAB_0058d6a1:
0058D6A1  8B C7                     MOV EAX,EDI
0058D6A3  5F                        POP EDI
0058D6A4  5B                        POP EBX
0058D6A5  5D                        POP EBP
0058D6A6  C3                        RET
