FUN_005ec9f0:
005EC9F0  55                        PUSH EBP
005EC9F1  8B EC                     MOV EBP,ESP
005EC9F3  83 EC 50                  SUB ESP,0x50
005EC9F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005EC9FB  56                        PUSH ESI
005EC9FC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005EC9FF  57                        PUSH EDI
005ECA00  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005ECA03  8D 4D B0                  LEA ECX,[EBP + -0x50]
005ECA06  6A 00                     PUSH 0x0
005ECA08  52                        PUSH EDX
005ECA09  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005ECA10  C7 45 F4 70 DE 7C 00      MOV dword ptr [EBP + -0xc],0x7cde70
005ECA17  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005ECA1A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005ECA20  E8 CB 0D 14 00            CALL 0x0072d7f0
005ECA25  83 C4 08                  ADD ESP,0x8
005ECA28  85 C0                     TEST EAX,EAX
005ECA2A  0F 85 58 02 00 00         JNZ 0x005ecc88
005ECA30  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005ECA33  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005ECA36  85 C0                     TEST EAX,EAX
005ECA38  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
005ECA3E  0F 85 62 01 00 00         JNZ 0x005ecba6
005ECA44  A1 8C DE 7C 00            MOV EAX,[0x007cde8c]
005ECA49  8B 0D 88 DE 7C 00         MOV ECX,dword ptr [0x007cde88]
005ECA4F  50                        PUSH EAX
005ECA50  51                        PUSH ECX
005ECA51  8B CE                     MOV ECX,ESI
005ECA53  E8 6C 59 E1 FF            CALL 0x004023c4
005ECA58  8B 97 B1 02 00 00         MOV EDX,dword ptr [EDI + 0x2b1]
005ECA5E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005ECA61  6A 1D                     PUSH 0x1d
005ECA63  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
005ECA66  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
005ECA6C  51                        PUSH ECX
005ECA6D  52                        PUSH EDX
005ECA6E  6A 0E                     PUSH 0xe
005ECA70  8B CE                     MOV ECX,ESI
005ECA72  E8 0C 77 E1 FF            CALL 0x00404183
005ECA77  85 C0                     TEST EAX,EAX
005ECA79  0F 85 12 02 00 00         JNZ 0x005ecc91
005ECA7F  6A 0E                     PUSH 0xe
005ECA81  8B CE                     MOV ECX,ESI
005ECA83  E8 1E 90 E1 FF            CALL 0x00405aa6
005ECA88  8B 87 CA 02 00 00         MOV EAX,dword ptr [EDI + 0x2ca]
005ECA8E  8B CE                     MOV ECX,ESI
005ECA90  50                        PUSH EAX
005ECA91  6A 0E                     PUSH 0xe
005ECA93  E8 CC 45 E1 FF            CALL 0x00401064
005ECA98  DB 87 C6 02 00 00         FILD dword ptr [EDI + 0x2c6]
005ECA9E  51                        PUSH ECX
005ECA9F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005ECAA5  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005ECAAB  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005ECAB1  D9 1C 24                  FSTP float ptr [ESP]
005ECAB4  DB 87 C2 02 00 00         FILD dword ptr [EDI + 0x2c2]
005ECABA  51                        PUSH ECX
005ECABB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005ECAC1  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005ECAC7  D9 1C 24                  FSTP float ptr [ESP]
005ECACA  DB 87 BE 02 00 00         FILD dword ptr [EDI + 0x2be]
005ECAD0  51                        PUSH ECX
005ECAD1  8B CE                     MOV ECX,ESI
005ECAD3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005ECAD9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005ECADF  D9 1C 24                  FSTP float ptr [ESP]
005ECAE2  E8 F2 7A E1 FF            CALL 0x004045d9
005ECAE7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005ECAED  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005ECAF3  8B CE                     MOV ECX,ESI
005ECAF5  52                        PUSH EDX
005ECAF6  6A 0E                     PUSH 0xe
005ECAF8  E8 43 87 E1 FF            CALL 0x00405240
005ECAFD  8B 8F BA 02 00 00         MOV ECX,dword ptr [EDI + 0x2ba]
005ECB03  B8 89 88 88 88            MOV EAX,0x88888889
005ECB08  F7 E9                     IMUL ECX
005ECB0A  03 D1                     ADD EDX,ECX
005ECB0C  8B CE                     MOV ECX,ESI
005ECB0E  C1 FA 03                  SAR EDX,0x3
005ECB11  8B C2                     MOV EAX,EDX
005ECB13  C1 E8 1F                  SHR EAX,0x1f
005ECB16  03 D0                     ADD EDX,EAX
005ECB18  52                        PUSH EDX
005ECB19  6A 0E                     PUSH 0xe
005ECB1B  E8 DE 87 E1 FF            CALL 0x004052fe
005ECB20  6A 18                     PUSH 0x18
005ECB22  8B CF                     MOV ECX,EDI
005ECB24  E8 81 4F E1 FF            CALL 0x00401aaa
005ECB29  8B CE                     MOV ECX,ESI
005ECB2B  C6 87 B9 02 00 00 01      MOV byte ptr [EDI + 0x2b9],0x1
005ECB32  E8 95 87 E1 FF            CALL 0x004052cc
005ECB37  89 87 D6 02 00 00         MOV dword ptr [EDI + 0x2d6],EAX
005ECB3D  8A 87 35 02 00 00         MOV AL,byte ptr [EDI + 0x235]
005ECB43  3C 01                     CMP AL,0x1
005ECB45  0F 85 2A 01 00 00         JNZ 0x005ecc75
005ECB4B  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005ECB51  6A 1D                     PUSH 0x1d
005ECB53  68 08 A0 7A 00            PUSH 0x7aa008
005ECB58  51                        PUSH ECX
005ECB59  6A 0B                     PUSH 0xb
005ECB5B  8B CE                     MOV ECX,ESI
005ECB5D  E8 21 76 E1 FF            CALL 0x00404183
005ECB62  6A 0E                     PUSH 0xe
005ECB64  8B CE                     MOV ECX,ESI
005ECB66  E8 87 8E E1 FF            CALL 0x004059f2
005ECB6B  6A 0B                     PUSH 0xb
005ECB6D  8B CE                     MOV ECX,ESI
005ECB6F  E8 6B 60 E1 FF            CALL 0x00402bdf
005ECB74  6A 0B                     PUSH 0xb
005ECB76  8B CE                     MOV ECX,ESI
005ECB78  E8 57 57 E1 FF            CALL 0x004022d4
005ECB7D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005ECB83  8B CE                     MOV ECX,ESI
005ECB85  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005ECB8B  50                        PUSH EAX
005ECB8C  6A 0B                     PUSH 0xb
005ECB8E  E8 AD 86 E1 FF            CALL 0x00405240
005ECB93  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005ECB96  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005ECB9B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005ECB9E  5F                        POP EDI
005ECB9F  5E                        POP ESI
005ECBA0  8B E5                     MOV ESP,EBP
005ECBA2  5D                        POP EBP
005ECBA3  C2 08 00                  RET 0x8
LAB_005ecba6:
005ECBA6  33 C0                     XOR EAX,EAX
005ECBA8  6A 1D                     PUSH 0x1d
005ECBAA  8A 87 DF 02 00 00         MOV AL,byte ptr [EDI + 0x2df]
005ECBB0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECBB3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005ECBB6  A1 74 67 80 00            MOV EAX,[0x00806774]
005ECBBB  8D 14 4D 30 DF 7C 00      LEA EDX,[ECX*0x2 + 0x7cdf30]
005ECBC2  8B CE                     MOV ECX,ESI
005ECBC4  52                        PUSH EDX
005ECBC5  50                        PUSH EAX
005ECBC6  6A 08                     PUSH 0x8
005ECBC8  E8 B6 75 E1 FF            CALL 0x00404183
005ECBCD  33 C0                     XOR EAX,EAX
005ECBCF  6A 1D                     PUSH 0x1d
005ECBD1  8A 87 DF 02 00 00         MOV AL,byte ptr [EDI + 0x2df]
005ECBD7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECBDA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005ECBDD  A1 64 67 80 00            MOV EAX,[0x00806764]
005ECBE2  8D 14 4D 3A DF 7C 00      LEA EDX,[ECX*0x2 + 0x7cdf3a]
005ECBE9  8B CE                     MOV ECX,ESI
005ECBEB  52                        PUSH EDX
005ECBEC  50                        PUSH EAX
005ECBED  6A 09                     PUSH 0x9
005ECBEF  E8 8F 75 E1 FF            CALL 0x00404183
005ECBF4  33 C0                     XOR EAX,EAX
005ECBF6  6A 1D                     PUSH 0x1d
005ECBF8  8A 87 DF 02 00 00         MOV AL,byte ptr [EDI + 0x2df]
005ECBFE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECC01  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005ECC04  A1 74 67 80 00            MOV EAX,[0x00806774]
005ECC09  8D 14 4D 44 DF 7C 00      LEA EDX,[ECX*0x2 + 0x7cdf44]
005ECC10  8B CE                     MOV ECX,ESI
005ECC12  52                        PUSH EDX
005ECC13  50                        PUSH EAX
005ECC14  6A 0A                     PUSH 0xa
005ECC16  E8 68 75 E1 FF            CALL 0x00404183
005ECC1B  6A 0A                     PUSH 0xa
005ECC1D  8B CE                     MOV ECX,ESI
005ECC1F  E8 B0 56 E1 FF            CALL 0x004022d4
005ECC24  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005ECC2A  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005ECC30  8B CE                     MOV ECX,ESI
005ECC32  52                        PUSH EDX
005ECC33  6A 0A                     PUSH 0xa
005ECC35  E8 06 86 E1 FF            CALL 0x00405240
005ECC3A  A1 B8 32 80 00            MOV EAX,[0x008032b8]
005ECC3F  6A 10                     PUSH 0x10
005ECC41  50                        PUSH EAX
005ECC42  8B CE                     MOV ECX,ESI
005ECC44  E8 A5 78 E1 FF            CALL 0x004044ee
005ECC49  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005ECC4F  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005ECC55  8B CE                     MOV ECX,ESI
005ECC57  52                        PUSH EDX
005ECC58  6A 08                     PUSH 0x8
005ECC5A  E8 E1 85 E1 FF            CALL 0x00405240
005ECC5F  6A 0A                     PUSH 0xa
005ECC61  8B CE                     MOV ECX,ESI
005ECC63  E8 CB 65 E1 FF            CALL 0x00403233
005ECC68  8B CE                     MOV ECX,ESI
005ECC6A  E8 5D 86 E1 FF            CALL 0x004052cc
005ECC6F  89 87 D6 02 00 00         MOV dword ptr [EDI + 0x2d6],EAX
LAB_005ecc75:
005ECC75  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005ECC78  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005ECC7D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005ECC80  5F                        POP EDI
005ECC81  5E                        POP ESI
005ECC82  8B E5                     MOV ESP,EBP
005ECC84  5D                        POP EBP
005ECC85  C2 08 00                  RET 0x8
LAB_005ecc88:
005ECC88  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005ECC8B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_005ecc91:
005ECC91  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005ECC94  5F                        POP EDI
005ECC95  5E                        POP ESI
005ECC96  8B E5                     MOV ESP,EBP
005ECC98  5D                        POP EBP
005ECC99  C2 08 00                  RET 0x8
