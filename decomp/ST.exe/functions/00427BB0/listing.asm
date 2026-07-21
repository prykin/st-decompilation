SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00427bb0:
00427BB0  55                        PUSH EBP
00427BB1  8B EC                     MOV EBP,ESP
00427BB3  83 EC 1C                  SUB ESP,0x1c
00427BB6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00427BB9  8B D1                     MOV EDX,ECX
00427BBB  53                        PUSH EBX
00427BBC  8B C8                     MOV ECX,EAX
00427BBE  56                        PUSH ESI
00427BBF  8B 35 74 4D 7F 00         MOV ESI,dword ptr [0x007f4d74]
00427BC5  C1 E1 04                  SHL ECX,0x4
00427BC8  03 CE                     ADD ECX,ESI
00427BCA  8B 35 80 4D 7F 00         MOV ESI,dword ptr [0x007f4d80]
00427BD0  03 F0                     ADD ESI,EAX
00427BD2  8B 9A 8C 03 00 00         MOV EBX,dword ptr [EDX + 0x38c]
00427BD8  0F AF B2 7C 03 00 00      IMUL ESI,dword ptr [EDX + 0x37c]
00427BDF  57                        PUSH EDI
00427BE0  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00427BE3  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00427BE6  03 F3                     ADD ESI,EBX
00427BE8  8B D0                     MOV EDX,EAX
00427BEA  3B C7                     CMP EAX,EDI
00427BEC  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00427BF3  C7 45 FC FF FF FF 7F      MOV dword ptr [EBP + -0x4],0x7fffffff
00427BFA  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00427BFD  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00427C00  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00427C03  0F 8F 58 02 00 00         JG 0x00427e61
LAB_00427c09:
00427C09  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00427C0C  8B 39                     MOV EDI,dword ptr [ECX]
00427C0E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00427C11  83 FB FF                  CMP EBX,-0x1
00427C14  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00427C17  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00427C1A  75 08                     JNZ 0x00427c24
00427C1C  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00427C1F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00427C22  EB 0B                     JMP 0x00427c2f
LAB_00427c24:
00427C24  83 FB 01                  CMP EBX,0x1
00427C27  75 06                     JNZ 0x00427c2f
00427C29  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00427C2C  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_00427c2f:
00427C2F  3B F8                     CMP EDI,EAX
00427C31  7E 26                     JLE 0x00427c59
00427C33  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00427C36  3D FF FF FF 7F            CMP EAX,0x7fffffff
00427C3B  0F 84 E4 01 00 00         JZ 0x00427e25
00427C41  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00427C44  4A                        DEC EDX
00427C45  53                        PUSH EBX
00427C46  52                        PUSH EDX
00427C47  50                        PUSH EAX
00427C48  E8 B9 A1 FD FF            CALL 0x00401e06
00427C4D  C7 45 FC FF FF FF 7F      MOV dword ptr [EBP + -0x4],0x7fffffff
00427C54  E9 C6 01 00 00            JMP 0x00427e1f
LAB_00427c59:
00427C59  8B 1D 7C 4D 7F 00         MOV EBX,dword ptr [0x007f4d7c]
00427C5F  03 FB                     ADD EDI,EBX
00427C61  33 DB                     XOR EBX,EBX
00427C63  8A 1C 37                  MOV BL,byte ptr [EDI + ESI*0x1]
00427C66  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00427C69  47                        INC EDI
00427C6A  3B F8                     CMP EDI,EAX
00427C6C  7F 20                     JG 0x00427c8e
00427C6E  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
00427C74  03 CE                     ADD ECX,ESI
LAB_00427c76:
00427C76  33 C0                     XOR EAX,EAX
00427C78  8A 04 39                  MOV AL,byte ptr [ECX + EDI*0x1]
00427C7B  3B C3                     CMP EAX,EBX
00427C7D  0F 85 1F 01 00 00         JNZ 0x00427da2
00427C83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00427C86  47                        INC EDI
00427C87  3B F8                     CMP EDI,EAX
00427C89  7E EB                     JLE 0x00427c76
00427C8B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00427c8e:
00427C8E  81 7D FC FF FF FF 7F      CMP dword ptr [EBP + -0x4],0x7fffffff
00427C95  74 2B                     JZ 0x00427cc2
00427C97  3B F8                     CMP EDI,EAX
00427C99  7E 05                     JLE 0x00427ca0
00427C9B  3B 5D E4                  CMP EBX,dword ptr [EBP + -0x1c]
00427C9E  74 22                     JZ 0x00427cc2
LAB_00427ca0:
00427CA0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00427CA3  4A                        DEC EDX
00427CA4  51                        PUSH ECX
00427CA5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00427CA8  52                        PUSH EDX
00427CA9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00427CAC  52                        PUSH EDX
00427CAD  E8 54 A1 FD FF            CALL 0x00401e06
00427CB2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00427CB5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00427CB8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00427CBB  C7 45 FC FF FF FF 7F      MOV dword ptr [EBP + -0x4],0x7fffffff
LAB_00427cc2:
00427CC2  3B F8                     CMP EDI,EAX
00427CC4  0F 8F 41 01 00 00         JG 0x00427e0b
LAB_00427cca:
00427CCA  A1 84 4D 7F 00            MOV EAX,[0x007f4d84]
00427CCF  8B 0D 78 4D 7F 00         MOV ECX,dword ptr [0x007f4d78]
00427CD5  3B C8                     CMP ECX,EAX
00427CD7  7C 2E                     JL 0x00427d07
00427CD9  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
00427CDF  8D 44 40 1E               LEA EAX,[EAX + EAX*0x2 + 0x1e]
00427CE3  C1 E0 02                  SHL EAX,0x2
00427CE6  50                        PUSH EAX
00427CE7  51                        PUSH ECX
00427CE8  E8 63 52 28 00            CALL 0x006acf50
00427CED  85 C0                     TEST EAX,EAX
00427CEF  0F 84 6C 01 00 00         JZ 0x00427e61
00427CF5  A3 6C 4D 7F 00            MOV [0x007f4d6c],EAX
00427CFA  A1 84 4D 7F 00            MOV EAX,[0x007f4d84]
00427CFF  83 C0 0A                  ADD EAX,0xa
00427D02  A3 84 4D 7F 00            MOV [0x007f4d84],EAX
LAB_00427d07:
00427D07  6A 20                     PUSH 0x20
00427D09  E8 62 2F 28 00            CALL 0x006aac70
00427D0E  8B F0                     MOV ESI,EAX
00427D10  85 F6                     TEST ESI,ESI
00427D12  0F 84 49 01 00 00         JZ 0x00427e61
00427D18  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
00427D1D  6A 01                     PUSH 0x1
00427D1F  6A 00                     PUSH 0x0
00427D21  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00427D24  A1 6C 4D 7F 00            MOV EAX,[0x007f4d6c]
00427D29  89 74 90 08               MOV dword ptr [EAX + EDX*0x4 + 0x8],ESI
00427D2D  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
00427D33  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00427D36  A1 7C 4D 7F 00            MOV EAX,[0x007f4d7c]
00427D3B  03 CA                     ADD ECX,EDX
00427D3D  51                        PUSH ECX
00427D3E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00427D41  03 C1                     ADD EAX,ECX
00427D43  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00427D46  50                        PUSH EAX
00427D47  6A 00                     PUSH 0x0
00427D49  56                        PUSH ESI
00427D4A  E8 C1 D2 FD FF            CALL 0x00405010
00427D4F  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427D55  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00427D58  6A 02                     PUSH 0x2
00427D5A  03 D1                     ADD EDX,ECX
00427D5C  6A 03                     PUSH 0x3
00427D5E  52                        PUSH EDX
00427D5F  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427D65  8D 4C 3A FF               LEA ECX,[EDX + EDI*0x1 + -0x1]
00427D69  51                        PUSH ECX
00427D6A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00427D6D  50                        PUSH EAX
00427D6E  56                        PUSH ESI
00427D6F  E8 9C D2 FD FF            CALL 0x00405010
00427D74  8B 0D 78 4D 7F 00         MOV ECX,dword ptr [0x007f4d78]
00427D7A  F6 C3 80                  TEST BL,0x80
00427D7D  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00427D80  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
00427D86  89 44 91 04               MOV dword ptr [ECX + EDX*0x4 + 0x4],EAX
00427D8A  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
00427D8F  74 1C                     JZ 0x00427dad
00427D91  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00427D94  A1 6C 4D 7F 00            MOV EAX,[0x007f4d6c]
00427D99  C7 04 90 01 00 00 00      MOV dword ptr [EAX + EDX*0x4],0x1
00427DA0  EB 1B                     JMP 0x00427dbd
LAB_00427da2:
00427DA2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00427DA5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00427DA8  E9 E1 FE FF FF            JMP 0x00427c8e
LAB_00427dad:
00427DAD  8B 15 6C 4D 7F 00         MOV EDX,dword ptr [0x007f4d6c]
00427DB3  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00427DB6  C7 04 8A 00 00 00 00      MOV dword ptr [EDX + ECX*0x4],0x0
LAB_00427dbd:
00427DBD  8B 0D 78 4D 7F 00         MOV ECX,dword ptr [0x007f4d78]
00427DC3  41                        INC ECX
00427DC4  89 0D 78 4D 7F 00         MOV dword ptr [0x007f4d78],ECX
00427DCA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00427DCD  3B F9                     CMP EDI,ECX
00427DCF  7F 4B                     JG 0x00427e1c
00427DD1  A1 7C 4D 7F 00            MOV EAX,[0x007f4d7c]
00427DD6  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00427DD9  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00427DDC  33 DB                     XOR EBX,EBX
00427DDE  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
00427DE1  47                        INC EDI
00427DE2  3B F9                     CMP EDI,ECX
00427DE4  8A 1C 32                  MOV BL,byte ptr [EDX + ESI*0x1]
00427DE7  0F 8F DD FE FF FF         JG 0x00427cca
00427DED  8B CE                     MOV ECX,ESI
00427DEF  03 C1                     ADD EAX,ECX
LAB_00427df1:
00427DF1  33 D2                     XOR EDX,EDX
00427DF3  8A 14 38                  MOV DL,byte ptr [EAX + EDI*0x1]
00427DF6  3B D3                     CMP EDX,EBX
00427DF8  0F 85 CC FE FF FF         JNZ 0x00427cca
00427DFE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00427E01  47                        INC EDI
00427E02  3B F9                     CMP EDI,ECX
00427E04  7E EB                     JLE 0x00427df1
00427E06  E9 BF FE FF FF            JMP 0x00427cca
LAB_00427e0b:
00427E0B  81 7D FC FF FF FF 7F      CMP dword ptr [EBP + -0x4],0x7fffffff
00427E12  75 11                     JNZ 0x00427e25
00427E14  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00427E17  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00427E1A  EB 09                     JMP 0x00427e25
LAB_00427e1c:
00427E1C  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_00427e1f:
00427E1F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00427E22  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00427e25:
00427E25  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00427E28  42                        INC EDX
00427E29  83 C1 10                  ADD ECX,0x10
00427E2C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00427E2F  8B B8 7C 03 00 00         MOV EDI,dword ptr [EAX + 0x37c]
00427E35  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00427E38  03 F7                     ADD ESI,EDI
00427E3A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00427E3D  3B D7                     CMP EDX,EDI
00427E3F  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00427E42  0F 8E C1 FD FF FF         JLE 0x00427c09
00427E48  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00427E4B  81 F9 FF FF FF 7F         CMP ECX,0x7fffffff
00427E51  74 0E                     JZ 0x00427e61
00427E53  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00427E56  4A                        DEC EDX
00427E57  56                        PUSH ESI
00427E58  52                        PUSH EDX
00427E59  51                        PUSH ECX
00427E5A  8B C8                     MOV ECX,EAX
00427E5C  E8 A5 9F FD FF            CALL 0x00401e06
LAB_00427e61:
00427E61  5F                        POP EDI
00427E62  5E                        POP ESI
00427E63  33 C0                     XOR EAX,EAX
00427E65  5B                        POP EBX
00427E66  8B E5                     MOV ESP,EBP
00427E68  5D                        POP EBP
00427E69  C2 0C 00                  RET 0xc
