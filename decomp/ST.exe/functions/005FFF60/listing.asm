FUN_005fff60:
005FFF60  55                        PUSH EBP
005FFF61  8B EC                     MOV EBP,ESP
005FFF63  83 EC 18                  SUB ESP,0x18
005FFF66  53                        PUSH EBX
005FFF67  56                        PUSH ESI
005FFF68  8B F1                     MOV ESI,ECX
005FFF6A  8D 45 EC                  LEA EAX,[EBP + -0x14]
005FFF6D  57                        PUSH EDI
005FFF6E  8D 4D EA                  LEA ECX,[EBP + -0x16]
005FFF71  8B 9E 26 02 00 00         MOV EBX,dword ptr [ESI + 0x226]
005FFF77  50                        PUSH EAX
005FFF78  8D 55 E8                  LEA EDX,[EBP + -0x18]
005FFF7B  51                        PUSH ECX
005FFF7C  52                        PUSH EDX
005FFF7D  8B CE                     MOV ECX,ESI
005FFF7F  33 FF                     XOR EDI,EDI
005FFF81  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005FFF84  E8 3D 27 E0 FF            CALL 0x004026c6
005FFF89  85 C0                     TEST EAX,EAX
005FFF8B  0F 84 04 01 00 00         JZ 0x00600095
005FFF91  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005FFF94  85 DB                     TEST EBX,EBX
005FFF96  0F 84 9F 00 00 00         JZ 0x0060003b
005FFF9C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_005fff9f:
005FFF9F  8D 45 F4                  LEA EAX,[EBP + -0xc]
005FFFA2  8D 4D F2                  LEA ECX,[EBP + -0xe]
005FFFA5  50                        PUSH EAX
005FFFA6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005FFFA9  8D 55 F0                  LEA EDX,[EBP + -0x10]
005FFFAC  51                        PUSH ECX
005FFFAD  8B 4D EA                  MOV ECX,dword ptr [EBP + -0x16]
005FFFB0  52                        PUSH EDX
005FFFB1  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005FFFB4  50                        PUSH EAX
005FFFB5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FFFB8  51                        PUSH ECX
005FFFB9  52                        PUSH EDX
005FFFBA  50                        PUSH EAX
005FFFBB  53                        PUSH EBX
005FFFBC  8B CE                     MOV ECX,ESI
005FFFBE  E8 0A 3E E0 FF            CALL 0x00403dcd
005FFFC3  85 C0                     TEST EAX,EAX
005FFFC5  74 51                     JZ 0x00600018
005FFFC7  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
005FFFCB  0F BF 55 F2               MOVSX EDX,word ptr [EBP + -0xe]
005FFFCF  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
005FFFD3  51                        PUSH ECX
005FFFD4  52                        PUSH EDX
005FFFD5  0F BF 4D EC               MOVSX ECX,word ptr [EBP + -0x14]
005FFFD9  0F BF 55 EA               MOVSX EDX,word ptr [EBP + -0x16]
005FFFDD  50                        PUSH EAX
005FFFDE  51                        PUSH ECX
005FFFDF  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
005FFFE3  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
005FFFE6  52                        PUSH EDX
005FFFE7  50                        PUSH EAX
005FFFE8  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
005FFFEE  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
005FFFF1  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
005FFFF4  51                        PUSH ECX
005FFFF5  8B CE                     MOV ECX,ESI
005FFFF7  E8 7C 29 E0 FF            CALL 0x00402978
005FFFFC  85 C0                     TEST EAX,EAX
005FFFFE  7C 18                     JL 0x00600018
00600000  8D 55 F8                  LEA EDX,[EBP + -0x8]
00600003  8D 45 F0                  LEA EAX,[EBP + -0x10]
00600006  52                        PUSH EDX
00600007  8D 4D E8                  LEA ECX,[EBP + -0x18]
0060000A  50                        PUSH EAX
0060000B  51                        PUSH ECX
0060000C  53                        PUSH EBX
0060000D  8B CE                     MOV ECX,ESI
0060000F  E8 EB 51 E0 FF            CALL 0x004051ff
00600014  85 C0                     TEST EAX,EAX
00600016  75 2E                     JNZ 0x00600046
LAB_00600018:
00600018  81 7D 0C 30 75 00 00      CMP dword ptr [EBP + 0xc],0x7530
0060001F  74 0D                     JZ 0x0060002e
00600021  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
00600027  47                        INC EDI
00600028  3B F8                     CMP EDI,EAX
0060002A  7E 02                     JLE 0x0060002e
0060002C  33 FF                     XOR EDI,EDI
LAB_0060002e:
0060002E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00600031  48                        DEC EAX
00600032  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00600035  0F 85 64 FF FF FF         JNZ 0x005fff9f
LAB_0060003b:
0060003B  33 C0                     XOR EAX,EAX
LAB_0060003d:
0060003D  5F                        POP EDI
0060003E  5E                        POP ESI
0060003F  5B                        POP EBX
00600040  8B E5                     MOV ESP,EBP
00600042  5D                        POP EBP
00600043  C2 08 00                  RET 0x8
LAB_00600046:
00600046  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00600049  B8 01 00 00 00            MOV EAX,0x1
0060004E  81 F9 30 75 00 00         CMP ECX,0x7530
00600054  74 E7                     JZ 0x0060003d
00600056  8B 96 3F 02 00 00         MOV EDX,dword ptr [ESI + 0x23f]
0060005C  8B 0C BA                  MOV ECX,dword ptr [EDX + EDI*0x4]
0060005F  8B 96 3B 02 00 00         MOV EDX,dword ptr [ESI + 0x23b]
00600065  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00600068  8B 5C CA 0C               MOV EBX,dword ptr [EDX + ECX*0x8 + 0xc]
0060006C  8D 4C CA 0C               LEA ECX,[EDX + ECX*0x8 + 0xc]
00600070  D1 EB                     SHR EBX,0x1
00600072  89 19                     MOV dword ptr [ECX],EBX
00600074  8B 8E 3F 02 00 00         MOV ECX,dword ptr [ESI + 0x23f]
0060007A  8B 0C B9                  MOV ECX,dword ptr [ECX + EDI*0x4]
0060007D  5F                        POP EDI
0060007E  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00600081  8B 8E 3B 02 00 00         MOV ECX,dword ptr [ESI + 0x23b]
00600087  5E                        POP ESI
00600088  5B                        POP EBX
00600089  8D 4C D1 10               LEA ECX,[ECX + EDX*0x8 + 0x10]
0060008D  D1 29                     SHR dword ptr [ECX],0x1
0060008F  8B E5                     MOV ESP,EBP
00600091  5D                        POP EBP
00600092  C2 08 00                  RET 0x8
LAB_00600095:
00600095  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00600098  8B CE                     MOV ECX,ESI
0060009A  52                        PUSH EDX
0060009B  E8 08 35 E0 FF            CALL 0x004035a8
006000A0  8B C7                     MOV EAX,EDI
006000A2  5F                        POP EDI
006000A3  5E                        POP ESI
006000A4  5B                        POP EBX
006000A5  8B E5                     MOV ESP,EBP
006000A7  5D                        POP EBP
006000A8  C2 08 00                  RET 0x8
