FUN_0052a640:
0052A640  55                        PUSH EBP
0052A641  8B EC                     MOV EBP,ESP
0052A643  51                        PUSH ECX
0052A644  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052A647  B1 05                     MOV CL,0x5
0052A649  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052A64C  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0052A64F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0052A652  83 F8 03                  CMP EAX,0x3
0052A655  77 2A                     JA 0x0052a681
switchD_0052a657::switchD:
0052A657  FF 24 85 90 A6 52 00      JMP dword ptr [EAX*0x4 + 0x52a690]
switchD_0052a657::caseD_0:
0052A65E  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052A661  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A664  25 FF 00 00 00            AND EAX,0xff
0052A669  8B E5                     MOV ESP,EBP
0052A66B  5D                        POP EBP
0052A66C  C3                        RET
switchD_0052a657::caseD_2:
0052A66D  C6 45 FC 06               MOV byte ptr [EBP + -0x4],0x6
0052A671  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A674  25 FF 00 00 00            AND EAX,0xff
0052A679  8B E5                     MOV ESP,EBP
0052A67B  5D                        POP EBP
0052A67C  C3                        RET
switchD_0052a657::caseD_1:
0052A67D  C6 45 FC 04               MOV byte ptr [EBP + -0x4],0x4
switchD_0052a657::default:
0052A681  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A684  25 FF 00 00 00            AND EAX,0xff
0052A689  8B E5                     MOV ESP,EBP
0052A68B  5D                        POP EBP
0052A68C  C3                        RET
