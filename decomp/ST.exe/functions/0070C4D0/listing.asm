FUN_0070c4d0:
0070C4D0  55                        PUSH EBP
0070C4D1  8B EC                     MOV EBP,ESP
0070C4D3  81 EC 58 04 00 00         SUB ESP,0x458
0070C4D9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070C4DC  33 D2                     XOR EDX,EDX
0070C4DE  8B C1                     MOV EAX,ECX
0070C4E0  53                        PUSH EBX
0070C4E1  C1 E8 10                  SHR EAX,0x10
0070C4E4  8A D4                     MOV DL,AH
0070C4E6  25 FF 00 00 00            AND EAX,0xff
0070C4EB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070C4EE  33 C0                     XOR EAX,EAX
0070C4F0  8A C5                     MOV AL,CH
0070C4F2  81 E2 FF 00 00 00         AND EDX,0xff
0070C4F8  25 FF 00 00 00            AND EAX,0xff
0070C4FD  81 E1 FF 00 00 00         AND ECX,0xff
0070C503  56                        PUSH ESI
0070C504  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070C507  57                        PUSH EDI
0070C508  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0070C50B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070C50E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0070C514  8D 45 AC                  LEA EAX,[EBP + -0x54]
0070C517  8D 55 A8                  LEA EDX,[EBP + -0x58]
0070C51A  6A 00                     PUSH 0x0
0070C51C  50                        PUSH EAX
0070C51D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070C524  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0070C527  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070C52D  E8 BE 12 02 00            CALL 0x0072d7f0
0070C532  83 C4 08                  ADD ESP,0x8
0070C535  85 C0                     TEST EAX,EAX
0070C537  0F 85 2E 01 00 00         JNZ 0x0070c66b
0070C53D  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0070C540  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0070C543  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070C546  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070C549  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C54C  57                        PUSH EDI
0070C54D  53                        PUSH EBX
0070C54E  51                        PUSH ECX
0070C54F  52                        PUSH EDX
0070C550  56                        PUSH ESI
0070C551  E8 4A 8A FA FF            CALL 0x006b4fa0
0070C556  50                        PUSH EAX
0070C557  56                        PUSH ESI
0070C558  6A 00                     PUSH 0x0
0070C55A  6A 00                     PUSH 0x0
0070C55C  6A 00                     PUSH 0x0
0070C55E  6A 00                     PUSH 0x0
0070C560  E8 8B 90 FA FF            CALL 0x006b55f0
0070C565  8B C8                     MOV ECX,EAX
0070C567  85 C9                     TEST ECX,ECX
0070C569  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070C56C  75 52                     JNZ 0x0070c5c0
0070C56E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0070C571  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0070C574  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0070C577  50                        PUSH EAX
0070C578  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070C57B  51                        PUSH ECX
0070C57C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070C57F  52                        PUSH EDX
0070C580  57                        PUSH EDI
0070C581  53                        PUSH EBX
0070C582  50                        PUSH EAX
0070C583  51                        PUSH ECX
0070C584  8D 95 A8 FB FF FF         LEA EDX,[EBP + 0xfffffba8]
0070C58A  68 18 01 7F 00            PUSH 0x7f0118
0070C58F  52                        PUSH EDX
0070C590  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0070C596  8D 85 A8 FB FF FF         LEA EAX,[EBP + 0xfffffba8]
0070C59C  50                        PUSH EAX
0070C59D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070C5A2  6A FF                     PUSH -0x1
0070C5A4  6A 00                     PUSH 0x0
0070C5A6  68 A7 04 00 00            PUSH 0x4a7
0070C5AB  68 E0 FF 7E 00            PUSH 0x7effe0
0070C5B0  E8 1B 0F FA FF            CALL 0x006ad4d0
0070C5B5  83 C4 3C                  ADD ESP,0x3c
0070C5B8  85 C0                     TEST EAX,EAX
0070C5BA  74 01                     JZ 0x0070c5bd
0070C5BC  CC                        INT3
LAB_0070c5bd:
0070C5BD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0070c5c0:
0070C5C0  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0070C5C3  85 DB                     TEST EBX,EBX
0070C5C5  75 08                     JNZ 0x0070c5cf
0070C5C7  BB 01 00 00 00            MOV EBX,0x1
0070C5CC  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_0070c5cf:
0070C5CF  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0070C5D2  85 FF                     TEST EDI,EDI
0070C5D4  75 08                     JNZ 0x0070c5de
0070C5D6  BF 01 00 00 00            MOV EDI,0x1
0070C5DB  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0070c5de:
0070C5DE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070C5E1  85 D2                     TEST EDX,EDX
0070C5E3  75 08                     JNZ 0x0070c5ed
0070C5E5  BA 01 00 00 00            MOV EDX,0x1
0070C5EA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0070c5ed:
0070C5ED  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0070C5F0  85 F6                     TEST ESI,ESI
0070C5F2  75 08                     JNZ 0x0070c5fc
0070C5F4  BE 01 00 00 00            MOV ESI,0x1
0070C5F9  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_0070c5fc:
0070C5FC  85 C9                     TEST ECX,ECX
0070C5FE  74 57                     JZ 0x0070c657
0070C600  83 FB 01                  CMP EBX,0x1
0070C603  75 0C                     JNZ 0x0070c611
0070C605  3B FB                     CMP EDI,EBX
0070C607  75 08                     JNZ 0x0070c611
0070C609  3B D3                     CMP EDX,EBX
0070C60B  75 04                     JNZ 0x0070c611
0070C60D  3B F3                     CMP ESI,EBX
0070C60F  74 46                     JZ 0x0070c657
LAB_0070c611:
0070C611  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0070C614  0F AF C2                  IMUL EAX,EDX
0070C617  33 D2                     XOR EDX,EDX
0070C619  F7 F6                     DIV ESI
0070C61B  33 D2                     XOR EDX,EDX
0070C61D  50                        PUSH EAX
0070C61E  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0070C621  0F AF C3                  IMUL EAX,EBX
0070C624  F7 F7                     DIV EDI
0070C626  50                        PUSH EAX
0070C627  6A 00                     PUSH 0x0
0070C629  51                        PUSH ECX
0070C62A  6A 00                     PUSH 0x0
0070C62C  6A 00                     PUSH 0x0
0070C62E  E8 7D 56 04 00            CALL 0x00751cb0
0070C633  8B F0                     MOV ESI,EAX
0070C635  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C638  85 C0                     TEST EAX,EAX
0070C63A  74 1D                     JZ 0x0070c659
0070C63C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070C63F  51                        PUSH ECX
0070C640  E8 1B EA F9 FF            CALL 0x006ab060
0070C645  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0070C648  8B C6                     MOV EAX,ESI
0070C64A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070C650  5F                        POP EDI
0070C651  5E                        POP ESI
0070C652  5B                        POP EBX
0070C653  8B E5                     MOV ESP,EBP
0070C655  5D                        POP EBP
0070C656  C3                        RET
LAB_0070c657:
0070C657  8B F1                     MOV ESI,ECX
LAB_0070c659:
0070C659  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0070C65C  8B C6                     MOV EAX,ESI
0070C65E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070C664  5F                        POP EDI
0070C665  5E                        POP ESI
0070C666  5B                        POP EBX
0070C667  8B E5                     MOV ESP,EBP
0070C669  5D                        POP EBP
0070C66A  C3                        RET
LAB_0070c66b:
0070C66B  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0070C66E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070C673  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C676  85 C0                     TEST EAX,EAX
0070C678  74 09                     JZ 0x0070c683
0070C67A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070C67D  51                        PUSH ECX
0070C67E  E8 DD E9 F9 FF            CALL 0x006ab060
LAB_0070c683:
0070C683  5F                        POP EDI
0070C684  5E                        POP ESI
0070C685  33 C0                     XOR EAX,EAX
0070C687  5B                        POP EBX
0070C688  8B E5                     MOV ESP,EBP
0070C68A  5D                        POP EBP
0070C68B  C3                        RET
