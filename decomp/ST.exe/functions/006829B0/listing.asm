FUN_006829b0:
006829B0  55                        PUSH EBP
006829B1  8B EC                     MOV EBP,ESP
006829B3  83 EC 08                  SUB ESP,0x8
006829B6  A1 28 75 85 00            MOV EAX,[0x00857528]
006829BB  53                        PUSH EBX
006829BC  56                        PUSH ESI
006829BD  57                        PUSH EDI
006829BE  50                        PUSH EAX
006829BF  E8 38 EF D7 FF            CALL 0x004018fc
006829C4  8B F0                     MOV ESI,EAX
006829C6  83 C4 04                  ADD ESP,0x4
006829C9  85 F6                     TEST ESI,ESI
006829CB  75 44                     JNZ 0x00682a11
006829CD  A1 A4 3F 7D 00            MOV EAX,[0x007d3fa4]
006829D2  85 C0                     TEST EAX,EAX
006829D4  74 11                     JZ 0x006829e7
006829D6  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
006829DC  51                        PUSH ECX
006829DD  6A 8D                     PUSH -0x73
006829DF  E8 2D 2A D8 FF            CALL 0x00405411
006829E4  83 C4 08                  ADD ESP,0x8
LAB_006829e7:
006829E7  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
006829ED  52                        PUSH EDX
006829EE  E8 1D 30 D8 FF            CALL 0x00405a10
006829F3  83 C4 04                  ADD ESP,0x4
006829F6  85 C0                     TEST EAX,EAX
006829F8  7C 07                     JL 0x00682a01
006829FA  BE 02 00 00 00            MOV ESI,0x2
006829FF  EB 10                     JMP 0x00682a11
LAB_00682a01:
00682A01  A1 28 75 85 00            MOV EAX,[0x00857528]
00682A06  50                        PUSH EAX
00682A07  6A 8D                     PUSH -0x73
00682A09  E8 03 2A D8 FF            CALL 0x00405411
00682A0E  83 C4 08                  ADD ESP,0x8
LAB_00682a11:
00682A11  8D 46 FF                  LEA EAX,[ESI + -0x1]
00682A14  83 F8 07                  CMP EAX,0x7
00682A17  0F 87 DD 01 00 00         JA 0x00682bfa
switchD_00682a1d::switchD:
00682A1D  FF 24 85 18 2C 68 00      JMP dword ptr [EAX*0x4 + 0x682c18]
switchD_00682a1d::caseD_1:
00682A24  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00682A2A  C6 45 F8 06               MOV byte ptr [EBP + -0x8],0x6
00682A2E  51                        PUSH ECX
00682A2F  E8 84 32 D8 FF            CALL 0x00405cb8
00682A34  8D 55 F8                  LEA EDX,[EBP + -0x8]
00682A37  66 89 45 F9               MOV word ptr [EBP + -0x7],AX
00682A3B  52                        PUSH EDX
00682A3C  E8 D3 E5 D7 FF            CALL 0x00401014
00682A41  83 C4 08                  ADD ESP,0x8
00682A44  E8 20 FA D7 FF            CALL 0x00402469
00682A49  5F                        POP EDI
00682A4A  5E                        POP ESI
00682A4B  5B                        POP EBX
00682A4C  8B E5                     MOV ESP,EBP
00682A4E  5D                        POP EBP
00682A4F  C3                        RET
switchD_00682a1d::caseD_2:
00682A50  A1 28 75 85 00            MOV EAX,[0x00857528]
00682A55  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
00682A59  50                        PUSH EAX
00682A5A  E8 16 16 D8 FF            CALL 0x00404075
00682A5F  8D 4D F8                  LEA ECX,[EBP + -0x8]
00682A62  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
00682A65  51                        PUSH ECX
00682A66  E8 A9 E5 D7 FF            CALL 0x00401014
00682A6B  83 C4 08                  ADD ESP,0x8
00682A6E  E8 F6 F9 D7 FF            CALL 0x00402469
00682A73  5F                        POP EDI
00682A74  5E                        POP ESI
00682A75  5B                        POP EBX
00682A76  8B E5                     MOV ESP,EBP
00682A78  5D                        POP EBP
00682A79  C3                        RET
switchD_00682a1d::caseD_3:
00682A7A  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
00682A80  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
00682A84  52                        PUSH EDX
00682A85  E8 C4 E7 D7 FF            CALL 0x0040124e
00682A8A  D9 5D F9                  FSTP float ptr [EBP + -0x7]
00682A8D  8D 45 F8                  LEA EAX,[EBP + -0x8]
00682A90  50                        PUSH EAX
00682A91  E8 7E E5 D7 FF            CALL 0x00401014
00682A96  83 C4 08                  ADD ESP,0x8
00682A99  E8 CB F9 D7 FF            CALL 0x00402469
00682A9E  5F                        POP EDI
00682A9F  5E                        POP ESI
00682AA0  5B                        POP EBX
00682AA1  8B E5                     MOV ESP,EBP
00682AA3  5D                        POP EBP
00682AA4  C3                        RET
switchD_00682a1d::caseD_4:
00682AA5  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00682AAB  51                        PUSH ECX
00682AAC  E8 E5 26 D8 FF            CALL 0x00405196
00682AB1  8B F0                     MOV ESI,EAX
00682AB3  83 C4 04                  ADD ESP,0x4
00682AB6  85 F6                     TEST ESI,ESI
00682AB8  75 11                     JNZ 0x00682acb
00682ABA  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
00682AC0  52                        PUSH EDX
00682AC1  6A 8D                     PUSH -0x73
00682AC3  E8 49 29 D8 FF            CALL 0x00405411
00682AC8  83 C4 08                  ADD ESP,0x8
LAB_00682acb:
00682ACB  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00682ACE  33 FF                     XOR EDI,EDI
00682AD0  85 C0                     TEST EAX,EAX
00682AD2  0F 8E 33 01 00 00         JLE 0x00682c0b
00682AD8  33 DB                     XOR EBX,EBX
LAB_00682ada:
00682ADA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00682ADD  03 C3                     ADD EAX,EBX
00682ADF  50                        PUSH EAX
00682AE0  E8 2F E5 D7 FF            CALL 0x00401014
00682AE5  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00682AE8  83 C4 04                  ADD ESP,0x4
00682AEB  47                        INC EDI
00682AEC  83 C3 05                  ADD EBX,0x5
00682AEF  3B F8                     CMP EDI,EAX
00682AF1  7C E7                     JL 0x00682ada
00682AF3  E8 71 F9 D7 FF            CALL 0x00402469
00682AF8  5F                        POP EDI
00682AF9  5E                        POP ESI
00682AFA  5B                        POP EBX
00682AFB  8B E5                     MOV ESP,EBP
00682AFD  5D                        POP EBP
00682AFE  C3                        RET
switchD_00682a1d::caseD_5:
00682AFF  8D 4D F8                  LEA ECX,[EBP + -0x8]
00682B02  BB 01 00 00 00            MOV EBX,0x1
00682B07  51                        PUSH ECX
00682B08  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
00682B0B  C7 45 F9 09 00 00 00      MOV dword ptr [EBP + -0x7],0x9
00682B12  E8 FD E4 D7 FF            CALL 0x00401014
00682B17  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
00682B1D  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
00682B20  52                        PUSH EDX
00682B21  E8 22 1A D8 FF            CALL 0x00404548
00682B26  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
00682B29  8D 45 F8                  LEA EAX,[EBP + -0x8]
00682B2C  50                        PUSH EAX
00682B2D  E8 E2 E4 D7 FF            CALL 0x00401014
00682B32  6A 02                     PUSH 0x2
00682B34  68 D1 07 00 00            PUSH 0x7d1
00682B39  E8 51 05 D8 FF            CALL 0x0040308f
00682B3E  83 C4 14                  ADD ESP,0x14
00682B41  E8 23 F9 D7 FF            CALL 0x00402469
00682B46  5F                        POP EDI
00682B47  5E                        POP ESI
00682B48  5B                        POP EBX
00682B49  8B E5                     MOV ESP,EBP
00682B4B  5D                        POP EBP
00682B4C  C3                        RET
switchD_00682a1d::caseD_6:
00682B4D  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00682B53  BB 01 00 00 00            MOV EBX,0x1
00682B58  51                        PUSH ECX
00682B59  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
00682B5C  E8 9A 1B D8 FF            CALL 0x004046fb
00682B61  8D 55 F8                  LEA EDX,[EBP + -0x8]
00682B64  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
00682B67  52                        PUSH EDX
00682B68  E8 A7 E4 D7 FF            CALL 0x00401014
00682B6D  53                        PUSH EBX
00682B6E  68 D2 07 00 00            PUSH 0x7d2
00682B73  E8 17 05 D8 FF            CALL 0x0040308f
00682B78  83 C4 10                  ADD ESP,0x10
00682B7B  E8 E9 F8 D7 FF            CALL 0x00402469
00682B80  5F                        POP EDI
00682B81  5E                        POP ESI
00682B82  5B                        POP EBX
00682B83  8B E5                     MOV ESP,EBP
00682B85  5D                        POP EBP
00682B86  C3                        RET
switchD_00682a1d::caseD_7:
00682B87  A1 28 75 85 00            MOV EAX,[0x00857528]
00682B8C  BB 01 00 00 00            MOV EBX,0x1
00682B91  50                        PUSH EAX
00682B92  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
00682B95  E8 0F 13 D8 FF            CALL 0x00403ea9
00682B9A  8D 4D F8                  LEA ECX,[EBP + -0x8]
00682B9D  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
00682BA0  51                        PUSH ECX
00682BA1  E8 6E E4 D7 FF            CALL 0x00401014
00682BA6  53                        PUSH EBX
00682BA7  68 D4 07 00 00            PUSH 0x7d4
00682BAC  E8 DE 04 D8 FF            CALL 0x0040308f
00682BB1  83 C4 10                  ADD ESP,0x10
00682BB4  E8 B0 F8 D7 FF            CALL 0x00402469
00682BB9  5F                        POP EDI
00682BBA  5E                        POP ESI
00682BBB  5B                        POP EBX
00682BBC  8B E5                     MOV ESP,EBP
00682BBE  5D                        POP EBP
00682BBF  C3                        RET
switchD_00682a1d::caseD_8:
00682BC0  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
00682BC6  BB 01 00 00 00            MOV EBX,0x1
00682BCB  52                        PUSH EDX
00682BCC  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
00682BCF  E8 EE 12 D8 FF            CALL 0x00403ec2
00682BD4  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
00682BD7  8D 45 F8                  LEA EAX,[EBP + -0x8]
00682BDA  50                        PUSH EAX
00682BDB  E8 34 E4 D7 FF            CALL 0x00401014
00682BE0  53                        PUSH EBX
00682BE1  68 D5 07 00 00            PUSH 0x7d5
00682BE6  E8 A4 04 D8 FF            CALL 0x0040308f
00682BEB  83 C4 10                  ADD ESP,0x10
00682BEE  E8 76 F8 D7 FF            CALL 0x00402469
00682BF3  5F                        POP EDI
00682BF4  5E                        POP ESI
00682BF5  5B                        POP EBX
00682BF6  8B E5                     MOV ESP,EBP
00682BF8  5D                        POP EBP
00682BF9  C3                        RET
switchD_00682a1d::default:
00682BFA  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00682C00  51                        PUSH ECX
00682C01  6A 8D                     PUSH -0x73
00682C03  E8 09 28 D8 FF            CALL 0x00405411
00682C08  83 C4 08                  ADD ESP,0x8
LAB_00682c0b:
00682C0B  E8 59 F8 D7 FF            CALL 0x00402469
00682C10  5F                        POP EDI
00682C11  5E                        POP ESI
00682C12  5B                        POP EBX
00682C13  8B E5                     MOV ESP,EBP
00682C15  5D                        POP EBP
00682C16  C3                        RET
