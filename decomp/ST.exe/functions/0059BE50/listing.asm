FSGSTy::sub_0059BE50:
0059BE50  56                        PUSH ESI
0059BE51  8B F1                     MOV ESI,ECX
0059BE53  33 C0                     XOR EAX,EAX
0059BE55  57                        PUSH EDI
0059BE56  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
0059BE5C  33 FF                     XOR EDI,EDI
0059BE5E  83 C0 FE                  ADD EAX,-0x2
0059BE61  89 BE 6B 1A 00 00         MOV dword ptr [ESI + 0x1a6b],EDI
0059BE67  83 F8 08                  CMP EAX,0x8
0059BE6A  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
0059BE71  0F 87 1C 05 00 00         JA 0x0059c393
switchD_0059be77::switchD:
0059BE77  FF 24 85 98 C3 59 00      JMP dword ptr [EAX*0x4 + 0x59c398]
switchD_0059be77::caseD_2:
0059BE7E  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059BE84  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059BE8B  3B C7                     CMP EAX,EDI
0059BE8D  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059BE90  74 0E                     JZ 0x0059bea0
0059BE92  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BE95  51                        PUSH ECX
0059BE96  50                        PUSH EAX
0059BE97  6A 02                     PUSH 0x2
0059BE99  8B CE                     MOV ECX,ESI
0059BE9B  E8 E0 A1 14 00            CALL 0x006e6080
LAB_0059bea0:
0059BEA0  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
0059BEA6  3B C7                     CMP EAX,EDI
0059BEA8  74 0E                     JZ 0x0059beb8
0059BEAA  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BEAD  8B CE                     MOV ECX,ESI
0059BEAF  52                        PUSH EDX
0059BEB0  50                        PUSH EAX
0059BEB1  6A 02                     PUSH 0x2
0059BEB3  E8 C8 A1 14 00            CALL 0x006e6080
LAB_0059beb8:
0059BEB8  8B 86 CC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1acc]
0059BEBE  3B C7                     CMP EAX,EDI
0059BEC0  74 0E                     JZ 0x0059bed0
0059BEC2  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BEC5  51                        PUSH ECX
0059BEC6  50                        PUSH EAX
0059BEC7  6A 02                     PUSH 0x2
0059BEC9  8B CE                     MOV ECX,ESI
0059BECB  E8 B0 A1 14 00            CALL 0x006e6080
LAB_0059bed0:
0059BED0  8B 86 D4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad4]
0059BED6  3B C7                     CMP EAX,EDI
0059BED8  74 0E                     JZ 0x0059bee8
0059BEDA  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BEDD  8B CE                     MOV ECX,ESI
0059BEDF  52                        PUSH EDX
0059BEE0  50                        PUSH EAX
0059BEE1  6A 02                     PUSH 0x2
0059BEE3  E8 98 A1 14 00            CALL 0x006e6080
LAB_0059bee8:
0059BEE8  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
0059BEEE  3B C7                     CMP EAX,EDI
0059BEF0  74 0E                     JZ 0x0059bf00
0059BEF2  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BEF5  51                        PUSH ECX
0059BEF6  50                        PUSH EAX
0059BEF7  6A 02                     PUSH 0x2
0059BEF9  8B CE                     MOV ECX,ESI
0059BEFB  E8 80 A1 14 00            CALL 0x006e6080
LAB_0059bf00:
0059BF00  8B 86 DC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1adc]
0059BF06  3B C7                     CMP EAX,EDI
0059BF08  74 0E                     JZ 0x0059bf18
0059BF0A  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BF0D  8B CE                     MOV ECX,ESI
0059BF0F  52                        PUSH EDX
0059BF10  50                        PUSH EAX
0059BF11  6A 02                     PUSH 0x2
0059BF13  E8 68 A1 14 00            CALL 0x006e6080
LAB_0059bf18:
0059BF18  8B 86 E0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae0]
0059BF1E  3B C7                     CMP EAX,EDI
0059BF20  74 0E                     JZ 0x0059bf30
0059BF22  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BF25  51                        PUSH ECX
0059BF26  50                        PUSH EAX
0059BF27  6A 02                     PUSH 0x2
0059BF29  8B CE                     MOV ECX,ESI
0059BF2B  E8 50 A1 14 00            CALL 0x006e6080
LAB_0059bf30:
0059BF30  8B 86 E4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae4]
0059BF36  3B C7                     CMP EAX,EDI
0059BF38  74 0E                     JZ 0x0059bf48
0059BF3A  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BF3D  8B CE                     MOV ECX,ESI
0059BF3F  52                        PUSH EDX
0059BF40  50                        PUSH EAX
0059BF41  6A 02                     PUSH 0x2
0059BF43  E8 38 A1 14 00            CALL 0x006e6080
LAB_0059bf48:
0059BF48  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059BF4E  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059BF55  3B C7                     CMP EAX,EDI
0059BF57  C7 46 31 99 00 00 00      MOV dword ptr [ESI + 0x31],0x99
0059BF5E  74 0E                     JZ 0x0059bf6e
0059BF60  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BF63  51                        PUSH ECX
0059BF64  50                        PUSH EAX
0059BF65  6A 02                     PUSH 0x2
0059BF67  8B CE                     MOV ECX,ESI
0059BF69  E8 12 A1 14 00            CALL 0x006e6080
LAB_0059bf6e:
0059BF6E  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
0059BF74  3B C7                     CMP EAX,EDI
0059BF76  74 0E                     JZ 0x0059bf86
0059BF78  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BF7B  8B CE                     MOV ECX,ESI
0059BF7D  52                        PUSH EDX
0059BF7E  50                        PUSH EAX
0059BF7F  6A 02                     PUSH 0x2
0059BF81  E8 FA A0 14 00            CALL 0x006e6080
LAB_0059bf86:
0059BF86  8B 86 DC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1adc]
0059BF8C  3B C7                     CMP EAX,EDI
0059BF8E  74 0E                     JZ 0x0059bf9e
0059BF90  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BF93  51                        PUSH ECX
0059BF94  50                        PUSH EAX
0059BF95  6A 02                     PUSH 0x2
0059BF97  8B CE                     MOV ECX,ESI
0059BF99  E8 E2 A0 14 00            CALL 0x006e6080
LAB_0059bf9e:
0059BF9E  8B 86 E0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae0]
0059BFA4  3B C7                     CMP EAX,EDI
0059BFA6  74 0E                     JZ 0x0059bfb6
0059BFA8  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BFAB  8B CE                     MOV ECX,ESI
0059BFAD  52                        PUSH EDX
0059BFAE  50                        PUSH EAX
0059BFAF  6A 02                     PUSH 0x2
0059BFB1  E8 CA A0 14 00            CALL 0x006e6080
LAB_0059bfb6:
0059BFB6  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
0059BFBC  C7 46 31 39 00 00 00      MOV dword ptr [ESI + 0x31],0x39
0059BFC3  3B C7                     CMP EAX,EDI
0059BFC5  74 0E                     JZ 0x0059bfd5
0059BFC7  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BFCA  51                        PUSH ECX
0059BFCB  50                        PUSH EAX
0059BFCC  6A 02                     PUSH 0x2
0059BFCE  8B CE                     MOV ECX,ESI
0059BFD0  E8 AB A0 14 00            CALL 0x006e6080
LAB_0059bfd5:
0059BFD5  8B 86 CC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1acc]
0059BFDB  3B C7                     CMP EAX,EDI
0059BFDD  74 0E                     JZ 0x0059bfed
0059BFDF  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BFE2  8B CE                     MOV ECX,ESI
0059BFE4  52                        PUSH EDX
0059BFE5  50                        PUSH EAX
0059BFE6  6A 02                     PUSH 0x2
0059BFE8  E8 93 A0 14 00            CALL 0x006e6080
LAB_0059bfed:
0059BFED  8B 86 D4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad4]
0059BFF3  3B C7                     CMP EAX,EDI
0059BFF5  74 0E                     JZ 0x0059c005
0059BFF7  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BFFA  51                        PUSH ECX
0059BFFB  50                        PUSH EAX
0059BFFC  6A 02                     PUSH 0x2
0059BFFE  8B CE                     MOV ECX,ESI
0059C000  E8 7B A0 14 00            CALL 0x006e6080
LAB_0059c005:
0059C005  8B 86 E4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae4]
0059C00B  C7 46 31 D8 00 00 00      MOV dword ptr [ESI + 0x31],0xd8
0059C012  3B C7                     CMP EAX,EDI
0059C014  74 0E                     JZ 0x0059c024
0059C016  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C019  8B CE                     MOV ECX,ESI
0059C01B  52                        PUSH EDX
0059C01C  50                        PUSH EAX
0059C01D  6A 02                     PUSH 0x2
0059C01F  E8 5C A0 14 00            CALL 0x006e6080
LAB_0059c024:
0059C024  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
0059C02A  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059C031  3B C7                     CMP EAX,EDI
0059C033  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C036  74 0E                     JZ 0x0059c046
0059C038  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C03B  51                        PUSH ECX
0059C03C  50                        PUSH EAX
0059C03D  6A 02                     PUSH 0x2
0059C03F  8B CE                     MOV ECX,ESI
0059C041  E8 3A A0 14 00            CALL 0x006e6080
LAB_0059c046:
0059C046  8B 86 D0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad0]
0059C04C  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C04F  3B C7                     CMP EAX,EDI
0059C051  74 0E                     JZ 0x0059c061
0059C053  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C056  8B CE                     MOV ECX,ESI
0059C058  52                        PUSH EDX
0059C059  50                        PUSH EAX
0059C05A  6A 02                     PUSH 0x2
0059C05C  E8 1F A0 14 00            CALL 0x006e6080
LAB_0059c061:
0059C061  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
0059C067  E9 5E 01 00 00            JMP 0x0059c1ca
switchD_0059be77::caseD_6:
0059C06C  8B 86 10 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b10]
0059C072  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059C079  3B C7                     CMP EAX,EDI
0059C07B  C7 46 31 19 00 00 00      MOV dword ptr [ESI + 0x31],0x19
0059C082  74 0E                     JZ 0x0059c092
0059C084  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C087  8B CE                     MOV ECX,ESI
0059C089  52                        PUSH EDX
0059C08A  50                        PUSH EAX
0059C08B  6A 02                     PUSH 0x2
0059C08D  E8 EE 9F 14 00            CALL 0x006e6080
LAB_0059c092:
0059C092  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059C098  C7 46 31 99 00 00 00      MOV dword ptr [ESI + 0x31],0x99
0059C09F  3B C7                     CMP EAX,EDI
0059C0A1  74 0E                     JZ 0x0059c0b1
0059C0A3  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C0A6  51                        PUSH ECX
0059C0A7  50                        PUSH EAX
0059C0A8  6A 02                     PUSH 0x2
0059C0AA  8B CE                     MOV ECX,ESI
0059C0AC  E8 CF 9F 14 00            CALL 0x006e6080
LAB_0059c0b1:
0059C0B1  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
0059C0B7  3B C7                     CMP EAX,EDI
0059C0B9  74 0E                     JZ 0x0059c0c9
0059C0BB  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C0BE  8B CE                     MOV ECX,ESI
0059C0C0  52                        PUSH EDX
0059C0C1  50                        PUSH EAX
0059C0C2  6A 02                     PUSH 0x2
0059C0C4  E8 B7 9F 14 00            CALL 0x006e6080
LAB_0059c0c9:
0059C0C9  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
0059C0CF  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059C0D6  3B C7                     CMP EAX,EDI
0059C0D8  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C0DB  74 0E                     JZ 0x0059c0eb
0059C0DD  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C0E0  51                        PUSH ECX
0059C0E1  50                        PUSH EAX
0059C0E2  6A 02                     PUSH 0x2
0059C0E4  8B CE                     MOV ECX,ESI
0059C0E6  E8 95 9F 14 00            CALL 0x006e6080
LAB_0059c0eb:
0059C0EB  8B 86 18 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b18]
0059C0F1  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C0F4  3B C7                     CMP EAX,EDI
0059C0F6  74 0E                     JZ 0x0059c106
0059C0F8  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C0FB  8B CE                     MOV ECX,ESI
0059C0FD  52                        PUSH EDX
0059C0FE  50                        PUSH EAX
0059C0FF  6A 02                     PUSH 0x2
0059C101  E8 7A 9F 14 00            CALL 0x006e6080
LAB_0059c106:
0059C106  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
0059C10C  3B C7                     CMP EAX,EDI
0059C10E  74 0E                     JZ 0x0059c11e
0059C110  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C113  51                        PUSH ECX
0059C114  50                        PUSH EAX
0059C115  6A 02                     PUSH 0x2
0059C117  8B CE                     MOV ECX,ESI
0059C119  E8 62 9F 14 00            CALL 0x006e6080
LAB_0059c11e:
0059C11E  8B 86 1C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b1c]
0059C124  3B C7                     CMP EAX,EDI
0059C126  0F 84 95 00 00 00         JZ 0x0059c1c1
0059C12C  E9 82 00 00 00            JMP 0x0059c1b3
switchD_0059be77::caseD_8:
0059C131  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059C137  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059C13E  3B C7                     CMP EAX,EDI
0059C140  C7 46 31 99 00 00 00      MOV dword ptr [ESI + 0x31],0x99
0059C147  74 0E                     JZ 0x0059c157
0059C149  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C14C  8B CE                     MOV ECX,ESI
0059C14E  52                        PUSH EDX
0059C14F  50                        PUSH EAX
0059C150  6A 02                     PUSH 0x2
0059C152  E8 29 9F 14 00            CALL 0x006e6080
LAB_0059c157:
0059C157  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
0059C15D  3B C7                     CMP EAX,EDI
0059C15F  74 0E                     JZ 0x0059c16f
0059C161  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C164  51                        PUSH ECX
0059C165  50                        PUSH EAX
0059C166  6A 02                     PUSH 0x2
0059C168  8B CE                     MOV ECX,ESI
0059C16A  E8 11 9F 14 00            CALL 0x006e6080
LAB_0059c16f:
0059C16F  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
0059C175  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059C17C  3B C7                     CMP EAX,EDI
0059C17E  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C181  74 0E                     JZ 0x0059c191
0059C183  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C186  8B CE                     MOV ECX,ESI
0059C188  52                        PUSH EDX
0059C189  50                        PUSH EAX
0059C18A  6A 02                     PUSH 0x2
0059C18C  E8 EF 9E 14 00            CALL 0x006e6080
LAB_0059c191:
0059C191  8B 86 BA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eba]
0059C197  3B C7                     CMP EAX,EDI
0059C199  74 0E                     JZ 0x0059c1a9
0059C19B  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C19E  51                        PUSH ECX
0059C19F  50                        PUSH EAX
0059C1A0  6A 02                     PUSH 0x2
0059C1A2  8B CE                     MOV ECX,ESI
0059C1A4  E8 D7 9E 14 00            CALL 0x006e6080
LAB_0059c1a9:
0059C1A9  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
0059C1AF  3B C7                     CMP EAX,EDI
0059C1B1  74 0E                     JZ 0x0059c1c1
LAB_0059c1b3:
0059C1B3  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C1B6  8B CE                     MOV ECX,ESI
0059C1B8  52                        PUSH EDX
0059C1B9  50                        PUSH EAX
0059C1BA  6A 02                     PUSH 0x2
0059C1BC  E8 BF 9E 14 00            CALL 0x006e6080
LAB_0059c1c1:
0059C1C1  8B 86 20 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b20]
0059C1C7  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
LAB_0059c1ca:
0059C1CA  3B C7                     CMP EAX,EDI
0059C1CC  0F 84 C1 01 00 00         JZ 0x0059c393
0059C1D2  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C1D5  51                        PUSH ECX
0059C1D6  50                        PUSH EAX
0059C1D7  6A 02                     PUSH 0x2
0059C1D9  8B CE                     MOV ECX,ESI
0059C1DB  E8 A0 9E 14 00            CALL 0x006e6080
0059C1E0  5F                        POP EDI
0059C1E1  5E                        POP ESI
0059C1E2  C3                        RET
switchD_0059be77::caseD_a:
0059C1E3  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
0059C1E9  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059C1F0  3B C7                     CMP EAX,EDI
0059C1F2  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C1F5  74 0E                     JZ 0x0059c205
0059C1F7  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C1FA  8B CE                     MOV ECX,ESI
0059C1FC  52                        PUSH EDX
0059C1FD  50                        PUSH EAX
0059C1FE  6A 02                     PUSH 0x2
0059C200  E8 7B 9E 14 00            CALL 0x006e6080
LAB_0059c205:
0059C205  8B 86 DC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1adc]
0059C20B  3B C7                     CMP EAX,EDI
0059C20D  74 0E                     JZ 0x0059c21d
0059C20F  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C212  51                        PUSH ECX
0059C213  50                        PUSH EAX
0059C214  6A 02                     PUSH 0x2
0059C216  8B CE                     MOV ECX,ESI
0059C218  E8 63 9E 14 00            CALL 0x006e6080
LAB_0059c21d:
0059C21D  8B 86 E0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae0]
0059C223  3B C7                     CMP EAX,EDI
0059C225  74 0E                     JZ 0x0059c235
0059C227  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C22A  8B CE                     MOV ECX,ESI
0059C22C  52                        PUSH EDX
0059C22D  50                        PUSH EAX
0059C22E  6A 02                     PUSH 0x2
0059C230  E8 4B 9E 14 00            CALL 0x006e6080
LAB_0059c235:
0059C235  8B 86 E4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae4]
0059C23B  3B C7                     CMP EAX,EDI
0059C23D  74 0E                     JZ 0x0059c24d
0059C23F  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C242  51                        PUSH ECX
0059C243  50                        PUSH EAX
0059C244  6A 02                     PUSH 0x2
0059C246  8B CE                     MOV ECX,ESI
0059C248  E8 33 9E 14 00            CALL 0x006e6080
LAB_0059c24d:
0059C24D  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
0059C253  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059C25A  3B C7                     CMP EAX,EDI
0059C25C  C7 46 31 99 00 00 00      MOV dword ptr [ESI + 0x31],0x99
0059C263  74 0E                     JZ 0x0059c273
0059C265  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C268  8B CE                     MOV ECX,ESI
0059C26A  52                        PUSH EDX
0059C26B  50                        PUSH EAX
0059C26C  6A 02                     PUSH 0x2
0059C26E  E8 0D 9E 14 00            CALL 0x006e6080
LAB_0059c273:
0059C273  8B 86 DC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1adc]
0059C279  3B C7                     CMP EAX,EDI
0059C27B  74 0E                     JZ 0x0059c28b
0059C27D  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C280  51                        PUSH ECX
0059C281  50                        PUSH EAX
0059C282  6A 02                     PUSH 0x2
0059C284  8B CE                     MOV ECX,ESI
0059C286  E8 F5 9D 14 00            CALL 0x006e6080
LAB_0059c28b:
0059C28B  8B 86 E0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae0]
0059C291  3B C7                     CMP EAX,EDI
0059C293  74 0E                     JZ 0x0059c2a3
0059C295  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C298  8B CE                     MOV ECX,ESI
0059C29A  52                        PUSH EDX
0059C29B  50                        PUSH EAX
0059C29C  6A 02                     PUSH 0x2
0059C29E  E8 DD 9D 14 00            CALL 0x006e6080
LAB_0059c2a3:
0059C2A3  8B 86 E4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae4]
0059C2A9  C7 46 31 D8 00 00 00      MOV dword ptr [ESI + 0x31],0xd8
0059C2B0  3B C7                     CMP EAX,EDI
0059C2B2  0F 84 DB 00 00 00         JZ 0x0059c393
0059C2B8  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C2BB  51                        PUSH ECX
0059C2BC  50                        PUSH EAX
0059C2BD  6A 02                     PUSH 0x2
0059C2BF  8B CE                     MOV ECX,ESI
0059C2C1  E8 BA 9D 14 00            CALL 0x006e6080
0059C2C6  5F                        POP EDI
0059C2C7  5E                        POP ESI
0059C2C8  C3                        RET
switchD_0059be77::caseD_9:
0059C2C9  8B 86 D3 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ed3]
0059C2CF  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059C2D6  3B C7                     CMP EAX,EDI
0059C2D8  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C2DB  74 0E                     JZ 0x0059c2eb
0059C2DD  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C2E0  8B CE                     MOV ECX,ESI
0059C2E2  52                        PUSH EDX
0059C2E3  50                        PUSH EAX
0059C2E4  6A 02                     PUSH 0x2
0059C2E6  E8 95 9D 14 00            CALL 0x006e6080
LAB_0059c2eb:
0059C2EB  8B 86 D7 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ed7]
0059C2F1  3B C7                     CMP EAX,EDI
0059C2F3  74 0E                     JZ 0x0059c303
0059C2F5  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C2F8  51                        PUSH ECX
0059C2F9  50                        PUSH EAX
0059C2FA  6A 02                     PUSH 0x2
0059C2FC  8B CE                     MOV ECX,ESI
0059C2FE  E8 7D 9D 14 00            CALL 0x006e6080
LAB_0059c303:
0059C303  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
0059C309  3B C7                     CMP EAX,EDI
0059C30B  74 0E                     JZ 0x0059c31b
0059C30D  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C310  8B CE                     MOV ECX,ESI
0059C312  52                        PUSH EDX
0059C313  50                        PUSH EAX
0059C314  6A 02                     PUSH 0x2
0059C316  E8 65 9D 14 00            CALL 0x006e6080
LAB_0059c31b:
0059C31B  8B 86 BA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eba]
0059C321  3B C7                     CMP EAX,EDI
0059C323  74 0E                     JZ 0x0059c333
0059C325  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C328  51                        PUSH ECX
0059C329  50                        PUSH EAX
0059C32A  6A 02                     PUSH 0x2
0059C32C  8B CE                     MOV ECX,ESI
0059C32E  E8 4D 9D 14 00            CALL 0x006e6080
LAB_0059c333:
0059C333  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
0059C339  3B C7                     CMP EAX,EDI
0059C33B  74 0E                     JZ 0x0059c34b
0059C33D  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C340  8B CE                     MOV ECX,ESI
0059C342  52                        PUSH EDX
0059C343  50                        PUSH EAX
0059C344  6A 02                     PUSH 0x2
0059C346  E8 35 9D 14 00            CALL 0x006e6080
LAB_0059c34b:
0059C34B  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059C351  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059C358  3B C7                     CMP EAX,EDI
0059C35A  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059C35D  74 0E                     JZ 0x0059c36d
0059C35F  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C362  51                        PUSH ECX
0059C363  50                        PUSH EAX
0059C364  6A 02                     PUSH 0x2
0059C366  8B CE                     MOV ECX,ESI
0059C368  E8 13 9D 14 00            CALL 0x006e6080
LAB_0059c36d:
0059C36D  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059C373  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059C37A  3B C7                     CMP EAX,EDI
0059C37C  C7 46 31 99 00 00 00      MOV dword ptr [ESI + 0x31],0x99
0059C383  74 0E                     JZ 0x0059c393
0059C385  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059C388  8B CE                     MOV ECX,ESI
0059C38A  52                        PUSH EDX
0059C38B  50                        PUSH EAX
0059C38C  6A 02                     PUSH 0x2
0059C38E  E8 ED 9C 14 00            CALL 0x006e6080
switchD_0059be77::default:
0059C393  5F                        POP EDI
0059C394  5E                        POP ESI
0059C395  C3                        RET
