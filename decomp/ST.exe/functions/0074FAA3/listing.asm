FUN_0074faa3:
0074FAA3  55                        PUSH EBP
0074FAA4  8B EC                     MOV EBP,ESP
0074FAA6  83 EC 0C                  SUB ESP,0xc
0074FAA9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074FAAC  53                        PUSH EBX
0074FAAD  56                        PUSH ESI
0074FAAE  57                        PUSH EDI
0074FAAF  8B F9                     MOV EDI,ECX
0074FAB1  33 F6                     XOR ESI,ESI
0074FAB3  3B C6                     CMP EAX,ESI
0074FAB5  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0074FAB8  89 77 0C                  MOV dword ptr [EDI + 0xc],ESI
0074FABB  89 77 04                  MOV dword ptr [EDI + 0x4],ESI
0074FABE  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0074FAC1  0F 84 E4 00 00 00         JZ 0x0074fbab
0074FAC7  C1 E0 04                  SHL EAX,0x4
0074FACA  50                        PUSH EAX
0074FACB  E8 60 EA FD FF            CALL 0x0072e530
0074FAD0  39 77 08                  CMP dword ptr [EDI + 0x8],ESI
0074FAD3  59                        POP ECX
0074FAD4  89 07                     MOV dword ptr [EDI],EAX
0074FAD6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0074FAD9  0F 86 CE 00 00 00         JBE 0x0074fbad
0074FADF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074FAE2  C7 45 08 F8 FF FF FF      MOV dword ptr [EBP + 0x8],0xfffffff8
0074FAE9  29 45 08                  SUB dword ptr [EBP + 0x8],EAX
0074FAEC  8D 70 08                  LEA ESI,[EAX + 0x8]
0074FAEF  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
LAB_0074faf2:
0074FAF2  8B 1F                     MOV EBX,dword ptr [EDI]
0074FAF4  66 8B 46 F8               MOV AX,word ptr [ESI + -0x8]
0074FAF8  03 5D 08                  ADD EBX,dword ptr [EBP + 0x8]
0074FAFB  03 DE                     ADD EBX,ESI
0074FAFD  66 89 03                  MOV word ptr [EBX],AX
0074FB00  0F B7 C0                  MOVZX EAX,AX
0074FB03  83 C0 FE                  ADD EAX,-0x2
0074FB06  83 F8 0F                  CMP EAX,0xf
0074FB09  0F 87 85 00 00 00         JA 0x0074fb94
switchD_0074fb0f::switchD:
0074FB0F  FF 24 85 B6 FB 74 00      JMP dword ptr [EAX*0x4 + 0x74fbb6]
switchD_0074fb0f::caseD_11:
0074FB16  8A 06                     MOV AL,byte ptr [ESI]
0074FB18  88 43 08                  MOV byte ptr [EBX + 0x8],AL
0074FB1B  EB 77                     JMP 0x0074fb94
switchD_0074fb0f::caseD_2:
0074FB1D  66 8B 06                  MOV AX,word ptr [ESI]
0074FB20  66 89 43 08               MOV word ptr [EBX + 0x8],AX
0074FB24  EB 6E                     JMP 0x0074fb94
switchD_0074fb0f::caseD_6:
0074FB26  8B 06                     MOV EAX,dword ptr [ESI]
0074FB28  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
0074FB2B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0074FB2E  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
0074FB31  EB 61                     JMP 0x0074fb94
switchD_0074fb0f::caseD_5:
0074FB33  DD 06                     FLD double ptr [ESI]
0074FB35  DD 5B 08                  FSTP double ptr [EBX + 0x8]
0074FB38  EB 5A                     JMP 0x0074fb94
switchD_0074fb0f::caseD_8:
0074FB3A  8B 06                     MOV EAX,dword ptr [ESI]
0074FB3C  85 C0                     TEST EAX,EAX
0074FB3E  75 05                     JNZ 0x0074fb45
0074FB40  21 43 08                  AND dword ptr [EBX + 0x8],EAX
0074FB43  EB 3D                     JMP 0x0074fb82
LAB_0074fb45:
0074FB45  66 8B 40 FE               MOV AX,word ptr [EAX + -0x2]
0074FB49  0F B7 F8                  MOVZX EDI,AX
0074FB4C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074FB4F  8D 44 3F 02               LEA EAX,[EDI + EDI*0x1 + 0x2]
0074FB53  50                        PUSH EAX
0074FB54  E8 D7 E9 FD FF            CALL 0x0072e530
0074FB59  59                        POP ECX
0074FB5A  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
0074FB5E  66 89 08                  MOV word ptr [EAX],CX
0074FB61  83 C0 02                  ADD EAX,0x2
0074FB64  8D 0C 3F                  LEA ECX,[EDI + EDI*0x1]
0074FB67  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
0074FB6A  8B 36                     MOV ESI,dword ptr [ESI]
0074FB6C  8B F8                     MOV EDI,EAX
0074FB6E  8B C1                     MOV EAX,ECX
0074FB70  C1 E9 02                  SHR ECX,0x2
0074FB73  F3 A5                     MOVSD.REP ES:EDI,ESI
0074FB75  8B C8                     MOV ECX,EAX
0074FB77  83 E1 03                  AND ECX,0x3
0074FB7A  F3 A4                     MOVSB.REP ES:EDI,ESI
0074FB7C  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0074FB7F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
switchD_0074fb0f::caseD_3:
0074FB82  8B 06                     MOV EAX,dword ptr [ESI]
0074FB84  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
0074FB87  EB 0B                     JMP 0x0074fb94
switchD_0074fb0f::caseD_9:
0074FB89  8B 06                     MOV EAX,dword ptr [ESI]
0074FB8B  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
0074FB8E  50                        PUSH EAX
0074FB8F  8B 08                     MOV ECX,dword ptr [EAX]
0074FB91  FF 51 04                  CALL dword ptr [ECX + 0x4]
switchD_0074fb0f::caseD_c:
0074FB94  FF 45 FC                  INC dword ptr [EBP + -0x4]
0074FB97  83 C6 10                  ADD ESI,0x10
0074FB9A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074FB9D  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0074FBA0  3B 47 08                  CMP EAX,dword ptr [EDI + 0x8]
0074FBA3  0F 82 49 FF FF FF         JC 0x0074faf2
0074FBA9  EB 02                     JMP 0x0074fbad
LAB_0074fbab:
0074FBAB  89 37                     MOV dword ptr [EDI],ESI
LAB_0074fbad:
0074FBAD  8B C7                     MOV EAX,EDI
0074FBAF  5F                        POP EDI
0074FBB0  5E                        POP ESI
0074FBB1  5B                        POP EBX
0074FBB2  C9                        LEAVE
0074FBB3  C2 08 00                  RET 0x8
