FUN_006b9b40:
006B9B40  55                        PUSH EBP
006B9B41  8B EC                     MOV EBP,ESP
006B9B43  81 EC F8 07 00 00         SUB ESP,0x7f8
006B9B49  53                        PUSH EBX
006B9B4A  56                        PUSH ESI
006B9B4B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B9B4E  57                        PUSH EDI
006B9B4F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B9B52  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
006B9B55  A8 01                     TEST AL,0x1
006B9B57  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006B9B5A  74 33                     JZ 0x006b9b8f
006B9B5C  A9 00 00 00 04            TEST EAX,0x4000000
006B9B61  74 0D                     JZ 0x006b9b70
006B9B63  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006B9B69  50                        PUSH EAX
006B9B6A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b9b70:
006B9B70  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B9B73  50                        PUSH EAX
006B9B74  8B 08                     MOV ECX,dword ptr [EAX]
006B9B76  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
006B9B79  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B9B80  74 0D                     JZ 0x006b9b8f
006B9B82  8D 96 F0 04 00 00         LEA EDX,[ESI + 0x4f0]
006B9B88  52                        PUSH EDX
006B9B89  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b9b8f:
006B9B8F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006B9B92  F6 C3 40                  TEST BL,0x40
006B9B95  74 06                     JZ 0x006b9b9d
006B9B97  81 CB 01 00 00 02         OR EBX,0x2000001
LAB_006b9b9d:
006B9B9D  F6 C3 01                  TEST BL,0x1
006B9BA0  74 23                     JZ 0x006b9bc5
006B9BA2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B9BA5  85 C0                     TEST EAX,EAX
006B9BA7  74 1C                     JZ 0x006b9bc5
006B9BA9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B9BAC  85 C0                     TEST EAX,EAX
006B9BAE  74 15                     JZ 0x006b9bc5
006B9BB0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B9BB3  85 C0                     TEST EAX,EAX
006B9BB5  74 0E                     JZ 0x006b9bc5
006B9BB7  81 E3 F7 FF FF DF         AND EBX,0xdffffff7
006B9BBD  83 CB 10                  OR EBX,0x10
006B9BC0  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006B9BC3  EB 19                     JMP 0x006b9bde
LAB_006b9bc5:
006B9BC5  81 E3 BE FF FF FD         AND EBX,0xfdffffbe
006B9BCB  F6 C3 10                  TEST BL,0x10
006B9BCE  75 05                     JNZ 0x006b9bd5
006B9BD0  83 CB 08                  OR EBX,0x8
006B9BD3  EB 06                     JMP 0x006b9bdb
LAB_006b9bd5:
006B9BD5  81 E3 FF FF FF DF         AND EBX,0xdfffffff
LAB_006b9bdb:
006B9BDB  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
LAB_006b9bde:
006B9BDE  F7 C3 00 00 00 04         TEST EBX,0x4000000
006B9BE4  74 0D                     JZ 0x006b9bf3
006B9BE6  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006B9BEC  50                        PUSH EAX
006B9BED  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b9bf3:
006B9BF3  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B9BF6  8B D3                     MOV EDX,EBX
006B9BF8  81 E2 FF FF FF C0         AND EDX,0xc0ffffff
006B9BFE  8B 08                     MOV ECX,dword ptr [EAX]
006B9C00  52                        PUSH EDX
006B9C01  57                        PUSH EDI
006B9C02  50                        PUSH EAX
006B9C03  FF 51 50                  CALL dword ptr [ECX + 0x50]
006B9C06  8B F8                     MOV EDI,EAX
006B9C08  85 FF                     TEST EDI,EDI
006B9C0A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9C0D  0F 85 7D 08 00 00         JNZ 0x006ba490
006B9C13  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
006B9C16  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
006B9C19  F7 C3 01 00 00 08         TEST EBX,0x8000001
006B9C1F  74 3D                     JZ 0x006b9c5e
006B9C21  39 7D 10                  CMP dword ptr [EBP + 0x10],EDI
006B9C24  74 38                     JZ 0x006b9c5e
006B9C26  39 7D 14                  CMP dword ptr [EBP + 0x14],EDI
006B9C29  74 33                     JZ 0x006b9c5e
006B9C2B  39 7D 18                  CMP dword ptr [EBP + 0x18],EDI
006B9C2E  74 2E                     JZ 0x006b9c5e
006B9C30  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B9C33  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B9C36  57                        PUSH EDI
006B9C37  57                        PUSH EDI
006B9C38  8B 08                     MOV ECX,dword ptr [EAX]
006B9C3A  52                        PUSH EDX
006B9C3B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B9C3E  52                        PUSH EDX
006B9C3F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B9C42  52                        PUSH EDX
006B9C43  50                        PUSH EAX
006B9C44  FF 51 54                  CALL dword ptr [ECX + 0x54]
006B9C47  8B F8                     MOV EDI,EAX
006B9C49  85 FF                     TEST EDI,EDI
006B9C4B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9C4E  74 0C                     JZ 0x006b9c5c
006B9C50  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
006B9C57  E9 34 08 00 00            JMP 0x006ba490
LAB_006b9c5c:
006B9C5C  33 FF                     XOR EDI,EDI
LAB_006b9c5e:
006B9C5E  8B 06                     MOV EAX,dword ptr [ESI]
006B9C60  3B C7                     CMP EAX,EDI
006B9C62  74 0D                     JZ 0x006b9c71
006B9C64  8B 1D 78 BA 85 00         MOV EBX,dword ptr [0x0085ba78]
006B9C6A  50                        PUSH EAX
006B9C6B  FF D3                     CALL EBX
006B9C6D  89 3E                     MOV dword ptr [ESI],EDI
006B9C6F  EB 06                     JMP 0x006b9c77
LAB_006b9c71:
006B9C71  8B 1D 78 BA 85 00         MOV EBX,dword ptr [0x0085ba78]
LAB_006b9c77:
006B9C77  8B 86 B4 04 00 00         MOV EAX,dword ptr [ESI + 0x4b4]
006B9C7D  3B C7                     CMP EAX,EDI
006B9C7F  74 09                     JZ 0x006b9c8a
006B9C81  50                        PUSH EAX
006B9C82  FF D3                     CALL EBX
006B9C84  89 BE B4 04 00 00         MOV dword ptr [ESI + 0x4b4],EDI
LAB_006b9c8a:
006B9C8A  8B 86 94 04 00 00         MOV EAX,dword ptr [ESI + 0x494]
006B9C90  3B C7                     CMP EAX,EDI
006B9C92  74 09                     JZ 0x006b9c9d
006B9C94  50                        PUSH EAX
006B9C95  FF D3                     CALL EBX
006B9C97  89 BE 94 04 00 00         MOV dword ptr [ESI + 0x494],EDI
LAB_006b9c9d:
006B9C9D  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006B9CA0  3B C7                     CMP EAX,EDI
006B9CA2  74 09                     JZ 0x006b9cad
006B9CA4  8B 08                     MOV ECX,dword ptr [EAX]
006B9CA6  50                        PUSH EAX
006B9CA7  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B9CAA  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
LAB_006b9cad:
006B9CAD  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006B9CB0  3B C7                     CMP EAX,EDI
006B9CB2  74 09                     JZ 0x006b9cbd
006B9CB4  8B 10                     MOV EDX,dword ptr [EAX]
006B9CB6  50                        PUSH EAX
006B9CB7  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B9CBA  89 7E 44                  MOV dword ptr [ESI + 0x44],EDI
LAB_006b9cbd:
006B9CBD  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
006B9CC0  3B C7                     CMP EAX,EDI
006B9CC2  74 09                     JZ 0x006b9ccd
006B9CC4  8B 08                     MOV ECX,dword ptr [EAX]
006B9CC6  50                        PUSH EAX
006B9CC7  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B9CCA  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
LAB_006b9ccd:
006B9CCD  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006B9CD0  3B C7                     CMP EAX,EDI
006B9CD2  74 09                     JZ 0x006b9cdd
006B9CD4  8B 10                     MOV EDX,dword ptr [EAX]
006B9CD6  50                        PUSH EAX
006B9CD7  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B9CDA  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
LAB_006b9cdd:
006B9CDD  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006B9CE0  3B C7                     CMP EAX,EDI
006B9CE2  74 09                     JZ 0x006b9ced
006B9CE4  8B 08                     MOV ECX,dword ptr [EAX]
006B9CE6  50                        PUSH EAX
006B9CE7  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B9CEA  89 7E 38                  MOV dword ptr [ESI + 0x38],EDI
LAB_006b9ced:
006B9CED  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006B9CF0  8D 5E 34                  LEA EBX,[ESI + 0x34]
006B9CF3  85 C0                     TEST EAX,EAX
006B9CF5  74 0C                     JZ 0x006b9d03
006B9CF7  8B 10                     MOV EDX,dword ptr [EAX]
006B9CF9  50                        PUSH EAX
006B9CFA  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B9CFD  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
LAB_006b9d03:
006B9D03  8D 86 C0 04 00 00         LEA EAX,[ESI + 0x4c0]
006B9D09  50                        PUSH EAX
006B9D0A  E8 51 13 FF FF            CALL 0x006ab060
006B9D0F  8D 8E DC 04 00 00         LEA ECX,[ESI + 0x4dc]
006B9D15  51                        PUSH ECX
006B9D16  E8 45 13 FF FF            CALL 0x006ab060
006B9D1B  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
006B9D21  85 C0                     TEST EAX,EAX
006B9D23  74 07                     JZ 0x006b9d2c
006B9D25  50                        PUSH EAX
006B9D26  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
LAB_006b9d2c:
006B9D2C  B8 7C 01 00 00            MOV EAX,0x17c
006B9D31  8D 8D 0C FC FF FF         LEA ECX,[EBP + 0xfffffc0c]
006B9D37  89 85 88 FD FF FF         MOV dword ptr [EBP + 0xfffffd88],EAX
006B9D3D  89 85 0C FC FF FF         MOV dword ptr [EBP + 0xfffffc0c],EAX
006B9D43  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B9D46  51                        PUSH ECX
006B9D47  8D 8D 88 FD FF FF         LEA ECX,[EBP + 0xfffffd88]
006B9D4D  8B 10                     MOV EDX,dword ptr [EAX]
006B9D4F  51                        PUSH ECX
006B9D50  50                        PUSH EAX
006B9D51  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006B9D54  F7 85 90 FD FF FF 00 00 02 00  TEST dword ptr [EBP + 0xfffffd90],0x20000
006B9D5E  74 09                     JZ 0x006b9d69
006B9D60  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B9D63  80 CC 04                  OR AH,0x4
006B9D66  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006b9d69:
006B9D69  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B9D6C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B9D6F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006B9D72  B9 1F 00 00 00            MOV ECX,0x1f
006B9D77  33 C0                     XOR EAX,EAX
006B9D79  8D BD 58 FF FF FF         LEA EDI,[EBP + 0xffffff58]
006B9D7F  F3 AB                     STOSD.REP ES:EDI
006B9D81  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B9D84  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006B9D87  A9 00 00 00 02            TEST EAX,0x2000000
006B9D8C  C7 85 58 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x7c
006B9D96  C7 85 5C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff5c],0x1
006B9DA0  C7 45 C0 00 02 00 00      MOV dword ptr [EBP + -0x40],0x200
006B9DA7  0F 84 28 01 00 00         JZ 0x006b9ed5
006B9DAD  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B9DB0  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B9DB3  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
006B9DB6  6A 00                     PUSH 0x0
006B9DB8  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
006B9DBE  C7 85 5C FF FF FF 21 00 00 00  MOV dword ptr [EBP + 0xffffff5c],0x21
006B9DC8  C7 85 6C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x1
006B9DD2  C7 45 C0 18 02 00 00      MOV dword ptr [EBP + -0x40],0x218
006B9DD9  8B 10                     MOV EDX,dword ptr [EAX]
006B9DDB  53                        PUSH EBX
006B9DDC  51                        PUSH ECX
006B9DDD  50                        PUSH EAX
006B9DDE  FF 52 18                  CALL dword ptr [EDX + 0x18]
006B9DE1  8B F8                     MOV EDI,EAX
006B9DE3  85 FF                     TEST EDI,EDI
006B9DE5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9DE8  0F 85 9F 06 00 00         JNZ 0x006ba48d
006B9DEE  8B 03                     MOV EAX,dword ptr [EBX]
006B9DF0  8D 4D F8                  LEA ECX,[EBP + -0x8]
006B9DF3  51                        PUSH ECX
006B9DF4  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
006B9DFA  C7 85 48 FF FF FF 04 00 00 00  MOV dword ptr [EBP + 0xffffff48],0x4
006B9E04  8B 10                     MOV EDX,dword ptr [EAX]
006B9E06  51                        PUSH ECX
006B9E07  50                        PUSH EAX
006B9E08  FF 52 30                  CALL dword ptr [EDX + 0x30]
006B9E0B  8B F8                     MOV EDI,EAX
006B9E0D  85 FF                     TEST EDI,EDI
006B9E0F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9E12  0F 85 75 06 00 00         JNZ 0x006ba48d
006B9E18  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B9E1B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B9E1E  A9 00 00 00 01            TEST EAX,0x1000000
006B9E23  75 46                     JNZ 0x006b9e6b
006B9E25  8B 1B                     MOV EBX,dword ptr [EBX]
006B9E27  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
006B9E2D  89 56 40                  MOV dword ptr [ESI + 0x40],EDX
006B9E30  C7 85 5C FF FF FF 06 00 00 00  MOV dword ptr [EBP + 0xffffff5c],0x6
006B9E3A  8B 03                     MOV EAX,dword ptr [EBX]
006B9E3C  51                        PUSH ECX
006B9E3D  53                        PUSH EBX
006B9E3E  FF 50 58                  CALL dword ptr [EAX + 0x58]
006B9E41  8B F8                     MOV EDI,EAX
006B9E43  85 FF                     TEST EDI,EDI
006B9E45  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9E48  0F 85 3F 06 00 00         JNZ 0x006ba48d
006B9E4E  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006B9E54  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006B9E57  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
006B9E5A  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
006B9E60  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006B9E63  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006B9E66  E9 8E 02 00 00            JMP 0x006ba0f9
LAB_006b9e6b:
006B9E6B  8B 85 8C FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd8c]
006B9E71  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
006B9E74  F6 C4 02                  TEST AH,0x2
006B9E77  C7 85 58 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x7c
006B9E81  C7 85 5C FF FF FF 07 00 00 00  MOV dword ptr [EBP + 0xffffff5c],0x7
006B9E8B  C7 45 C0 40 00 00 00      MOV dword ptr [EBP + -0x40],0x40
006B9E92  75 07                     JNZ 0x006b9e9b
006B9E94  C7 45 C0 40 08 00 00      MOV dword ptr [EBP + -0x40],0x840
LAB_006b9e9b:
006B9E9B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B9E9E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B9EA1  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
006B9EA7  8D 4E 40                  LEA ECX,[ESI + 0x40]
006B9EAA  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
006B9EB0  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B9EB3  6A 00                     PUSH 0x0
006B9EB5  51                        PUSH ECX
006B9EB6  8B 10                     MOV EDX,dword ptr [EAX]
006B9EB8  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
006B9EBE  51                        PUSH ECX
006B9EBF  50                        PUSH EAX
006B9EC0  FF 52 18                  CALL dword ptr [EDX + 0x18]
006B9EC3  8B F8                     MOV EDI,EAX
006B9EC5  85 FF                     TEST EDI,EDI
006B9EC7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9ECA  0F 85 BD 05 00 00         JNZ 0x006ba48d
006B9ED0  E9 24 02 00 00            JMP 0x006ba0f9
LAB_006b9ed5:
006B9ED5  A9 00 00 00 20            TEST EAX,0x20000000
006B9EDA  0F 85 01 01 00 00         JNZ 0x006b9fe1
006B9EE0  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B9EE3  6A 00                     PUSH 0x0
006B9EE5  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
006B9EEB  53                        PUSH EBX
006B9EEC  8B 10                     MOV EDX,dword ptr [EAX]
006B9EEE  51                        PUSH ECX
006B9EEF  50                        PUSH EAX
006B9EF0  FF 52 18                  CALL dword ptr [EDX + 0x18]
006B9EF3  8B F8                     MOV EDI,EAX
006B9EF5  85 FF                     TEST EDI,EDI
006B9EF7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9EFA  0F 85 8D 05 00 00         JNZ 0x006ba48d
006B9F00  8B 1B                     MOV EBX,dword ptr [EBX]
006B9F02  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006B9F05  C7 45 D4 20 00 00 00      MOV dword ptr [EBP + -0x2c],0x20
006B9F0C  50                        PUSH EAX
006B9F0D  8B 13                     MOV EDX,dword ptr [EBX]
006B9F0F  53                        PUSH EBX
006B9F10  FF 52 54                  CALL dword ptr [EDX + 0x54]
006B9F13  8B F8                     MOV EDI,EAX
006B9F15  85 FF                     TEST EDI,EDI
006B9F17  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006B9F1A  0F 85 6D 05 00 00         JNZ 0x006ba48d
006B9F20  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006B9F23  83 F8 10                  CMP EAX,0x10
006B9F26  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006B9F29  75 5A                     JNZ 0x006b9f85
006B9F2B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006B9F2E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006B9F31  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B9F34  89 86 C4 04 00 00         MOV dword ptr [ESI + 0x4c4],EAX
006B9F3A  F6 C4 80                  TEST AH,0x80
006B9F3D  89 8E C8 04 00 00         MOV dword ptr [ESI + 0x4c8],ECX
006B9F43  89 96 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EDX
006B9F49  75 08                     JNZ 0x006b9f53
LAB_006b9f4b:
006B9F4B  D1 E0                     SHL EAX,0x1
006B9F4D  47                        INC EDI
006B9F4E  F6 C4 80                  TEST AH,0x80
006B9F51  74 F8                     JZ 0x006b9f4b
LAB_006b9f53:
006B9F53  33 DB                     XOR EBX,EBX
006B9F55  F6 C5 80                  TEST CH,0x80
006B9F58  75 08                     JNZ 0x006b9f62
LAB_006b9f5a:
006B9F5A  D1 E1                     SHL ECX,0x1
006B9F5C  43                        INC EBX
006B9F5D  F6 C5 80                  TEST CH,0x80
006B9F60  74 F8                     JZ 0x006b9f5a
LAB_006b9f62:
006B9F62  33 C0                     XOR EAX,EAX
006B9F64  F6 C6 80                  TEST DH,0x80
006B9F67  75 08                     JNZ 0x006b9f71
LAB_006b9f69:
006B9F69  D1 E2                     SHL EDX,0x1
006B9F6B  40                        INC EAX
006B9F6C  F6 C6 80                  TEST DH,0x80
006B9F6F  74 F8                     JZ 0x006b9f69
LAB_006b9f71:
006B9F71  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
006B9F77  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
006B9F7D  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
006B9F83  EB 63                     JMP 0x006b9fe8
LAB_006b9f85:
006B9F85  7E 61                     JLE 0x006b9fe8
006B9F87  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006B9F8A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006B9F8D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B9F90  33 FF                     XOR EDI,EDI
006B9F92  A9 00 00 80 00            TEST EAX,0x800000
006B9F97  89 86 C4 04 00 00         MOV dword ptr [ESI + 0x4c4],EAX
006B9F9D  89 8E C8 04 00 00         MOV dword ptr [ESI + 0x4c8],ECX
006B9FA3  89 96 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EDX
006B9FA9  75 0A                     JNZ 0x006b9fb5
LAB_006b9fab:
006B9FAB  D1 E0                     SHL EAX,0x1
006B9FAD  47                        INC EDI
006B9FAE  A9 00 00 80 00            TEST EAX,0x800000
006B9FB3  74 F6                     JZ 0x006b9fab
LAB_006b9fb5:
006B9FB5  33 DB                     XOR EBX,EBX
006B9FB7  F7 C1 00 00 80 00         TEST ECX,0x800000
006B9FBD  75 0B                     JNZ 0x006b9fca
LAB_006b9fbf:
006B9FBF  D1 E1                     SHL ECX,0x1
006B9FC1  43                        INC EBX
006B9FC2  F7 C1 00 00 80 00         TEST ECX,0x800000
006B9FC8  74 F5                     JZ 0x006b9fbf
LAB_006b9fca:
006B9FCA  33 C0                     XOR EAX,EAX
006B9FCC  F7 C2 00 00 80 00         TEST EDX,0x800000
006B9FD2  75 9D                     JNZ 0x006b9f71
LAB_006b9fd4:
006B9FD4  D1 E2                     SHL EDX,0x1
006B9FD6  40                        INC EAX
006B9FD7  F7 C2 00 00 80 00         TEST EDX,0x800000
006B9FDD  74 F5                     JZ 0x006b9fd4
006B9FDF  EB 90                     JMP 0x006b9f71
LAB_006b9fe1:
006B9FE1  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
LAB_006b9fe8:
006B9FE8  B9 1F 00 00 00            MOV ECX,0x1f
006B9FED  33 C0                     XOR EAX,EAX
006B9FEF  8D BD 58 FF FF FF         LEA EDI,[EBP + 0xffffff58]
006B9FF5  F3 AB                     STOSD.REP ES:EDI
006B9FF7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B9FFA  C7 85 58 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x7c
006BA004  A9 00 00 00 01            TEST EAX,0x1000000
006BA009  C7 85 5C FF FF FF 07 00 00 00  MOV dword ptr [EBP + 0xffffff5c],0x7
006BA013  C7 45 C0 40 00 00 00      MOV dword ptr [EBP + -0x40],0x40
006BA01A  74 12                     JZ 0x006ba02e
006BA01C  8B 85 8C FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd8c]
006BA022  F6 C4 02                  TEST AH,0x2
006BA025  75 07                     JNZ 0x006ba02e
006BA027  C7 45 C0 40 08 00 00      MOV dword ptr [EBP + -0x40],0x840
LAB_006ba02e:
006BA02E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006BA031  B8 08 00 00 00            MOV EAX,0x8
006BA036  3B C8                     CMP ECX,EAX
006BA038  75 35                     JNZ 0x006ba06f
006BA03A  39 46 24                  CMP dword ptr [ESI + 0x24],EAX
006BA03D  74 15                     JZ 0x006ba054
006BA03F  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
006BA042  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006BA045  B9 00 08 00 00            MOV ECX,0x800
006BA04A  0B F9                     OR EDI,ECX
006BA04C  0B D1                     OR EDX,ECX
006BA04E  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
006BA051  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
LAB_006ba054:
006BA054  C7 85 5C FF FF FF 07 10 00 00  MOV dword ptr [EBP + 0xffffff5c],0x1007
006BA05E  C7 45 A0 20 00 00 00      MOV dword ptr [EBP + -0x60],0x20
006BA065  C7 45 A4 60 00 00 00      MOV dword ptr [EBP + -0x5c],0x60
006BA06C  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_006ba06f:
006BA06F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006BA072  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006BA075  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BA078  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
006BA07E  8D 4E 40                  LEA ECX,[ESI + 0x40]
006BA081  6A 00                     PUSH 0x0
006BA083  51                        PUSH ECX
006BA084  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
006BA08A  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
006BA090  8B 10                     MOV EDX,dword ptr [EAX]
006BA092  51                        PUSH ECX
006BA093  50                        PUSH EAX
006BA094  FF 52 18                  CALL dword ptr [EDX + 0x18]
006BA097  8B F8                     MOV EDI,EAX
006BA099  85 FF                     TEST EDI,EDI
006BA09B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA09E  0F 85 E9 03 00 00         JNZ 0x006ba48d
006BA0A4  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BA0A7  8D 4E 38                  LEA ECX,[ESI + 0x38]
006BA0AA  57                        PUSH EDI
006BA0AB  51                        PUSH ECX
006BA0AC  8B 10                     MOV EDX,dword ptr [EAX]
006BA0AE  57                        PUSH EDI
006BA0AF  50                        PUSH EAX
006BA0B0  FF 52 10                  CALL dword ptr [EDX + 0x10]
006BA0B3  8B F8                     MOV EDI,EAX
006BA0B5  85 FF                     TEST EDI,EDI
006BA0B7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA0BA  0F 85 CD 03 00 00         JNZ 0x006ba48d
006BA0C0  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006BA0C3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006BA0C6  52                        PUSH EDX
006BA0C7  57                        PUSH EDI
006BA0C8  8B 08                     MOV ECX,dword ptr [EAX]
006BA0CA  50                        PUSH EAX
006BA0CB  FF 51 20                  CALL dword ptr [ECX + 0x20]
006BA0CE  8B F8                     MOV EDI,EAX
006BA0D0  85 FF                     TEST EDI,EDI
006BA0D2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA0D5  0F 85 B2 03 00 00         JNZ 0x006ba48d
006BA0DB  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006BA0DE  85 C0                     TEST EAX,EAX
006BA0E0  74 17                     JZ 0x006ba0f9
006BA0E2  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006BA0E5  8B 08                     MOV ECX,dword ptr [EAX]
006BA0E7  52                        PUSH EDX
006BA0E8  50                        PUSH EAX
006BA0E9  FF 51 70                  CALL dword ptr [ECX + 0x70]
006BA0EC  8B F8                     MOV EDI,EAX
006BA0EE  85 FF                     TEST EDI,EDI
006BA0F0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA0F3  0F 85 94 03 00 00         JNZ 0x006ba48d
LAB_006ba0f9:
006BA0F9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BA0FC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BA0FF  89 86 8C 04 00 00         MOV dword ptr [ESI + 0x48c],EAX
006BA105  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BA108  85 C0                     TEST EAX,EAX
006BA10A  89 8E 90 04 00 00         MOV dword ptr [ESI + 0x490],ECX
006BA110  74 0D                     JZ 0x006ba11f
006BA112  83 F8 10                  CMP EAX,0x10
006BA115  74 08                     JZ 0x006ba11f
006BA117  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006BA11A  E9 84 00 00 00            JMP 0x006ba1a3
LAB_006ba11f:
006BA11F  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BA122  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006BA125  C7 45 D4 20 00 00 00      MOV dword ptr [EBP + -0x2c],0x20
006BA12C  51                        PUSH ECX
006BA12D  8B 10                     MOV EDX,dword ptr [EAX]
006BA12F  50                        PUSH EAX
006BA130  FF 52 54                  CALL dword ptr [EDX + 0x54]
006BA133  8B F8                     MOV EDI,EAX
006BA135  85 FF                     TEST EDI,EDI
006BA137  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA13A  0F 85 4D 03 00 00         JNZ 0x006ba48d
006BA140  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006BA143  83 F8 10                  CMP EAX,0x10
006BA146  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006BA149  75 58                     JNZ 0x006ba1a3
006BA14B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006BA14E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006BA151  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006BA154  89 86 C4 04 00 00         MOV dword ptr [ESI + 0x4c4],EAX
006BA15A  F6 C4 80                  TEST AH,0x80
006BA15D  89 8E C8 04 00 00         MOV dword ptr [ESI + 0x4c8],ECX
006BA163  89 96 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EDX
006BA169  75 08                     JNZ 0x006ba173
LAB_006ba16b:
006BA16B  D1 E0                     SHL EAX,0x1
006BA16D  47                        INC EDI
006BA16E  F6 C4 80                  TEST AH,0x80
006BA171  74 F8                     JZ 0x006ba16b
LAB_006ba173:
006BA173  33 DB                     XOR EBX,EBX
006BA175  F6 C5 80                  TEST CH,0x80
006BA178  75 08                     JNZ 0x006ba182
LAB_006ba17a:
006BA17A  D1 E1                     SHL ECX,0x1
006BA17C  43                        INC EBX
006BA17D  F6 C5 80                  TEST CH,0x80
006BA180  74 F8                     JZ 0x006ba17a
LAB_006ba182:
006BA182  33 C0                     XOR EAX,EAX
006BA184  F6 C6 80                  TEST DH,0x80
006BA187  75 08                     JNZ 0x006ba191
LAB_006ba189:
006BA189  D1 E2                     SHL EDX,0x1
006BA18B  40                        INC EAX
006BA18C  F6 C6 80                  TEST DH,0x80
006BA18F  74 F8                     JZ 0x006ba189
LAB_006ba191:
006BA191  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
006BA197  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
006BA19D  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
LAB_006ba1a3:
006BA1A3  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006BA1A6  83 C0 07                  ADD EAX,0x7
006BA1A9  99                        CDQ
006BA1AA  83 E2 07                  AND EDX,0x7
006BA1AD  03 C2                     ADD EAX,EDX
006BA1AF  33 D2                     XOR EDX,EDX
006BA1B1  C1 F8 03                  SAR EAX,0x3
006BA1B4  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
006BA1B7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BA1BA  A9 01 00 00 20            TEST EAX,0x20000001
006BA1BF  75 48                     JNZ 0x006ba209
006BA1C1  83 7E 24 08               CMP dword ptr [ESI + 0x24],0x8
006BA1C5  7F 42                     JG 0x006ba209
006BA1C7  80 7D 28 0A               CMP byte ptr [EBP + 0x28],0xa
006BA1CB  73 1A                     JNC 0x006ba1e7
006BA1CD  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006BA1D0  BA 0A 00 00 00            MOV EDX,0xa
006BA1D5  25 FF 00 00 00            AND EAX,0xff
006BA1DA  C6 45 28 0A               MOV byte ptr [EBP + 0x28],0xa
006BA1DE  2B D0                     SUB EDX,EAX
006BA1E0  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006BA1E3  2B C2                     SUB EAX,EDX
006BA1E5  EB 03                     JMP 0x006ba1ea
LAB_006ba1e7:
006BA1E7  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
LAB_006ba1ea:
006BA1EA  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006BA1ED  8B F9                     MOV EDI,ECX
006BA1EF  81 E7 FF 00 00 00         AND EDI,0xff
006BA1F5  8D 1C 07                  LEA EBX,[EDI + EAX*0x1]
006BA1F8  81 FB F6 00 00 00         CMP EBX,0xf6
006BA1FE  7E 0F                     JLE 0x006ba20f
006BA200  B8 F6 00 00 00            MOV EAX,0xf6
006BA205  2B C7                     SUB EAX,EDI
006BA207  EB 06                     JMP 0x006ba20f
LAB_006ba209:
006BA209  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006BA20C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
LAB_006ba20f:
006BA20F  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006BA212  85 FF                     TEST EDI,EDI
006BA214  75 02                     JNZ 0x006ba218
006BA216  33 C0                     XOR EAX,EAX
LAB_006ba218:
006BA218  81 E1 FF 00 00 00         AND ECX,0xff
006BA21E  50                        PUSH EAX
006BA21F  51                        PUSH ECX
006BA220  8D 0C 97                  LEA ECX,[EDI + EDX*0x4]
006BA223  8D 95 08 F8 FF FF         LEA EDX,[EBP + 0xfffff808]
006BA229  51                        PUSH ECX
006BA22A  52                        PUSH EDX
006BA22B  56                        PUSH ESI
006BA22C  E8 6F 64 FF FF            CALL 0x006b06a0
006BA231  85 C0                     TEST EAX,EAX
006BA233  75 0D                     JNZ 0x006ba242
006BA235  BF 03 FF FF FF            MOV EDI,0xffffff03
006BA23A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA23D  E9 4B 02 00 00            JMP 0x006ba48d
LAB_006ba242:
006BA242  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BA245  8D 5E 3C                  LEA EBX,[ESI + 0x3c]
006BA248  6A 00                     PUSH 0x0
006BA24A  8D 95 0C F8 FF FF         LEA EDX,[EBP + 0xfffff80c]
006BA250  8B 08                     MOV ECX,dword ptr [EAX]
006BA252  53                        PUSH EBX
006BA253  52                        PUSH EDX
006BA254  6A 04                     PUSH 0x4
006BA256  50                        PUSH EAX
006BA257  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BA25A  8B F8                     MOV EDI,EAX
006BA25C  85 FF                     TEST EDI,EDI
006BA25E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA261  0F 85 26 02 00 00         JNZ 0x006ba48d
006BA267  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006BA26A  85 C0                     TEST EAX,EAX
006BA26C  74 06                     JZ 0x006ba274
006BA26E  83 7E 24 08               CMP dword ptr [ESI + 0x24],0x8
006BA272  7E 09                     JLE 0x006ba27d
LAB_006ba274:
006BA274  83 7D 18 08               CMP dword ptr [EBP + 0x18],0x8
006BA278  75 0C                     JNZ 0x006ba286
006BA27A  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
LAB_006ba27d:
006BA27D  8B 13                     MOV EDX,dword ptr [EBX]
006BA27F  8B 08                     MOV ECX,dword ptr [EAX]
006BA281  52                        PUSH EDX
006BA282  50                        PUSH EAX
006BA283  FF 51 7C                  CALL dword ptr [ECX + 0x7c]
LAB_006ba286:
006BA286  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BA289  66 8B 4E 20               MOV CX,word ptr [ESI + 0x20]
006BA28D  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
006BA290  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006BA293  F7 D8                     NEG EAX
006BA295  BF 01 00 00 00            MOV EDI,0x1
006BA29A  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
006BA29D  66 89 4E 5A               MOV word ptr [ESI + 0x5a],CX
006BA2A1  C7 46 4C 28 00 00 00      MOV dword ptr [ESI + 0x4c],0x28
006BA2A8  66 89 7E 58               MOV word ptr [ESI + 0x58],DI
006BA2AC  33 C0                     XOR EAX,EAX
006BA2AE  8D 4E 74                  LEA ECX,[ESI + 0x74]
LAB_006ba2b1:
006BA2B1  66 89 01                  MOV word ptr [ECX],AX
006BA2B4  40                        INC EAX
006BA2B5  83 C1 02                  ADD ECX,0x2
006BA2B8  3D 00 01 00 00            CMP EAX,0x100
006BA2BD  7C F2                     JL 0x006ba2b1
006BA2BF  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BA2C2  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
006BA2C8  51                        PUSH ECX
006BA2C9  50                        PUSH EAX
006BA2CA  8B 10                     MOV EDX,dword ptr [EAX]
006BA2CC  FF 52 38                  CALL dword ptr [EDX + 0x38]
006BA2CF  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006BA2D5  8B 8D 8C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd8c]
006BA2DB  F6 C4 40                  TEST AH,0x40
006BA2DE  74 05                     JZ 0x006ba2e5
006BA2E0  F6 C1 40                  TEST CL,0x40
006BA2E3  75 0E                     JNZ 0x006ba2f3
LAB_006ba2e5:
006BA2E5  F6 C4 08                  TEST AH,0x8
006BA2E8  74 11                     JZ 0x006ba2fb
006BA2EA  F6 85 34 FE FF FF 40      TEST byte ptr [EBP + 0xfffffe34],0x40
006BA2F1  74 08                     JZ 0x006ba2fb
LAB_006ba2f3:
006BA2F3  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BA2F6  0C 02                     OR AL,0x2
006BA2F8  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006ba2fb:
006BA2FB  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
006BA2FE  0B DF                     OR EBX,EDI
006BA300  F7 C1 00 00 00 04         TEST ECX,0x4000000
006BA306  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
006BA309  8B C3                     MOV EAX,EBX
006BA30B  74 05                     JZ 0x006ba312
006BA30D  0C 04                     OR AL,0x4
006BA30F  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006ba312:
006BA312  F6 C5 02                  TEST CH,0x2
006BA315  74 08                     JZ 0x006ba31f
006BA317  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BA31A  0C 08                     OR AL,0x8
006BA31C  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006ba31f:
006BA31F  F6 C5 08                  TEST CH,0x8
006BA322  74 46                     JZ 0x006ba36a
006BA324  8B 95 D0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdd0]
006BA32A  8B 85 CC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdcc]
006BA330  3B D0                     CMP EDX,EAX
006BA332  73 36                     JNC 0x006ba36a
006BA334  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
006BA337  83 CB 20                  OR EBX,0x20
006BA33A  F6 C5 40                  TEST CH,0x40
006BA33D  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
006BA340  8B C3                     MOV EAX,EBX
006BA342  74 19                     JZ 0x006ba35d
006BA344  8B 95 10 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe10]
006BA34A  85 D2                     TEST EDX,EDX
006BA34C  75 0F                     JNZ 0x006ba35d
006BA34E  8B 95 14 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe14]
006BA354  85 D2                     TEST EDX,EDX
006BA356  75 05                     JNZ 0x006ba35d
006BA358  0C 40                     OR AL,0x40
006BA35A  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006ba35d:
006BA35D  F6 C1 1E                  TEST CL,0x1e
006BA360  75 08                     JNZ 0x006ba36a
006BA362  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BA365  0C 80                     OR AL,0x80
006BA367  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006ba36a:
006BA36A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006BA36F  8D 95 08 FF FF FF         LEA EDX,[EBP + 0xffffff08]
006BA375  8D 8D 04 FF FF FF         LEA ECX,[EBP + 0xffffff04]
006BA37B  6A 00                     PUSH 0x0
006BA37D  52                        PUSH EDX
006BA37E  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
006BA384  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BA38A  E8 61 34 07 00            CALL 0x0072d7f0
006BA38F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BA392  83 C4 08                  ADD ESP,0x8
006BA395  85 C0                     TEST EAX,EAX
006BA397  0F 85 BC 00 00 00         JNZ 0x006ba459
006BA39D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006BA3A0  B8 0F 00 00 00            MOV EAX,0xf
006BA3A5  3B C8                     CMP ECX,EAX
006BA3A7  0F 8C 93 00 00 00         JL 0x006ba440
006BA3AD  39 45 20                  CMP dword ptr [EBP + 0x20],EAX
006BA3B0  0F 8C 8A 00 00 00         JL 0x006ba440
006BA3B6  6A 00                     PUSH 0x0
006BA3B8  6A 0A                     PUSH 0xa
006BA3BA  6A 0A                     PUSH 0xa
006BA3BC  6A 00                     PUSH 0x0
006BA3BE  6A 00                     PUSH 0x0
006BA3C0  56                        PUSH ESI
006BA3C1  E8 1A 06 00 00            CALL 0x006ba9e0
006BA3C6  57                        PUSH EDI
006BA3C7  6A 0A                     PUSH 0xa
006BA3C9  6A 0A                     PUSH 0xa
006BA3CB  6A 05                     PUSH 0x5
006BA3CD  6A 05                     PUSH 0x5
006BA3CF  56                        PUSH ESI
006BA3D0  E8 0B 06 00 00            CALL 0x006ba9e0
006BA3D5  6A 0A                     PUSH 0xa
006BA3D7  6A 0A                     PUSH 0xa
006BA3D9  6A 00                     PUSH 0x0
006BA3DB  6A 00                     PUSH 0x0
006BA3DD  6A 05                     PUSH 0x5
006BA3DF  6A 05                     PUSH 0x5
006BA3E1  56                        PUSH ESI
006BA3E2  E8 49 93 01 00            CALL 0x006d3730
006BA3E7  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006BA3EA  50                        PUSH EAX
006BA3EB  57                        PUSH EDI
006BA3EC  6A 0A                     PUSH 0xa
006BA3EE  6A 0E                     PUSH 0xe
006BA3F0  6A 05                     PUSH 0x5
006BA3F2  56                        PUSH ESI
006BA3F3  E8 88 A4 00 00            CALL 0x006c4880
006BA3F8  8B D8                     MOV EBX,EAX
006BA3FA  53                        PUSH EBX
006BA3FB  E8 A0 AB FF FF            CALL 0x006b4fa0
006BA400  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006BA403  83 F9 08                  CMP ECX,0x8
006BA406  75 13                     JNZ 0x006ba41b
006BA408  80 38 00                  CMP byte ptr [EAX],0x0
006BA40B  75 25                     JNZ 0x006ba432
006BA40D  80 78 05 01               CMP byte ptr [EAX + 0x5],0x1
006BA411  75 1F                     JNZ 0x006ba432
006BA413  80 78 09 01               CMP byte ptr [EAX + 0x9],0x1
006BA417  74 21                     JZ 0x006ba43a
006BA419  EB 17                     JMP 0x006ba432
LAB_006ba41b:
006BA41B  83 F9 10                  CMP ECX,0x10
006BA41E  75 1A                     JNZ 0x006ba43a
006BA420  66 83 38 00               CMP word ptr [EAX],0x0
006BA424  75 0C                     JNZ 0x006ba432
006BA426  66 39 78 0A               CMP word ptr [EAX + 0xa],DI
006BA42A  75 06                     JNZ 0x006ba432
006BA42C  66 39 78 12               CMP word ptr [EAX + 0x12],DI
006BA430  74 08                     JZ 0x006ba43a
LAB_006ba432:
006BA432  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BA435  0C 10                     OR AL,0x10
006BA437  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006ba43a:
006BA43A  53                        PUSH EBX
006BA43B  E8 50 BA FE FF            CALL 0x006a5e90
LAB_006ba440:
006BA440  6A 00                     PUSH 0x0
006BA442  56                        PUSH ESI
006BA443  E8 18 07 00 00            CALL 0x006bab60
006BA448  8B 8D 04 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff04]
006BA44E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006BA451  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BA457  EB 11                     JMP 0x006ba46a
LAB_006ba459:
006BA459  8B 95 04 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff04]
006BA45F  8B F8                     MOV EDI,EAX
006BA461  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006BA467  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006ba46a:
006BA46A  83 C8 FF                  OR EAX,0xffffffff
006BA46D  C7 86 A8 04 00 00 FF FF FF 00  MOV dword ptr [ESI + 0x4a8],0xffffff
006BA477  89 86 A0 04 00 00         MOV dword ptr [ESI + 0x4a0],EAX
006BA47D  89 86 A4 04 00 00         MOV dword ptr [ESI + 0x4a4],EAX
006BA483  C7 86 AC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4ac],0x0
LAB_006ba48d:
006BA48D  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006ba490:
006BA490  81 FF 03 FF FF FF         CMP EDI,0xffffff03
006BA496  75 17                     JNZ 0x006ba4af
006BA498  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006BA49E  8B F8                     MOV EDI,EAX
006BA4A0  85 FF                     TEST EDI,EDI
006BA4A2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BA4A5  75 0C                     JNZ 0x006ba4b3
006BA4A7  BF 03 FF FF FF            MOV EDI,0xffffff03
006BA4AC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006ba4af:
006BA4AF  85 FF                     TEST EDI,EDI
006BA4B1  74 2D                     JZ 0x006ba4e0
LAB_006ba4b3:
006BA4B3  85 F6                     TEST ESI,ESI
006BA4B5  74 29                     JZ 0x006ba4e0
006BA4B7  F6 46 08 01               TEST byte ptr [ESI + 0x8],0x1
006BA4BB  74 23                     JZ 0x006ba4e0
006BA4BD  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BA4C0  85 C0                     TEST EAX,EAX
006BA4C2  74 1C                     JZ 0x006ba4e0
006BA4C4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006BA4C7  85 C9                     TEST ECX,ECX
006BA4C9  74 06                     JZ 0x006ba4d1
006BA4CB  8B 08                     MOV ECX,dword ptr [EAX]
006BA4CD  50                        PUSH EAX
006BA4CE  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
LAB_006ba4d1:
006BA4D1  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BA4D4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006BA4D7  6A 08                     PUSH 0x8
006BA4D9  51                        PUSH ECX
006BA4DA  8B 10                     MOV EDX,dword ptr [EAX]
006BA4DC  50                        PUSH EAX
006BA4DD  FF 52 50                  CALL dword ptr [EDX + 0x50]
LAB_006ba4e0:
006BA4E0  F7 C3 00 00 00 04         TEST EBX,0x4000000
006BA4E6  74 0D                     JZ 0x006ba4f5
006BA4E8  81 C6 F0 04 00 00         ADD ESI,0x4f0
006BA4EE  56                        PUSH ESI
006BA4EF  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006ba4f5:
006BA4F5  85 FF                     TEST EDI,EDI
006BA4F7  74 22                     JZ 0x006ba51b
006BA4F9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006BA4FF  68 1B 02 00 00            PUSH 0x21b
006BA504  68 48 DC 7E 00            PUSH 0x7edc48
006BA509  52                        PUSH EDX
006BA50A  57                        PUSH EDI
006BA50B  E8 30 B9 FE FF            CALL 0x006a5e40
006BA510  8B C7                     MOV EAX,EDI
006BA512  5F                        POP EDI
006BA513  5E                        POP ESI
006BA514  5B                        POP EBX
006BA515  8B E5                     MOV ESP,EBP
006BA517  5D                        POP EBP
006BA518  C2 28 00                  RET 0x28
LAB_006ba51b:
006BA51B  5F                        POP EDI
006BA51C  5E                        POP ESI
006BA51D  33 C0                     XOR EAX,EAX
006BA51F  5B                        POP EBX
006BA520  8B E5                     MOV ESP,EBP
006BA522  5D                        POP EBP
006BA523  C2 28 00                  RET 0x28
