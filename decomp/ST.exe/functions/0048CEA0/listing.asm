STBoatC::_CheckDefenceShots:
0048CEA0  55                        PUSH EBP
0048CEA1  8B EC                     MOV EBP,ESP
0048CEA3  83 EC 64                  SUB ESP,0x64
0048CEA6  0F BF 81 16 08 00 00      MOVSX EAX,word ptr [ECX + 0x816]
0048CEAD  0F AF C0                  IMUL EAX,EAX
0048CEB0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0048CEB3  8B C8                     MOV ECX,EAX
0048CEB5  C1 E1 06                  SHL ECX,0x6
0048CEB8  2B C8                     SUB ECX,EAX
0048CEBA  53                        PUSH EBX
0048CEBB  56                        PUSH ESI
0048CEBC  57                        PUSH EDI
0048CEBD  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0048CEC0  6A 00                     PUSH 0x0
0048CEC2  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0048CEC5  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0048CEC8  C1 E2 04                  SHL EDX,0x4
0048CECB  03 D0                     ADD EDX,EAX
0048CECD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0048CED2  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0048CED5  8D 55 A0                  LEA EDX,[EBP + -0x60]
0048CED8  52                        PUSH EDX
0048CED9  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0048CEDC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048CEE2  E8 09 09 2A 00            CALL 0x0072d7f0
0048CEE7  8B F0                     MOV ESI,EAX
0048CEE9  83 C4 08                  ADD ESP,0x8
0048CEEC  85 F6                     TEST ESI,ESI
0048CEEE  0F 85 49 01 00 00         JNZ 0x0048d03d
0048CEF4  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0048CEF7  8B 8F 7B 04 00 00         MOV ECX,dword ptr [EDI + 0x47b]
0048CEFD  85 C9                     TEST ECX,ECX
0048CEFF  0F 84 26 01 00 00         JZ 0x0048d02b
0048CF05  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0048CF08  33 DB                     XOR EBX,EBX
0048CF0A  85 C0                     TEST EAX,EAX
0048CF0C  0F 8E 19 01 00 00         JLE 0x0048d02b
LAB_0048cf12:
0048CF12  8D 45 E0                  LEA EAX,[EBP + -0x20]
0048CF15  8B D3                     MOV EDX,EBX
0048CF17  50                        PUSH EAX
0048CF18  E8 53 FD 21 00            CALL 0x006acc70
0048CF1D  B9 FF FF 00 00            MOV ECX,0xffff
0048CF22  66 39 4D E4               CMP word ptr [EBP + -0x1c],CX
0048CF26  0F 84 EF 00 00 00         JZ 0x0048d01b
0048CF2C  8B 45 EA                  MOV EAX,dword ptr [EBP + -0x16]
0048CF2F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0048CF32  2B C6                     SUB EAX,ESI
0048CF34  85 C0                     TEST EAX,EAX
0048CF36  89 45 EA                  MOV dword ptr [EBP + -0x16],EAX
0048CF39  0F 8E C7 00 00 00         JLE 0x0048d006
0048CF3F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0048CF42  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0048CF45  6A 01                     PUSH 0x1
0048CF47  51                        PUSH ECX
0048CF48  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048CF4E  52                        PUSH EDX
0048CF4F  E8 66 59 F7 FF            CALL 0x004028ba
0048CF54  8B F0                     MOV ESI,EAX
0048CF56  85 F6                     TEST ESI,ESI
0048CF58  0F 84 94 00 00 00         JZ 0x0048cff2
0048CF5E  8B 06                     MOV EAX,dword ptr [ESI]
0048CF60  8B CE                     MOV ECX,ESI
0048CF62  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0048CF68  83 F8 01                  CMP EAX,0x1
0048CF6B  0F 85 81 00 00 00         JNZ 0x0048cff2
0048CF71  8B 16                     MOV EDX,dword ptr [ESI]
0048CF73  8B CE                     MOV ECX,ESI
0048CF75  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
0048CF7B  83 F8 01                  CMP EAX,0x1
0048CF7E  75 72                     JNZ 0x0048cff2
0048CF80  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0048CF83  8B 06                     MOV EAX,dword ptr [ESI]
0048CF85  51                        PUSH ECX
0048CF86  8B CE                     MOV ECX,ESI
0048CF88  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
0048CF8E  83 F8 01                  CMP EAX,0x1
0048CF91  75 5F                     JNZ 0x0048cff2
0048CF93  8D 55 FE                  LEA EDX,[EBP + -0x2]
0048CF96  8D 45 FC                  LEA EAX,[EBP + -0x4]
0048CF99  52                        PUSH EDX
0048CF9A  8D 4D FA                  LEA ECX,[EBP + -0x6]
0048CF9D  50                        PUSH EAX
0048CF9E  51                        PUSH ECX
0048CF9F  8B CE                     MOV ECX,ESI
0048CFA1  E8 3D 62 F7 FF            CALL 0x004031e3
0048CFA6  0F BF 47 41               MOVSX EAX,word ptr [EDI + 0x41]
0048CFAA  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
0048CFAE  0F BF 4F 43               MOVSX ECX,word ptr [EDI + 0x43]
0048CFB2  0F BF 75 FE               MOVSX ESI,word ptr [EBP + -0x2]
0048CFB6  2B C2                     SUB EAX,EDX
0048CFB8  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0048CFBC  2B CA                     SUB ECX,EDX
0048CFBE  0F BF 57 45               MOVSX EDX,word ptr [EDI + 0x45]
0048CFC2  2B D6                     SUB EDX,ESI
0048CFC4  8B F1                     MOV ESI,ECX
0048CFC6  0F AF F1                  IMUL ESI,ECX
0048CFC9  8B C8                     MOV ECX,EAX
0048CFCB  0F AF C8                  IMUL ECX,EAX
0048CFCE  8B C2                     MOV EAX,EDX
0048CFD0  03 F1                     ADD ESI,ECX
0048CFD2  0F AF C2                  IMUL EAX,EDX
0048CFD5  03 F0                     ADD ESI,EAX
0048CFD7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0048CFDA  3B F0                     CMP ESI,EAX
0048CFDC  76 06                     JBE 0x0048cfe4
0048CFDE  66 C7 45 E4 FF FF         MOV word ptr [EBP + -0x1c],0xffff
LAB_0048cfe4:
0048CFE4  8B 97 7B 04 00 00         MOV EDX,dword ptr [EDI + 0x47b]
0048CFEA  8D 4D E0                  LEA ECX,[EBP + -0x20]
0048CFED  51                        PUSH ECX
0048CFEE  53                        PUSH EBX
0048CFEF  52                        PUSH EDX
0048CFF0  EB 24                     JMP 0x0048d016
LAB_0048cff2:
0048CFF2  8B 8F 7B 04 00 00         MOV ECX,dword ptr [EDI + 0x47b]
0048CFF8  8D 45 E0                  LEA EAX,[EBP + -0x20]
0048CFFB  50                        PUSH EAX
0048CFFC  53                        PUSH EBX
0048CFFD  66 C7 45 E4 FF FF         MOV word ptr [EBP + -0x1c],0xffff
0048D003  51                        PUSH ECX
0048D004  EB 10                     JMP 0x0048d016
LAB_0048d006:
0048D006  8B 87 7B 04 00 00         MOV EAX,dword ptr [EDI + 0x47b]
0048D00C  8D 55 E0                  LEA EDX,[EBP + -0x20]
0048D00F  52                        PUSH EDX
0048D010  53                        PUSH EBX
0048D011  66 89 4D E4               MOV word ptr [EBP + -0x1c],CX
0048D015  50                        PUSH EAX
LAB_0048d016:
0048D016  E8 25 11 22 00            CALL 0x006ae140
LAB_0048d01b:
0048D01B  8B 8F 7B 04 00 00         MOV ECX,dword ptr [EDI + 0x47b]
0048D021  43                        INC EBX
0048D022  3B 59 0C                  CMP EBX,dword ptr [ECX + 0xc]
0048D025  0F 8C E7 FE FF FF         JL 0x0048cf12
LAB_0048d02b:
0048D02B  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0048D02E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048D034  5F                        POP EDI
0048D035  5E                        POP ESI
0048D036  5B                        POP EBX
0048D037  8B E5                     MOV ESP,EBP
0048D039  5D                        POP EBP
0048D03A  C2 04 00                  RET 0x4
LAB_0048d03d:
0048D03D  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0048D040  68 00 BA 7A 00            PUSH 0x7aba00
0048D045  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048D04A  56                        PUSH ESI
0048D04B  6A 00                     PUSH 0x0
0048D04D  68 B4 4B 00 00            PUSH 0x4bb4
0048D052  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048D057  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0048D05D  E8 6E 04 22 00            CALL 0x006ad4d0
0048D062  83 C4 18                  ADD ESP,0x18
0048D065  85 C0                     TEST EAX,EAX
0048D067  74 01                     JZ 0x0048d06a
0048D069  CC                        INT3
LAB_0048d06a:
0048D06A  68 B5 4B 00 00            PUSH 0x4bb5
0048D06F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048D074  6A 00                     PUSH 0x0
0048D076  56                        PUSH ESI
0048D077  E8 C4 8D 21 00            CALL 0x006a5e40
0048D07C  5F                        POP EDI
0048D07D  5E                        POP ESI
0048D07E  5B                        POP EBX
0048D07F  8B E5                     MOV ESP,EBP
0048D081  5D                        POP EBP
0048D082  C2 04 00                  RET 0x4
