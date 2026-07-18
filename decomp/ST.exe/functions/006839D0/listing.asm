FUN_006839d0:
006839D0  55                        PUSH EBP
006839D1  8B EC                     MOV EBP,ESP
006839D3  83 EC 14                  SUB ESP,0x14
006839D6  53                        PUSH EBX
006839D7  56                        PUSH ESI
006839D8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006839DB  57                        PUSH EDI
006839DC  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006839DF  33 D2                     XOR EDX,EDX
006839E1  33 DB                     XOR EBX,EBX
006839E3  3B FA                     CMP EDI,EDX
006839E5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006839E8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006839EB  74 09                     JZ 0x006839f6
006839ED  3B F2                     CMP ESI,EDX
006839EF  74 05                     JZ 0x006839f6
006839F1  39 55 08                  CMP dword ptr [EBP + 0x8],EDX
006839F4  75 19                     JNZ 0x00683a0f
LAB_006839f6:
006839F6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006839FB  68 E5 03 00 00            PUSH 0x3e5
00683A00  68 04 56 7D 00            PUSH 0x7d5604
00683A05  50                        PUSH EAX
00683A06  6A CC                     PUSH -0x34
00683A08  E8 33 24 02 00            CALL 0x006a5e40
00683A0D  33 D2                     XOR EDX,EDX
LAB_00683a0f:
00683A0F  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00683A12  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00683A17  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00683A1A  8B C8                     MOV ECX,EAX
00683A1C  C1 E1 04                  SHL ECX,0x4
00683A1F  03 C8                     ADD ECX,EAX
00683A21  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00683A24  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683A27  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00683A2A  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
00683A2D  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683A30  C1 E1 02                  SHL ECX,0x2
00683A33  39 91 C4 3B 81 00         CMP dword ptr [ECX + 0x813bc4],EDX
00683A39  0F 8E 32 01 00 00         JLE 0x00683b71
LAB_00683a3f:
00683A3F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00683A42  8A 94 11 C8 3B 81 00      MOV DL,byte ptr [ECX + EDX*0x1 + 0x813bc8]
00683A49  8B CA                     MOV ECX,EDX
00683A4B  81 E1 FF 00 00 00         AND ECX,0xff
00683A51  49                        DEC ECX
00683A52  83 F9 03                  CMP ECX,0x3
00683A55  0F 87 D0 00 00 00         JA 0x00683b2b
switchD_00683a5b::switchD:
00683A5B  FF 24 8D C8 3B 68 00      JMP dword ptr [ECX*0x4 + 0x683bc8]
switchD_00683a5b::caseD_2:
00683A62  8B C8                     MOV ECX,EAX
00683A64  57                        PUSH EDI
00683A65  C1 E1 04                  SHL ECX,0x4
00683A68  03 C8                     ADD ECX,EAX
00683A6A  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683A6D  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00683A70  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
00683A73  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
00683A76  03 C1                     ADD EAX,ECX
00683A78  8D 04 85 80 1C 81 00      LEA EAX,[EAX*0x4 + 0x811c80]
00683A7F  50                        PUSH EAX
00683A80  52                        PUSH EDX
00683A81  56                        PUSH ESI
00683A82  E8 5E 04 D8 FF            CALL 0x00403ee5
00683A87  83 C4 10                  ADD ESP,0x10
00683A8A  43                        INC EBX
00683A8B  E9 B3 00 00 00            JMP 0x00683b43
switchD_00683a5b::caseD_3:
00683A90  8B C8                     MOV ECX,EAX
00683A92  57                        PUSH EDI
00683A93  C1 E1 04                  SHL ECX,0x4
00683A96  03 C8                     ADD ECX,EAX
00683A98  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683A9B  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00683A9E  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
00683AA1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00683AA4  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00683AA7  03 C1                     ADD EAX,ECX
00683AA9  8D 04 85 24 2C 81 00      LEA EAX,[EAX*0x4 + 0x812c24]
00683AB0  50                        PUSH EAX
00683AB1  52                        PUSH EDX
00683AB2  56                        PUSH ESI
00683AB3  E8 2D 04 D8 FF            CALL 0x00403ee5
00683AB8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00683ABB  83 C4 10                  ADD ESP,0x10
00683ABE  40                        INC EAX
00683ABF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00683AC2  EB 7F                     JMP 0x00683b43
switchD_00683a5b::caseD_1:
00683AC4  8B C8                     MOV ECX,EAX
00683AC6  57                        PUSH EDI
00683AC7  C1 E1 04                  SHL ECX,0x4
00683ACA  03 C8                     ADD ECX,EAX
00683ACC  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683ACF  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00683AD2  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
00683AD5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00683AD8  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00683ADB  03 C1                     ADD EAX,ECX
00683ADD  8B 04 85 EC 1A 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811aec]
00683AE4  50                        PUSH EAX
00683AE5  52                        PUSH EDX
00683AE6  56                        PUSH ESI
00683AE7  E8 F9 03 D8 FF            CALL 0x00403ee5
00683AEC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00683AEF  83 C4 10                  ADD ESP,0x10
00683AF2  40                        INC EAX
00683AF3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00683AF6  EB 4B                     JMP 0x00683b43
switchD_00683a5b::caseD_4:
00683AF8  8B C8                     MOV ECX,EAX
00683AFA  57                        PUSH EDI
00683AFB  C1 E1 04                  SHL ECX,0x4
00683AFE  03 C8                     ADD ECX,EAX
00683B00  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683B03  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00683B06  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
00683B09  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
00683B0C  03 C2                     ADD EAX,EDX
00683B0E  8B 04 85 80 1C 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811c80]
00683B15  50                        PUSH EAX
00683B16  E8 58 07 D8 FF            CALL 0x00404273
00683B1B  83 C4 04                  ADD ESP,0x4
00683B1E  50                        PUSH EAX
00683B1F  56                        PUSH ESI
00683B20  E8 8A F8 D7 FF            CALL 0x004033af
00683B25  83 C4 0C                  ADD ESP,0xc
00683B28  43                        INC EBX
00683B29  EB 18                     JMP 0x00683b43
switchD_00683a5b::default:
00683B2B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00683B31  68 F6 03 00 00            PUSH 0x3f6
00683B36  68 04 56 7D 00            PUSH 0x7d5604
00683B3B  51                        PUSH ECX
00683B3C  6A CC                     PUSH -0x34
00683B3E  E8 FD 22 02 00            CALL 0x006a5e40
LAB_00683b43:
00683B43  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00683B48  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00683B4B  8B C8                     MOV ECX,EAX
00683B4D  42                        INC EDX
00683B4E  C1 E1 04                  SHL ECX,0x4
00683B51  03 C8                     ADD ECX,EAX
00683B53  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00683B56  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683B59  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00683B5C  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
00683B5F  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683B62  C1 E1 02                  SHL ECX,0x2
00683B65  3B 91 C4 3B 81 00         CMP EDX,dword ptr [ECX + 0x813bc4]
00683B6B  0F 8C CE FE FF FF         JL 0x00683a3f
LAB_00683b71:
00683B71  8B C8                     MOV ECX,EAX
00683B73  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
00683B77  C1 E1 04                  SHL ECX,0x4
00683B7A  03 C8                     ADD ECX,EAX
00683B7C  66 89 55 ED               MOV word ptr [EBP + -0x13],DX
00683B80  C6 45 EC 0B               MOV byte ptr [EBP + -0x14],0xb
00683B84  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00683B87  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00683B8A  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
00683B8D  8D 4D EC                  LEA ECX,[EBP + -0x14]
00683B90  51                        PUSH ECX
00683B91  56                        PUSH ESI
00683B92  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00683B95  66 8B 04 95 C4 3B 81 00   MOV AX,word ptr [EDX*0x4 + 0x813bc4]
00683B9D  66 89 45 EF               MOV word ptr [EBP + -0x11],AX
00683BA1  E8 A3 E5 D7 FF            CALL 0x00402149
00683BA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00683BA9  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00683BAC  83 C4 08                  ADD ESP,0x8
00683BAF  8D 55 F4                  LEA EDX,[EBP + -0xc]
00683BB2  8B 48 0F                  MOV ECX,dword ptr [EAX + 0xf]
00683BB5  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00683BB8  52                        PUSH EDX
00683BB9  51                        PUSH ECX
00683BBA  E8 01 A6 02 00            CALL 0x006ae1c0
00683BBF  8B C6                     MOV EAX,ESI
00683BC1  5F                        POP EDI
00683BC2  5E                        POP ESI
00683BC3  5B                        POP EBX
00683BC4  8B E5                     MOV ESP,EBP
00683BC6  5D                        POP EBP
00683BC7  C3                        RET
