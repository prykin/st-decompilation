FUN_005f04b0:
005F04B0  55                        PUSH EBP
005F04B1  8B EC                     MOV EBP,ESP
005F04B3  53                        PUSH EBX
005F04B4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005F04B7  56                        PUSH ESI
005F04B8  8D 45 08                  LEA EAX,[EBP + 0x8]
005F04BB  57                        PUSH EDI
005F04BC  8B F1                     MOV ESI,ECX
005F04BE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F04C4  50                        PUSH EAX
005F04C5  53                        PUSH EBX
005F04C6  E8 05 5E 0F 00            CALL 0x006e62d0
005F04CB  83 F8 FC                  CMP EAX,-0x4
005F04CE  0F 84 86 00 00 00         JZ 0x005f055a
005F04D4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F04D7  8B F9                     MOV EDI,ECX
005F04D9  8B 11                     MOV EDX,dword ptr [ECX]
005F04DB  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005F04DE  83 F8 1B                  CMP EAX,0x1b
005F04E1  74 0A                     JZ 0x005f04ed
005F04E3  83 F8 07                  CMP EAX,0x7
005F04E6  74 05                     JZ 0x005f04ed
005F04E8  83 F8 13                  CMP EAX,0x13
005F04EB  75 6D                     JNZ 0x005f055a
LAB_005f04ed:
005F04ED  C6 86 4E 02 00 00 01      MOV byte ptr [ESI + 0x24e],0x1
005F04F4  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005F04F7  0F BF 96 42 02 00 00      MOVSX EDX,word ptr [ESI + 0x242]
005F04FE  89 86 A3 02 00 00         MOV dword ptr [ESI + 0x2a3],EAX
005F0504  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
005F0508  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005F050B  66 89 8E AB 02 00 00      MOV word ptr [ESI + 0x2ab],CX
005F0512  0F BF 86 46 02 00 00      MOVSX EAX,word ptr [ESI + 0x246]
005F0519  0F BF 8E 44 02 00 00      MOVSX ECX,word ptr [ESI + 0x244]
005F0520  57                        PUSH EDI
005F0521  56                        PUSH ESI
005F0522  6A 00                     PUSH 0x0
005F0524  50                        PUSH EAX
005F0525  89 9E A7 02 00 00         MOV dword ptr [ESI + 0x2a7],EBX
005F052B  51                        PUSH ECX
005F052C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F0532  52                        PUSH EDX
005F0533  E8 89 49 E1 FF            CALL 0x00404ec1
005F0538  85 C0                     TEST EAX,EAX
005F053A  75 06                     JNZ 0x005f0542
005F053C  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005f0542:
005F0542  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F0545  C7 86 3A 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x23a],0x4
005F054F  3B D8                     CMP EBX,EAX
005F0551  74 07                     JZ 0x005f055a
005F0553  C6 86 4F 02 00 00 01      MOV byte ptr [ESI + 0x24f],0x1
LAB_005f055a:
005F055A  5F                        POP EDI
005F055B  5E                        POP ESI
005F055C  5B                        POP EBX
005F055D  5D                        POP EBP
005F055E  C2 04 00                  RET 0x4
