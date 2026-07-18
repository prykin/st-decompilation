FUN_0052a7b0:
0052A7B0  55                        PUSH EBP
0052A7B1  8B EC                     MOV EBP,ESP
0052A7B3  51                        PUSH ECX
0052A7B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052A7B7  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0052A7BB  BA 08 00 00 00            MOV EDX,0x8
0052A7C0  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052A7C3  8B 01                     MOV EAX,dword ptr [ECX]
0052A7C5  48                        DEC EAX
0052A7C6  83 F8 04                  CMP EAX,0x4
0052A7C9  77 25                     JA 0x0052a7f0
switchD_0052a7cb::switchD:
0052A7CB  FF 24 85 3C A8 52 00      JMP dword ptr [EAX*0x4 + 0x52a83c]
switchD_0052a7cb::caseD_1:
0052A7D2  33 D2                     XOR EDX,EDX
0052A7D4  EB 1A                     JMP 0x0052a7f0
switchD_0052a7cb::caseD_2:
0052A7D6  BA 02 00 00 00            MOV EDX,0x2
0052A7DB  EB 13                     JMP 0x0052a7f0
switchD_0052a7cb::caseD_3:
0052A7DD  BA 04 00 00 00            MOV EDX,0x4
0052A7E2  EB 0C                     JMP 0x0052a7f0
switchD_0052a7cb::caseD_4:
0052A7E4  BA 0E 00 00 00            MOV EDX,0xe
0052A7E9  EB 05                     JMP 0x0052a7f0
switchD_0052a7cb::caseD_5:
0052A7EB  BA 06 00 00 00            MOV EDX,0x6
switchD_0052a7cb::default:
0052A7F0  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0052A7F3  83 F8 03                  CMP EAX,0x3
0052A7F6  77 36                     JA 0x0052a82e
switchD_0052a7f8::switchD:
0052A7F8  FF 24 85 50 A8 52 00      JMP dword ptr [EAX*0x4 + 0x52a850]
switchD_0052a7f8::caseD_0:
0052A7FF  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0052A803  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A806  25 FF 00 00 00            AND EAX,0xff
0052A80B  03 C2                     ADD EAX,EDX
0052A80D  8B E5                     MOV ESP,EBP
0052A80F  5D                        POP EBP
0052A810  C3                        RET
switchD_0052a7f8::caseD_1:
0052A811  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
0052A815  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A818  25 FF 00 00 00            AND EAX,0xff
0052A81D  03 C2                     ADD EAX,EDX
0052A81F  8B E5                     MOV ESP,EBP
0052A821  5D                        POP EBP
0052A822  C3                        RET
switchD_0052a7f8::caseD_3:
0052A823  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0052A826  85 C0                     TEST EAX,EAX
0052A828  0F 95 C1                  SETNZ CL
0052A82B  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
switchD_0052a7f8::default:
0052A82E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A831  25 FF 00 00 00            AND EAX,0xff
0052A836  03 C2                     ADD EAX,EDX
0052A838  8B E5                     MOV ESP,EBP
0052A83A  5D                        POP EBP
0052A83B  C3                        RET
