FUN_0052a540:
0052A540  55                        PUSH EBP
0052A541  8B EC                     MOV EBP,ESP
0052A543  51                        PUSH ECX
0052A544  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052A547  32 C9                     XOR CL,CL
0052A549  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052A54C  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0052A54F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0052A552  83 F8 03                  CMP EAX,0x3
0052A555  77 2A                     JA 0x0052a581
switchD_0052a557::switchD:
0052A557  FF 24 85 90 A5 52 00      JMP dword ptr [EAX*0x4 + 0x52a590]
switchD_0052a557::caseD_0:
0052A55E  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052A561  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A564  25 FF 00 00 00            AND EAX,0xff
0052A569  8B E5                     MOV ESP,EBP
0052A56B  5D                        POP EBP
0052A56C  C3                        RET
switchD_0052a557::caseD_2:
0052A56D  C6 45 FC 02               MOV byte ptr [EBP + -0x4],0x2
0052A571  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A574  25 FF 00 00 00            AND EAX,0xff
0052A579  8B E5                     MOV ESP,EBP
0052A57B  5D                        POP EBP
0052A57C  C3                        RET
switchD_0052a557::caseD_1:
0052A57D  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
switchD_0052a557::default:
0052A581  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A584  25 FF 00 00 00            AND EAX,0xff
0052A589  8B E5                     MOV ESP,EBP
0052A58B  5D                        POP EBP
0052A58C  C3                        RET
