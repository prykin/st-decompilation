CGenerate::sub_00695F70:
00695F70  55                        PUSH EBP
00695F71  8B EC                     MOV EBP,ESP
00695F73  83 EC 08                  SUB ESP,0x8
00695F76  53                        PUSH EBX
00695F77  56                        PUSH ESI
00695F78  57                        PUSH EDI
00695F79  8B F9                     MOV EDI,ECX
00695F7B  83 CB FF                  OR EBX,0xffffffff
00695F7E  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
00695F84  85 C0                     TEST EAX,EAX
00695F86  74 7F                     JZ 0x00696007
00695F88  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00695F8B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00695F8E  3B CA                     CMP ECX,EDX
00695F90  73 75                     JNC 0x00696007
00695F92  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00695F95  0F AF F1                  IMUL ESI,ECX
00695F98  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
00695F9B  85 F6                     TEST ESI,ESI
00695F9D  74 68                     JZ 0x00696007
00695F9F  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00695FA2  85 C0                     TEST EAX,EAX
00695FA4  75 14                     JNZ 0x00695fba
00695FA6  6A 0A                     PUSH 0xa
00695FA8  6A 06                     PUSH 0x6
00695FAA  6A 0A                     PUSH 0xa
00695FAC  6A 00                     PUSH 0x0
00695FAE  E8 DD 82 01 00            CALL 0x006ae290
00695FB3  85 C0                     TEST EAX,EAX
00695FB5  89 46 15                  MOV dword ptr [ESI + 0x15],EAX
00695FB8  74 4D                     JZ 0x00696007
LAB_00695fba:
00695FBA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00695FBD  33 C0                     XOR EAX,EAX
00695FBF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00695FC2  8D 4D F8                  LEA ECX,[EBP + -0x8]
00695FC5  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
00695FC9  89 5D FA                  MOV dword ptr [EBP + -0x6],EBX
00695FCC  8B 56 15                  MOV EDX,dword ptr [ESI + 0x15]
00695FCF  51                        PUSH ECX
00695FD0  52                        PUSH EDX
00695FD1  E8 EA 81 01 00            CALL 0x006ae1c0
00695FD6  85 C0                     TEST EAX,EAX
00695FD8  7C 2F                     JL 0x00696009
00695FDA  8D 48 01                  LEA ECX,[EAX + 0x1]
00695FDD  89 4E 11                  MOV dword ptr [ESI + 0x11],ECX
00695FE0  8B 8F 4F 58 00 00         MOV ECX,dword ptr [EDI + 0x584f]
00695FE6  85 C9                     TEST ECX,ECX
00695FE8  74 1F                     JZ 0x00696009
00695FEA  8B 97 2F 58 00 00         MOV EDX,dword ptr [EDI + 0x582f]
00695FF0  66 8B 75 08               MOV SI,word ptr [EBP + 0x8]
00695FF4  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
00695FF8  03 D3                     ADD EDX,EBX
00695FFA  5F                        POP EDI
00695FFB  66 89 34 51               MOV word ptr [ECX + EDX*0x2],SI
00695FFF  5E                        POP ESI
00696000  5B                        POP EBX
00696001  8B E5                     MOV ESP,EBP
00696003  5D                        POP EBP
00696004  C2 0C 00                  RET 0xc
LAB_00696007:
00696007  8B C3                     MOV EAX,EBX
LAB_00696009:
00696009  5F                        POP EDI
0069600A  5E                        POP ESI
0069600B  5B                        POP EBX
0069600C  8B E5                     MOV ESP,EBP
0069600E  5D                        POP EBP
0069600F  C2 0C 00                  RET 0xc
