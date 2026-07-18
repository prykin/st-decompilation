PrividerTy::NonePrivider:
005BAE00  55                        PUSH EBP
005BAE01  8B EC                     MOV EBP,ESP
005BAE03  81 EC C4 00 00 00         SUB ESP,0xc4
005BAE09  53                        PUSH EBX
005BAE0A  56                        PUSH ESI
005BAE0B  8B F1                     MOV ESI,ECX
005BAE0D  57                        PUSH EDI
005BAE0E  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005BAE11  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005BAE18  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005BAE1E  33 DB                     XOR EBX,EBX
005BAE20  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005BAE23  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BAE28  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
005BAE2E  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
005BAE34  53                        PUSH EBX
005BAE35  52                        PUSH EDX
005BAE36  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
005BAE3C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BAE42  E8 A9 29 17 00            CALL 0x0072d7f0
005BAE47  8B F0                     MOV ESI,EAX
005BAE49  83 C4 08                  ADD ESP,0x8
005BAE4C  3B F3                     CMP ESI,EBX
005BAE4E  0F 85 0B 08 00 00         JNZ 0x005bb65f
005BAE54  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
005BAE57  33 C0                     XOR EAX,EAX
005BAE59  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
005BAE5C  48                        DEC EAX
005BAE5D  83 F8 04                  CMP EAX,0x4
005BAE60  0F 87 E6 07 00 00         JA 0x005bb64c
switchD_005bae66::switchD:
005BAE66  FF 24 85 A8 B6 5B 00      JMP dword ptr [EAX*0x4 + 0x5bb6a8]
switchD_005bae66::caseD_4:
005BAE6D  8B 8E 96 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c96]
005BAE73  3B CB                     CMP ECX,EBX
005BAE75  74 27                     JZ 0x005bae9e
005BAE77  E8 75 A7 E4 FF            CALL 0x004055f1
005BAE7C  85 C0                     TEST EAX,EAX
005BAE7E  74 05                     JZ 0x005bae85
005BAE80  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005BAE83  EB 19                     JMP 0x005bae9e
LAB_005bae85:
005BAE85  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BAE8B  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BAE8E  3B C3                     CMP EAX,EBX
005BAE90  7C 0C                     JL 0x005bae9e
005BAE92  50                        PUSH EAX
005BAE93  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BAE98  50                        PUSH EAX
005BAE99  E8 52 8C 0F 00            CALL 0x006b3af0
LAB_005bae9e:
005BAE9E  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BAEA4  3B CB                     CMP ECX,EBX
005BAEA6  74 28                     JZ 0x005baed0
005BAEA8  E8 44 A7 E4 FF            CALL 0x004055f1
005BAEAD  85 C0                     TEST EAX,EAX
005BAEAF  74 05                     JZ 0x005baeb6
005BAEB1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005BAEB4  EB 1A                     JMP 0x005baed0
LAB_005baeb6:
005BAEB6  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BAEBC  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BAEBF  3B C3                     CMP EAX,EBX
005BAEC1  7C 0D                     JL 0x005baed0
005BAEC3  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BAEC9  50                        PUSH EAX
005BAECA  51                        PUSH ECX
005BAECB  E8 20 8C 0F 00            CALL 0x006b3af0
LAB_005baed0:
005BAED0  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005BAED6  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005BAEDC  3B C3                     CMP EAX,EBX
005BAEDE  74 09                     JZ 0x005baee9
005BAEE0  80 78 65 02               CMP byte ptr [EAX + 0x65],0x2
005BAEE4  74 03                     JZ 0x005baee9
005BAEE6  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005baee9:
005BAEE9  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
005BAEEC  0F 84 5A 07 00 00         JZ 0x005bb64c
005BAEF2  8A 8E 5A 1A 00 00         MOV CL,byte ptr [ESI + 0x1a5a]
005BAEF8  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005BAEFC  80 F9 FF                  CMP CL,0xff
005BAEFF  0F 84 47 07 00 00         JZ 0x005bb64c
005BAF05  81 E1 FF 00 00 00         AND ECX,0xff
005BAF0B  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005BAF12  2B C1                     SUB EAX,ECX
005BAF14  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005BAF17  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
005BAF1A  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
005BAF1D  03 C1                     ADD EAX,ECX
005BAF1F  39 98 D1 00 00 00         CMP dword ptr [EAX + 0xd1],EBX
005BAF25  0F 84 21 07 00 00         JZ 0x005bb64c
005BAF2B  05 C1 00 00 00            ADD EAX,0xc1
005BAF30  B9 20 76 80 00            MOV ECX,0x807620
005BAF35  50                        PUSH EAX
005BAF36  E8 15 8C 12 00            CALL 0x006e3b50
005BAF3B  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
005BAF41  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BAF47  5F                        POP EDI
005BAF48  5E                        POP ESI
005BAF49  5B                        POP EBX
005BAF4A  8B E5                     MOV ESP,EBP
005BAF4C  5D                        POP EBP
005BAF4D  C3                        RET
switchD_005bae66::caseD_3:
005BAF4E  8B 8E 96 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c96]
005BAF54  3B CB                     CMP ECX,EBX
005BAF56  74 0C                     JZ 0x005baf64
005BAF58  E8 94 A6 E4 FF            CALL 0x004055f1
005BAF5D  85 C0                     TEST EAX,EAX
005BAF5F  74 03                     JZ 0x005baf64
005BAF61  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005baf64:
005BAF64  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BAF6A  3B CB                     CMP ECX,EBX
005BAF6C  74 0C                     JZ 0x005baf7a
005BAF6E  E8 7E A6 E4 FF            CALL 0x004055f1
005BAF73  85 C0                     TEST EAX,EAX
005BAF75  74 03                     JZ 0x005baf7a
005BAF77  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005baf7a:
005BAF7A  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005BAF80  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005BAF86  3B C3                     CMP EAX,EBX
005BAF88  74 09                     JZ 0x005baf93
005BAF8A  80 78 65 01               CMP byte ptr [EAX + 0x65],0x1
005BAF8E  74 03                     JZ 0x005baf93
005BAF90  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005baf93:
005BAF93  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
005BAF96  0F 84 B0 06 00 00         JZ 0x005bb64c
005BAF9C  8B 8E 96 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c96]
005BAFA2  3B CB                     CMP ECX,EBX
005BAFA4  74 1A                     JZ 0x005bafc0
005BAFA6  E8 DF 62 E4 FF            CALL 0x0040128a
005BAFAB  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BAFB1  50                        PUSH EAX
005BAFB2  E8 F9 32 17 00            CALL 0x0072e2b0
005BAFB7  83 C4 04                  ADD ESP,0x4
005BAFBA  89 9E 96 1C 00 00         MOV dword ptr [ESI + 0x1c96],EBX
LAB_005bafc0:
005BAFC0  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BAFC6  3B CB                     CMP ECX,EBX
005BAFC8  74 1A                     JZ 0x005bafe4
005BAFCA  E8 BB 62 E4 FF            CALL 0x0040128a
005BAFCF  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BAFD5  51                        PUSH ECX
005BAFD6  E8 D5 32 17 00            CALL 0x0072e2b0
005BAFDB  83 C4 04                  ADD ESP,0x4
005BAFDE  89 9E 9A 1C 00 00         MOV dword ptr [ESI + 0x1c9a],EBX
LAB_005bafe4:
005BAFE4  8B 86 7B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7b]
005BAFEA  83 F8 FF                  CMP EAX,-0x1
005BAFED  74 1D                     JZ 0x005bb00c
005BAFEF  8B 96 97 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a97]
005BAFF5  8B 8E 93 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a93]
005BAFFB  52                        PUSH EDX
005BAFFC  8B 96 BF 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abf]
005BB002  51                        PUSH ECX
005BB003  6A FE                     PUSH -0x2
005BB005  50                        PUSH EAX
005BB006  52                        PUSH EDX
005BB007  E8 C4 84 0F 00            CALL 0x006b34d0
LAB_005bb00c:
005BB00C  8B 86 0C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b0c]
005BB012  83 F8 FF                  CMP EAX,-0x1
005BB015  74 1D                     JZ 0x005bb034
005BB017  8B 8E 28 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b28]
005BB01D  8B 96 24 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b24]
005BB023  51                        PUSH ECX
005BB024  52                        PUSH EDX
005BB025  6A FE                     PUSH -0x2
005BB027  50                        PUSH EAX
005BB028  8B 86 50 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b50]
005BB02E  50                        PUSH EAX
005BB02F  E8 9C 84 0F 00            CALL 0x006b34d0
LAB_005bb034:
005BB034  8B 86 9D 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b9d]
005BB03A  83 F8 FF                  CMP EAX,-0x1
005BB03D  74 1D                     JZ 0x005bb05c
005BB03F  8B 8E B9 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bb9]
005BB045  8B 96 B5 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bb5]
005BB04B  51                        PUSH ECX
005BB04C  52                        PUSH EDX
005BB04D  6A FE                     PUSH -0x2
005BB04F  50                        PUSH EAX
005BB050  8B 86 E1 1B 00 00         MOV EAX,dword ptr [ESI + 0x1be1]
005BB056  50                        PUSH EAX
005BB057  E8 74 84 0F 00            CALL 0x006b34d0
LAB_005bb05c:
005BB05C  8D BE 2A 1C 00 00         LEA EDI,[ESI + 0x1c2a]
005BB062  BB 16 00 00 00            MOV EBX,0x16
LAB_005bb067:
005BB067  8B 0F                     MOV ECX,dword ptr [EDI]
005BB069  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BB06F  51                        PUSH ECX
005BB070  52                        PUSH EDX
005BB071  E8 BA 83 0F 00            CALL 0x006b3430
005BB076  83 C7 04                  ADD EDI,0x4
005BB079  4B                        DEC EBX
005BB07A  75 EB                     JNZ 0x005bb067
005BB07C  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005BB082  84 C0                     TEST AL,AL
005BB084  75 13                     JNZ 0x005bb099
005BB086  8B 86 8A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8a]
005BB08C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BB092  50                        PUSH EAX
005BB093  51                        PUSH ECX
005BB094  E8 97 83 0F 00            CALL 0x006b3430
LAB_005bb099:
005BB099  6A 00                     PUSH 0x0
005BB09B  8B CE                     MOV ECX,ESI
005BB09D  C6 46 65 01               MOV byte ptr [ESI + 0x65],0x1
005BB0A1  E8 89 85 E4 FF            CALL 0x0040362f
005BB0A6  6A 00                     PUSH 0x0
005BB0A8  8B CE                     MOV ECX,ESI
005BB0AA  E8 A3 AD E4 FF            CALL 0x00405e52
005BB0AF  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
005BB0B5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BB0BB  5F                        POP EDI
005BB0BC  5E                        POP ESI
005BB0BD  5B                        POP EBX
005BB0BE  8B E5                     MOV ESP,EBP
005BB0C0  5D                        POP EBP
005BB0C1  C3                        RET
switchD_005bae66::caseD_5:
005BB0C2  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BB0C8  3B CB                     CMP ECX,EBX
005BB0CA  74 31                     JZ 0x005bb0fd
005BB0CC  E8 20 A5 E4 FF            CALL 0x004055f1
005BB0D1  85 C0                     TEST EAX,EAX
005BB0D3  74 05                     JZ 0x005bb0da
005BB0D5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005BB0D8  EB 23                     JMP 0x005bb0fd
LAB_005bb0da:
005BB0DA  80 BE 60 1A 00 00 01      CMP byte ptr [ESI + 0x1a60],0x1
005BB0E1  75 1A                     JNZ 0x005bb0fd
005BB0E3  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BB0E9  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BB0EC  3B C3                     CMP EAX,EBX
005BB0EE  7C 0D                     JL 0x005bb0fd
005BB0F0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BB0F6  50                        PUSH EAX
005BB0F7  52                        PUSH EDX
005BB0F8  E8 F3 89 0F 00            CALL 0x006b3af0
LAB_005bb0fd:
005BB0FD  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BB102  8B 80 E6 02 00 00         MOV EAX,dword ptr [EAX + 0x2e6]
005BB108  3B C3                     CMP EAX,EBX
005BB10A  74 09                     JZ 0x005bb115
005BB10C  80 78 65 02               CMP byte ptr [EAX + 0x65],0x2
005BB110  74 03                     JZ 0x005bb115
005BB112  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005bb115:
005BB115  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
005BB118  0F 84 2E 05 00 00         JZ 0x005bb64c
005BB11E  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BB124  3B CB                     CMP ECX,EBX
005BB126  74 1A                     JZ 0x005bb142
005BB128  E8 5D 61 E4 FF            CALL 0x0040128a
005BB12D  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BB133  51                        PUSH ECX
005BB134  E8 77 31 17 00            CALL 0x0072e2b0
005BB139  83 C4 04                  ADD ESP,0x4
005BB13C  89 9E 9A 1C 00 00         MOV dword ptr [ESI + 0x1c9a],EBX
LAB_005bb142:
005BB142  8A 86 60 1A 00 00         MOV AL,byte ptr [ESI + 0x1a60]
005BB148  84 C0                     TEST AL,AL
005BB14A  75 12                     JNZ 0x005bb15e
005BB14C  8B 96 8A 1C 00 00         MOV EDX,dword ptr [ESI + 0x1c8a]
005BB152  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BB157  52                        PUSH EDX
005BB158  50                        PUSH EAX
005BB159  E8 D2 82 0F 00            CALL 0x006b3430
LAB_005bb15e:
005BB15E  8A 8E 60 1A 00 00         MOV CL,byte ptr [ESI + 0x1a60]
005BB164  53                        PUSH EBX
005BB165  51                        PUSH ECX
005BB166  8B CE                     MOV ECX,ESI
005BB168  E8 58 8A E4 FF            CALL 0x00403bc5
005BB16D  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
005BB173  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BB179  5F                        POP EDI
005BB17A  5E                        POP ESI
005BB17B  5B                        POP EBX
005BB17C  8B E5                     MOV ESP,EBP
005BB17E  5D                        POP EBP
005BB17F  C3                        RET
switchD_005bae66::caseD_1:
005BB180  8A 86 71 1A 00 00         MOV AL,byte ptr [ESI + 0x1a71]
005BB186  84 C0                     TEST AL,AL
005BB188  0F 84 BE 04 00 00         JZ 0x005bb64c
005BB18E  8B 86 6D 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a6d]
005BB194  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005BB197  3B C3                     CMP EAX,EBX
005BB199  75 37                     JNZ 0x005bb1d2
005BB19B  B9 09 00 00 00            MOV ECX,0x9
005BB1A0  33 C0                     XOR EAX,EAX
005BB1A2  8D BD 3C FF FF FF         LEA EDI,[EBP + 0xffffff3c]
005BB1A8  6A FF                     PUSH -0x1
005BB1AA  F3 AB                     STOSD.REP ES:EDI
005BB1AC  6A 01                     PUSH 0x1
005BB1AE  8D 95 3C FF FF FF         LEA EDX,[EBP + 0xffffff3c]
005BB1B4  6A 26                     PUSH 0x26
005BB1B6  52                        PUSH EDX
005BB1B7  66 AB                     STOSW ES:EDI
005BB1B9  A1 64 17 81 00            MOV EAX,[0x00811764]
005BB1BE  6A 1A                     PUSH 0x1a
005BB1C0  6A 01                     PUSH 0x1
005BB1C2  50                        PUSH EAX
005BB1C3  C6 85 3E FF FF FF 04      MOV byte ptr [EBP + 0xffffff3e],0x4
005BB1CA  E8 91 A1 15 00            CALL 0x00715360
005BB1CF  83 C4 1C                  ADD ESP,0x1c
LAB_005bb1d2:
005BB1D2  8B 8E 6D 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a6d]
005BB1D8  41                        INC ECX
005BB1D9  8B C1                     MOV EAX,ECX
005BB1DB  89 8E 6D 1A 00 00         MOV dword ptr [ESI + 0x1a6d],ECX
005BB1E1  83 F8 0F                  CMP EAX,0xf
005BB1E4  75 06                     JNZ 0x005bb1ec
005BB1E6  89 9E 6D 1A 00 00         MOV dword ptr [ESI + 0x1a6d],EBX
LAB_005bb1ec:
005BB1EC  53                        PUSH EBX
005BB1ED  6A FF                     PUSH -0x1
005BB1EF  8D 4D F4                  LEA ECX,[EBP + -0xc]
005BB1F2  53                        PUSH EBX
005BB1F3  8D 55 C8                  LEA EDX,[EBP + -0x38]
005BB1F6  51                        PUSH ECX
005BB1F7  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005BB1FD  8D 45 E8                  LEA EAX,[EBP + -0x18]
005BB200  52                        PUSH EDX
005BB201  50                        PUSH EAX
005BB202  6A FF                     PUSH -0x1
005BB204  51                        PUSH ECX
005BB205  E8 26 A4 15 00            CALL 0x00715630
005BB20A  83 C4 20                  ADD ESP,0x20
005BB20D  83 F8 B3                  CMP EAX,-0x4d
005BB210  0F 84 63 03 00 00         JZ 0x005bb579
005BB216  3B C3                     CMP EAX,EBX
005BB218  0F 84 44 03 00 00         JZ 0x005bb562
005BB21E  83 F8 01                  CMP EAX,0x1
005BB221  0F 85 25 04 00 00         JNZ 0x005bb64c
005BB227  83 7D E8 1A               CMP dword ptr [EBP + -0x18],0x1a
005BB22B  0F 85 01 03 00 00         JNZ 0x005bb532
005BB231  8B 15 D5 7D 80 00         MOV EDX,dword ptr [0x00807dd5]
005BB237  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005BB23A  C1 EA 10                  SHR EDX,0x10
005BB23D  66 39 17                  CMP word ptr [EDI],DX
005BB240  8B DF                     MOV EBX,EDI
005BB242  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
005BB246  0F 84 90 00 00 00         JZ 0x005bb2dc
005BB24C  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005BB252  85 FF                     TEST EDI,EDI
005BB254  74 4D                     JZ 0x005bb2a3
005BB256  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005BB25C  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005BB262  50                        PUSH EAX
005BB263  51                        PUSH ECX
005BB264  6A 00                     PUSH 0x0
005BB266  8B CF                     MOV ECX,EDI
005BB268  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005BB26F  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005BB278  E8 01 9E E4 FF            CALL 0x0040507e
005BB27D  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005BB283  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005BB289  52                        PUSH EDX
005BB28A  50                        PUSH EAX
005BB28B  8B CF                     MOV ECX,EDI
005BB28D  E8 8C 71 E4 FF            CALL 0x0040241e
005BB292  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005BB299  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005bb2a3:
005BB2A3  C6 86 71 1A 00 00 00      MOV byte ptr [ESI + 0x1a71],0x0
005BB2AA  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BB2B0  E8 CE 98 E4 FF            CALL 0x00404b83
005BB2B5  6A 00                     PUSH 0x0
005BB2B7  6A 00                     PUSH 0x0
005BB2B9  6A 00                     PUSH 0x0
005BB2BB  6A 00                     PUSH 0x0
005BB2BD  6A 00                     PUSH 0x0
005BB2BF  6A 00                     PUSH 0x0
005BB2C1  68 26 25 00 00            PUSH 0x2526
LAB_005bb2c6:
005BB2C6  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005BB2CC  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005BB2D2  E8 D1 8C E4 FF            CALL 0x00403fa8
005BB2D7  E9 56 02 00 00            JMP 0x005bb532
LAB_005bb2dc:
005BB2DC  8D 47 02                  LEA EAX,[EDI + 0x2]
005BB2DF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005BB2E2  8A 00                     MOV AL,byte ptr [EAX]
005BB2E4  3C 01                     CMP AL,0x1
005BB2E6  74 10                     JZ 0x005bb2f8
005BB2E8  3C 03                     CMP AL,0x3
005BB2EA  0F 85 42 02 00 00         JNZ 0x005bb532
005BB2F0  3C 01                     CMP AL,0x1
005BB2F2  0F 85 F4 00 00 00         JNZ 0x005bb3ec
LAB_005bb2f8:
005BB2F8  83 C7 0B                  ADD EDI,0xb
005BB2FB  33 C0                     XOR EAX,EAX
005BB2FD  8A 07                     MOV AL,byte ptr [EDI]
005BB2FF  48                        DEC EAX
005BB300  83 F8 04                  CMP EAX,0x4
005BB303  0F 87 E3 00 00 00         JA 0x005bb3ec
switchD_005bb309::switchD:
005BB309  FF 24 85 BC B6 5B 00      JMP dword ptr [EAX*0x4 + 0x5bb6bc]
switchD_005bb309::caseD_1:
005BB310  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
005BB314  C7 45 F0 0E 00 00 00      MOV dword ptr [EBP + -0x10],0xe
005BB31B  E9 CC 00 00 00            JMP 0x005bb3ec
switchD_005bb309::caseD_2:
005BB320  8B 15 BC C0 79 00         MOV EDX,dword ptr [0x0079c0bc]
005BB326  52                        PUSH EDX
005BB327  68 80 76 80 00            PUSH 0x807680
005BB32C  68 E4 6E 7C 00            PUSH 0x7c6ee4
005BB331  68 3A F3 80 00            PUSH 0x80f33a
005BB336  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BB33C  8A 07                     MOV AL,byte ptr [EDI]
005BB33E  8B 4B 03                  MOV ECX,dword ptr [EBX + 0x3]
005BB341  8D 55 D8                  LEA EDX,[EBP + -0x28]
005BB344  6A 00                     PUSH 0x0
005BB346  52                        PUSH EDX
005BB347  68 49 4E 40 00            PUSH 0x404e49
005BB34C  6A 00                     PUSH 0x0
005BB34E  68 44 CE 7C 00            PUSH 0x7cce44
005BB353  68 3A F3 80 00            PUSH 0x80f33a
005BB358  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
005BB35B  89 4D D9                  MOV dword ptr [EBP + -0x27],ECX
005BB35E  C7 45 DD 00 00 00 00      MOV dword ptr [EBP + -0x23],0x0
005BB365  E8 A6 A5 16 00            CALL 0x00725910
005BB36A  8A 0F                     MOV CL,byte ptr [EDI]
005BB36C  83 C4 28                  ADD ESP,0x28
005BB36F  83 F8 90                  CMP EAX,-0x70
005BB372  0F 95 C0                  SETNZ AL
005BB375  80 E9 02                  SUB CL,0x2
005BB378  40                        INC EAX
005BB379  F6 D9                     NEG CL
005BB37B  1B C9                     SBB ECX,ECX
005BB37D  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
005BB380  83 E1 02                  AND ECX,0x2
005BB383  83 C1 0D                  ADD ECX,0xd
005BB386  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005BB389  EB 61                     JMP 0x005bb3ec
switchD_005bb309::caseD_5:
005BB38B  8B 15 B8 C0 79 00         MOV EDX,dword ptr [0x0079c0b8]
005BB391  68 DD 7D 80 00            PUSH 0x807ddd
005BB396  52                        PUSH EDX
005BB397  68 80 76 80 00            PUSH 0x807680
005BB39C  68 38 CE 7C 00            PUSH 0x7cce38
005BB3A1  68 3A F3 80 00            PUSH 0x80f33a
005BB3A6  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BB3AC  8A 07                     MOV AL,byte ptr [EDI]
005BB3AE  8B 4B 03                  MOV ECX,dword ptr [EBX + 0x3]
005BB3B1  8B 53 07                  MOV EDX,dword ptr [EBX + 0x7]
005BB3B4  88 45 CC                  MOV byte ptr [EBP + -0x34],AL
005BB3B7  8D 45 CC                  LEA EAX,[EBP + -0x34]
005BB3BA  6A 00                     PUSH 0x0
005BB3BC  50                        PUSH EAX
005BB3BD  68 49 4E 40 00            PUSH 0x404e49
005BB3C2  6A 00                     PUSH 0x0
005BB3C4  68 44 CE 7C 00            PUSH 0x7cce44
005BB3C9  68 3A F3 80 00            PUSH 0x80f33a
005BB3CE  89 4D CD                  MOV dword ptr [EBP + -0x33],ECX
005BB3D1  89 55 D1                  MOV dword ptr [EBP + -0x2f],EDX
005BB3D4  E8 37 A5 16 00            CALL 0x00725910
005BB3D9  83 C4 2C                  ADD ESP,0x2c
005BB3DC  83 F8 90                  CMP EAX,-0x70
005BB3DF  0F 94 C1                  SETZ CL
005BB3E2  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005BB3E5  C7 45 F0 10 00 00 00      MOV dword ptr [EBP + -0x10],0x10
switchD_005bb309::caseD_4:
005BB3EC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005BB3EF  8A 0A                     MOV CL,byte ptr [EDX]
005BB3F1  80 F9 03                  CMP CL,0x3
005BB3F4  75 04                     JNZ 0x005bb3fa
005BB3F6  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
LAB_005bb3fa:
005BB3FA  B2 05                     MOV DL,0x5
LAB_005bb3fc:
005BB3FC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BB3FF  25 FF 00 00 00            AND EAX,0xff
005BB404  48                        DEC EAX
005BB405  0F 84 D9 00 00 00         JZ 0x005bb4e4
005BB40B  48                        DEC EAX
005BB40C  0F 84 96 00 00 00         JZ 0x005bb4a8
005BB412  8A 43 0D                  MOV AL,byte ptr [EBX + 0xd]
005BB415  84 C0                     TEST AL,AL
005BB417  74 10                     JZ 0x005bb429
005BB419  80 F9 01                  CMP CL,0x1
005BB41C  75 05                     JNZ 0x005bb423
005BB41E  38 53 0B                  CMP byte ptr [EBX + 0xb],DL
005BB421  74 06                     JZ 0x005bb429
LAB_005bb423:
005BB423  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
005BB427  EB D3                     JMP 0x005bb3fc
LAB_005bb429:
005BB429  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005BB42F  85 FF                     TEST EDI,EDI
005BB431  74 4D                     JZ 0x005bb480
005BB433  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005BB439  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005BB43F  50                        PUSH EAX
005BB440  51                        PUSH ECX
005BB441  6A 00                     PUSH 0x0
005BB443  8B CF                     MOV ECX,EDI
005BB445  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005BB44C  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005BB455  E8 24 9C E4 FF            CALL 0x0040507e
005BB45A  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005BB460  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005BB466  52                        PUSH EDX
005BB467  50                        PUSH EAX
005BB468  8B CF                     MOV ECX,EDI
005BB46A  E8 AF 6F E4 FF            CALL 0x0040241e
005BB46F  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005BB476  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005bb480:
005BB480  C6 86 71 1A 00 00 00      MOV byte ptr [ESI + 0x1a71],0x0
005BB487  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BB48D  E8 F1 96 E4 FF            CALL 0x00404b83
005BB492  6A 00                     PUSH 0x0
005BB494  6A 00                     PUSH 0x0
005BB496  6A 00                     PUSH 0x0
005BB498  6A 00                     PUSH 0x0
005BB49A  6A 00                     PUSH 0x0
005BB49C  6A 00                     PUSH 0x0
005BB49E  68 23 25 00 00            PUSH 0x2523
005BB4A3  E9 1E FE FF FF            JMP 0x005bb2c6
LAB_005bb4a8:
005BB4A8  6A 01                     PUSH 0x1
005BB4AA  6A 00                     PUSH 0x0
005BB4AC  68 09 61 00 00            PUSH 0x6109
005BB4B1  8B CE                     MOV ECX,ESI
005BB4B3  E8 08 82 E4 FF            CALL 0x004036c0
005BB4B8  6A 01                     PUSH 0x1
005BB4BA  8B CE                     MOV ECX,ESI
005BB4BC  C6 05 7E 87 80 00 00      MOV byte ptr [0x0080877e],0x0
005BB4C3  C7 05 BE 87 80 00 00 00 00 00  MOV dword ptr [0x008087be],0x0
005BB4CD  E8 BA 97 E4 FF            CALL 0x00404c8c
005BB4D2  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005BB4D8  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005BB4DE  85 C9                     TEST ECX,ECX
005BB4E0  74 50                     JZ 0x005bb532
005BB4E2  EB 43                     JMP 0x005bb527
LAB_005bb4e4:
005BB4E4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005BB4E7  6A 11                     PUSH 0x11
005BB4E9  50                        PUSH EAX
005BB4EA  68 21 61 00 00            PUSH 0x6121
005BB4EF  8B CE                     MOV ECX,ESI
005BB4F1  E8 CA 81 E4 FF            CALL 0x004036c0
005BB4F6  C6 05 7E 87 80 00 00      MOV byte ptr [0x0080877e],0x0
005BB4FD  8A 43 0B                  MOV AL,byte ptr [EBX + 0xb]
005BB500  3C 01                     CMP AL,0x1
005BB502  75 0A                     JNZ 0x005bb50e
005BB504  C7 05 BE 87 80 00 00 00 00 00  MOV dword ptr [0x008087be],0x0
LAB_005bb50e:
005BB50E  6A 01                     PUSH 0x1
005BB510  8B CE                     MOV ECX,ESI
005BB512  E8 75 97 E4 FF            CALL 0x00404c8c
005BB517  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005BB51D  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005BB523  85 C9                     TEST ECX,ECX
005BB525  74 0B                     JZ 0x005bb532
LAB_005bb527:
005BB527  6A 01                     PUSH 0x1
005BB529  6A 00                     PUSH 0x0
005BB52B  6A 01                     PUSH 0x1
005BB52D  E8 73 6A E4 FF            CALL 0x00401fa5
LAB_005bb532:
005BB532  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005BB535  8B 56 61                  MOV EDX,dword ptr [ESI + 0x61]
005BB538  85 C0                     TEST EAX,EAX
005BB53A  89 96 69 1A 00 00         MOV dword ptr [ESI + 0x1a69],EDX
005BB540  0F 84 06 01 00 00         JZ 0x005bb64c
005BB546  8D 45 F4                  LEA EAX,[EBP + -0xc]
005BB549  50                        PUSH EAX
005BB54A  E8 11 FB 0E 00            CALL 0x006ab060
005BB54F  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
005BB555  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BB55B  5F                        POP EDI
005BB55C  5E                        POP ESI
005BB55D  5B                        POP EBX
005BB55E  8B E5                     MOV ESP,EBP
005BB560  5D                        POP EBP
005BB561  C3                        RET
LAB_005bb562:
005BB562  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
005BB565  8B 96 69 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a69]
005BB56B  2B CA                     SUB ECX,EDX
005BB56D  81 F9 30 75 00 00         CMP ECX,0x7530
005BB573  0F 86 D3 00 00 00         JBE 0x005bb64c
LAB_005bb579:
005BB579  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005BB57F  B9 08 00 00 00            MOV ECX,0x8
005BB584  33 C0                     XOR EAX,EAX
005BB586  8D 7D A8                  LEA EDI,[EBP + -0x58]
005BB589  F3 AB                     STOSD.REP ES:EDI
005BB58B  88 86 71 1A 00 00         MOV byte ptr [ESI + 0x1a71],AL
005BB591  C6 86 72 1A 00 00 01      MOV byte ptr [ESI + 0x1a72],0x1
005BB598  C7 45 B8 52 69 00 00      MOV dword ptr [EBP + -0x48],0x6952
005BB59F  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005BB5A5  3B C3                     CMP EAX,EBX
005BB5A7  0F 84 95 00 00 00         JZ 0x005bb642
005BB5AD  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005BB5B3  3B FB                     CMP EDI,EBX
005BB5B5  74 4C                     JZ 0x005bb603
005BB5B7  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005BB5BD  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005BB5C3  50                        PUSH EAX
005BB5C4  51                        PUSH ECX
005BB5C5  53                        PUSH EBX
005BB5C6  8B CF                     MOV ECX,EDI
005BB5C8  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005BB5CF  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005BB5D8  E8 A1 9A E4 FF            CALL 0x0040507e
005BB5DD  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005BB5E3  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005BB5E9  52                        PUSH EDX
005BB5EA  50                        PUSH EAX
005BB5EB  8B CF                     MOV ECX,EDI
005BB5ED  E8 2C 6E E4 FF            CALL 0x0040241e
005BB5F2  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005BB5F9  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005bb603:
005BB603  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005BB606  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BB60C  53                        PUSH EBX
005BB60D  53                        PUSH EBX
005BB60E  53                        PUSH EBX
005BB60F  8D 55 A8                  LEA EDX,[EBP + -0x58]
005BB612  53                        PUSH EBX
005BB613  52                        PUSH EDX
005BB614  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
005BB617  C7 45 B4 02 00 00 00      MOV dword ptr [EBP + -0x4c],0x2
005BB61E  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BB624  53                        PUSH EBX
005BB625  68 25 25 00 00            PUSH 0x2525
005BB62A  E8 79 89 E4 FF            CALL 0x00403fa8
005BB62F  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
005BB635  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BB63B  5F                        POP EDI
005BB63C  5E                        POP ESI
005BB63D  5B                        POP EBX
005BB63E  8B E5                     MOV ESP,EBP
005BB640  5D                        POP EBP
005BB641  C3                        RET
LAB_005bb642:
005BB642  8B 16                     MOV EDX,dword ptr [ESI]
005BB644  8D 45 A8                  LEA EAX,[EBP + -0x58]
005BB647  50                        PUSH EAX
005BB648  8B CE                     MOV ECX,ESI
005BB64A  FF 12                     CALL dword ptr [EDX]
switchD_005bae66::caseD_2:
005BB64C  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
005BB652  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BB658  5F                        POP EDI
005BB659  5E                        POP ESI
005BB65A  5B                        POP EBX
005BB65B  8B E5                     MOV ESP,EBP
005BB65D  5D                        POP EBP
005BB65E  C3                        RET
LAB_005bb65f:
005BB65F  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
005BB665  68 18 CE 7C 00            PUSH 0x7cce18
005BB66A  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BB66F  56                        PUSH ESI
005BB670  53                        PUSH EBX
005BB671  68 BC 01 00 00            PUSH 0x1bc
005BB676  68 28 CD 7C 00            PUSH 0x7ccd28
005BB67B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BB681  E8 4A 1E 0F 00            CALL 0x006ad4d0
005BB686  83 C4 18                  ADD ESP,0x18
005BB689  85 C0                     TEST EAX,EAX
005BB68B  74 01                     JZ 0x005bb68e
005BB68D  CC                        INT3
LAB_005bb68e:
005BB68E  68 BC 01 00 00            PUSH 0x1bc
005BB693  68 28 CD 7C 00            PUSH 0x7ccd28
005BB698  53                        PUSH EBX
005BB699  56                        PUSH ESI
005BB69A  E8 A1 A7 0E 00            CALL 0x006a5e40
005BB69F  5F                        POP EDI
005BB6A0  5E                        POP ESI
005BB6A1  5B                        POP EBX
005BB6A2  8B E5                     MOV ESP,EBP
005BB6A4  5D                        POP EBP
005BB6A5  C3                        RET
