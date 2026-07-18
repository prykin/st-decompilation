FUN_004b6e30:
004B6E30  55                        PUSH EBP
004B6E31  8B EC                     MOV EBP,ESP
004B6E33  51                        PUSH ECX
004B6E34  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B6E37  56                        PUSH ESI
004B6E38  83 F8 05                  CMP EAX,0x5
004B6E3B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004B6E3E  77 2E                     JA 0x004b6e6e
switchD_004b6e40::switchD:
004B6E40  FF 24 85 4C 6F 4B 00      JMP dword ptr [EAX*0x4 + 0x4b6f4c]
switchD_004b6e40::caseD_0:
004B6E47  33 F6                     XOR ESI,ESI
004B6E49  EB 26                     JMP 0x004b6e71
switchD_004b6e40::caseD_1:
004B6E4B  BE 01 00 00 00            MOV ESI,0x1
004B6E50  EB 1F                     JMP 0x004b6e71
switchD_004b6e40::caseD_2:
004B6E52  BE 02 00 00 00            MOV ESI,0x2
004B6E57  EB 18                     JMP 0x004b6e71
switchD_004b6e40::caseD_3:
004B6E59  BE 03 00 00 00            MOV ESI,0x3
004B6E5E  EB 11                     JMP 0x004b6e71
switchD_004b6e40::caseD_4:
004B6E60  BE 04 00 00 00            MOV ESI,0x4
004B6E65  EB 0A                     JMP 0x004b6e71
switchD_004b6e40::caseD_5:
004B6E67  BE 05 00 00 00            MOV ESI,0x5
004B6E6C  EB 03                     JMP 0x004b6e71
switchD_004b6e40::default:
004B6E6E  83 CE FF                  OR ESI,0xffffffff
LAB_004b6e71:
004B6E71  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
004B6E75  0F 85 C5 00 00 00         JNZ 0x004b6f40
004B6E7B  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004B6E7E  53                        PUSH EBX
004B6E7F  8D 1C B5 00 00 00 00      LEA EBX,[ESI*0x4 + 0x0]
004B6E86  57                        PUSH EDI
004B6E87  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B6E8A  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004B6E8D  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004B6E90  C1 E2 04                  SHL EDX,0x4
004B6E93  03 D0                     ADD EDX,EAX
004B6E95  D1 E2                     SHL EDX,0x1
004B6E97  8B 84 13 9A 57 7F 00      MOV EAX,dword ptr [EBX + EDX*0x1 + 0x7f579a]
004B6E9E  85 C0                     TEST EAX,EAX
004B6EA0  74 55                     JZ 0x004b6ef7
004B6EA2  33 F6                     XOR ESI,ESI
LAB_004b6ea4:
004B6EA4  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
004B6EA7  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
004B6EAA  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
004B6EAD  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004B6EB0  C1 E0 04                  SHL EAX,0x4
004B6EB3  03 C2                     ADD EAX,EDX
004B6EB5  D1 E0                     SHL EAX,0x1
004B6EB7  8B 94 06 9A 57 7F 00      MOV EDX,dword ptr [ESI + EAX*0x1 + 0x7f579a]
004B6EBE  8B BC 03 9A 57 7F 00      MOV EDI,dword ptr [EBX + EAX*0x1 + 0x7f579a]
004B6EC5  3B D7                     CMP EDX,EDI
004B6EC7  7E 08                     JLE 0x004b6ed1
004B6EC9  4A                        DEC EDX
004B6ECA  89 94 06 9A 57 7F 00      MOV dword ptr [ESI + EAX*0x1 + 0x7f579a],EDX
LAB_004b6ed1:
004B6ED1  83 C6 04                  ADD ESI,0x4
004B6ED4  83 FE 18                  CMP ESI,0x18
004B6ED7  7C CB                     JL 0x004b6ea4
004B6ED9  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004B6EDC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B6EDF  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004B6EE2  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004B6EE5  C1 E2 04                  SHL EDX,0x4
004B6EE8  03 D0                     ADD EDX,EAX
004B6EEA  C7 84 53 9A 57 7F 00 00 00 00 00  MOV dword ptr [EBX + EDX*0x2 + 0x7f579a],0x0
004B6EF5  EB 2F                     JMP 0x004b6f26
LAB_004b6ef7:
004B6EF7  33 C0                     XOR EAX,EAX
004B6EF9  8D B2 9A 57 7F 00         LEA ESI,[EDX + 0x7f579a]
004B6EFF  B9 06 00 00 00            MOV ECX,0x6
LAB_004b6f04:
004B6F04  8B 3E                     MOV EDI,dword ptr [ESI]
004B6F06  3B F8                     CMP EDI,EAX
004B6F08  7E 02                     JLE 0x004b6f0c
004B6F0A  8B C7                     MOV EAX,EDI
LAB_004b6f0c:
004B6F0C  83 C6 04                  ADD ESI,0x4
004B6F0F  49                        DEC ECX
004B6F10  75 F2                     JNZ 0x004b6f04
004B6F12  85 C0                     TEST EAX,EAX
004B6F14  7C 0D                     JL 0x004b6f23
004B6F16  83 F8 06                  CMP EAX,0x6
004B6F19  7D 08                     JGE 0x004b6f23
004B6F1B  40                        INC EAX
004B6F1C  89 84 13 9A 57 7F 00      MOV dword ptr [EBX + EDX*0x1 + 0x7f579a],EAX
LAB_004b6f23:
004B6F23  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_004b6f26:
004B6F26  8A 41 24                  MOV AL,byte ptr [ECX + 0x24]
004B6F29  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B6F2F  50                        PUSH EAX
004B6F30  E8 5E A9 F4 FF            CALL 0x00401893
004B6F35  5F                        POP EDI
004B6F36  5B                        POP EBX
004B6F37  33 C0                     XOR EAX,EAX
004B6F39  5E                        POP ESI
004B6F3A  8B E5                     MOV ESP,EBP
004B6F3C  5D                        POP EBP
004B6F3D  C2 08 00                  RET 0x8
LAB_004b6f40:
004B6F40  33 C0                     XOR EAX,EAX
004B6F42  5E                        POP ESI
004B6F43  8B E5                     MOV ESP,EBP
004B6F45  5D                        POP EBP
004B6F46  C2 08 00                  RET 0x8
