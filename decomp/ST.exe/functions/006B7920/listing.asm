FUN_006b7920:
006B7920  55                        PUSH EBP
006B7921  8B EC                     MOV EBP,ESP
006B7923  81 EC 50 02 00 00         SUB ESP,0x250
006B7929  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006B792E  53                        PUSH EBX
006B792F  56                        PUSH ESI
006B7930  57                        PUSH EDI
006B7931  8D 95 04 FF FF FF         LEA EDX,[EBP + 0xffffff04]
006B7937  8D 8D 00 FF FF FF         LEA ECX,[EBP + 0xffffff00]
006B793D  6A 00                     PUSH 0x0
006B793F  52                        PUSH EDX
006B7940  89 85 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EAX
006B7946  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B794C  E8 9F 5E 07 00            CALL 0x0072d7f0
006B7951  8B F0                     MOV ESI,EAX
006B7953  83 C4 08                  ADD ESP,0x8
006B7956  85 F6                     TEST ESI,ESI
006B7958  0F 85 3E 04 00 00         JNZ 0x006b7d9c
006B795E  68 98 00 00 00            PUSH 0x98
006B7963  E8 A8 32 FF FF            CALL 0x006aac10
006B7968  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B796B  FF 15 B8 BE 85 00         CALL dword ptr [0x0085beb8]
006B7971  85 C0                     TEST EAX,EAX
006B7973  75 14                     JNZ 0x006b7989
006B7975  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B797A  6A 1E                     PUSH 0x1e
006B797C  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7981  50                        PUSH EAX
006B7982  6A FC                     PUSH -0x4
006B7984  E8 B7 E4 FE FF            CALL 0x006a5e40
LAB_006b7989:
006B7989  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B798C  6A 30                     PUSH 0x30
006B798E  50                        PUSH EAX
006B798F  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
006B7992  51                        PUSH ECX
006B7993  FF 15 CC BE 85 00         CALL dword ptr [0x0085becc]
006B7999  85 C0                     TEST EAX,EAX
006B799B  74 14                     JZ 0x006b79b1
006B799D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B79A3  6A 21                     PUSH 0x21
006B79A5  68 E8 DB 7E 00            PUSH 0x7edbe8
006B79AA  52                        PUSH EDX
006B79AB  50                        PUSH EAX
006B79AC  E8 8F E4 FE FF            CALL 0x006a5e40
LAB_006b79b1:
006B79B1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B79B4  68 00 00 01 00            PUSH 0x10000
006B79B9  6A 00                     PUSH 0x0
006B79BB  50                        PUSH EAX
006B79BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B79BF  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
006B79C2  83 C0 30                  ADD EAX,0x30
006B79C5  51                        PUSH ECX
006B79C6  50                        PUSH EAX
006B79C7  FF 15 E0 BE 85 00         CALL dword ptr [0x0085bee0]
006B79CD  85 C0                     TEST EAX,EAX
006B79CF  74 14                     JZ 0x006b79e5
006B79D1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B79D7  6A 25                     PUSH 0x25
006B79D9  68 E8 DB 7E 00            PUSH 0x7edbe8
006B79DE  52                        PUSH EDX
006B79DF  50                        PUSH EAX
006B79E0  E8 5B E4 FE FF            CALL 0x006a5e40
LAB_006b79e5:
006B79E5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B79E8  33 DB                     XOR EBX,EBX
006B79EA  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006B79ED  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
006B79F0  85 C0                     TEST EAX,EAX
006B79F2  76 4F                     JBE 0x006b7a43
006B79F4  BE 04 00 00 00            MOV ESI,0x4
LAB_006b79f9:
006B79F9  B9 2A 00 00 00            MOV ECX,0x2a
006B79FE  33 C0                     XOR EAX,EAX
006B7A00  8D BD B0 FD FF FF         LEA EDI,[EBP + 0xfffffdb0]
006B7A06  50                        PUSH EAX
006B7A07  F3 AB                     STOSD.REP ES:EDI
006B7A09  C7 85 B0 FD FF FF A8 00 00 00  MOV dword ptr [EBP + 0xfffffdb0],0xa8
006B7A13  89 9D B4 FD FF FF         MOV dword ptr [EBP + 0xfffffdb4],EBX
006B7A19  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
006B7A1C  8D 85 B0 FD FF FF         LEA EAX,[EBP + 0xfffffdb0]
006B7A22  50                        PUSH EAX
006B7A23  51                        PUSH ECX
006B7A24  FF 15 D0 BE 85 00         CALL dword ptr [0x0085bed0]
006B7A2A  39 B5 C8 FD FF FF         CMP dword ptr [EBP + 0xfffffdc8],ESI
006B7A30  74 0E                     JZ 0x006b7a40
006B7A32  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B7A35  43                        INC EBX
006B7A36  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006B7A39  3B 5A 2C                  CMP EBX,dword ptr [EDX + 0x2c]
006B7A3C  72 BB                     JC 0x006b79f9
006B7A3E  EB 03                     JMP 0x006b7a43
LAB_006b7a40:
006B7A40  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_006b7a43:
006B7A43  3B 5A 2C                  CMP EBX,dword ptr [EDX + 0x2c]
006B7A46  75 18                     JNZ 0x006b7a60
006B7A48  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B7A4E  6A 30                     PUSH 0x30
006B7A50  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7A55  52                        PUSH EDX
006B7A56  6A FC                     PUSH -0x4
006B7A58  E8 E3 E3 FE FF            CALL 0x006a5e40
006B7A5D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_006b7a60:
006B7A60  B9 06 00 00 00            MOV ECX,0x6
006B7A65  33 C0                     XOR EAX,EAX
006B7A67  8D 7D E4                  LEA EDI,[EBP + -0x1c]
006B7A6A  8B 1D D4 BE 85 00         MOV EBX,dword ptr [0x0085bed4]
006B7A70  F3 AB                     STOSD.REP ES:EDI
006B7A72  8B 85 BC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdbc]
006B7A78  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
006B7A7E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B7A81  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B7A84  B9 25 00 00 00            MOV ECX,0x25
006B7A89  33 C0                     XOR EAX,EAX
006B7A8B  8D BD 44 FF FF FF         LEA EDI,[EBP + 0xffffff44]
006B7A91  BE 18 00 00 00            MOV ESI,0x18
006B7A96  F3 AB                     STOSD.REP ES:EDI
006B7A98  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006B7A9B  C7 45 EC 01 00 03 50      MOV dword ptr [EBP + -0x14],0x50030001
006B7AA2  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006B7AA9  C7 45 F4 94 00 00 00      MOV dword ptr [EBP + -0xc],0x94
006B7AB0  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
006B7AB3  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006B7AB6  6A 02                     PUSH 0x2
006B7AB8  50                        PUSH EAX
006B7AB9  51                        PUSH ECX
006B7ABA  FF D3                     CALL EBX
006B7ABC  85 C0                     TEST EAX,EAX
006B7ABE  75 36                     JNZ 0x006b7af6
006B7AC0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7AC3  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
006B7AC6  83 C9 01                  OR ECX,0x1
006B7AC9  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
006B7ACC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B7ACF  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006B7AD5  89 42 3C                  MOV dword ptr [EDX + 0x3c],EAX
006B7AD8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7ADB  8B 95 CC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdcc]
006B7AE1  89 51 44                  MOV dword ptr [ECX + 0x44],EDX
006B7AE4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7AE7  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006B7AEA  89 48 48                  MOV dword ptr [EAX + 0x48],ECX
006B7AED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B7AF0  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006B7AF3  89 42 4C                  MOV dword ptr [EDX + 0x4c],EAX
LAB_006b7af6:
006B7AF6  B9 06 00 00 00            MOV ECX,0x6
006B7AFB  33 C0                     XOR EAX,EAX
006B7AFD  8D 7D E4                  LEA EDI,[EBP + -0x1c]
006B7B00  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
006B7B06  F3 AB                     STOSD.REP ES:EDI
006B7B08  8B 8D BC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdbc]
006B7B0E  8D BD 44 FF FF FF         LEA EDI,[EBP + 0xffffff44]
006B7B14  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B7B17  B9 25 00 00 00            MOV ECX,0x25
006B7B1C  F3 AB                     STOSD.REP ES:EDI
006B7B1E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7B21  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006B7B24  C7 45 EC 02 00 01 20      MOV dword ptr [EBP + -0x14],0x20010002
006B7B2B  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006B7B32  C7 45 F4 94 00 00 00      MOV dword ptr [EBP + -0xc],0x94
006B7B39  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B7B3C  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
006B7B3F  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006B7B42  6A 02                     PUSH 0x2
006B7B44  50                        PUSH EAX
006B7B45  52                        PUSH EDX
006B7B46  FF D3                     CALL EBX
006B7B48  85 C0                     TEST EAX,EAX
006B7B4A  75 18                     JNZ 0x006b7b64
006B7B4C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7B4F  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
006B7B52  83 C9 02                  OR ECX,0x2
006B7B55  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
006B7B58  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7B5B  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006B7B61  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
LAB_006b7b64:
006B7B64  8B 85 D0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdd0]
006B7B6A  33 D2                     XOR EDX,EDX
006B7B6C  85 C0                     TEST EAX,EAX
006B7B6E  C7 45 D8 FF FF FF FF      MOV dword ptr [EBP + -0x28],0xffffffff
006B7B75  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006B7B78  0F 86 FF 01 00 00         JBE 0x006b7d7d
LAB_006b7b7e:
006B7B7E  B9 2A 00 00 00            MOV ECX,0x2a
006B7B83  33 C0                     XOR EAX,EAX
006B7B85  8D BD 58 FE FF FF         LEA EDI,[EBP + 0xfffffe58]
006B7B8B  6A 01                     PUSH 0x1
006B7B8D  F3 AB                     STOSD.REP ES:EDI
006B7B8F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7B92  89 95 60 FE FF FF         MOV dword ptr [EBP + 0xfffffe60],EDX
006B7B98  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006B7B9B  C7 85 58 FE FF FF A8 00 00 00  MOV dword ptr [EBP + 0xfffffe58],0xa8
006B7BA5  89 95 5C FE FF FF         MOV dword ptr [EBP + 0xfffffe5c],EDX
006B7BAB  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
006B7BAE  8D 85 58 FE FF FF         LEA EAX,[EBP + 0xfffffe58]
006B7BB4  50                        PUSH EAX
006B7BB5  52                        PUSH EDX
006B7BB6  FF 15 D0 BE 85 00         CALL dword ptr [0x0085bed0]
006B7BBC  85 C0                     TEST EAX,EAX
006B7BBE  74 14                     JZ 0x006b7bd4
006B7BC0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B7BC6  6A 5A                     PUSH 0x5a
006B7BC8  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7BCD  51                        PUSH ECX
006B7BCE  50                        PUSH EAX
006B7BCF  E8 6C E2 FE FF            CALL 0x006a5e40
LAB_006b7bd4:
006B7BD4  8B 85 68 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe68]
006B7BDA  F6 C4 80                  TEST AH,0x80
006B7BDD  0F 85 85 01 00 00         JNZ 0x006b7d68
006B7BE3  8B 95 70 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe70]
006B7BE9  83 CE FF                  OR ESI,0xffffffff
006B7BEC  8D 82 FC EF FF FF         LEA EAX,[EDX + 0xffffeffc]
006B7BF2  83 F8 05                  CMP EAX,0x5
006B7BF5  77 4D                     JA 0x006b7c44
switchD_006b7bf7::switchD:
006B7BF7  FF 24 85 E8 7D 6B 00      JMP dword ptr [EAX*0x4 + 0x6b7de8]
switchD_006b7bf7::caseD_1008:
006B7BFE  BE 01 00 00 00            MOV ESI,0x1
006B7C03  EB 3F                     JMP 0x006b7c44
switchD_006b7bf7::caseD_1004:
006B7C05  83 BD D0 FE FF FF 03      CMP dword ptr [EBP + 0xfffffed0],0x3
006B7C0C  75 36                     JNZ 0x006b7c44
006B7C0E  BE 02 00 00 00            MOV ESI,0x2
006B7C13  EB 2F                     JMP 0x006b7c44
switchD_006b7bf7::caseD_1005:
006B7C15  BE 03 00 00 00            MOV ESI,0x3
006B7C1A  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006B7C1D  EB 25                     JMP 0x006b7c44
switchD_006b7bf7::caseD_1009:
006B7C1F  83 7D D8 FF               CMP dword ptr [EBP + -0x28],-0x1
006B7C23  75 1F                     JNZ 0x006b7c44
006B7C25  6A 08                     PUSH 0x8
006B7C27  8D 85 90 FE FF FF         LEA EAX,[EBP + 0xfffffe90]
006B7C2D  68 DC DB 7E 00            PUSH 0x7edbdc
006B7C32  50                        PUSH EAX
006B7C33  E8 B8 6A 07 00            CALL 0x0072e6f0
006B7C38  83 C4 0C                  ADD ESP,0xc
006B7C3B  85 C0                     TEST EAX,EAX
006B7C3D  75 05                     JNZ 0x006b7c44
006B7C3F  BE 03 00 00 00            MOV ESI,0x3
switchD_006b7bf7::caseD_1006:
006B7C44  85 F6                     TEST ESI,ESI
006B7C46  0F 8E 1C 01 00 00         JLE 0x006b7d68
006B7C4C  B9 06 00 00 00            MOV ECX,0x6
006B7C51  33 C0                     XOR EAX,EAX
006B7C53  8D 7D E4                  LEA EDI,[EBP + -0x1c]
006B7C56  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
006B7C5C  F3 AB                     STOSD.REP ES:EDI
006B7C5E  8B 8D 64 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe64]
006B7C64  8D BD 44 FF FF FF         LEA EDI,[EBP + 0xffffff44]
006B7C6A  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B7C6D  B9 25 00 00 00            MOV ECX,0x25
006B7C72  F3 AB                     STOSD.REP ES:EDI
006B7C74  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7C77  C7 45 E4 18 00 00 00      MOV dword ptr [EBP + -0x1c],0x18
006B7C7E  C7 45 EC 01 00 03 50      MOV dword ptr [EBP + -0x14],0x50030001
006B7C85  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006B7C8C  C7 45 F4 94 00 00 00      MOV dword ptr [EBP + -0xc],0x94
006B7C93  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B7C96  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
006B7C99  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006B7C9C  6A 02                     PUSH 0x2
006B7C9E  50                        PUSH EAX
006B7C9F  52                        PUSH EDX
006B7CA0  FF D3                     CALL EBX
006B7CA2  85 C0                     TEST EAX,EAX
006B7CA4  75 45                     JNZ 0x006b7ceb
006B7CA6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7CA9  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006B7CAC  C1 E0 03                  SHL EAX,0x3
006B7CAF  8B 54 08 38               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x38]
006B7CB3  83 CA 01                  OR EDX,0x1
006B7CB6  89 54 08 38               MOV dword ptr [EAX + ECX*0x1 + 0x38],EDX
006B7CBA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7CBD  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006B7CC3  89 54 08 3C               MOV dword ptr [EAX + ECX*0x1 + 0x3c],EDX
006B7CC7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7CCA  8B 95 74 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe74]
006B7CD0  89 54 08 44               MOV dword ptr [EAX + ECX*0x1 + 0x44],EDX
006B7CD4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B7CD7  8B 7D A8                  MOV EDI,dword ptr [EBP + -0x58]
006B7CDA  8D 4C 76 09               LEA ECX,[ESI + ESI*0x2 + 0x9]
006B7CDE  89 3C CA                  MOV dword ptr [EDX + ECX*0x8],EDI
006B7CE1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7CE4  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006B7CE7  89 54 08 4C               MOV dword ptr [EAX + ECX*0x1 + 0x4c],EDX
LAB_006b7ceb:
006B7CEB  B9 06 00 00 00            MOV ECX,0x6
006B7CF0  33 C0                     XOR EAX,EAX
006B7CF2  8D 7D E4                  LEA EDI,[EBP + -0x1c]
006B7CF5  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006B7CF8  F3 AB                     STOSD.REP ES:EDI
006B7CFA  8B 85 64 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe64]
006B7D00  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
006B7D06  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B7D09  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B7D0C  B9 25 00 00 00            MOV ECX,0x25
006B7D11  33 C0                     XOR EAX,EAX
006B7D13  8D BD 44 FF FF FF         LEA EDI,[EBP + 0xffffff44]
006B7D19  C7 45 E4 18 00 00 00      MOV dword ptr [EBP + -0x1c],0x18
006B7D20  F3 AB                     STOSD.REP ES:EDI
006B7D22  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7D25  C7 45 EC 02 00 01 20      MOV dword ptr [EBP + -0x14],0x20010002
006B7D2C  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006B7D33  C7 45 F4 94 00 00 00      MOV dword ptr [EBP + -0xc],0x94
006B7D3A  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
006B7D3D  6A 02                     PUSH 0x2
006B7D3F  52                        PUSH EDX
006B7D40  51                        PUSH ECX
006B7D41  FF D3                     CALL EBX
006B7D43  85 C0                     TEST EAX,EAX
006B7D45  75 21                     JNZ 0x006b7d68
006B7D47  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7D4A  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006B7D4D  C1 E0 03                  SHL EAX,0x3
006B7D50  8B 54 08 38               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x38]
006B7D54  83 CA 02                  OR EDX,0x2
006B7D57  89 54 08 38               MOV dword ptr [EAX + ECX*0x1 + 0x38],EDX
006B7D5B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B7D5E  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006B7D64  89 4C 10 40               MOV dword ptr [EAX + EDX*0x1 + 0x40],ECX
LAB_006b7d68:
006B7D68  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006B7D6B  8B 85 D0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdd0]
006B7D71  42                        INC EDX
006B7D72  3B D0                     CMP EDX,EAX
006B7D74  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006B7D77  0F 82 01 FE FF FF         JC 0x006b7b7e
LAB_006b7d7d:
006B7D7D  8B 95 00 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff00]
006B7D83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7D86  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7D89  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B7D8F  89 08                     MOV dword ptr [EAX],ECX
006B7D91  33 C0                     XOR EAX,EAX
006B7D93  5F                        POP EDI
006B7D94  5E                        POP ESI
006B7D95  5B                        POP EBX
006B7D96  8B E5                     MOV ESP,EBP
006B7D98  5D                        POP EBP
006B7D99  C2 08 00                  RET 0x8
LAB_006b7d9c:
006B7D9C  8B 95 00 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff00]
006B7DA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7DA5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B7DAB  8B 40 30                  MOV EAX,dword ptr [EAX + 0x30]
006B7DAE  85 C0                     TEST EAX,EAX
006B7DB0  74 07                     JZ 0x006b7db9
006B7DB2  50                        PUSH EAX
006B7DB3  FF 15 D8 BE 85 00         CALL dword ptr [0x0085bed8]
LAB_006b7db9:
006B7DB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7DBC  85 C0                     TEST EAX,EAX
006B7DBE  74 09                     JZ 0x006b7dc9
006B7DC0  8D 4D FC                  LEA ECX,[EBP + -0x4]
006B7DC3  51                        PUSH ECX
006B7DC4  E8 97 32 FF FF            CALL 0x006ab060
LAB_006b7dc9:
006B7DC9  68 94 00 00 00            PUSH 0x94
006B7DCE  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7DD3  6A 00                     PUSH 0x0
006B7DD5  56                        PUSH ESI
006B7DD6  E8 65 E0 FE FF            CALL 0x006a5e40
006B7DDB  5F                        POP EDI
006B7DDC  5E                        POP ESI
006B7DDD  83 C8 FF                  OR EAX,0xffffffff
006B7DE0  5B                        POP EBX
006B7DE1  8B E5                     MOV ESP,EBP
006B7DE3  5D                        POP EBP
006B7DE4  C2 08 00                  RET 0x8
