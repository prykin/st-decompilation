FUN_00553b00:
00553B00  55                        PUSH EBP
00553B01  8B EC                     MOV EBP,ESP
00553B03  83 EC 0C                  SUB ESP,0xc
00553B06  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553B09  53                        PUSH EBX
00553B0A  85 C0                     TEST EAX,EAX
00553B0C  56                        PUSH ESI
00553B0D  0F 84 BB 00 00 00         JZ 0x00553bce
00553B13  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00553B16  56                        PUSH ESI
00553B17  E8 A3 ED EA FF            CALL 0x004028bf
00553B1C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553B1F  8B D8                     MOV EBX,EAX
00553B21  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00553B24  8D 54 36 01               LEA EDX,[ESI + ESI*0x1 + 0x1]
00553B28  83 C4 04                  ADD ESP,0x4
00553B2B  2B CE                     SUB ECX,ESI
00553B2D  2B C6                     SUB EAX,ESI
00553B2F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00553B32  85 D2                     TEST EDX,EDX
00553B34  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00553B37  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00553B3A  0F 8E 8E 00 00 00         JLE 0x00553bce
00553B40  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00553B43  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00553B46  57                        PUSH EDI
00553B47  8B F8                     MOV EDI,EAX
00553B49  0F AF C3                  IMUL EAX,EBX
00553B4C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00553B4F  03 C1                     ADD EAX,ECX
00553B51  03 C6                     ADD EAX,ESI
00553B53  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00553B56  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00553B59  33 F6                     XOR ESI,ESI
00553B5B  EB 0A                     JMP 0x00553b67
LAB_00553b5d:
00553B5D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00553B60  33 F6                     XOR ESI,ESI
00553B62  EB 03                     JMP 0x00553b67
LAB_00553b64:
00553B64  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00553b67:
00553B67  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
00553B6A  85 C0                     TEST EAX,EAX
00553B6C  7C 1A                     JL 0x00553b88
00553B6E  3B C3                     CMP EAX,EBX
00553B70  7D 16                     JGE 0x00553b88
00553B72  85 FF                     TEST EDI,EDI
00553B74  7C 12                     JL 0x00553b88
00553B76  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
00553B79  7D 0D                     JGE 0x00553b88
00553B7B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00553B7E  33 C9                     XOR ECX,ECX
00553B80  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
00553B83  83 F9 0F                  CMP ECX,0xf
00553B86  74 23                     JZ 0x00553bab
LAB_00553b88:
00553B88  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00553B8B  85 C9                     TEST ECX,ECX
00553B8D  74 09                     JZ 0x00553b98
00553B8F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00553B92  80 3C 31 00               CMP byte ptr [ECX + ESI*0x1],0x0
00553B96  74 13                     JZ 0x00553bab
LAB_00553b98:
00553B98  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00553B9B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00553B9E  52                        PUSH EDX
00553B9F  53                        PUSH EBX
00553BA0  51                        PUSH ECX
00553BA1  57                        PUSH EDI
00553BA2  50                        PUSH EAX
00553BA3  E8 CE EF EA FF            CALL 0x00402b76
00553BA8  83 C4 14                  ADD ESP,0x14
LAB_00553bab:
00553BAB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00553BAE  46                        INC ESI
00553BAF  3B F0                     CMP ESI,EAX
00553BB1  7C B1                     JL 0x00553b64
00553BB3  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00553BB6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553BB9  03 F0                     ADD ESI,EAX
00553BBB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00553BBE  47                        INC EDI
00553BBF  03 CB                     ADD ECX,EBX
00553BC1  48                        DEC EAX
00553BC2  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00553BC5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00553BC8  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00553BCB  75 90                     JNZ 0x00553b5d
00553BCD  5F                        POP EDI
LAB_00553bce:
00553BCE  5E                        POP ESI
00553BCF  5B                        POP EBX
00553BD0  8B E5                     MOV ESP,EBP
00553BD2  5D                        POP EBP
00553BD3  C3                        RET
