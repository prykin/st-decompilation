FUN_0052a5c0:
0052A5C0  55                        PUSH EBP
0052A5C1  8B EC                     MOV EBP,ESP
0052A5C3  51                        PUSH ECX
0052A5C4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052A5C7  B1 07                     MOV CL,0x7
0052A5C9  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052A5CC  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0052A5CF  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0052A5D2  83 F8 03                  CMP EAX,0x3
0052A5D5  77 2A                     JA 0x0052a601
switchD_0052a5d7::switchD:
0052A5D7  FF 24 85 10 A6 52 00      JMP dword ptr [EAX*0x4 + 0x52a610]
switchD_0052a5d7::caseD_0:
0052A5DE  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052A5E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A5E4  25 FF 00 00 00            AND EAX,0xff
0052A5E9  8B E5                     MOV ESP,EBP
0052A5EB  5D                        POP EBP
0052A5EC  C3                        RET
switchD_0052a5d7::caseD_2:
0052A5ED  C6 45 FC 09               MOV byte ptr [EBP + -0x4],0x9
0052A5F1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A5F4  25 FF 00 00 00            AND EAX,0xff
0052A5F9  8B E5                     MOV ESP,EBP
0052A5FB  5D                        POP EBP
0052A5FC  C3                        RET
switchD_0052a5d7::caseD_1:
0052A5FD  C6 45 FC 08               MOV byte ptr [EBP + -0x4],0x8
switchD_0052a5d7::default:
0052A601  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A604  25 FF 00 00 00            AND EAX,0xff
0052A609  8B E5                     MOV ESP,EBP
0052A60B  5D                        POP EBP
0052A60C  C3                        RET
