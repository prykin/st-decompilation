FUN_004b9d90:
004B9D90  56                        PUSH ESI
004B9D91  8B F1                     MOV ESI,ECX
004B9D93  57                        PUSH EDI
004B9D94  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B9D9A  83 F8 01                  CMP EAX,0x1
004B9D9D  0F 84 A4 00 00 00         JZ 0x004b9e47
004B9DA3  83 F8 06                  CMP EAX,0x6
004B9DA6  0F 84 9B 00 00 00         JZ 0x004b9e47
004B9DAC  BF 04 00 00 00            MOV EDI,0x4
004B9DB1  3B C7                     CMP EAX,EDI
004B9DB3  0F 84 8E 00 00 00         JZ 0x004b9e47
004B9DB9  8B 8E AC 05 00 00         MOV ECX,dword ptr [ESI + 0x5ac]
004B9DBF  8D 41 CE                  LEA EAX,[ECX + -0x32]
004B9DC2  83 F8 40                  CMP EAX,0x40
004B9DC5  0F 87 EE 00 00 00         JA 0x004b9eb9
004B9DCB  33 D2                     XOR EDX,EDX
004B9DCD  8A 90 E4 9E 4B 00         MOV DL,byte ptr [EAX + 0x4b9ee4]
switchD_004b9dd3::switchD:
004B9DD3  FF 24 95 C4 9E 4B 00      JMP dword ptr [EDX*0x4 + 0x4b9ec4]
switchD_004b9dd3::caseD_38:
004B9DDA  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004B9DE0  85 C0                     TEST EAX,EAX
004B9DE2  75 63                     JNZ 0x004b9e47
004B9DE4  83 BE D8 04 00 00 FF      CMP dword ptr [ESI + 0x4d8],-0x1
004B9DEB  0F 84 C8 00 00 00         JZ 0x004b9eb9
004B9DF1  5F                        POP EDI
004B9DF2  33 C0                     XOR EAX,EAX
004B9DF4  5E                        POP ESI
004B9DF5  C3                        RET
switchD_004b9dd3::caseD_32:
004B9DF6  8B B6 D0 04 00 00         MOV ESI,dword ptr [ESI + 0x4d0]
004B9DFC  85 F6                     TEST ESI,ESI
004B9DFE  0F 84 B5 00 00 00         JZ 0x004b9eb9
004B9E04  83 FE 01                  CMP ESI,0x1
004B9E07  74 05                     JZ 0x004b9e0e
004B9E09  83 FE 02                  CMP ESI,0x2
004B9E0C  75 39                     JNZ 0x004b9e47
LAB_004b9e0e:
004B9E0E  83 F9 40                  CMP ECX,0x40
004B9E11  74 34                     JZ 0x004b9e47
004B9E13  83 F9 49                  CMP ECX,0x49
004B9E16  0F 85 9D 00 00 00         JNZ 0x004b9eb9
004B9E1C  5F                        POP EDI
004B9E1D  33 C0                     XOR EAX,EAX
004B9E1F  5E                        POP ESI
004B9E20  C3                        RET
switchD_004b9dd3::caseD_33:
004B9E21  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004B9E27  85 C0                     TEST EAX,EAX
004B9E29  75 1C                     JNZ 0x004b9e47
004B9E2B  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004B9E31  85 C0                     TEST EAX,EAX
004B9E33  0F 84 80 00 00 00         JZ 0x004b9eb9
004B9E39  5F                        POP EDI
004B9E3A  33 C0                     XOR EAX,EAX
004B9E3C  5E                        POP ESI
004B9E3D  C3                        RET
switchD_004b9dd3::caseD_45:
004B9E3E  83 BE D0 04 00 00 03      CMP dword ptr [ESI + 0x4d0],0x3
LAB_004b9e45:
004B9E45  75 72                     JNZ 0x004b9eb9
LAB_004b9e47:
004B9E47  5F                        POP EDI
004B9E48  33 C0                     XOR EAX,EAX
004B9E4A  5E                        POP ESI
004B9E4B  C3                        RET
switchD_004b9dd3::caseD_4e:
004B9E4C  39 BE D0 04 00 00         CMP dword ptr [ESI + 0x4d0],EDI
004B9E52  EB F1                     JMP 0x004b9e45
switchD_004b9dd3::caseD_37:
004B9E54  8B 86 D8 04 00 00         MOV EAX,dword ptr [ESI + 0x4d8]
004B9E5A  BF FF FF 00 00            MOV EDI,0xffff
004B9E5F  3B C7                     CMP EAX,EDI
004B9E61  75 E4                     JNZ 0x004b9e47
004B9E63  83 F9 6C                  CMP ECX,0x6c
004B9E66  75 51                     JNZ 0x004b9eb9
004B9E68  8B CE                     MOV ECX,ESI
004B9E6A  E8 F1 A2 F4 FF            CALL 0x00404160
004B9E6F  85 C0                     TEST EAX,EAX
004B9E71  74 D4                     JZ 0x004b9e47
004B9E73  8B B6 1B 06 00 00         MOV ESI,dword ptr [ESI + 0x61b]
004B9E79  85 F6                     TEST ESI,ESI
004B9E7B  74 CA                     JZ 0x004b9e47
004B9E7D  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
004B9E84  75 C1                     JNZ 0x004b9e47
004B9E86  39 BE D8 04 00 00         CMP dword ptr [ESI + 0x4d8],EDI
004B9E8C  75 B9                     JNZ 0x004b9e47
004B9E8E  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004B9E95  8B 8E B8 05 00 00         MOV ECX,dword ptr [ESI + 0x5b8]
004B9E9B  48                        DEC EAX
004B9E9C  3B C8                     CMP ECX,EAX
004B9E9E  7C 19                     JL 0x004b9eb9
004B9EA0  5F                        POP EDI
004B9EA1  33 C0                     XOR EAX,EAX
004B9EA3  5E                        POP ESI
004B9EA4  C3                        RET
switchD_004b9dd3::caseD_63:
004B9EA5  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004B9EAB  85 C0                     TEST EAX,EAX
004B9EAD  75 0A                     JNZ 0x004b9eb9
004B9EAF  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004B9EB5  85 C0                     TEST EAX,EAX
004B9EB7  74 8E                     JZ 0x004b9e47
switchD_004b9dd3::caseD_34:
004B9EB9  5F                        POP EDI
004B9EBA  B8 01 00 00 00            MOV EAX,0x1
004B9EBF  5E                        POP ESI
004B9EC0  C3                        RET
