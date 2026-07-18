FUN_0052a430:
0052A430  55                        PUSH EBP
0052A431  8B EC                     MOV EBP,ESP
0052A433  51                        PUSH ECX
0052A434  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052A437  33 D2                     XOR EDX,EDX
0052A439  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
0052A43C  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0052A43F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0052A442  83 F9 03                  CMP ECX,0x3
0052A445  77 3B                     JA 0x0052a482
switchD_0052a447::switchD:
0052A447  FF 24 8D 94 A4 52 00      JMP dword ptr [ECX*0x4 + 0x52a494]
switchD_0052a447::caseD_0:
0052A44E  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
0052A451  8B 10                     MOV EDX,dword ptr [EAX]
0052A453  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A456  25 FF 00 00 00            AND EAX,0xff
0052A45B  8D 44 50 FE               LEA EAX,[EAX + EDX*0x2 + -0x2]
0052A45F  8B E5                     MOV ESP,EBP
0052A461  5D                        POP EBP
0052A462  C3                        RET
switchD_0052a447::caseD_1:
0052A463  8B 10                     MOV EDX,dword ptr [EAX]
0052A465  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
0052A469  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A46C  25 FF 00 00 00            AND EAX,0xff
0052A471  8D 44 50 FE               LEA EAX,[EAX + EDX*0x2 + -0x2]
0052A475  8B E5                     MOV ESP,EBP
0052A477  5D                        POP EBP
0052A478  C3                        RET
switchD_0052a447::caseD_3:
0052A479  39 50 08                  CMP dword ptr [EAX + 0x8],EDX
0052A47C  0F 95 C1                  SETNZ CL
0052A47F  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
switchD_0052a447::default:
0052A482  8B 10                     MOV EDX,dword ptr [EAX]
0052A484  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052A487  25 FF 00 00 00            AND EAX,0xff
0052A48C  8D 44 50 FE               LEA EAX,[EAX + EDX*0x2 + -0x2]
0052A490  8B E5                     MOV ESP,EBP
0052A492  5D                        POP EBP
0052A493  C3                        RET
