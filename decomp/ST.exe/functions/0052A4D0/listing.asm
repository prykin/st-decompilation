FUN_0052a4d0:
0052A4D0  55                        PUSH EBP
0052A4D1  8B EC                     MOV EBP,ESP
0052A4D3  51                        PUSH ECX
0052A4D4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052A4D7  32 C9                     XOR CL,CL
0052A4D9  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052A4DC  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0052A4DF  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0052A4E2  83 F8 03                  CMP EAX,0x3
0052A4E5  77 1A                     JA 0x0052a501
switchD_0052a4e7::switchD:
0052A4E7  FF 24 85 10 A5 52 00      JMP dword ptr [EAX*0x4 + 0x52a510]
switchD_0052a4e7::caseD_0:
0052A4EE  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
0052A4F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A4F5  25 FF 00 00 00            AND EAX,0xff
0052A4FA  8B E5                     MOV ESP,EBP
0052A4FC  5D                        POP EBP
0052A4FD  C3                        RET
switchD_0052a4e7::caseD_1:
0052A4FE  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
switchD_0052a4e7::default:
0052A501  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A504  25 FF 00 00 00            AND EAX,0xff
0052A509  8B E5                     MOV ESP,EBP
0052A50B  5D                        POP EBP
0052A50C  C3                        RET
