FUN_0075fa00:
0075FA00  55                        PUSH EBP
0075FA01  8B EC                     MOV EBP,ESP
0075FA03  83 EC 18                  SUB ESP,0x18
0075FA06  53                        PUSH EBX
0075FA07  56                        PUSH ESI
0075FA08  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075FA0B  B8 01 00 00 00            MOV EAX,0x1
0075FA10  57                        PUSH EDI
0075FA11  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
0075FA14  8B 9E BA 01 00 00         MOV EBX,dword ptr [ESI + 0x1ba]
0075FA1A  3B C8                     CMP ECX,EAX
0075FA1C  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0075FA1F  75 0C                     JNZ 0x0075fa2d
0075FA21  C7 45 FC FE 01 00 00      MOV dword ptr [EBP + -0x4],0x1fe
0075FA28  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0075FA2B  EB 08                     JMP 0x0075fa35
LAB_0075fa2d:
0075FA2D  33 C9                     XOR ECX,ECX
0075FA2F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075FA32  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
LAB_0075fa35:
0075FA35  8B 56 70                  MOV EDX,dword ptr [ESI + 0x70]
0075FA38  8B 0E                     MOV ECX,dword ptr [ESI]
0075FA3A  52                        PUSH EDX
0075FA3B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075FA3E  81 C2 00 01 00 00         ADD EDX,0x100
0075FA44  52                        PUSH EDX
0075FA45  50                        PUSH EAX
0075FA46  56                        PUSH ESI
0075FA47  FF 51 08                  CALL dword ptr [ECX + 0x8]
0075FA4A  89 43 18                  MOV dword ptr [EBX + 0x18],EAX
0075FA4D  8B 4E 70                  MOV ECX,dword ptr [ESI + 0x70]
0075FA50  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
0075FA53  33 FF                     XOR EDI,EDI
0075FA55  85 C9                     TEST ECX,ECX
0075FA57  0F 8E C3 00 00 00         JLE 0x0075fb20
0075FA5D  8D 4B 20                  LEA ECX,[EBX + 0x20]
0075FA60  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075FA63  EB 09                     JMP 0x0075fa6e
LAB_0075fa65:
0075FA65  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075FA68  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075FA6B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0075fa6e:
0075FA6E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075FA71  8B 0A                     MOV ECX,dword ptr [EDX]
0075FA73  99                        CDQ
0075FA74  F7 F9                     IDIV ECX
0075FA76  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075FA79  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075FA7C  85 C0                     TEST EAX,EAX
0075FA7E  74 11                     JZ 0x0075fa91
0075FA80  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0075FA83  8B 14 B8                  MOV EDX,dword ptr [EAX + EDI*0x4]
0075FA86  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
0075FA89  81 C2 FF 00 00 00         ADD EDX,0xff
0075FA8F  89 10                     MOV dword ptr [EAX],EDX
LAB_0075fa91:
0075FA91  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0075FA94  33 DB                     XOR EBX,EBX
0075FA96  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
0075FA99  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075FA9C  8D 41 FF                  LEA EAX,[ECX + -0x1]
0075FA9F  50                        PUSH EAX
0075FAA0  53                        PUSH EBX
0075FAA1  57                        PUSH EDI
0075FAA2  56                        PUSH ESI
0075FAA3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075FAA6  E8 85 00 00 00            CALL 0x0075fb30
0075FAAB  8B C8                     MOV ECX,EAX
0075FAAD  33 F6                     XOR ESI,ESI
LAB_0075faaf:
0075FAAF  3B F1                     CMP ESI,ECX
0075FAB1  7E 16                     JLE 0x0075fac9
LAB_0075fab3:
0075FAB3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075FAB6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075FAB9  43                        INC EBX
0075FABA  51                        PUSH ECX
0075FABB  53                        PUSH EBX
0075FABC  57                        PUSH EDI
0075FABD  52                        PUSH EDX
0075FABE  E8 6D 00 00 00            CALL 0x0075fb30
0075FAC3  8B C8                     MOV ECX,EAX
0075FAC5  3B F1                     CMP ESI,ECX
0075FAC7  7F EA                     JG 0x0075fab3
LAB_0075fac9:
0075FAC9  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
0075FACC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075FACF  F6 EB                     IMUL BL
0075FAD1  88 04 16                  MOV byte ptr [ESI + EDX*0x1],AL
0075FAD4  46                        INC ESI
0075FAD5  81 FE FF 00 00 00         CMP ESI,0xff
0075FADB  7E D2                     JLE 0x0075faaf
0075FADD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075FAE0  85 C0                     TEST EAX,EAX
0075FAE2  74 24                     JZ 0x0075fb08
0075FAE4  8B CA                     MOV ECX,EDX
0075FAE6  B8 01 00 00 00            MOV EAX,0x1
0075FAEB  8D 71 FF                  LEA ESI,[ECX + -0x1]
LAB_0075faee:
0075FAEE  8A 11                     MOV DL,byte ptr [ECX]
0075FAF0  40                        INC EAX
0075FAF1  88 16                     MOV byte ptr [ESI],DL
0075FAF3  8A 91 FF 00 00 00         MOV DL,byte ptr [ECX + 0xff]
0075FAF9  88 94 01 FE 00 00 00      MOV byte ptr [ECX + EAX*0x1 + 0xfe],DL
0075FB00  4E                        DEC ESI
0075FB01  3D FF 00 00 00            CMP EAX,0xff
0075FB06  7E E6                     JLE 0x0075faee
LAB_0075fb08:
0075FB08  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075FB0B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075FB0E  47                        INC EDI
0075FB0F  83 C2 04                  ADD EDX,0x4
0075FB12  8B 48 70                  MOV ECX,dword ptr [EAX + 0x70]
0075FB15  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075FB18  3B F9                     CMP EDI,ECX
0075FB1A  0F 8C 45 FF FF FF         JL 0x0075fa65
LAB_0075fb20:
0075FB20  5F                        POP EDI
0075FB21  5E                        POP ESI
0075FB22  5B                        POP EBX
0075FB23  8B E5                     MOV ESP,EBP
0075FB25  5D                        POP EBP
0075FB26  C2 04 00                  RET 0x4
