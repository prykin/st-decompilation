FUN_0060ccf0:
0060CCF0  55                        PUSH EBP
0060CCF1  8B EC                     MOV EBP,ESP
0060CCF3  51                        PUSH ECX
0060CCF4  56                        PUSH ESI
0060CCF5  57                        PUSH EDI
0060CCF6  8B F9                     MOV EDI,ECX
0060CCF8  33 C0                     XOR EAX,EAX
0060CCFA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060CCFD  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CD03  85 D2                     TEST EDX,EDX
0060CD05  0F 84 66 01 00 00         JZ 0x0060ce71
0060CD0B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0060CD0E  8B B7 3C 02 00 00         MOV ESI,dword ptr [EDI + 0x23c]
0060CD14  3B CE                     CMP ECX,ESI
0060CD16  0F 8D 55 01 00 00         JGE 0x0060ce71
0060CD1C  85 C9                     TEST ECX,ECX
0060CD1E  0F 8C 4D 01 00 00         JL 0x0060ce71
0060CD24  8B F1                     MOV ESI,ECX
0060CD26  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060CD29  C1 E6 04                  SHL ESI,0x4
0060CD2C  03 F1                     ADD ESI,ECX
0060CD2E  53                        PUSH EBX
0060CD2F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0060CD32  C1 E6 02                  SHL ESI,0x2
0060CD35  89 5C 16 0C               MOV dword ptr [ESI + EDX*0x1 + 0xc],EBX
0060CD39  8B 8F 44 02 00 00         MOV ECX,dword ptr [EDI + 0x244]
0060CD3F  89 44 0E 10               MOV dword ptr [ESI + ECX*0x1 + 0x10],EAX
0060CD43  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CD49  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0060CD4C  89 4C 16 14               MOV dword ptr [ESI + EDX*0x1 + 0x14],ECX
0060CD50  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CD56  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060CD59  89 4C 16 18               MOV dword ptr [ESI + EDX*0x1 + 0x18],ECX
0060CD5D  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CD63  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060CD66  89 4C 16 1C               MOV dword ptr [ESI + EDX*0x1 + 0x1c],ECX
0060CD6A  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CD70  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060CD73  89 4C 16 20               MOV dword ptr [ESI + EDX*0x1 + 0x20],ECX
0060CD77  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060CD7A  8B D3                     MOV EDX,EBX
0060CD7C  2B D1                     SUB EDX,ECX
0060CD7E  8B 8F 44 02 00 00         MOV ECX,dword ptr [EDI + 0x244]
0060CD84  89 54 0E 24               MOV dword ptr [ESI + ECX*0x1 + 0x24],EDX
0060CD88  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060CD8B  8B D0                     MOV EDX,EAX
0060CD8D  2B D1                     SUB EDX,ECX
0060CD8F  8B 8F 44 02 00 00         MOV ECX,dword ptr [EDI + 0x244]
0060CD95  89 54 0E 28               MOV dword ptr [ESI + ECX*0x1 + 0x28],EDX
0060CD99  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0060CD9C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060CD9F  2B D1                     SUB EDX,ECX
0060CDA1  8B 8F 44 02 00 00         MOV ECX,dword ptr [EDI + 0x244]
0060CDA7  89 54 0E 2C               MOV dword ptr [ESI + ECX*0x1 + 0x2c],EDX
0060CDAB  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CDB1  C7 44 16 30 00 00 00 00   MOV dword ptr [ESI + EDX*0x1 + 0x30],0x0
0060CDB9  8B 8F 44 02 00 00         MOV ECX,dword ptr [EDI + 0x244]
0060CDBF  C7 44 0E 34 0A 00 00 00   MOV dword ptr [ESI + ECX*0x1 + 0x34],0xa
0060CDC7  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CDCD  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0060CDD0  C7 44 16 38 14 00 00 00   MOV dword ptr [ESI + EDX*0x1 + 0x38],0x14
0060CDD8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0060CDDB  51                        PUSH ECX
0060CDDC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060CDDF  50                        PUSH EAX
0060CDE0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060CDE3  53                        PUSH EBX
0060CDE4  52                        PUSH EDX
0060CDE5  50                        PUSH EAX
0060CDE6  51                        PUSH ECX
0060CDE7  E8 E4 DF 09 00            CALL 0x006aadd0
0060CDEC  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CDF2  8D 4C 16 04               LEA ECX,[ESI + EDX*0x1 + 0x4]
0060CDF6  51                        PUSH ECX
0060CDF7  50                        PUSH EAX
0060CDF8  8B CF                     MOV ECX,EDI
0060CDFA  E8 9B 7A DF FF            CALL 0x0040489a
0060CDFF  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CE05  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0060CE08  68 E0 01 00 00            PUSH 0x1e0
0060CE0D  6A 07                     PUSH 0x7
0060CE0F  89 44 16 08               MOV dword ptr [ESI + EDX*0x1 + 0x8],EAX
0060CE13  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060CE16  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0060CE19  6A 00                     PUSH 0x0
0060CE1B  6A 00                     PUSH 0x0
0060CE1D  50                        PUSH EAX
0060CE1E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060CE21  51                        PUSH ECX
0060CE22  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060CE25  53                        PUSH EBX
0060CE26  52                        PUSH EDX
0060CE27  50                        PUSH EAX
0060CE28  51                        PUSH ECX
0060CE29  E8 09 83 DF FF            CALL 0x00405137
0060CE2E  8B 97 44 02 00 00         MOV EDX,dword ptr [EDI + 0x244]
0060CE34  83 C4 28                  ADD ESP,0x28
0060CE37  89 44 16 40               MOV dword ptr [ESI + EDX*0x1 + 0x40],EAX
0060CE3B  8B 87 44 02 00 00         MOV EAX,dword ptr [EDI + 0x244]
0060CE41  5B                        POP EBX
0060CE42  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
0060CE45  8B 44 06 08               MOV EAX,dword ptr [ESI + EAX*0x1 + 0x8]
0060CE49  85 C0                     TEST EAX,EAX
0060CE4B  B8 01 00 00 00            MOV EAX,0x1
0060CE50  75 03                     JNZ 0x0060ce55
0060CE52  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0060ce55:
0060CE55  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0060CE5B  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0060CE61  89 51 3C                  MOV dword ptr [ECX + 0x3c],EDX
0060CE64  8B 8F 44 02 00 00         MOV ECX,dword ptr [EDI + 0x244]
0060CE6A  C7 04 0E 01 00 00 00      MOV dword ptr [ESI + ECX*0x1],0x1
LAB_0060ce71:
0060CE71  5F                        POP EDI
0060CE72  5E                        POP ESI
0060CE73  8B E5                     MOV ESP,EBP
0060CE75  5D                        POP EBP
0060CE76  C2 1C 00                  RET 0x1c
