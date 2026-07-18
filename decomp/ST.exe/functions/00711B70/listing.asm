FUN_00711b70:
00711B70  55                        PUSH EBP
00711B71  8B EC                     MOV EBP,ESP
00711B73  83 EC 60                  SUB ESP,0x60
00711B76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00711B79  53                        PUSH EBX
00711B7A  56                        PUSH ESI
00711B7B  57                        PUSH EDI
00711B7C  85 C0                     TEST EAX,EAX
00711B7E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00711B81  75 0B                     JNZ 0x00711b8e
00711B83  33 C0                     XOR EAX,EAX
00711B85  5F                        POP EDI
00711B86  5E                        POP ESI
00711B87  5B                        POP EBX
00711B88  8B E5                     MOV ESP,EBP
00711B8A  5D                        POP EBP
00711B8B  C2 18 00                  RET 0x18
LAB_00711b8e:
00711B8E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00711B93  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00711B96  8D 4D A0                  LEA ECX,[EBP + -0x60]
00711B99  6A 00                     PUSH 0x0
00711B9B  52                        PUSH EDX
00711B9C  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00711B9F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00711BA5  E8 46 BC 01 00            CALL 0x0072d7f0
00711BAA  8B F0                     MOV ESI,EAX
00711BAC  83 C4 08                  ADD ESP,0x8
00711BAF  85 F6                     TEST ESI,ESI
00711BB1  0F 85 8D 01 00 00         JNZ 0x00711d44
00711BB7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00711BBA  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00711BBD  57                        PUSH EDI
00711BBE  8B CE                     MOV ECX,ESI
00711BC0  E8 AB F7 FF FF            CALL 0x00711370
00711BC5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00711BC8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00711BCB  85 C9                     TEST ECX,ECX
00711BCD  7D 03                     JGE 0x00711bd2
00711BCF  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_00711bd2:
00711BD2  57                        PUSH EDI
00711BD3  8B CE                     MOV ECX,ESI
00711BD5  E8 06 F8 FF FF            CALL 0x007113e0
00711BDA  57                        PUSH EDI
00711BDB  8B CE                     MOV ECX,ESI
00711BDD  8B D8                     MOV EBX,EAX
00711BDF  E8 8C F8 FF FF            CALL 0x00711470
00711BE4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00711BE7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00711BEA  85 C0                     TEST EAX,EAX
00711BEC  7D 1E                     JGE 0x00711c0c
00711BEE  83 F8 FD                  CMP EAX,-0x3
00711BF1  74 19                     JZ 0x00711c0c
00711BF3  83 F8 FE                  CMP EAX,-0x2
00711BF6  74 14                     JZ 0x00711c0c
00711BF8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00711BFB  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00711BFE  3B CA                     CMP ECX,EDX
00711C00  7E 0A                     JLE 0x00711c0c
00711C02  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
00711C09  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_00711c0c:
00711C0C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00711C0F  85 C9                     TEST ECX,ECX
00711C11  7D 0A                     JGE 0x00711c1d
00711C13  3B 5E 6C                  CMP EBX,dword ptr [ESI + 0x6c]
00711C16  7E 05                     JLE 0x00711c1d
00711C18  33 C9                     XOR ECX,ECX
00711C1A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_00711c1d:
00711C1D  85 C0                     TEST EAX,EAX
00711C1F  7D 1C                     JGE 0x00711c3d
00711C21  83 F8 FD                  CMP EAX,-0x3
00711C24  74 17                     JZ 0x00711c3d
00711C26  83 F8 FE                  CMP EAX,-0x2
00711C29  74 12                     JZ 0x00711c3d
00711C2B  83 F8 FC                  CMP EAX,-0x4
00711C2E  74 0D                     JZ 0x00711c3d
00711C30  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00711C33  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00711C36  2B C2                     SUB EAX,EDX
00711C38  99                        CDQ
00711C39  2B C2                     SUB EAX,EDX
00711C3B  D1 F8                     SAR EAX,0x1
LAB_00711c3d:
00711C3D  85 C9                     TEST ECX,ECX
00711C3F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00711C42  7D 0F                     JGE 0x00711c53
00711C44  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00711C47  2B C3                     SUB EAX,EBX
00711C49  99                        CDQ
00711C4A  2B C2                     SUB EAX,EDX
00711C4C  D1 F8                     SAR EAX,0x1
00711C4E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00711C51  EB 03                     JMP 0x00711c56
LAB_00711c53:
00711C53  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00711c56:
00711C56  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00711C59  33 DB                     XOR EBX,EBX
00711C5B  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
00711C5E  89 46 48                  MOV dword ptr [ESI + 0x48],EAX
00711C61  89 5E 4C                  MOV dword ptr [ESI + 0x4c],EBX
00711C64  8A 07                     MOV AL,byte ptr [EDI]
00711C66  84 C0                     TEST AL,AL
00711C68  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00711C6B  0F 84 B9 00 00 00         JZ 0x00711d2a
LAB_00711c71:
00711C71  68 F4 8F 7C 00            PUSH 0x7c8ff4
00711C76  57                        PUSH EDI
00711C77  E8 14 E9 01 00            CALL 0x00730590
00711C7C  83 C4 08                  ADD ESP,0x8
00711C7F  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00711C82  85 C0                     TEST EAX,EAX
00711C84  74 08                     JZ 0x00711c8e
00711C86  8A 10                     MOV DL,byte ptr [EAX]
00711C88  C6 00 00                  MOV byte ptr [EAX],0x0
00711C8B  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
LAB_00711c8e:
00711C8E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00711C91  85 C0                     TEST EAX,EAX
00711C93  7C 17                     JL 0x00711cac
00711C95  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00711C98  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00711C9B  49                        DEC ECX
00711C9C  3B D1                     CMP EDX,ECX
00711C9E  75 0C                     JNZ 0x00711cac
00711CA0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00711CA3  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
00711CA6  03 CB                     ADD ECX,EBX
00711CA8  52                        PUSH EDX
00711CA9  51                        PUSH ECX
00711CAA  EB 47                     JMP 0x00711cf3
LAB_00711cac:
00711CAC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00711CAF  83 F8 FC                  CMP EAX,-0x4
00711CB2  74 1C                     JZ 0x00711cd0
00711CB4  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
00711CB7  83 F8 FE                  CMP EAX,-0x2
00711CBA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00711CBD  52                        PUSH EDX
00711CBE  74 09                     JZ 0x00711cc9
00711CC0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00711CC3  03 C3                     ADD EAX,EBX
00711CC5  50                        PUSH EAX
00711CC6  51                        PUSH ECX
00711CC7  EB 2B                     JMP 0x00711cf4
LAB_00711cc9:
00711CC9  03 C3                     ADD EAX,EBX
00711CCB  50                        PUSH EAX
00711CCC  6A FF                     PUSH -0x1
00711CCE  EB 24                     JMP 0x00711cf4
LAB_00711cd0:
00711CD0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00711CD3  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00711CD6  03 D3                     ADD EDX,EBX
00711CD8  51                        PUSH ECX
00711CD9  52                        PUSH EDX
00711CDA  57                        PUSH EDI
00711CDB  8B CE                     MOV ECX,ESI
00711CDD  E8 2E F4 FF FF            CALL 0x00711110
00711CE2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00711CE5  8B C8                     MOV ECX,EAX
00711CE7  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00711CEA  03 C2                     ADD EAX,EDX
00711CEC  99                        CDQ
00711CED  2B C2                     SUB EAX,EDX
00711CEF  D1 F8                     SAR EAX,0x1
00711CF1  2B C1                     SUB EAX,ECX
LAB_00711cf3:
00711CF3  50                        PUSH EAX
LAB_00711cf4:
00711CF4  57                        PUSH EDI
00711CF5  8B CE                     MOV ECX,ESI
00711CF7  E8 C4 FC FF FF            CALL 0x007119c0
00711CFC  57                        PUSH EDI
00711CFD  8B CE                     MOV ECX,ESI
00711CFF  E8 BC F4 FF FF            CALL 0x007111c0
00711D04  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
00711D07  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00711D0A  03 C7                     ADD EAX,EDI
00711D0C  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00711D0F  03 D8                     ADD EBX,EAX
00711D11  41                        INC ECX
00711D12  85 FF                     TEST EDI,EDI
00711D14  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00711D17  74 11                     JZ 0x00711d2a
00711D19  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00711D1C  88 17                     MOV byte ptr [EDI],DL
00711D1E  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
00711D21  47                        INC EDI
00711D22  84 C0                     TEST AL,AL
00711D24  0F 85 47 FF FF FF         JNZ 0x00711c71
LAB_00711d2a:
00711D2A  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00711D2D  C7 46 4C 01 00 00 00      MOV dword ptr [ESI + 0x4c],0x1
00711D34  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00711D39  33 C0                     XOR EAX,EAX
00711D3B  5F                        POP EDI
00711D3C  5E                        POP ESI
00711D3D  5B                        POP EBX
00711D3E  8B E5                     MOV ESP,EBP
00711D40  5D                        POP EBP
00711D41  C2 18 00                  RET 0x18
LAB_00711d44:
00711D44  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00711D47  68 A8 02 7F 00            PUSH 0x7f02a8
00711D4C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00711D51  56                        PUSH ESI
00711D52  6A 00                     PUSH 0x0
00711D54  68 EC 06 00 00            PUSH 0x6ec
00711D59  68 90 01 7F 00            PUSH 0x7f0190
00711D5E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00711D64  E8 67 B7 F9 FF            CALL 0x006ad4d0
00711D69  83 C4 18                  ADD ESP,0x18
00711D6C  85 C0                     TEST EAX,EAX
00711D6E  74 01                     JZ 0x00711d71
00711D70  CC                        INT3
LAB_00711d71:
00711D71  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00711D74  68 F0 06 00 00            PUSH 0x6f0
00711D79  68 90 01 7F 00            PUSH 0x7f0190
00711D7E  6A 00                     PUSH 0x0
00711D80  56                        PUSH ESI
00711D81  C7 42 4C 01 00 00 00      MOV dword ptr [EDX + 0x4c],0x1
00711D88  E8 B3 40 F9 FF            CALL 0x006a5e40
00711D8D  8B C6                     MOV EAX,ESI
00711D8F  5F                        POP EDI
00711D90  5E                        POP ESI
00711D91  5B                        POP EBX
00711D92  8B E5                     MOV ESP,EBP
00711D94  5D                        POP EBP
00711D95  C2 18 00                  RET 0x18
