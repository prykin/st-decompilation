FUN_00501d00:
00501D00  55                        PUSH EBP
00501D01  8B EC                     MOV EBP,ESP
00501D03  83 EC 08                  SUB ESP,0x8
00501D06  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00501D09  53                        PUSH EBX
00501D0A  56                        PUSH ESI
00501D0B  32 D2                     XOR DL,DL
00501D0D  57                        PUSH EDI
00501D0E  8B D9                     MOV EBX,ECX
00501D10  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00501D14  88 55 FE                  MOV byte ptr [EBP + -0x2],DL
00501D17  8D 70 09                  LEA ESI,[EAX + 0x9]
00501D1A  BF 06 00 00 00            MOV EDI,0x6
LAB_00501d1f:
00501D1F  80 3E 00                  CMP byte ptr [ESI],0x0
00501D22  74 02                     JZ 0x00501d26
00501D24  FE C2                     INC DL
LAB_00501d26:
00501D26  46                        INC ESI
00501D27  4F                        DEC EDI
00501D28  75 F5                     JNZ 0x00501d1f
00501D2A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00501D2D  88 55 FE                  MOV byte ptr [EBP + -0x2],DL
00501D30  8D 79 09                  LEA EDI,[ECX + 0x9]
00501D33  B9 06 00 00 00            MOV ECX,0x6
00501D38  8B F7                     MOV ESI,EDI
LAB_00501d3a:
00501D3A  80 3E 00                  CMP byte ptr [ESI],0x0
00501D3D  74 0B                     JZ 0x00501d4a
00501D3F  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00501D42  FE C2                     INC DL
00501D44  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00501D47  8A 55 FE                  MOV DL,byte ptr [EBP + -0x2]
LAB_00501d4a:
00501D4A  46                        INC ESI
00501D4B  49                        DEC ECX
00501D4C  75 EC                     JNZ 0x00501d3a
00501D4E  3A 55 FF                  CMP DL,byte ptr [EBP + -0x1]
00501D51  74 27                     JZ 0x00501d7a
00501D53  A0 4E 87 80 00            MOV AL,[0x0080874e]
00501D58  8B CB                     MOV ECX,EBX
00501D5A  3C 03                     CMP AL,0x3
00501D5C  75 0E                     JNZ 0x00501d6c
00501D5E  E8 0B 0C F0 FF            CALL 0x0040296e
00501D63  5F                        POP EDI
00501D64  5E                        POP ESI
00501D65  5B                        POP EBX
00501D66  8B E5                     MOV ESP,EBP
00501D68  5D                        POP EBP
00501D69  C2 08 00                  RET 0x8
LAB_00501d6c:
00501D6C  E8 FE 37 F0 FF            CALL 0x0040556f
00501D71  5F                        POP EDI
00501D72  5E                        POP ESI
00501D73  5B                        POP EBX
00501D74  8B E5                     MOV ESP,EBP
00501D76  5D                        POP EBP
00501D77  C2 08 00                  RET 0x8
LAB_00501d7a:
00501D7A  B9 03 00 00 00            MOV ECX,0x3
00501D7F  8D 70 09                  LEA ESI,[EAX + 0x9]
00501D82  33 D2                     XOR EDX,EDX
00501D84  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
00501D87  74 5A                     JZ 0x00501de3
00501D89  8B 8B FE 02 00 00         MOV ECX,dword ptr [EBX + 0x2fe]
00501D8F  8D 43 18                  LEA EAX,[EBX + 0x18]
00501D92  50                        PUSH EAX
00501D93  51                        PUSH ECX
00501D94  6A 02                     PUSH 0x2
00501D96  8B CB                     MOV ECX,EBX
00501D98  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00501D9F  E8 DC 42 1E 00            CALL 0x006e6080
00501DA4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00501DA7  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
00501DAB  8D 72 09                  LEA ESI,[EDX + 0x9]
LAB_00501dae:
00501DAE  80 3E 00                  CMP byte ptr [ESI],0x0
00501DB1  74 0D                     JZ 0x00501dc0
00501DB3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00501DB6  8B CB                     MOV ECX,EBX
00501DB8  50                        PUSH EAX
00501DB9  6A 01                     PUSH 0x1
00501DBB  E8 7E 13 F0 FF            CALL 0x0040313e
LAB_00501dc0:
00501DC0  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00501DC3  FE C0                     INC AL
00501DC5  46                        INC ESI
00501DC6  3C 06                     CMP AL,0x6
00501DC8  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00501DCB  72 E1                     JC 0x00501dae
00501DCD  6A 01                     PUSH 0x1
00501DCF  8B CB                     MOV ECX,EBX
00501DD1  E8 CB 2D F0 FF            CALL 0x00404ba1
00501DD6  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00501DDC  E8 1B 23 F0 FF            CALL 0x004040fc
00501DE1  EB 78                     JMP 0x00501e5b
LAB_00501de3:
00501DE3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00501DE6  8B 08                     MOV ECX,dword ptr [EAX]
00501DE8  3B 0A                     CMP ECX,dword ptr [EDX]
00501DEA  74 5B                     JZ 0x00501e47
00501DEC  8B 8B FE 02 00 00         MOV ECX,dword ptr [EBX + 0x2fe]
00501DF2  8D 43 18                  LEA EAX,[EBX + 0x18]
00501DF5  50                        PUSH EAX
00501DF6  51                        PUSH ECX
00501DF7  6A 02                     PUSH 0x2
00501DF9  8B CB                     MOV ECX,EBX
00501DFB  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00501E02  E8 79 42 1E 00            CALL 0x006e6080
00501E07  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00501E0A  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
00501E0E  8D 72 09                  LEA ESI,[EDX + 0x9]
LAB_00501e11:
00501E11  80 3E 00                  CMP byte ptr [ESI],0x0
00501E14  74 0D                     JZ 0x00501e23
00501E16  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00501E19  8B CB                     MOV ECX,EBX
00501E1B  50                        PUSH EAX
00501E1C  6A 01                     PUSH 0x1
00501E1E  E8 1B 13 F0 FF            CALL 0x0040313e
LAB_00501e23:
00501E23  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00501E26  FE C0                     INC AL
00501E28  46                        INC ESI
00501E29  3C 06                     CMP AL,0x6
00501E2B  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00501E2E  72 E1                     JC 0x00501e11
00501E30  6A 01                     PUSH 0x1
00501E32  8B CB                     MOV ECX,EBX
00501E34  E8 68 2D F0 FF            CALL 0x00404ba1
00501E39  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00501E3F  E8 B8 22 F0 FF            CALL 0x004040fc
00501E44  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00501e47:
00501E47  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00501E4A  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
00501E4D  3A 4A 08                  CMP CL,byte ptr [EDX + 0x8]
00501E50  74 0C                     JZ 0x00501e5e
00501E52  6A 01                     PUSH 0x1
00501E54  8B CB                     MOV ECX,EBX
00501E56  E8 46 2D F0 FF            CALL 0x00404ba1
LAB_00501e5b:
00501E5B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00501e5e:
00501E5E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00501E61  B9 03 00 00 00            MOV ECX,0x3
00501E66  8D 70 0F                  LEA ESI,[EAX + 0xf]
00501E69  8D 7A 0F                  LEA EDI,[EDX + 0xf]
00501E6C  33 D2                     XOR EDX,EDX
00501E6E  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
00501E71  75 0D                     JNZ 0x00501e80
00501E73  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00501E76  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
00501E79  3A 4E 07                  CMP CL,byte ptr [ESI + 0x7]
00501E7C  74 16                     JZ 0x00501e94
00501E7E  EB 03                     JMP 0x00501e83
LAB_00501e80:
00501E80  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00501e83:
00501E83  56                        PUSH ESI
00501E84  50                        PUSH EAX
00501E85  6A 01                     PUSH 0x1
00501E87  8B CB                     MOV ECX,EBX
00501E89  E8 FB 30 F0 FF            CALL 0x00404f89
00501E8E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00501E91  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00501e94:
00501E94  8A 50 15                  MOV DL,byte ptr [EAX + 0x15]
00501E97  8A 4E 15                  MOV CL,byte ptr [ESI + 0x15]
00501E9A  3A D1                     CMP DL,CL
00501E9C  75 0A                     JNZ 0x00501ea8
00501E9E  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
00501EA1  8A 56 07                  MOV DL,byte ptr [ESI + 0x7]
00501EA4  3A CA                     CMP CL,DL
00501EA6  74 3A                     JZ 0x00501ee2
LAB_00501ea8:
00501EA8  8B BB C0 09 00 00         MOV EDI,dword ptr [EBX + 0x9c0]
00501EAE  85 FF                     TEST EDI,EDI
00501EB0  74 30                     JZ 0x00501ee2
00501EB2  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00501EB9  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
00501EBC  84 C9                     TEST CL,CL
00501EBE  74 09                     JZ 0x00501ec9
00501EC0  33 D2                     XOR EDX,EDX
00501EC2  8A 50 15                  MOV DL,byte ptr [EAX + 0x15]
00501EC5  8B C2                     MOV EAX,EDX
00501EC7  EB 02                     JMP 0x00501ecb
LAB_00501ec9:
00501EC9  33 C0                     XOR EAX,EAX
LAB_00501ecb:
00501ECB  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
00501ECE  8D 43 18                  LEA EAX,[EBX + 0x18]
00501ED1  50                        PUSH EAX
00501ED2  57                        PUSH EDI
00501ED3  6A 02                     PUSH 0x2
00501ED5  8B CB                     MOV ECX,EBX
00501ED7  E8 A4 41 1E 00            CALL 0x006e6080
00501EDC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00501EDF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00501ee2:
00501EE2  8B 50 36                  MOV EDX,dword ptr [EAX + 0x36]
00501EE5  8D 78 36                  LEA EDI,[EAX + 0x36]
00501EE8  3B 56 36                  CMP EDX,dword ptr [ESI + 0x36]
00501EEB  8D 4E 36                  LEA ECX,[ESI + 0x36]
00501EEE  75 0A                     JNZ 0x00501efa
00501EF0  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
00501EF3  8A 56 07                  MOV DL,byte ptr [ESI + 0x7]
00501EF6  3A CA                     CMP CL,DL
00501EF8  74 4B                     JZ 0x00501f45
LAB_00501efa:
00501EFA  8D B3 60 09 00 00         LEA ESI,[EBX + 0x960]
00501F00  C7 45 0C 04 00 00 00      MOV dword ptr [EBP + 0xc],0x4
LAB_00501f07:
00501F07  83 3E 00                  CMP dword ptr [ESI],0x0
00501F0A  74 2C                     JZ 0x00501f38
00501F0C  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00501F13  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
00501F16  84 C9                     TEST CL,CL
00501F18  74 06                     JZ 0x00501f20
00501F1A  33 C0                     XOR EAX,EAX
00501F1C  8A 07                     MOV AL,byte ptr [EDI]
00501F1E  EB 02                     JMP 0x00501f22
LAB_00501f20:
00501F20  33 C0                     XOR EAX,EAX
LAB_00501f22:
00501F22  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
00501F25  8B 06                     MOV EAX,dword ptr [ESI]
00501F27  8D 53 18                  LEA EDX,[EBX + 0x18]
00501F2A  8B CB                     MOV ECX,EBX
00501F2C  52                        PUSH EDX
00501F2D  50                        PUSH EAX
00501F2E  6A 02                     PUSH 0x2
00501F30  E8 4B 41 1E 00            CALL 0x006e6080
00501F35  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00501f38:
00501F38  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00501F3B  83 C6 04                  ADD ESI,0x4
00501F3E  47                        INC EDI
00501F3F  49                        DEC ECX
00501F40  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00501F43  75 C2                     JNZ 0x00501f07
LAB_00501f45:
00501F45  5F                        POP EDI
00501F46  5E                        POP ESI
00501F47  5B                        POP EBX
00501F48  8B E5                     MOV ESP,EBP
00501F4A  5D                        POP EBP
00501F4B  C2 08 00                  RET 0x8
