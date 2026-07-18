FUN_00558c00:
00558C00  55                        PUSH EBP
00558C01  8B EC                     MOV EBP,ESP
00558C03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00558C06  56                        PUSH ESI
00558C07  83 F8 03                  CMP EAX,0x3
00558C0A  57                        PUSH EDI
00558C0B  0F 87 33 01 00 00         JA 0x00558d44
switchD_00558c11::switchD:
00558C11  FF 24 85 4C 8D 55 00      JMP dword ptr [EAX*0x4 + 0x558d4c]
switchD_00558c11::caseD_0:
00558C18  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00558C1B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00558C1E  8B C6                     MOV EAX,ESI
00558C20  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
00558C23  2B C7                     SUB EAX,EDI
00558C25  C1 E1 0F                  SHL ECX,0xf
00558C28  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00558C2B  C1 E2 04                  SHL EDX,0x4
00558C2E  2B D0                     SUB EDX,EAX
00558C30  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
00558C33  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00558C36  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00558C39  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00558C3C  03 C1                     ADD EAX,ECX
00558C3E  8D 0C 3E                  LEA ECX,[ESI + EDI*0x1]
00558C41  C1 F8 10                  SAR EAX,0x10
00558C44  89 02                     MOV dword ptr [EDX],EAX
00558C46  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
00558C49  C1 E0 04                  SHL EAX,0x4
00558C4C  2B C1                     SUB EAX,ECX
00558C4E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00558C51  5F                        POP EDI
00558C52  5E                        POP ESI
00558C53  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00558C56  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
00558C59  8D 8C C0 3C FC 08 00      LEA ECX,[EAX + EAX*0x8 + 0x8fc3c]
00558C60  C1 F9 10                  SAR ECX,0x10
00558C63  89 0A                     MOV dword ptr [EDX],ECX
00558C65  5D                        POP EBP
00558C66  C2 14 00                  RET 0x14
switchD_00558c11::caseD_1:
00558C69  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00558C6C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00558C6F  8D 14 37                  LEA EDX,[EDI + ESI*0x1]
00558C72  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
00558C75  C1 E0 04                  SHL EAX,0x4
00558C78  2B C2                     SUB EAX,EDX
00558C7A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00558C7D  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
00558C80  8D 94 C0 3C FC 08 00      LEA EDX,[EAX + EAX*0x8 + 0x8fc3c]
00558C87  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00558C8A  C1 FA 10                  SAR EDX,0x10
00558C8D  89 10                     MOV dword ptr [EAX],EDX
00558C8F  E9 8B 00 00 00            JMP 0x00558d1f
switchD_00558c11::caseD_2:
00558C94  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00558C97  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00558C9A  8B C6                     MOV EAX,ESI
00558C9C  2B C7                     SUB EAX,EDI
00558C9E  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00558CA1  C1 E2 04                  SHL EDX,0x4
00558CA4  2B D0                     SUB EDX,EAX
00558CA6  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
00558CA9  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00558CAC  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
00558CAF  C1 E2 0F                  SHL EDX,0xf
00558CB2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00558CB5  03 C2                     ADD EAX,EDX
00558CB7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00558CBA  C1 F8 10                  SAR EAX,0x10
00558CBD  89 02                     MOV dword ptr [EDX],EAX
00558CBF  8D 14 37                  LEA EDX,[EDI + ESI*0x1]
00558CC2  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
00558CC5  5F                        POP EDI
00558CC6  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
00558CC9  5E                        POP ESI
00558CCA  C1 E0 04                  SHL EAX,0x4
00558CCD  2B C2                     SUB EAX,EDX
00558CCF  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00558CD2  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
00558CD5  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00558CD8  B8 C4 03 F7 FF            MOV EAX,0xfff703c4
00558CDD  2B C2                     SUB EAX,EDX
00558CDF  C1 F8 10                  SAR EAX,0x10
00558CE2  8D 54 08 FF               LEA EDX,[EAX + ECX*0x1 + -0x1]
00558CE6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00558CE9  89 10                     MOV dword ptr [EAX],EDX
00558CEB  5D                        POP EBP
00558CEC  C2 14 00                  RET 0x14
switchD_00558c11::caseD_3:
00558CEF  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00558CF2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00558CF5  8D 14 3E                  LEA EDX,[ESI + EDI*0x1]
00558CF8  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
00558CFB  C1 E0 04                  SHL EAX,0x4
00558CFE  2B C2                     SUB EAX,EDX
00558D00  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00558D03  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
00558D06  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00558D09  B8 C4 03 F7 FF            MOV EAX,0xfff703c4
00558D0E  2B C2                     SUB EAX,EDX
00558D10  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
00558D13  C1 F8 10                  SAR EAX,0x10
00558D16  8D 44 10 FF               LEA EAX,[EAX + EDX*0x1 + -0x1]
00558D1A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00558D1D  89 02                     MOV dword ptr [EDX],EAX
LAB_00558d1f:
00558D1F  2B F7                     SUB ESI,EDI
00558D21  8B D6                     MOV EDX,ESI
00558D23  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
00558D26  C1 E0 04                  SHL EAX,0x4
00558D29  2B C2                     SUB EAX,EDX
00558D2B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00558D2E  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
00558D31  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00558D34  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
00558D37  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00558D3A  C1 E0 0F                  SHL EAX,0xf
00558D3D  03 D0                     ADD EDX,EAX
00558D3F  C1 FA 10                  SAR EDX,0x10
00558D42  89 11                     MOV dword ptr [ECX],EDX
switchD_00558c11::default:
00558D44  5F                        POP EDI
00558D45  5E                        POP ESI
00558D46  5D                        POP EBP
00558D47  C2 14 00                  RET 0x14
