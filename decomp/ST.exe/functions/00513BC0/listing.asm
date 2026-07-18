FUN_00513bc0:
00513BC0  55                        PUSH EBP
00513BC1  8B EC                     MOV EBP,ESP
00513BC3  83 EC 4C                  SUB ESP,0x4c
00513BC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00513BCB  53                        PUSH EBX
00513BCC  56                        PUSH ESI
00513BCD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00513BD0  57                        PUSH EDI
00513BD1  8D 55 B8                  LEA EDX,[EBP + -0x48]
00513BD4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00513BD7  6A 00                     PUSH 0x0
00513BD9  52                        PUSH EDX
00513BDA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00513BDD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00513BE3  E8 08 9C 21 00            CALL 0x0072d7f0
00513BE8  8B F0                     MOV ESI,EAX
00513BEA  83 C4 08                  ADD ESP,0x8
00513BED  85 F6                     TEST ESI,ESI
00513BEF  0F 85 60 02 00 00         JNZ 0x00513e55
00513BF5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00513BF8  8B 8E B7 01 00 00         MOV ECX,dword ptr [ESI + 0x1b7]
00513BFE  8B BE B3 01 00 00         MOV EDI,dword ptr [ESI + 0x1b3]
00513C04  85 C9                     TEST ECX,ECX
00513C06  0F 86 EF 01 00 00         JBE 0x00513dfb
00513C0C  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
00513C0F  8D 59 FF                  LEA EBX,[ECX + -0x1]
00513C12  3B DA                     CMP EBX,EDX
00513C14  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00513C17  73 13                     JNC 0x00513c2c
00513C19  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00513C1C  8D 59 FF                  LEA EBX,[ECX + -0x1]
00513C1F  0F AF C3                  IMUL EAX,EBX
00513C22  8B 5F 1C                  MOV EBX,dword ptr [EDI + 0x1c]
00513C25  03 C3                     ADD EAX,EBX
00513C27  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00513C2A  EB 02                     JMP 0x00513c2e
LAB_00513c2c:
00513C2C  33 C0                     XOR EAX,EAX
LAB_00513c2e:
00513C2E  33 FF                     XOR EDI,EDI
00513C30  3B C7                     CMP EAX,EDI
00513C32  0F 84 0D 02 00 00         JZ 0x00513e45
00513C38  80 78 08 00               CMP byte ptr [EAX + 0x8],0x0
00513C3C  75 1C                     JNZ 0x00513c5a
00513C3E  2B D1                     SUB EDX,ECX
00513C40  8A 48 12                  MOV CL,byte ptr [EAX + 0x12]
00513C43  84 C9                     TEST CL,CL
00513C45  8B FA                     MOV EDI,EDX
00513C47  75 06                     JNZ 0x00513c4f
00513C49  53                        PUSH EBX
00513C4A  E9 D6 01 00 00            JMP 0x00513e25
LAB_00513c4f:
00513C4F  89 9E B7 01 00 00         MOV dword ptr [ESI + 0x1b7],EBX
00513C55  E9 E4 01 00 00            JMP 0x00513e3e
LAB_00513c5a:
00513C5A  33 D2                     XOR EDX,EDX
00513C5C  89 9E B7 01 00 00         MOV dword ptr [ESI + 0x1b7],EBX
00513C62  C6 86 A1 01 00 00 00      MOV byte ptr [ESI + 0x1a1],0x0
00513C69  89 BE A7 01 00 00         MOV dword ptr [ESI + 0x1a7],EDI
00513C6F  89 BE A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EDI
00513C75  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
00513C78  8B 78 0D                  MOV EDI,dword ptr [EAX + 0xd]
00513C7B  8B 48 09                  MOV ECX,dword ptr [EAX + 0x9]
00513C7E  8B C2                     MOV EAX,EDX
00513C80  83 F8 0C                  CMP EAX,0xc
00513C83  0F 87 5B 01 00 00         JA 0x00513de4
switchD_00513c89::switchD:
00513C89  FF 24 85 9C 3E 51 00      JMP dword ptr [EAX*0x4 + 0x513e9c]
switchD_00513c89::caseD_a:
00513C90  8B CE                     MOV ECX,ESI
00513C92  E8 6C 1B EF FF            CALL 0x00405803
00513C97  8B CE                     MOV ECX,ESI
00513C99  E8 62 14 EF FF            CALL 0x00405100
00513C9E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513CA1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513CA7  5F                        POP EDI
00513CA8  5E                        POP ESI
00513CA9  5B                        POP EBX
00513CAA  8B E5                     MOV ESP,EBP
00513CAC  5D                        POP EBP
00513CAD  C3                        RET
switchD_00513c89::caseD_7:
00513CAE  8B CE                     MOV ECX,ESI
00513CB0  E8 49 D5 EE FF            CALL 0x004011fe
00513CB5  8B CE                     MOV ECX,ESI
00513CB7  E8 44 14 EF FF            CALL 0x00405100
00513CBC  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513CBF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513CC5  5F                        POP EDI
00513CC6  5E                        POP ESI
00513CC7  5B                        POP EBX
00513CC8  8B E5                     MOV ESP,EBP
00513CCA  5D                        POP EBP
00513CCB  C3                        RET
switchD_00513c89::caseD_1:
00513CCC  6A 00                     PUSH 0x0
00513CCE  57                        PUSH EDI
00513CCF  51                        PUSH ECX
00513CD0  8B CE                     MOV ECX,ESI
00513CD2  E8 AE 11 EF FF            CALL 0x00404e85
00513CD7  8B CE                     MOV ECX,ESI
00513CD9  E8 22 14 EF FF            CALL 0x00405100
00513CDE  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513CE1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513CE7  5F                        POP EDI
00513CE8  5E                        POP ESI
00513CE9  5B                        POP EBX
00513CEA  8B E5                     MOV ESP,EBP
00513CEC  5D                        POP EBP
00513CED  C3                        RET
switchD_00513c89::caseD_6:
00513CEE  6A 00                     PUSH 0x0
00513CF0  51                        PUSH ECX
00513CF1  8B CE                     MOV ECX,ESI
00513CF3  E8 69 21 EF FF            CALL 0x00405e61
00513CF8  8B CE                     MOV ECX,ESI
00513CFA  E8 01 14 EF FF            CALL 0x00405100
00513CFF  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513D02  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513D08  5F                        POP EDI
00513D09  5E                        POP ESI
00513D0A  5B                        POP EBX
00513D0B  8B E5                     MOV ESP,EBP
00513D0D  5D                        POP EBP
00513D0E  C3                        RET
switchD_00513c89::caseD_5:
00513D0F  6A 00                     PUSH 0x0
00513D11  57                        PUSH EDI
00513D12  51                        PUSH ECX
00513D13  8B CE                     MOV ECX,ESI
00513D15  E8 19 EB EE FF            CALL 0x00402833
00513D1A  8B CE                     MOV ECX,ESI
00513D1C  E8 DF 13 EF FF            CALL 0x00405100
00513D21  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513D24  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513D2A  5F                        POP EDI
00513D2B  5E                        POP ESI
00513D2C  5B                        POP EBX
00513D2D  8B E5                     MOV ESP,EBP
00513D2F  5D                        POP EBP
00513D30  C3                        RET
switchD_00513c89::caseD_3:
00513D31  6A 00                     PUSH 0x0
00513D33  51                        PUSH ECX
00513D34  8B CE                     MOV ECX,ESI
00513D36  E8 3D FB EE FF            CALL 0x00403878
00513D3B  8B CE                     MOV ECX,ESI
00513D3D  E8 BE 13 EF FF            CALL 0x00405100
00513D42  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513D45  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513D4B  5F                        POP EDI
00513D4C  5E                        POP ESI
00513D4D  5B                        POP EBX
00513D4E  8B E5                     MOV ESP,EBP
00513D50  5D                        POP EBP
00513D51  C3                        RET
switchD_00513c89::caseD_2:
00513D52  6A 00                     PUSH 0x0
00513D54  57                        PUSH EDI
00513D55  51                        PUSH ECX
00513D56  8B CE                     MOV ECX,ESI
00513D58  E8 EA F9 EE FF            CALL 0x00403747
00513D5D  8B CE                     MOV ECX,ESI
00513D5F  E8 9C 13 EF FF            CALL 0x00405100
00513D64  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513D67  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513D6D  5F                        POP EDI
00513D6E  5E                        POP ESI
00513D6F  5B                        POP EBX
00513D70  8B E5                     MOV ESP,EBP
00513D72  5D                        POP EBP
00513D73  C3                        RET
switchD_00513c89::caseD_4:
00513D74  6A 00                     PUSH 0x0
00513D76  57                        PUSH EDI
00513D77  51                        PUSH ECX
00513D78  8B CE                     MOV ECX,ESI
00513D7A  E8 61 1A EF FF            CALL 0x004057e0
00513D7F  8B CE                     MOV ECX,ESI
00513D81  E8 7A 13 EF FF            CALL 0x00405100
00513D86  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513D89  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513D8F  5F                        POP EDI
00513D90  5E                        POP ESI
00513D91  5B                        POP EBX
00513D92  8B E5                     MOV ESP,EBP
00513D94  5D                        POP EBP
00513D95  C3                        RET
switchD_00513c89::caseD_b:
00513D96  6A 00                     PUSH 0x0
00513D98  57                        PUSH EDI
00513D99  51                        PUSH ECX
00513D9A  8B CE                     MOV ECX,ESI
00513D9C  E8 0B EF EE FF            CALL 0x00402cac
00513DA1  8B CE                     MOV ECX,ESI
00513DA3  E8 58 13 EF FF            CALL 0x00405100
00513DA8  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513DAB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513DB1  5F                        POP EDI
00513DB2  5E                        POP ESI
00513DB3  5B                        POP EBX
00513DB4  8B E5                     MOV ESP,EBP
00513DB6  5D                        POP EBP
00513DB7  C3                        RET
switchD_00513c89::caseD_c:
00513DB8  6A 00                     PUSH 0x0
00513DBA  51                        PUSH ECX
00513DBB  8B CE                     MOV ECX,ESI
00513DBD  E8 FE FD EE FF            CALL 0x00403bc0
00513DC2  8B CE                     MOV ECX,ESI
00513DC4  E8 37 13 EF FF            CALL 0x00405100
00513DC9  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513DCC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513DD2  5F                        POP EDI
00513DD3  5E                        POP ESI
00513DD4  5B                        POP EBX
00513DD5  8B E5                     MOV ESP,EBP
00513DD7  5D                        POP EBP
00513DD8  C3                        RET
switchD_00513c89::caseD_8:
00513DD9  6A 00                     PUSH 0x0
00513DDB  57                        PUSH EDI
00513DDC  51                        PUSH ECX
00513DDD  8B CE                     MOV ECX,ESI
00513DDF  E8 D4 E2 EE FF            CALL 0x004020b8
switchD_00513c89::caseD_9:
00513DE4  8B CE                     MOV ECX,ESI
00513DE6  E8 15 13 EF FF            CALL 0x00405100
00513DEB  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513DEE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513DF4  5F                        POP EDI
00513DF5  5E                        POP ESI
00513DF6  5B                        POP EBX
00513DF7  8B E5                     MOV ESP,EBP
00513DF9  5D                        POP EBP
00513DFA  C3                        RET
LAB_00513dfb:
00513DFB  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
00513DFE  3B CA                     CMP ECX,EDX
00513E00  73 0D                     JNC 0x00513e0f
00513E02  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00513E05  8B 5F 1C                  MOV EBX,dword ptr [EDI + 0x1c]
00513E08  0F AF C1                  IMUL EAX,ECX
00513E0B  03 C3                     ADD EAX,EBX
00513E0D  EB 02                     JMP 0x00513e11
LAB_00513e0f:
00513E0F  33 C0                     XOR EAX,EAX
LAB_00513e11:
00513E11  8A 58 08                  MOV BL,byte ptr [EAX + 0x8]
00513E14  84 DB                     TEST BL,BL
00513E16  75 2D                     JNZ 0x00513e45
00513E18  8A 58 12                  MOV BL,byte ptr [EAX + 0x12]
00513E1B  84 DB                     TEST BL,BL
00513E1D  75 26                     JNZ 0x00513e45
00513E1F  2B D1                     SUB EDX,ECX
00513E21  49                        DEC ECX
00513E22  8B FA                     MOV EDI,EDX
00513E24  51                        PUSH ECX
LAB_00513e25:
00513E25  50                        PUSH EAX
00513E26  8B CE                     MOV ECX,ESI
00513E28  E8 35 15 EF FF            CALL 0x00405362
00513E2D  8B 86 B3 01 00 00         MOV EAX,dword ptr [ESI + 0x1b3]
00513E33  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00513E36  2B CF                     SUB ECX,EDI
00513E38  89 8E B7 01 00 00         MOV dword ptr [ESI + 0x1b7],ECX
LAB_00513e3e:
00513E3E  8B CE                     MOV ECX,ESI
00513E40  E8 FE FC EE FF            CALL 0x00403b43
LAB_00513e45:
00513E45  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00513E48  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513E4E  5F                        POP EDI
00513E4F  5E                        POP ESI
00513E50  5B                        POP EBX
00513E51  8B E5                     MOV ESP,EBP
00513E53  5D                        POP EBP
00513E54  C3                        RET
LAB_00513e55:
00513E55  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00513E58  68 B8 3A 7C 00            PUSH 0x7c3ab8
00513E5D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00513E62  56                        PUSH ESI
00513E63  6A 00                     PUSH 0x0
00513E65  68 E9 02 00 00            PUSH 0x2e9
00513E6A  68 3C 38 7C 00            PUSH 0x7c383c
00513E6F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00513E74  E8 57 96 19 00            CALL 0x006ad4d0
00513E79  83 C4 18                  ADD ESP,0x18
00513E7C  85 C0                     TEST EAX,EAX
00513E7E  74 01                     JZ 0x00513e81
00513E80  CC                        INT3
LAB_00513e81:
00513E81  68 E9 02 00 00            PUSH 0x2e9
00513E86  68 3C 38 7C 00            PUSH 0x7c383c
00513E8B  6A 00                     PUSH 0x0
00513E8D  56                        PUSH ESI
00513E8E  E8 AD 1F 19 00            CALL 0x006a5e40
00513E93  5F                        POP EDI
00513E94  5E                        POP ESI
00513E95  5B                        POP EBX
00513E96  8B E5                     MOV ESP,EBP
00513E98  5D                        POP EBP
00513E99  C3                        RET
