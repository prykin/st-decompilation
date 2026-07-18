FUN_00525890:
00525890  55                        PUSH EBP
00525891  8B EC                     MOV EBP,ESP
00525893  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00525896  83 C0 CA                  ADD EAX,-0x36
00525899  83 F8 39                  CMP EAX,0x39
0052589C  77 55                     JA 0x005258f3
0052589E  33 C9                     XOR ECX,ECX
005258A0  8A 88 28 59 52 00         MOV CL,byte ptr [EAX + 0x525928]
switchD_005258a6::switchD:
005258A6  FF 24 8D FC 58 52 00      JMP dword ptr [ECX*0x4 + 0x5258fc]
switchD_005258a6::caseD_37:
005258AD  B8 A5 38 00 00            MOV EAX,0x38a5
005258B2  5D                        POP EBP
005258B3  C3                        RET
switchD_005258a6::caseD_48:
005258B4  B8 AC 38 00 00            MOV EAX,0x38ac
005258B9  5D                        POP EBP
005258BA  C3                        RET
switchD_005258a6::caseD_4d:
005258BB  B8 A6 38 00 00            MOV EAX,0x38a6
005258C0  5D                        POP EBP
005258C1  C3                        RET
switchD_005258a6::caseD_45:
005258C2  B8 A7 38 00 00            MOV EAX,0x38a7
005258C7  5D                        POP EBP
005258C8  C3                        RET
switchD_005258a6::caseD_4e:
005258C9  B8 A9 38 00 00            MOV EAX,0x38a9
005258CE  5D                        POP EBP
005258CF  C3                        RET
switchD_005258a6::caseD_4c:
005258D0  B8 A8 38 00 00            MOV EAX,0x38a8
005258D5  5D                        POP EBP
005258D6  C3                        RET
switchD_005258a6::caseD_43:
005258D7  B8 AA 38 00 00            MOV EAX,0x38aa
005258DC  5D                        POP EBP
005258DD  C3                        RET
switchD_005258a6::caseD_41:
005258DE  B8 AB 38 00 00            MOV EAX,0x38ab
005258E3  5D                        POP EBP
005258E4  C3                        RET
switchD_005258a6::caseD_36:
005258E5  B8 AD 38 00 00            MOV EAX,0x38ad
005258EA  5D                        POP EBP
005258EB  C3                        RET
switchD_005258a6::caseD_6f:
005258EC  B8 AF 38 00 00            MOV EAX,0x38af
005258F1  5D                        POP EBP
005258F2  C3                        RET
switchD_005258a6::caseD_38:
005258F3  B8 11 27 00 00            MOV EAX,0x2711
005258F8  5D                        POP EBP
005258F9  C3                        RET
