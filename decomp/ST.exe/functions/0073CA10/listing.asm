FUN_0073ca10:
0073CA10  55                        PUSH EBP
0073CA11  8B EC                     MOV EBP,ESP
0073CA13  6A FF                     PUSH -0x1
0073CA15  68 70 0A 7A 00            PUSH 0x7a0a70
0073CA1A  68 64 D9 72 00            PUSH 0x72d964
0073CA1F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0073CA25  50                        PUSH EAX
0073CA26  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0073CA2D  83 C4 DC                  ADD ESP,-0x24
0073CA30  53                        PUSH EBX
0073CA31  56                        PUSH ESI
0073CA32  57                        PUSH EDI
0073CA33  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0073CA36  83 3D E4 72 85 00 00      CMP dword ptr [0x008572e4],0x0
0073CA3D  75 57                     JNZ 0x0073ca96
0073CA3F  6A 00                     PUSH 0x0
0073CA41  6A 00                     PUSH 0x0
0073CA43  6A 01                     PUSH 0x1
0073CA45  68 5C 0A 7A 00            PUSH 0x7a0a5c
0073CA4A  68 00 01 00 00            PUSH 0x100
0073CA4F  6A 00                     PUSH 0x0
0073CA51  FF 15 30 BC 85 00         CALL dword ptr [0x0085bc30]
0073CA57  85 C0                     TEST EAX,EAX
0073CA59  74 0C                     JZ 0x0073ca67
0073CA5B  C7 05 E4 72 85 00 01 00 00 00  MOV dword ptr [0x008572e4],0x1
0073CA65  EB 2F                     JMP 0x0073ca96
LAB_0073ca67:
0073CA67  6A 00                     PUSH 0x0
0073CA69  6A 00                     PUSH 0x0
0073CA6B  6A 01                     PUSH 0x1
0073CA6D  68 58 0A 7A 00            PUSH 0x7a0a58
0073CA72  68 00 01 00 00            PUSH 0x100
0073CA77  6A 00                     PUSH 0x0
0073CA79  FF 15 2C BC 85 00         CALL dword ptr [0x0085bc2c]
0073CA7F  85 C0                     TEST EAX,EAX
0073CA81  74 0C                     JZ 0x0073ca8f
0073CA83  C7 05 E4 72 85 00 02 00 00 00  MOV dword ptr [0x008572e4],0x2
0073CA8D  EB 07                     JMP 0x0073ca96
LAB_0073ca8f:
0073CA8F  33 C0                     XOR EAX,EAX
0073CA91  E9 6B 02 00 00            JMP 0x0073cd01
LAB_0073ca96:
0073CA96  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
0073CA9A  7E 13                     JLE 0x0073caaf
0073CA9C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073CA9F  50                        PUSH EAX
0073CAA0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073CAA3  51                        PUSH ECX
0073CAA4  E8 77 02 00 00            CALL 0x0073cd20
0073CAA9  83 C4 08                  ADD ESP,0x8
0073CAAC  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_0073caaf:
0073CAAF  83 3D E4 72 85 00 02      CMP dword ptr [0x008572e4],0x2
0073CAB6  75 23                     JNZ 0x0073cadb
0073CAB8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0073CABB  52                        PUSH EDX
0073CABC  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073CABF  50                        PUSH EAX
0073CAC0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0073CAC3  51                        PUSH ECX
0073CAC4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073CAC7  52                        PUSH EDX
0073CAC8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073CACB  50                        PUSH EAX
0073CACC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073CACF  51                        PUSH ECX
0073CAD0  FF 15 2C BC 85 00         CALL dword ptr [0x0085bc2c]
0073CAD6  E9 26 02 00 00            JMP 0x0073cd01
LAB_0073cadb:
0073CADB  83 3D E4 72 85 00 01      CMP dword ptr [0x008572e4],0x1
0073CAE2  0F 85 17 02 00 00         JNZ 0x0073ccff
0073CAE8  83 7D 20 00               CMP dword ptr [EBP + 0x20],0x0
0073CAEC  75 09                     JNZ 0x0073caf7
0073CAEE  8B 15 20 72 85 00         MOV EDX,dword ptr [0x00857220]
0073CAF4  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
LAB_0073caf7:
0073CAF7  6A 00                     PUSH 0x0
0073CAF9  6A 00                     PUSH 0x0
0073CAFB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073CAFE  50                        PUSH EAX
0073CAFF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073CB02  51                        PUSH ECX
0073CB03  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0073CB06  F7 DA                     NEG EDX
0073CB08  1B D2                     SBB EDX,EDX
0073CB0A  83 E2 08                  AND EDX,0x8
0073CB0D  83 C2 01                  ADD EDX,0x1
0073CB10  52                        PUSH EDX
0073CB11  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0073CB14  50                        PUSH EAX
0073CB15  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0073CB1B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0073CB1E  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
0073CB22  75 07                     JNZ 0x0073cb2b
0073CB24  33 C0                     XOR EAX,EAX
0073CB26  E9 D6 01 00 00            JMP 0x0073cd01
LAB_0073cb2b:
0073CB2B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073CB32  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0073CB35  D1 E0                     SHL EAX,0x1
0073CB37  83 C0 03                  ADD EAX,0x3
0073CB3A  24 FC                     AND AL,0xfc
0073CB3C  E8 FF 0E FF FF            CALL 0x0072da40
0073CB41  89 65 D0                  MOV dword ptr [EBP + -0x30],ESP
0073CB44  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0073CB47  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0073CB4A  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0073CB4D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0073CB54  EB 17                     JMP 0x0073cb6d
LAB_0073cb6d:
0073CB6D  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
0073CB71  75 07                     JNZ 0x0073cb7a
0073CB73  33 C0                     XOR EAX,EAX
0073CB75  E9 87 01 00 00            JMP 0x0073cd01
LAB_0073cb7a:
0073CB7A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0073CB7D  52                        PUSH EDX
0073CB7E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073CB81  50                        PUSH EAX
0073CB82  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0073CB85  51                        PUSH ECX
0073CB86  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073CB89  52                        PUSH EDX
0073CB8A  6A 01                     PUSH 0x1
0073CB8C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0073CB8F  50                        PUSH EAX
0073CB90  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0073CB96  85 C0                     TEST EAX,EAX
0073CB98  75 07                     JNZ 0x0073cba1
0073CB9A  33 C0                     XOR EAX,EAX
0073CB9C  E9 60 01 00 00            JMP 0x0073cd01
LAB_0073cba1:
0073CBA1  6A 00                     PUSH 0x0
0073CBA3  6A 00                     PUSH 0x0
0073CBA5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0073CBA8  51                        PUSH ECX
0073CBA9  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073CBAC  52                        PUSH EDX
0073CBAD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073CBB0  50                        PUSH EAX
0073CBB1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073CBB4  51                        PUSH ECX
0073CBB5  FF 15 30 BC 85 00         CALL dword ptr [0x0085bc30]
0073CBBB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0073CBBE  83 7D D8 00               CMP dword ptr [EBP + -0x28],0x0
0073CBC2  75 07                     JNZ 0x0073cbcb
0073CBC4  33 C0                     XOR EAX,EAX
0073CBC6  E9 36 01 00 00            JMP 0x0073cd01
LAB_0073cbcb:
0073CBCB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073CBCE  81 E2 00 04 00 00         AND EDX,0x400
0073CBD4  85 D2                     TEST EDX,EDX
0073CBD6  74 43                     JZ 0x0073cc1b
0073CBD8  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
0073CBDC  74 38                     JZ 0x0073cc16
0073CBDE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0073CBE1  3B 45 1C                  CMP EAX,dword ptr [EBP + 0x1c]
0073CBE4  7E 07                     JLE 0x0073cbed
0073CBE6  33 C0                     XOR EAX,EAX
0073CBE8  E9 14 01 00 00            JMP 0x0073cd01
LAB_0073cbed:
0073CBED  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0073CBF0  51                        PUSH ECX
0073CBF1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073CBF4  52                        PUSH EDX
0073CBF5  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0073CBF8  50                        PUSH EAX
0073CBF9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0073CBFC  51                        PUSH ECX
0073CBFD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073CC00  52                        PUSH EDX
0073CC01  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073CC04  50                        PUSH EAX
0073CC05  FF 15 30 BC 85 00         CALL dword ptr [0x0085bc30]
0073CC0B  85 C0                     TEST EAX,EAX
0073CC0D  75 07                     JNZ 0x0073cc16
0073CC0F  33 C0                     XOR EAX,EAX
0073CC11  E9 EB 00 00 00            JMP 0x0073cd01
LAB_0073cc16:
0073CC16  E9 DF 00 00 00            JMP 0x0073ccfa
LAB_0073cc1b:
0073CC1B  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0073CC1E  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0073CC21  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0073CC28  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0073CC2B  D1 E0                     SHL EAX,0x1
0073CC2D  83 C0 03                  ADD EAX,0x3
0073CC30  24 FC                     AND AL,0xfc
0073CC32  E8 09 0E FF FF            CALL 0x0072da40
0073CC37  89 65 CC                  MOV dword ptr [EBP + -0x34],ESP
0073CC3A  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0073CC3D  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0073CC40  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0073CC43  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0073CC4A  EB 17                     JMP 0x0073cc63
LAB_0073cc63:
0073CC63  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
0073CC67  75 07                     JNZ 0x0073cc70
0073CC69  33 C0                     XOR EAX,EAX
0073CC6B  E9 91 00 00 00            JMP 0x0073cd01
LAB_0073cc70:
0073CC70  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0073CC73  50                        PUSH EAX
0073CC74  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073CC77  51                        PUSH ECX
0073CC78  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0073CC7B  52                        PUSH EDX
0073CC7C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073CC7F  50                        PUSH EAX
0073CC80  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073CC83  51                        PUSH ECX
0073CC84  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073CC87  52                        PUSH EDX
0073CC88  FF 15 30 BC 85 00         CALL dword ptr [0x0085bc30]
0073CC8E  85 C0                     TEST EAX,EAX
0073CC90  75 04                     JNZ 0x0073cc96
0073CC92  33 C0                     XOR EAX,EAX
0073CC94  EB 6B                     JMP 0x0073cd01
LAB_0073cc96:
0073CC96  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
0073CC9A  75 2E                     JNZ 0x0073ccca
0073CC9C  6A 00                     PUSH 0x0
0073CC9E  6A 00                     PUSH 0x0
0073CCA0  6A 00                     PUSH 0x0
0073CCA2  6A 00                     PUSH 0x0
0073CCA4  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0073CCA7  50                        PUSH EAX
0073CCA8  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073CCAB  51                        PUSH ECX
0073CCAC  68 20 02 00 00            PUSH 0x220
0073CCB1  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0073CCB4  52                        PUSH EDX
0073CCB5  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
0073CCBB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0073CCBE  83 7D D8 00               CMP dword ptr [EBP + -0x28],0x0
0073CCC2  75 04                     JNZ 0x0073ccc8
0073CCC4  33 C0                     XOR EAX,EAX
0073CCC6  EB 39                     JMP 0x0073cd01
LAB_0073ccc8:
0073CCC8  EB 30                     JMP 0x0073ccfa
LAB_0073ccca:
0073CCCA  6A 00                     PUSH 0x0
0073CCCC  6A 00                     PUSH 0x0
0073CCCE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0073CCD1  50                        PUSH EAX
0073CCD2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0073CCD5  51                        PUSH ECX
0073CCD6  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0073CCD9  52                        PUSH EDX
0073CCDA  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073CCDD  50                        PUSH EAX
0073CCDE  68 20 02 00 00            PUSH 0x220
0073CCE3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0073CCE6  51                        PUSH ECX
0073CCE7  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
0073CCED  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0073CCF0  83 7D D8 00               CMP dword ptr [EBP + -0x28],0x0
0073CCF4  75 04                     JNZ 0x0073ccfa
0073CCF6  33 C0                     XOR EAX,EAX
0073CCF8  EB 07                     JMP 0x0073cd01
LAB_0073ccfa:
0073CCFA  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0073CCFD  EB 02                     JMP 0x0073cd01
LAB_0073ccff:
0073CCFF  33 C0                     XOR EAX,EAX
LAB_0073cd01:
0073CD01  8D 65 C0                  LEA ESP,[EBP + -0x40]
0073CD04  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073CD07  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0073CD0E  5F                        POP EDI
0073CD0F  5E                        POP ESI
0073CD10  5B                        POP EBX
0073CD11  8B E5                     MOV ESP,EBP
0073CD13  5D                        POP EBP
0073CD14  C3                        RET
