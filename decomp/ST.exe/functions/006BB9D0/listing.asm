FUN_006bb9d0:
006BB9D0  55                        PUSH EBP
006BB9D1  8B EC                     MOV EBP,ESP
006BB9D3  83 EC 40                  SUB ESP,0x40
006BB9D6  56                        PUSH ESI
006BB9D7  57                        PUSH EDI
006BB9D8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006BB9DB  33 F6                     XOR ESI,ESI
006BB9DD  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006BB9E0  25 00 11 00 00            AND EAX,0x1100
006BB9E5  3D 00 01 00 00            CMP EAX,0x100
006BB9EA  75 0A                     JNZ 0x006bb9f6
006BB9EC  5F                        POP EDI
006BB9ED  33 C0                     XOR EAX,EAX
006BB9EF  5E                        POP ESI
006BB9F0  8B E5                     MOV ESP,EBP
006BB9F2  5D                        POP EBP
006BB9F3  C2 24 00                  RET 0x24
LAB_006bb9f6:
006BB9F6  39 77 40                  CMP dword ptr [EDI + 0x40],ESI
006BB9F9  75 0A                     JNZ 0x006bba05
006BB9FB  5F                        POP EDI
006BB9FC  33 C0                     XOR EAX,EAX
006BB9FE  5E                        POP ESI
006BB9FF  8B E5                     MOV ESP,EBP
006BBA01  5D                        POP EBP
006BBA02  C2 24 00                  RET 0x24
LAB_006bba05:
006BBA05  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BBA08  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006BBA0B  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
006BBA0E  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006BBA11  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
006BBA14  53                        PUSH EBX
006BBA15  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006BBA18  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006BBA1B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BBA1E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006BBA21  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006BBA24  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006BBA27  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
006BBA2A  03 C3                     ADD EAX,EBX
006BBA2C  03 CA                     ADD ECX,EDX
006BBA2E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006BBA31  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006BBA34  03 C2                     ADD EAX,EDX
006BBA36  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006BBA39  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BBA3C  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006BBA3F  03 C8                     ADD ECX,EAX
006BBA41  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006BBA44  8D 4D F0                  LEA ECX,[EBP + -0x10]
006BBA47  8D 55 E0                  LEA EDX,[EBP + -0x20]
006BBA4A  51                        PUSH ECX
006BBA4B  8D 45 C0                  LEA EAX,[EBP + -0x40]
006BBA4E  52                        PUSH EDX
006BBA4F  50                        PUSH EAX
006BBA50  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006BBA53  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006BBA56  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006BBA59  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
006BBA5C  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006BBA62  85 C0                     TEST EAX,EAX
006BBA64  0F 84 85 00 00 00         JZ 0x006bbaef
006BBA6A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006BBA6D  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006BBA70  81 C9 00 00 00 01         OR ECX,0x1000000
006BBA76  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006BBA79  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006BBA7C  EB 03                     JMP 0x006bba81
LAB_006bba7e:
006BBA7E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006bba81:
006BBA81  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
006BBA84  6A 00                     PUSH 0x0
006BBA86  51                        PUSH ECX
006BBA87  8D 4D D0                  LEA ECX,[EBP + -0x30]
006BBA8A  8B 10                     MOV EDX,dword ptr [EAX]
006BBA8C  51                        PUSH ECX
006BBA8D  8D 4D C0                  LEA ECX,[EBP + -0x40]
006BBA90  53                        PUSH EBX
006BBA91  51                        PUSH ECX
006BBA92  50                        PUSH EAX
006BBA93  FF 52 14                  CALL dword ptr [EDX + 0x14]
006BBA96  8B F0                     MOV ESI,EAX
006BBA98  85 F6                     TEST ESI,ESI
006BBA9A  74 41                     JZ 0x006bbadd
006BBA9C  81 FE C2 01 76 88         CMP ESI,0x887601c2
006BBAA2  75 0E                     JNZ 0x006bbab2
006BBAA4  8B 13                     MOV EDX,dword ptr [EBX]
006BBAA6  53                        PUSH EBX
006BBAA7  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006BBAAA  57                        PUSH EDI
006BBAAB  E8 90 31 01 00            CALL 0x006cec40
006BBAB0  EB 1F                     JMP 0x006bbad1
LAB_006bbab2:
006BBAB2  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BBAB8  74 08                     JZ 0x006bbac2
006BBABA  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BBAC0  75 1B                     JNZ 0x006bbadd
LAB_006bbac2:
006BBAC2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BBAC5  85 C0                     TEST EAX,EAX
006BBAC7  75 14                     JNZ 0x006bbadd
006BBAC9  6A 02                     PUSH 0x2
006BBACB  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bbad1:
006BBAD1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BBAD4  40                        INC EAX
006BBAD5  83 F8 02                  CMP EAX,0x2
006BBAD8  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006BBADB  7C A1                     JL 0x006bba7e
LAB_006bbadd:
006BBADD  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BBAE3  74 08                     JZ 0x006bbaed
006BBAE5  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BBAEB  75 02                     JNZ 0x006bbaef
LAB_006bbaed:
006BBAED  33 F6                     XOR ESI,ESI
LAB_006bbaef:
006BBAEF  5B                        POP EBX
006BBAF0  8B C6                     MOV EAX,ESI
006BBAF2  5F                        POP EDI
006BBAF3  5E                        POP ESI
006BBAF4  8B E5                     MOV ESP,EBP
006BBAF6  5D                        POP EBP
006BBAF7  C2 24 00                  RET 0x24
