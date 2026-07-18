FUN_00566c20:
00566C20  55                        PUSH EBP
00566C21  8B EC                     MOV EBP,ESP
00566C23  83 EC 48                  SUB ESP,0x48
00566C26  53                        PUSH EBX
00566C27  56                        PUSH ESI
00566C28  8B F1                     MOV ESI,ECX
00566C2A  57                        PUSH EDI
00566C2B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00566C2E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00566C31  E8 7A E5 17 00            CALL 0x006e51b0
00566C36  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00566C39  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00566C3E  8D 55 BC                  LEA EDX,[EBP + -0x44]
00566C41  8D 4D B8                  LEA ECX,[EBP + -0x48]
00566C44  6A 00                     PUSH 0x0
00566C46  52                        PUSH EDX
00566C47  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00566C4A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00566C50  E8 9B 6B 1C 00            CALL 0x0072d7f0
00566C55  8B F0                     MOV ESI,EAX
00566C57  83 C4 08                  ADD ESP,0x8
00566C5A  85 F6                     TEST ESI,ESI
00566C5C  0F 85 2C 01 00 00         JNZ 0x00566d8e
00566C62  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00566C65  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00566C68  2B C6                     SUB EAX,ESI
00566C6A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00566C6D  74 33                     JZ 0x00566ca2
00566C6F  83 E8 02                  SUB EAX,0x2
00566C72  74 1D                     JZ 0x00566c91
00566C74  48                        DEC EAX
00566C75  0F 85 FA 00 00 00         JNZ 0x00566d75
00566C7B  8B CE                     MOV ECX,ESI
00566C7D  C7 05 F0 33 80 00 00 00 00 00  MOV dword ptr [0x008033f0],0x0
00566C87  E8 75 CF E9 FF            CALL 0x00403c01
00566C8C  E9 E4 00 00 00            JMP 0x00566d75
LAB_00566c91:
00566C91  89 35 F0 33 80 00         MOV dword ptr [0x008033f0],ESI
00566C97  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00566C9A  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
00566C9D  E9 D3 00 00 00            JMP 0x00566d75
LAB_00566ca2:
00566CA2  8A 4E 38                  MOV CL,byte ptr [ESI + 0x38]
00566CA5  8B C1                     MOV EAX,ECX
00566CA7  25 FF 00 00 00            AND EAX,0xff
00566CAC  83 F8 03                  CMP EAX,0x3
00566CAF  0F 87 AF 00 00 00         JA 0x00566d64
switchD_00566cb5::switchD:
00566CB5  FF 24 85 DC 6D 56 00      JMP dword ptr [EAX*0x4 + 0x566ddc]
switchD_00566cb5::caseD_0:
00566CBC  80 F9 01                  CMP CL,0x1
00566CBF  74 0B                     JZ 0x00566ccc
00566CC1  C6 46 38 01               MOV byte ptr [ESI + 0x38],0x1
00566CC5  C7 46 39 FF FF FF FF      MOV dword ptr [ESI + 0x39],0xffffffff
LAB_00566ccc:
00566CCC  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00566CCF  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
00566CD2  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00566CD5  E9 8A 00 00 00            JMP 0x00566d64
switchD_00566cb5::caseD_1:
00566CDA  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00566CDD  8B D0                     MOV EDX,EAX
00566CDF  2B 56 20                  SUB EDX,dword ptr [ESI + 0x20]
00566CE2  81 FA 88 13 00 00         CMP EDX,0x1388
00566CE8  72 7A                     JC 0x00566d64
00566CEA  8B D0                     MOV EDX,EAX
00566CEC  2B 56 24                  SUB EDX,dword ptr [ESI + 0x24]
00566CEF  81 FA E8 03 00 00         CMP EDX,0x3e8
00566CF5  77 6D                     JA 0x00566d64
00566CF7  80 F9 03                  CMP CL,0x3
00566CFA  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
00566CFD  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00566D00  74 62                     JZ 0x00566d64
00566D02  EB 55                     JMP 0x00566d59
switchD_00566cb5::caseD_3:
00566D04  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00566D07  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
00566D0A  8B D0                     MOV EDX,EAX
00566D0C  2B D3                     SUB EDX,EBX
00566D0E  81 FA 98 3A 00 00         CMP EDX,0x3a98
00566D14  72 4E                     JC 0x00566d64
00566D16  EB 1D                     JMP 0x00566d35
switchD_00566cb5::caseD_2:
00566D18  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00566D1B  8B D0                     MOV EDX,EAX
00566D1D  2B 56 20                  SUB EDX,dword ptr [ESI + 0x20]
00566D20  81 FA 88 13 00 00         CMP EDX,0x1388
00566D26  72 3C                     JC 0x00566d64
00566D28  8B D0                     MOV EDX,EAX
00566D2A  2B 56 24                  SUB EDX,dword ptr [ESI + 0x24]
00566D2D  81 FA 20 4E 00 00         CMP EDX,0x4e20
00566D33  72 11                     JC 0x00566d46
LAB_00566d35:
00566D35  80 F9 01                  CMP CL,0x1
00566D38  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
00566D3B  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00566D3E  74 24                     JZ 0x00566d64
00566D40  C6 46 38 01               MOV byte ptr [ESI + 0x38],0x1
00566D44  EB 17                     JMP 0x00566d5d
LAB_00566d46:
00566D46  81 FA E8 03 00 00         CMP EDX,0x3e8
00566D4C  77 16                     JA 0x00566d64
00566D4E  80 F9 03                  CMP CL,0x3
00566D51  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
00566D54  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00566D57  74 0B                     JZ 0x00566d64
LAB_00566d59:
00566D59  C6 46 38 03               MOV byte ptr [ESI + 0x38],0x3
LAB_00566d5d:
00566D5D  C7 46 39 FF FF FF FF      MOV dword ptr [ESI + 0x39],0xffffffff
switchD_00566cb5::default:
00566D64  8B CE                     MOV ECX,ESI
00566D66  E8 9E A8 E9 FF            CALL 0x00401609
00566D6B  B9 58 76 80 00            MOV ECX,0x807658
00566D70  E8 DE A4 E9 FF            CALL 0x00401253
LAB_00566d75:
00566D75  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00566D78  57                        PUSH EDI
00566D79  8B CE                     MOV ECX,ESI
00566D7B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00566D80  E8 4B F2 17 00            CALL 0x006e5fd0
00566D85  5F                        POP EDI
00566D86  5E                        POP ESI
00566D87  5B                        POP EBX
00566D88  8B E5                     MOV ESP,EBP
00566D8A  5D                        POP EBP
00566D8B  C2 04 00                  RET 0x4
LAB_00566d8e:
00566D8E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00566D91  68 68 97 7C 00            PUSH 0x7c9768
00566D96  68 CC 4C 7A 00            PUSH 0x7a4ccc
00566D9B  56                        PUSH ESI
00566D9C  6A 00                     PUSH 0x0
00566D9E  68 DC 00 00 00            PUSH 0xdc
00566DA3  68 48 97 7C 00            PUSH 0x7c9748
00566DA8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00566DAE  E8 1D 67 14 00            CALL 0x006ad4d0
00566DB3  83 C4 18                  ADD ESP,0x18
00566DB6  85 C0                     TEST EAX,EAX
00566DB8  74 01                     JZ 0x00566dbb
00566DBA  CC                        INT3
LAB_00566dbb:
00566DBB  68 DC 00 00 00            PUSH 0xdc
00566DC0  68 48 97 7C 00            PUSH 0x7c9748
00566DC5  6A 00                     PUSH 0x0
00566DC7  56                        PUSH ESI
00566DC8  E8 73 F0 13 00            CALL 0x006a5e40
00566DCD  5F                        POP EDI
00566DCE  5E                        POP ESI
00566DCF  B8 FF FF 00 00            MOV EAX,0xffff
00566DD4  5B                        POP EBX
00566DD5  8B E5                     MOV ESP,EBP
00566DD7  5D                        POP EBP
00566DD8  C2 04 00                  RET 0x4
