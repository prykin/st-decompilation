FUN_0075a860:
0075A860  55                        PUSH EBP
0075A861  8B EC                     MOV EBP,ESP
0075A863  83 EC 3C                  SUB ESP,0x3c
0075A866  53                        PUSH EBX
0075A867  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075A86A  56                        PUSH ESI
0075A86B  57                        PUSH EDI
0075A86C  8B 8B 4A 01 00 00         MOV ECX,dword ptr [EBX + 0x14a]
0075A872  8B 83 2E 01 00 00         MOV EAX,dword ptr [EBX + 0x12e]
0075A878  8B BB 9A 01 00 00         MOV EDI,dword ptr [EBX + 0x19a]
0075A87E  49                        DEC ECX
0075A87F  48                        DEC EAX
0075A880  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
0075A883  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0075A886  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0075A889  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0075A88C  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0075A88F  3B C2                     CMP EAX,EDX
0075A891  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075A894  0F 8D 8F 01 00 00         JGE 0x0075aa29
LAB_0075a89a:
0075A89A  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0075A89D  3B D1                     CMP EDX,ECX
0075A89F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075A8A2  0F 87 6B 01 00 00         JA 0x0075aa13
LAB_0075a8a8:
0075A8A8  8B 83 52 01 00 00         MOV EAX,dword ptr [EBX + 0x152]
0075A8AE  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0075A8B1  8D 77 20                  LEA ESI,[EDI + 0x20]
0075A8B4  C1 E0 08                  SHL EAX,0x8
0075A8B7  50                        PUSH EAX
0075A8B8  51                        PUSH ECX
0075A8B9  E8 72 F6 FF FF            CALL 0x00759f30
0075A8BE  8B 93 AA 01 00 00         MOV EDX,dword ptr [EBX + 0x1aa]
0075A8C4  56                        PUSH ESI
0075A8C5  53                        PUSH EBX
0075A8C6  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075A8C9  85 C0                     TEST EAX,EAX
0075A8CB  0F 84 92 01 00 00         JZ 0x0075aa63
0075A8D1  8B 83 36 01 00 00         MOV EAX,dword ptr [EBX + 0x136]
0075A8D7  33 C9                     XOR ECX,ECX
0075A8D9  3B C1                     CMP EAX,ECX
0075A8DB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075A8DE  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0075A8E1  0F 8E 17 01 00 00         JLE 0x0075a9fe
0075A8E7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075A8EA  8D 93 3A 01 00 00         LEA EDX,[EBX + 0x13a]
0075A8F0  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075A8F3  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0075a8f6:
0075A8F6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075A8F9  8B 30                     MOV ESI,dword ptr [EAX]
0075A8FB  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
0075A8FE  85 C0                     TEST EAX,EAX
0075A900  75 0B                     JNZ 0x0075a90d
0075A902  03 4E 3C                  ADD ECX,dword ptr [ESI + 0x3c]
0075A905  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075A908  E9 C4 00 00 00            JMP 0x0075a9d1
LAB_0075a90d:
0075A90D  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0075A910  8B 83 AE 01 00 00         MOV EAX,dword ptr [EBX + 0x1ae]
0075A916  8B 54 90 04               MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4]
0075A91A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0075A91D  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0075A920  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075A923  3B D0                     CMP EDX,EAX
0075A925  73 08                     JNC 0x0075a92f
0075A927  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0075A92A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0075A92D  EB 06                     JMP 0x0075a935
LAB_0075a92f:
0075A92F  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0075A932  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0075a935:
0075A935  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0075A938  8B 7E 40                  MOV EDI,dword ptr [ESI + 0x40]
0075A93B  0F AF 55 FC               IMUL EDX,dword ptr [EBP + -0x4]
0075A93F  0F AF 7D F8               IMUL EDI,dword ptr [EBP + -0x8]
0075A943  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075A946  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
0075A949  8B 00                     MOV EAX,dword ptr [EAX]
0075A94B  8D 14 90                  LEA EDX,[EAX + EDX*0x4]
0075A94E  33 C0                     XOR EAX,EAX
0075A950  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0075A953  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0075A956  85 D2                     TEST EDX,EDX
0075A958  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0075A95B  7E 74                     JLE 0x0075a9d1
LAB_0075a95d:
0075A95D  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0075A960  39 93 8C 00 00 00         CMP dword ptr [EBX + 0x8c],EDX
0075A966  72 0C                     JC 0x0075a974
0075A968  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075A96B  8B 5E 48                  MOV EBX,dword ptr [ESI + 0x48]
0075A96E  03 D0                     ADD EDX,EAX
0075A970  3B D3                     CMP EDX,EBX
0075A972  7D 3B                     JGE 0x0075a9af
LAB_0075a974:
0075A974  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0075A977  85 D2                     TEST EDX,EDX
0075A979  7E 34                     JLE 0x0075a9af
0075A97B  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0075A97E  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0075A981  8D 5C 88 20               LEA EBX,[EAX + ECX*0x4 + 0x20]
LAB_0075a985:
0075A985  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0075A988  8B 13                     MOV EDX,dword ptr [EBX]
0075A98A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075A98D  57                        PUSH EDI
0075A98E  51                        PUSH ECX
0075A98F  52                        PUSH EDX
0075A990  56                        PUSH ESI
0075A991  50                        PUSH EAX
0075A992  FF 55 C8                  CALL dword ptr [EBP + -0x38]
0075A995  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0075A998  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0075A99B  03 FA                     ADD EDI,EDX
0075A99D  83 C3 04                  ADD EBX,0x4
0075A9A0  48                        DEC EAX
0075A9A1  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0075A9A4  75 DF                     JNZ 0x0075a985
0075A9A6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075A9A9  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
0075A9AC  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
LAB_0075a9af:
0075A9AF  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0075A9B2  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075A9B5  03 CA                     ADD ECX,EDX
0075A9B7  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0075A9BA  40                        INC EAX
0075A9BB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075A9BE  8D 14 93                  LEA EDX,[EBX + EDX*0x4]
0075A9C1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075A9C4  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0075A9C7  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0075A9CA  3B C2                     CMP EAX,EDX
0075A9CC  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0075A9CF  7C 8C                     JL 0x0075a95d
LAB_0075a9d1:
0075A9D1  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0075A9D4  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0075A9D7  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0075A9DA  BA 04 00 00 00            MOV EDX,0x4
0075A9DF  03 FA                     ADD EDI,EDX
0075A9E1  03 F2                     ADD ESI,EDX
0075A9E3  8B 93 36 01 00 00         MOV EDX,dword ptr [EBX + 0x136]
0075A9E9  40                        INC EAX
0075A9EA  3B C2                     CMP EAX,EDX
0075A9EC  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0075A9EF  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0075A9F2  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0075A9F5  0F 8C FB FE FF FF         JL 0x0075a8f6
0075A9FB  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
LAB_0075a9fe:
0075A9FE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075AA01  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075AA04  40                        INC EAX
0075AA05  3B C1                     CMP EAX,ECX
0075AA07  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075AA0A  0F 86 98 FE FF FF         JBE 0x0075a8a8
0075AA10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0075aa13:
0075AA13  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0075AA16  40                        INC EAX
0075AA17  3B C2                     CMP EAX,EDX
0075AA19  C7 47 14 00 00 00 00      MOV dword ptr [EDI + 0x14],0x0
0075AA20  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075AA23  0F 8C 71 FE FF FF         JL 0x0075a89a
LAB_0075aa29:
0075AA29  8B B3 94 00 00 00         MOV ESI,dword ptr [EBX + 0x94]
0075AA2F  8B 93 8C 00 00 00         MOV EDX,dword ptr [EBX + 0x8c]
0075AA35  8B 8B 2E 01 00 00         MOV ECX,dword ptr [EBX + 0x12e]
0075AA3B  46                        INC ESI
0075AA3C  42                        INC EDX
0075AA3D  89 B3 94 00 00 00         MOV dword ptr [EBX + 0x94],ESI
0075AA43  8B C2                     MOV EAX,EDX
0075AA45  89 93 8C 00 00 00         MOV dword ptr [EBX + 0x8c],EDX
0075AA4B  3B C1                     CMP EAX,ECX
0075AA4D  73 2B                     JNC 0x0075aa7a
0075AA4F  53                        PUSH EBX
0075AA50  E8 4B FD FF FF            CALL 0x0075a7a0
0075AA55  5F                        POP EDI
0075AA56  5E                        POP ESI
0075AA57  B8 03 00 00 00            MOV EAX,0x3
0075AA5C  5B                        POP EBX
0075AA5D  8B E5                     MOV ESP,EBP
0075AA5F  5D                        POP EBP
0075AA60  C2 08 00                  RET 0x8
LAB_0075aa63:
0075AA63  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075AA66  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075AA69  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
0075AA6C  89 4F 14                  MOV dword ptr [EDI + 0x14],ECX
0075AA6F  5F                        POP EDI
0075AA70  5E                        POP ESI
0075AA71  33 C0                     XOR EAX,EAX
0075AA73  5B                        POP EBX
0075AA74  8B E5                     MOV ESP,EBP
0075AA76  5D                        POP EBP
0075AA77  C2 08 00                  RET 0x8
LAB_0075aa7a:
0075AA7A  8B 93 A2 01 00 00         MOV EDX,dword ptr [EBX + 0x1a2]
0075AA80  53                        PUSH EBX
0075AA81  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0075AA84  5F                        POP EDI
0075AA85  5E                        POP ESI
0075AA86  B8 04 00 00 00            MOV EAX,0x4
0075AA8B  5B                        POP EBX
0075AA8C  8B E5                     MOV ESP,EBP
0075AA8E  5D                        POP EBP
0075AA8F  C2 08 00                  RET 0x8
