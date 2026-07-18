FUN_00715ab0:
00715AB0  55                        PUSH EBP
00715AB1  8B EC                     MOV EBP,ESP
00715AB3  83 EC 48                  SUB ESP,0x48
00715AB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00715ABB  53                        PUSH EBX
00715ABC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00715ABF  33 DB                     XOR EBX,EBX
00715AC1  56                        PUSH ESI
00715AC2  8D 55 BC                  LEA EDX,[EBP + -0x44]
00715AC5  8D 4D B8                  LEA ECX,[EBP + -0x48]
00715AC8  53                        PUSH EBX
00715AC9  52                        PUSH EDX
00715ACA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00715ACD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715AD3  E8 18 7D 01 00            CALL 0x0072d7f0
00715AD8  8B F0                     MOV ESI,EAX
00715ADA  83 C4 08                  ADD ESP,0x8
00715ADD  3B F3                     CMP ESI,EBX
00715ADF  0F 85 A6 00 00 00         JNZ 0x00715b8b
00715AE5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00715AE8  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
00715AEB  3B C3                     CMP EAX,EBX
00715AED  74 0F                     JZ 0x00715afe
00715AEF  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00715AF2  83 F9 FF                  CMP ECX,-0x1
00715AF5  74 07                     JZ 0x00715afe
00715AF7  51                        PUSH ECX
00715AF8  50                        PUSH EAX
00715AF9  E8 B2 E0 F9 FF            CALL 0x006b3bb0
LAB_00715afe:
00715AFE  39 5E 61                  CMP dword ptr [ESI + 0x61],EBX
00715B01  75 5B                     JNZ 0x00715b5e
00715B03  33 C0                     XOR EAX,EAX
00715B05  8A 46 4C                  MOV AL,byte ptr [ESI + 0x4c]
00715B08  83 C0 F9                  ADD EAX,-0x7
00715B0B  83 F8 7A                  CMP EAX,0x7a
00715B0E  77 57                     JA 0x00715b67
00715B10  33 C9                     XOR ECX,ECX
00715B12  8A 88 DC 5B 71 00         MOV CL,byte ptr [EAX + 0x715bdc]
switchD_00715b18::switchD:
00715B18  FF 24 8D CC 5B 71 00      JMP dword ptr [ECX*0x4 + 0x715bcc]
switchD_00715b18::caseD_7:
00715B1F  8B 4E 51                  MOV ECX,dword ptr [ESI + 0x51]
00715B22  8D 46 51                  LEA EAX,[ESI + 0x51]
00715B25  3B CB                     CMP ECX,EBX
00715B27  74 3E                     JZ 0x00715b67
00715B29  50                        PUSH EAX
00715B2A  E8 01 03 01 00            CALL 0x00725e30
00715B2F  83 C4 04                  ADD ESP,0x4
00715B32  EB 33                     JMP 0x00715b67
switchD_00715b18::caseD_8:
00715B34  8B 4E 59                  MOV ECX,dword ptr [ESI + 0x59]
00715B37  8D 46 59                  LEA EAX,[ESI + 0x59]
00715B3A  3B CB                     CMP ECX,EBX
00715B3C  74 29                     JZ 0x00715b67
00715B3E  50                        PUSH EAX
00715B3F  E8 1C 07 01 00            CALL 0x00726260
00715B44  83 C4 04                  ADD ESP,0x4
00715B47  EB 1E                     JMP 0x00715b67
switchD_00715b18::caseD_1e:
00715B49  8B 4E 55                  MOV ECX,dword ptr [ESI + 0x55]
00715B4C  8D 46 55                  LEA EAX,[ESI + 0x55]
00715B4F  3B CB                     CMP ECX,EBX
00715B51  74 14                     JZ 0x00715b67
00715B53  50                        PUSH EAX
00715B54  E8 77 10 01 00            CALL 0x00726bd0
00715B59  83 C4 04                  ADD ESP,0x4
00715B5C  EB 09                     JMP 0x00715b67
LAB_00715b5e:
00715B5E  89 5E 51                  MOV dword ptr [ESI + 0x51],EBX
00715B61  89 5E 55                  MOV dword ptr [ESI + 0x55],EBX
00715B64  89 5E 59                  MOV dword ptr [ESI + 0x59],EBX
switchD_00715b18::caseD_9:
00715B67  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00715B6A  89 5E 61                  MOV dword ptr [ESI + 0x61],EBX
00715B6D  C7 46 04 FF FF FF FF      MOV dword ptr [ESI + 0x4],0xffffffff
00715B74  89 5E 48                  MOV dword ptr [ESI + 0x48],EBX
00715B77  89 5E 4D                  MOV dword ptr [ESI + 0x4d],EBX
00715B7A  88 5E 65                  MOV byte ptr [ESI + 0x65],BL
00715B7D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00715B83  33 C0                     XOR EAX,EAX
00715B85  5E                        POP ESI
00715B86  5B                        POP EBX
00715B87  8B E5                     MOV ESP,EBP
00715B89  5D                        POP EBP
00715B8A  C3                        RET
LAB_00715b8b:
00715B8B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00715B8E  68 88 04 7F 00            PUSH 0x7f0488
00715B93  68 CC 4C 7A 00            PUSH 0x7a4ccc
00715B98  56                        PUSH ESI
00715B99  53                        PUSH EBX
00715B9A  6A 76                     PUSH 0x76
00715B9C  68 54 04 7F 00            PUSH 0x7f0454
00715BA1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00715BA6  E8 25 79 F9 FF            CALL 0x006ad4d0
00715BAB  83 C4 18                  ADD ESP,0x18
00715BAE  85 C0                     TEST EAX,EAX
00715BB0  74 01                     JZ 0x00715bb3
00715BB2  CC                        INT3
LAB_00715bb3:
00715BB3  6A 78                     PUSH 0x78
00715BB5  68 54 04 7F 00            PUSH 0x7f0454
00715BBA  53                        PUSH EBX
00715BBB  56                        PUSH ESI
00715BBC  E8 7F 02 F9 FF            CALL 0x006a5e40
00715BC1  5E                        POP ESI
00715BC2  B8 18 FC FF FF            MOV EAX,0xfffffc18
00715BC7  5B                        POP EBX
00715BC8  8B E5                     MOV ESP,EBP
00715BCA  5D                        POP EBP
00715BCB  C3                        RET
