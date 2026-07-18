FUN_004c2950:
004C2950  55                        PUSH EBP
004C2951  8B EC                     MOV EBP,ESP
004C2953  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004C2956  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004C2959  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C295C  53                        PUSH EBX
004C295D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004C2960  83 C1 F8                  ADD ECX,-0x8
004C2963  56                        PUSH ESI
004C2964  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004C2967  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
004C296D  83 F9 06                  CMP ECX,0x6
004C2970  57                        PUSH EDI
004C2971  C6 02 00                  MOV byte ptr [EDX],0x0
004C2974  0F 87 DB 01 00 00         JA 0x004c2b55
switchD_004c297a::switchD:
004C297A  FF 24 8D 5C 2B 4C 00      JMP dword ptr [ECX*0x4 + 0x4c2b5c]
switchD_004c297a::caseD_e:
004C2981  8B 0D 98 B1 7B 00         MOV ECX,dword ptr [0x007bb198]
004C2987  8D 54 70 9B               LEA EDX,[EAX + ESI*0x2 + -0x65]
004C298B  8D 54 16 CE               LEA EDX,[ESI + EDX*0x1 + -0x32]
004C298F  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
004C2992  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
004C2995  85 FF                     TEST EDI,EDI
004C2997  0F 84 B8 01 00 00         JZ 0x004c2b55
004C299D  83 C9 FF                  OR ECX,0xffffffff
004C29A0  33 C0                     XOR EAX,EAX
004C29A2  F2 AE                     SCASB.REPNE ES:EDI
004C29A4  F7 D1                     NOT ECX
004C29A6  2B F9                     SUB EDI,ECX
004C29A8  8B C1                     MOV EAX,ECX
004C29AA  8B F7                     MOV ESI,EDI
004C29AC  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
004C29AF  C1 E9 02                  SHR ECX,0x2
004C29B2  F3 A5                     MOVSD.REP ES:EDI,ESI
004C29B4  8B C8                     MOV ECX,EAX
004C29B6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C29B9  83 E1 03                  AND ECX,0x3
004C29BC  F3 A4                     MOVSB.REP ES:EDI,ESI
004C29BE  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C29C4  5F                        POP EDI
004C29C5  89 0B                     MOV dword ptr [EBX],ECX
004C29C7  C6 00 1D                  MOV byte ptr [EAX],0x1d
004C29CA  8B 0D 70 51 7B 00         MOV ECX,dword ptr [0x007b5170]
004C29D0  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C29D3  C1 E2 05                  SHL EDX,0x5
004C29D6  5E                        POP ESI
004C29D7  5B                        POP EBX
004C29D8  8B 14 0A                  MOV EDX,dword ptr [EDX + ECX*0x1]
004C29DB  89 10                     MOV dword ptr [EAX],EDX
004C29DD  5D                        POP EBP
004C29DE  C3                        RET
switchD_004c297a::caseD_d:
004C29DF  8D 4C 70 9B               LEA ECX,[EAX + ESI*0x2 + -0x65]
004C29E3  8D 7C 0E CE               LEA EDI,[ESI + ECX*0x1 + -0x32]
004C29E7  8B 0D 98 B1 7B 00         MOV ECX,dword ptr [0x007bb198]
004C29ED  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
004C29F0  8B 44 81 04               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x4]
004C29F4  85 C0                     TEST EAX,EAX
004C29F6  0F 84 59 01 00 00         JZ 0x004c2b55
004C29FC  6A 00                     PUSH 0x0
004C29FE  50                        PUSH EAX
004C29FF  68 08 C9 7A 00            PUSH 0x7ac908
004C2A04  52                        PUSH EDX
004C2A05  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004C2A0B  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C2A11  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C2A14  83 C4 10                  ADD ESP,0x10
004C2A17  89 13                     MOV dword ptr [EBX],EDX
004C2A19  83 FE 40                  CMP ESI,0x40
004C2A1C  C6 00 1D                  MOV byte ptr [EAX],0x1d
004C2A1F  74 09                     JZ 0x004c2a2a
004C2A21  83 FE 49                  CMP ESI,0x49
004C2A24  0F 85 1A 01 00 00         JNZ 0x004c2b44
LAB_004c2a2a:
004C2A2A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004C2A2D  5F                        POP EDI
004C2A2E  5E                        POP ESI
004C2A2F  5B                        POP EBX
004C2A30  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004C2A36  5D                        POP EBP
004C2A37  C3                        RET
switchD_004c297a::caseD_c:
004C2A38  8B 0D 98 B1 7B 00         MOV ECX,dword ptr [0x007bb198]
004C2A3E  8D 54 70 9B               LEA EDX,[EAX + ESI*0x2 + -0x65]
004C2A42  8D 54 16 CE               LEA EDX,[ESI + EDX*0x1 + -0x32]
004C2A46  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
004C2A49  8B 7C 81 08               MOV EDI,dword ptr [ECX + EAX*0x4 + 0x8]
004C2A4D  85 FF                     TEST EDI,EDI
004C2A4F  0F 84 00 01 00 00         JZ 0x004c2b55
004C2A55  83 C9 FF                  OR ECX,0xffffffff
004C2A58  33 C0                     XOR EAX,EAX
004C2A5A  F2 AE                     SCASB.REPNE ES:EDI
004C2A5C  F7 D1                     NOT ECX
004C2A5E  2B F9                     SUB EDI,ECX
004C2A60  8B C1                     MOV EAX,ECX
004C2A62  8B F7                     MOV ESI,EDI
004C2A64  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
004C2A67  C1 E9 02                  SHR ECX,0x2
004C2A6A  F3 A5                     MOVSD.REP ES:EDI,ESI
004C2A6C  8B C8                     MOV ECX,EAX
004C2A6E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C2A71  83 E1 03                  AND ECX,0x3
004C2A74  F3 A4                     MOVSB.REP ES:EDI,ESI
004C2A76  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C2A7C  5F                        POP EDI
004C2A7D  89 0B                     MOV dword ptr [EBX],ECX
004C2A7F  C6 00 1D                  MOV byte ptr [EAX],0x1d
004C2A82  8B 0D 10 83 7B 00         MOV ECX,dword ptr [0x007b8310]
004C2A88  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C2A8B  C1 E2 05                  SHL EDX,0x5
004C2A8E  5E                        POP ESI
004C2A8F  5B                        POP EBX
004C2A90  8B 14 0A                  MOV EDX,dword ptr [EDX + ECX*0x1]
004C2A93  89 10                     MOV dword ptr [EAX],EDX
004C2A95  5D                        POP EBP
004C2A96  C3                        RET
switchD_004c297a::caseD_9:
004C2A97  8B 0C B5 48 19 79 00      MOV ECX,dword ptr [ESI*0x4 + 0x791948]
004C2A9E  85 C9                     TEST ECX,ECX
004C2AA0  0F 84 AF 00 00 00         JZ 0x004c2b55
004C2AA6  8D 4C 70 9B               LEA ECX,[EAX + ESI*0x2 + -0x65]
004C2AAA  8D 74 0E CE               LEA ESI,[ESI + ECX*0x1 + -0x32]
004C2AAE  8B 0D 98 B1 7B 00         MOV ECX,dword ptr [0x007bb198]
004C2AB4  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
004C2AB7  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
004C2ABA  85 C0                     TEST EAX,EAX
004C2ABC  0F 84 93 00 00 00         JZ 0x004c2b55
004C2AC2  50                        PUSH EAX
004C2AC3  68 FC C8 7A 00            PUSH 0x7ac8fc
004C2AC8  52                        PUSH EDX
004C2AC9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004C2ACF  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C2AD5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C2AD8  89 13                     MOV dword ptr [EBX],EDX
004C2ADA  83 C4 0C                  ADD ESP,0xc
004C2ADD  C6 00 1D                  MOV byte ptr [EAX],0x1d
004C2AE0  8B 0D 70 51 7B 00         MOV ECX,dword ptr [0x007b5170]
004C2AE6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C2AE9  5F                        POP EDI
004C2AEA  C1 E6 05                  SHL ESI,0x5
004C2AED  8B 14 0E                  MOV EDX,dword ptr [ESI + ECX*0x1]
004C2AF0  5E                        POP ESI
004C2AF1  89 10                     MOV dword ptr [EAX],EDX
004C2AF3  5B                        POP EBX
004C2AF4  5D                        POP EBP
004C2AF5  C3                        RET
switchD_004c297a::caseD_8:
004C2AF6  8B 0C B5 48 19 79 00      MOV ECX,dword ptr [ESI*0x4 + 0x791948]
004C2AFD  85 C9                     TEST ECX,ECX
004C2AFF  74 54                     JZ 0x004c2b55
004C2B01  8D 4C 70 9B               LEA ECX,[EAX + ESI*0x2 + -0x65]
004C2B05  8D 7C 0E CE               LEA EDI,[ESI + ECX*0x1 + -0x32]
004C2B09  8B 0D 98 B1 7B 00         MOV ECX,dword ptr [0x007bb198]
004C2B0F  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
004C2B12  8B 44 81 04               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x4]
004C2B16  85 C0                     TEST EAX,EAX
004C2B18  74 3B                     JZ 0x004c2b55
004C2B1A  83 FE 40                  CMP ESI,0x40
004C2B1D  74 36                     JZ 0x004c2b55
004C2B1F  83 FE 49                  CMP ESI,0x49
004C2B22  74 31                     JZ 0x004c2b55
004C2B24  6A 00                     PUSH 0x0
004C2B26  50                        PUSH EAX
004C2B27  68 EC C8 7A 00            PUSH 0x7ac8ec
004C2B2C  52                        PUSH EDX
004C2B2D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004C2B33  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C2B39  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C2B3C  89 13                     MOV dword ptr [EBX],EDX
004C2B3E  83 C4 10                  ADD ESP,0x10
004C2B41  C6 00 1D                  MOV byte ptr [EAX],0x1d
LAB_004c2b44:
004C2B44  8B 0D 70 51 7B 00         MOV ECX,dword ptr [0x007b5170]
004C2B4A  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C2B4D  C1 E7 05                  SHL EDI,0x5
004C2B50  8B 14 0F                  MOV EDX,dword ptr [EDI + ECX*0x1]
004C2B53  89 10                     MOV dword ptr [EAX],EDX
switchD_004c297a::caseD_a:
004C2B55  5F                        POP EDI
004C2B56  5E                        POP ESI
004C2B57  5B                        POP EBX
004C2B58  5D                        POP EBP
004C2B59  C3                        RET
