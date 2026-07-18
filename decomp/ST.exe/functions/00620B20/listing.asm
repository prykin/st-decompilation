FUN_00620b20:
00620B20  55                        PUSH EBP
00620B21  8B EC                     MOV EBP,ESP
00620B23  83 EC 0C                  SUB ESP,0xc
00620B26  8B 81 E9 00 00 00         MOV EAX,dword ptr [ECX + 0xe9]
00620B2C  53                        PUSH EBX
00620B2D  83 CB FF                  OR EBX,0xffffffff
00620B30  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620B33  85 C0                     TEST EAX,EAX
00620B35  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620B38  0F 84 BB 00 00 00         JZ 0x00620bf9
00620B3E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00620B41  48                        DEC EAX
00620B42  0F 88 B1 00 00 00         JS 0x00620bf9
00620B48  8B D0                     MOV EDX,EAX
00620B4A  56                        PUSH ESI
00620B4B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00620B4E  57                        PUSH EDI
00620B4F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00620B52  EB 03                     JMP 0x00620b57
LAB_00620b54:
00620B54  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00620b57:
00620B57  8B 89 E9 00 00 00         MOV ECX,dword ptr [ECX + 0xe9]
00620B5D  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00620B60  73 7F                     JNC 0x00620be1
00620B62  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00620B65  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00620B68  0F AF C2                  IMUL EAX,EDX
00620B6B  03 C7                     ADD EAX,EDI
00620B6D  85 C0                     TEST EAX,EAX
00620B6F  74 70                     JZ 0x00620be1
00620B71  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00620B74  8D 7A FD                  LEA EDI,[EDX + -0x3]
00620B77  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
00620B7A  7C 4D                     JL 0x00620bc9
00620B7C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00620B7F  83 C2 03                  ADD EDX,0x3
00620B82  3B FA                     CMP EDI,EDX
00620B84  7F 43                     JG 0x00620bc9
00620B86  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00620B89  8D 5A FD                  LEA EBX,[EDX + -0x3]
00620B8C  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00620B8F  7C 35                     JL 0x00620bc6
00620B91  8D 5A 03                  LEA EBX,[EDX + 0x3]
00620B94  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00620B97  3B D3                     CMP EDX,EBX
00620B99  7F 2B                     JG 0x00620bc6
00620B9B  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
00620B9E  8B 38                     MOV EDI,dword ptr [EAX]
00620BA0  8B CE                     MOV ECX,ESI
00620BA2  BB 01 00 00 00            MOV EBX,0x1
00620BA7  2B CF                     SUB ECX,EDI
00620BA9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620BAC  81 F9 94 11 00 00         CMP ECX,0x1194
00620BB2  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00620BB5  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
00620BB8  76 27                     JBE 0x00620be1
00620BBA  BB 02 00 00 00            MOV EBX,0x2
00620BBF  89 30                     MOV dword ptr [EAX],ESI
00620BC1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620BC4  EB 1B                     JMP 0x00620be1
LAB_00620bc6:
00620BC6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00620bc9:
00620BC9  8B 38                     MOV EDI,dword ptr [EAX]
00620BCB  8B D6                     MOV EDX,ESI
00620BCD  2B D7                     SUB EDX,EDI
00620BCF  81 FA 94 11 00 00         CMP EDX,0x1194
00620BD5  76 0A                     JBE 0x00620be1
00620BD7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00620BDA  50                        PUSH EAX
00620BDB  51                        PUSH ECX
00620BDC  E8 8F 00 09 00            CALL 0x006b0c70
LAB_00620be1:
00620BE1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00620BE4  4A                        DEC EDX
00620BE5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00620BE8  0F 89 66 FF FF FF         JNS 0x00620b54
00620BEE  5F                        POP EDI
00620BEF  8B C3                     MOV EAX,EBX
00620BF1  5E                        POP ESI
00620BF2  5B                        POP EBX
00620BF3  8B E5                     MOV ESP,EBP
00620BF5  5D                        POP EBP
00620BF6  C2 10 00                  RET 0x10
LAB_00620bf9:
00620BF9  8B C3                     MOV EAX,EBX
00620BFB  5B                        POP EBX
00620BFC  8B E5                     MOV ESP,EBP
00620BFE  5D                        POP EBP
00620BFF  C2 10 00                  RET 0x10
