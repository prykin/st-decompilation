FUN_005f8d10:
005F8D10  55                        PUSH EBP
005F8D11  8B EC                     MOV EBP,ESP
005F8D13  83 EC 08                  SUB ESP,0x8
005F8D16  53                        PUSH EBX
005F8D17  56                        PUSH ESI
005F8D18  8B F1                     MOV ESI,ECX
005F8D1A  57                        PUSH EDI
005F8D1B  33 FF                     XOR EDI,EDI
005F8D1D  8B 06                     MOV EAX,dword ptr [ESI]
005F8D1F  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
005F8D22  8B CE                     MOV ECX,ESI
005F8D24  8B D8                     MOV EBX,EAX
005F8D26  E8 8E 8D E0 FF            CALL 0x00401ab9
005F8D2B  8D 43 01                  LEA EAX,[EBX + 0x1]
005F8D2E  83 F8 03                  CMP EAX,0x3
005F8D31  0F 87 35 02 00 00         JA 0x005f8f6c
switchD_005f8d37::switchD:
005F8D37  FF 24 85 84 8F 5F 00      JMP dword ptr [EAX*0x4 + 0x5f8f84]
switchD_005f8d37::caseD_0:
005F8D3E  8A 8E 9D 02 00 00         MOV CL,byte ptr [ESI + 0x29d]
005F8D44  B8 01 00 00 00            MOV EAX,0x1
005F8D49  3A C8                     CMP CL,AL
005F8D4B  BF 05 00 00 00            MOV EDI,0x5
005F8D50  0F 85 22 02 00 00         JNZ 0x005f8f78
005F8D56  38 86 BB 02 00 00         CMP byte ptr [ESI + 0x2bb],AL
005F8D5C  75 53                     JNZ 0x005f8db1
005F8D5E  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F8D61  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F8D64  51                        PUSH ECX
005F8D65  8D 45 FA                  LEA EAX,[EBP + -0x6]
005F8D68  52                        PUSH EDX
005F8D69  50                        PUSH EAX
005F8D6A  8B CE                     MOV ECX,ESI
005F8D6C  E8 54 8B E0 FF            CALL 0x004018c5
005F8D71  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
005F8D75  3B 8E 91 02 00 00         CMP ECX,dword ptr [ESI + 0x291]
005F8D7B  0F 85 F7 01 00 00         JNZ 0x005f8f78
005F8D81  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005F8D85  3B 96 95 02 00 00         CMP EDX,dword ptr [ESI + 0x295]
005F8D8B  0F 85 E7 01 00 00         JNZ 0x005f8f78
005F8D91  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005F8D95  3B 86 99 02 00 00         CMP EAX,dword ptr [ESI + 0x299]
005F8D9B  0F 85 D7 01 00 00         JNZ 0x005f8f78
005F8DA1  8B C7                     MOV EAX,EDI
005F8DA3  C6 86 BB 02 00 00 03      MOV byte ptr [ESI + 0x2bb],0x3
005F8DAA  5F                        POP EDI
005F8DAB  5E                        POP ESI
005F8DAC  5B                        POP EBX
005F8DAD  8B E5                     MOV ESP,EBP
005F8DAF  5D                        POP EBP
005F8DB0  C3                        RET
LAB_005f8db1:
005F8DB1  8B CE                     MOV ECX,ESI
005F8DB3  E8 FB C9 E0 FF            CALL 0x004057b3
005F8DB8  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F8DBE  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
005F8DC2  3B C2                     CMP EAX,EDX
005F8DC4  0F 8C AE 01 00 00         JL 0x005f8f78
005F8DCA  8B C7                     MOV EAX,EDI
005F8DCC  C7 86 DD 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x2dd],0x2
005F8DD6  5F                        POP EDI
005F8DD7  5E                        POP ESI
005F8DD8  5B                        POP EBX
005F8DD9  8B E5                     MOV ESP,EBP
005F8DDB  5D                        POP EBP
005F8DDC  C3                        RET
switchD_005f8d37::caseD_1:
005F8DDD  8B 86 EA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ea]
005F8DE3  33 DB                     XOR EBX,EBX
005F8DE5  3B C3                     CMP EAX,EBX
005F8DE7  74 6F                     JZ 0x005f8e58
005F8DE9  8B CE                     MOV ECX,ESI
005F8DEB  E8 F3 BC E0 FF            CALL 0x00404ae3
005F8DF0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F8DF5  BF 0C 00 00 00            MOV EDI,0xc
005F8DFA  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F8E00  89 8E D5 02 00 00         MOV dword ptr [ESI + 0x2d5],ECX
005F8E06  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F8E0C  8B 8E A0 02 00 00         MOV ECX,dword ptr [ESI + 0x2a0]
005F8E12  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F8E18  89 9E EF 02 00 00         MOV dword ptr [ESI + 0x2ef],EBX
005F8E1E  83 C0 32                  ADD EAX,0x32
005F8E21  3B CB                     CMP ECX,EBX
005F8E23  89 86 D9 02 00 00         MOV dword ptr [ESI + 0x2d9],EAX
005F8E29  B8 01 00 00 00            MOV EAX,0x1
005F8E2E  88 86 BB 02 00 00         MOV byte ptr [ESI + 0x2bb],AL
005F8E34  89 46 76                  MOV dword ptr [ESI + 0x76],EAX
005F8E37  7E 0F                     JLE 0x005f8e48
005F8E39  88 86 9F 02 00 00         MOV byte ptr [ESI + 0x29f],AL
005F8E3F  8B C7                     MOV EAX,EDI
005F8E41  5F                        POP EDI
005F8E42  5E                        POP ESI
005F8E43  5B                        POP EBX
005F8E44  8B E5                     MOV ESP,EBP
005F8E46  5D                        POP EBP
005F8E47  C3                        RET
LAB_005f8e48:
005F8E48  8B C7                     MOV EAX,EDI
005F8E4A  C6 86 9F 02 00 00 00      MOV byte ptr [ESI + 0x29f],0x0
005F8E51  5F                        POP EDI
005F8E52  5E                        POP ESI
005F8E53  5B                        POP EBX
005F8E54  8B E5                     MOV ESP,EBP
005F8E56  5D                        POP EBP
005F8E57  C3                        RET
LAB_005f8e58:
005F8E58  8A 86 9F 02 00 00         MOV AL,byte ptr [ESI + 0x29f]
005F8E5E  84 C0                     TEST AL,AL
005F8E60  74 55                     JZ 0x005f8eb7
005F8E62  39 9E A0 02 00 00         CMP dword ptr [ESI + 0x2a0],EBX
005F8E68  74 2B                     JZ 0x005f8e95
005F8E6A  8A 86 9D 02 00 00         MOV AL,byte ptr [ESI + 0x29d]
005F8E70  84 C0                     TEST AL,AL
005F8E72  75 21                     JNZ 0x005f8e95
005F8E74  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F8E77  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F8E7A  51                        PUSH ECX
005F8E7B  8D 45 FA                  LEA EAX,[EBP + -0x6]
005F8E7E  52                        PUSH EDX
005F8E7F  50                        PUSH EAX
005F8E80  8B CE                     MOV ECX,ESI
005F8E82  BF 0A 00 00 00            MOV EDI,0xa
005F8E87  E8 39 8A E0 FF            CALL 0x004018c5
005F8E8C  8B C7                     MOV EAX,EDI
005F8E8E  5F                        POP EDI
005F8E8F  5E                        POP ESI
005F8E90  5B                        POP EBX
005F8E91  8B E5                     MOV ESP,EBP
005F8E93  5D                        POP EBP
005F8E94  C3                        RET
LAB_005f8e95:
005F8E95  80 BE 9D 02 00 00 01      CMP byte ptr [ESI + 0x29d],0x1
005F8E9C  0F 84 CA 00 00 00         JZ 0x005f8f6c
LAB_005f8ea2:
005F8EA2  BF 08 00 00 00            MOV EDI,0x8
005F8EA7  C6 86 BB 02 00 00 02      MOV byte ptr [ESI + 0x2bb],0x2
005F8EAE  8B C7                     MOV EAX,EDI
005F8EB0  5F                        POP EDI
005F8EB1  5E                        POP ESI
005F8EB2  5B                        POP EBX
005F8EB3  8B E5                     MOV ESP,EBP
005F8EB5  5D                        POP EBP
005F8EB6  C3                        RET
LAB_005f8eb7:
005F8EB7  8A 8E 9D 02 00 00         MOV CL,byte ptr [ESI + 0x29d]
005F8EBD  B8 01 00 00 00            MOV EAX,0x1
005F8EC2  3A C8                     CMP CL,AL
005F8EC4  0F 84 A2 00 00 00         JZ 0x005f8f6c
005F8ECA  80 F9 03                  CMP CL,0x3
005F8ECD  75 D3                     JNZ 0x005f8ea2
005F8ECF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F8ED5  BF 0C 00 00 00            MOV EDI,0xc
005F8EDA  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F8EE0  89 96 D5 02 00 00         MOV dword ptr [ESI + 0x2d5],EDX
005F8EE6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F8EEC  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F8EF2  88 86 BB 02 00 00         MOV byte ptr [ESI + 0x2bb],AL
005F8EF8  83 C2 32                  ADD EDX,0x32
005F8EFB  89 46 76                  MOV dword ptr [ESI + 0x76],EAX
005F8EFE  8B C7                     MOV EAX,EDI
005F8F00  89 96 D9 02 00 00         MOV dword ptr [ESI + 0x2d9],EDX
005F8F06  89 9E EF 02 00 00         MOV dword ptr [ESI + 0x2ef],EBX
005F8F0C  5F                        POP EDI
005F8F0D  5E                        POP ESI
005F8F0E  5B                        POP EBX
005F8F0F  8B E5                     MOV ESP,EBP
005F8F11  5D                        POP EBP
005F8F12  C3                        RET
switchD_005f8d37::caseD_2:
005F8F13  8B CE                     MOV ECX,ESI
005F8F15  E8 94 A0 E0 FF            CALL 0x00402fae
005F8F1A  85 C0                     TEST EAX,EAX
005F8F1C  7C 0E                     JL 0x005f8f2c
005F8F1E  BF 05 00 00 00            MOV EDI,0x5
005F8F23  8B C7                     MOV EAX,EDI
005F8F25  5F                        POP EDI
005F8F26  5E                        POP ESI
005F8F27  5B                        POP EBX
005F8F28  8B E5                     MOV ESP,EBP
005F8F2A  5D                        POP EBP
005F8F2B  C3                        RET
LAB_005f8f2c:
005F8F2C  C7 86 DD 02 00 00 0C 00 00 00  MOV dword ptr [ESI + 0x2dd],0xc
005F8F36  C7 46 76 01 00 00 00      MOV dword ptr [ESI + 0x76],0x1
005F8F3D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F8F42  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F8F48  89 8E D5 02 00 00         MOV dword ptr [ESI + 0x2d5],ECX
005F8F4E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F8F54  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F8F5A  83 C0 32                  ADD EAX,0x32
005F8F5D  89 86 D9 02 00 00         MOV dword ptr [ESI + 0x2d9],EAX
005F8F63  8B C7                     MOV EAX,EDI
005F8F65  5F                        POP EDI
005F8F66  5E                        POP ESI
005F8F67  5B                        POP EBX
005F8F68  8B E5                     MOV ESP,EBP
005F8F6A  5D                        POP EBP
005F8F6B  C3                        RET
switchD_005f8d37::caseD_ffffffff:
005F8F6C  BF 06 00 00 00            MOV EDI,0x6
005F8F71  C6 86 BB 02 00 00 03      MOV byte ptr [ESI + 0x2bb],0x3
LAB_005f8f78:
005F8F78  8B C7                     MOV EAX,EDI
005F8F7A  5F                        POP EDI
005F8F7B  5E                        POP ESI
005F8F7C  5B                        POP EBX
005F8F7D  8B E5                     MOV ESP,EBP
005F8F7F  5D                        POP EBP
005F8F80  C3                        RET
