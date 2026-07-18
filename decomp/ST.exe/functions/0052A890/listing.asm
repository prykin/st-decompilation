FUN_0052a890:
0052A890  55                        PUSH EBP
0052A891  8B EC                     MOV EBP,ESP
0052A893  51                        PUSH ECX
0052A894  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052A897  33 D2                     XOR EDX,EDX
0052A899  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0052A89D  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0052A8A0  8B 08                     MOV ECX,dword ptr [EAX]
0052A8A2  49                        DEC ECX
0052A8A3  83 F9 03                  CMP ECX,0x3
0052A8A6  77 1E                     JA 0x0052a8c6
switchD_0052a8a8::switchD:
0052A8A8  FF 24 8D 14 A9 52 00      JMP dword ptr [ECX*0x4 + 0x52a914]
switchD_0052a8a8::caseD_1:
0052A8AF  33 D2                     XOR EDX,EDX
0052A8B1  EB 13                     JMP 0x0052a8c6
switchD_0052a8a8::caseD_2:
0052A8B3  BA 02 00 00 00            MOV EDX,0x2
0052A8B8  EB 0C                     JMP 0x0052a8c6
switchD_0052a8a8::caseD_3:
0052A8BA  BA 04 00 00 00            MOV EDX,0x4
0052A8BF  EB 05                     JMP 0x0052a8c6
switchD_0052a8a8::caseD_4:
0052A8C1  BA 06 00 00 00            MOV EDX,0x6
switchD_0052a8a8::default:
0052A8C6  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0052A8C9  83 F9 03                  CMP ECX,0x3
0052A8CC  77 36                     JA 0x0052a904
switchD_0052a8ce::switchD:
0052A8CE  FF 24 8D 24 A9 52 00      JMP dword ptr [ECX*0x4 + 0x52a924]
switchD_0052a8ce::caseD_0:
0052A8D5  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0052A8D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A8DC  25 FF 00 00 00            AND EAX,0xff
0052A8E1  03 C2                     ADD EAX,EDX
0052A8E3  8B E5                     MOV ESP,EBP
0052A8E5  5D                        POP EBP
0052A8E6  C3                        RET
switchD_0052a8ce::caseD_1:
0052A8E7  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
0052A8EB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A8EE  25 FF 00 00 00            AND EAX,0xff
0052A8F3  03 C2                     ADD EAX,EDX
0052A8F5  8B E5                     MOV ESP,EBP
0052A8F7  5D                        POP EBP
0052A8F8  C3                        RET
switchD_0052a8ce::caseD_3:
0052A8F9  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0052A8FC  85 C9                     TEST ECX,ECX
0052A8FE  0F 95 C1                  SETNZ CL
0052A901  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
switchD_0052a8ce::default:
0052A904  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A907  25 FF 00 00 00            AND EAX,0xff
0052A90C  03 C2                     ADD EAX,EDX
0052A90E  8B E5                     MOV ESP,EBP
0052A910  5D                        POP EBP
0052A911  C3                        RET
