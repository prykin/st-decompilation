FUN_0045f400:
0045F400  55                        PUSH EBP
0045F401  8B EC                     MOV EBP,ESP
0045F403  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0045F406  48                        DEC EAX
0045F407  83 F8 16                  CMP EAX,0x16
0045F40A  0F 87 93 01 00 00         JA 0x0045f5a3
switchD_0045f410::switchD:
0045F410  FF 24 85 D0 F5 45 00      JMP dword ptr [EAX*0x4 + 0x45f5d0]
switchD_0045f410::caseD_1:
0045F417  8B 91 CC 02 00 00         MOV EDX,dword ptr [ECX + 0x2cc]
0045F41D  33 C0                     XOR EAX,EAX
0045F41F  83 FA 01                  CMP EDX,0x1
0045F422  0F 94 C0                  SETZ AL
0045F425  5D                        POP EBP
0045F426  C2 04 00                  RET 0x4
switchD_0045f410::caseD_2:
0045F429  8B 91 D0 02 00 00         MOV EDX,dword ptr [ECX + 0x2d0]
0045F42F  33 C0                     XOR EAX,EAX
0045F431  83 FA 01                  CMP EDX,0x1
0045F434  0F 94 C0                  SETZ AL
0045F437  5D                        POP EBP
0045F438  C2 04 00                  RET 0x4
switchD_0045f410::caseD_3:
0045F43B  8B 91 D4 02 00 00         MOV EDX,dword ptr [ECX + 0x2d4]
0045F441  33 C0                     XOR EAX,EAX
0045F443  83 FA 01                  CMP EDX,0x1
0045F446  0F 94 C0                  SETZ AL
0045F449  5D                        POP EBP
0045F44A  C2 04 00                  RET 0x4
switchD_0045f410::caseD_6:
0045F44D  8B 91 E0 02 00 00         MOV EDX,dword ptr [ECX + 0x2e0]
0045F453  33 C0                     XOR EAX,EAX
0045F455  83 FA 01                  CMP EDX,0x1
0045F458  0F 94 C0                  SETZ AL
0045F45B  5D                        POP EBP
0045F45C  C2 04 00                  RET 0x4
switchD_0045f410::caseD_c:
0045F45F  8B 91 F8 02 00 00         MOV EDX,dword ptr [ECX + 0x2f8]
0045F465  33 C0                     XOR EAX,EAX
0045F467  83 FA 01                  CMP EDX,0x1
0045F46A  0F 94 C0                  SETZ AL
0045F46D  5D                        POP EBP
0045F46E  C2 04 00                  RET 0x4
switchD_0045f410::caseD_11:
0045F471  8B 91 0C 03 00 00         MOV EDX,dword ptr [ECX + 0x30c]
0045F477  33 C0                     XOR EAX,EAX
0045F479  83 FA 01                  CMP EDX,0x1
0045F47C  0F 94 C0                  SETZ AL
0045F47F  5D                        POP EBP
0045F480  C2 04 00                  RET 0x4
switchD_0045f410::caseD_d:
0045F483  8B 91 FC 02 00 00         MOV EDX,dword ptr [ECX + 0x2fc]
0045F489  33 C0                     XOR EAX,EAX
0045F48B  83 FA 01                  CMP EDX,0x1
0045F48E  0F 94 C0                  SETZ AL
0045F491  5D                        POP EBP
0045F492  C2 04 00                  RET 0x4
switchD_0045f410::caseD_4:
0045F495  8B 91 D8 02 00 00         MOV EDX,dword ptr [ECX + 0x2d8]
0045F49B  33 C0                     XOR EAX,EAX
0045F49D  83 FA 01                  CMP EDX,0x1
0045F4A0  0F 94 C0                  SETZ AL
0045F4A3  5D                        POP EBP
0045F4A4  C2 04 00                  RET 0x4
switchD_0045f410::caseD_5:
0045F4A7  8B 91 DC 02 00 00         MOV EDX,dword ptr [ECX + 0x2dc]
0045F4AD  33 C0                     XOR EAX,EAX
0045F4AF  83 FA 01                  CMP EDX,0x1
0045F4B2  0F 94 C0                  SETZ AL
0045F4B5  5D                        POP EBP
0045F4B6  C2 04 00                  RET 0x4
switchD_0045f410::caseD_f:
0045F4B9  8B 91 04 03 00 00         MOV EDX,dword ptr [ECX + 0x304]
0045F4BF  33 C0                     XOR EAX,EAX
0045F4C1  83 FA 01                  CMP EDX,0x1
0045F4C4  0F 94 C0                  SETZ AL
0045F4C7  5D                        POP EBP
0045F4C8  C2 04 00                  RET 0x4
switchD_0045f410::caseD_14:
0045F4CB  8B 91 14 03 00 00         MOV EDX,dword ptr [ECX + 0x314]
0045F4D1  33 C0                     XOR EAX,EAX
0045F4D3  83 FA 01                  CMP EDX,0x1
0045F4D6  0F 94 C0                  SETZ AL
0045F4D9  5D                        POP EBP
0045F4DA  C2 04 00                  RET 0x4
switchD_0045f410::caseD_10:
0045F4DD  8B 91 08 03 00 00         MOV EDX,dword ptr [ECX + 0x308]
0045F4E3  33 C0                     XOR EAX,EAX
0045F4E5  83 FA 01                  CMP EDX,0x1
0045F4E8  0F 94 C0                  SETZ AL
0045F4EB  5D                        POP EBP
0045F4EC  C2 04 00                  RET 0x4
switchD_0045f410::caseD_7:
0045F4EF  8B 91 E4 02 00 00         MOV EDX,dword ptr [ECX + 0x2e4]
0045F4F5  33 C0                     XOR EAX,EAX
0045F4F7  83 FA 01                  CMP EDX,0x1
0045F4FA  0F 94 C0                  SETZ AL
0045F4FD  5D                        POP EBP
0045F4FE  C2 04 00                  RET 0x4
switchD_0045f410::caseD_a:
0045F501  8B 91 F0 02 00 00         MOV EDX,dword ptr [ECX + 0x2f0]
0045F507  33 C0                     XOR EAX,EAX
0045F509  83 FA 01                  CMP EDX,0x1
0045F50C  0F 94 C0                  SETZ AL
0045F50F  5D                        POP EBP
0045F510  C2 04 00                  RET 0x4
switchD_0045f410::caseD_9:
0045F513  8B 91 EC 02 00 00         MOV EDX,dword ptr [ECX + 0x2ec]
0045F519  33 C0                     XOR EAX,EAX
0045F51B  83 FA 01                  CMP EDX,0x1
0045F51E  0F 94 C0                  SETZ AL
0045F521  5D                        POP EBP
0045F522  C2 04 00                  RET 0x4
switchD_0045f410::caseD_16:
0045F525  8B 91 1C 03 00 00         MOV EDX,dword ptr [ECX + 0x31c]
0045F52B  33 C0                     XOR EAX,EAX
0045F52D  83 FA 01                  CMP EDX,0x1
0045F530  0F 94 C0                  SETZ AL
0045F533  5D                        POP EBP
0045F534  C2 04 00                  RET 0x4
switchD_0045f410::caseD_15:
0045F537  8B 91 18 03 00 00         MOV EDX,dword ptr [ECX + 0x318]
0045F53D  33 C0                     XOR EAX,EAX
0045F53F  83 FA 01                  CMP EDX,0x1
0045F542  0F 94 C0                  SETZ AL
0045F545  5D                        POP EBP
0045F546  C2 04 00                  RET 0x4
switchD_0045f410::caseD_17:
0045F549  8B 91 20 03 00 00         MOV EDX,dword ptr [ECX + 0x320]
0045F54F  33 C0                     XOR EAX,EAX
0045F551  83 FA 01                  CMP EDX,0x1
0045F554  0F 94 C0                  SETZ AL
0045F557  5D                        POP EBP
0045F558  C2 04 00                  RET 0x4
switchD_0045f410::caseD_b:
0045F55B  8B 91 F4 02 00 00         MOV EDX,dword ptr [ECX + 0x2f4]
0045F561  33 C0                     XOR EAX,EAX
0045F563  83 FA 01                  CMP EDX,0x1
0045F566  0F 94 C0                  SETZ AL
0045F569  5D                        POP EBP
0045F56A  C2 04 00                  RET 0x4
switchD_0045f410::caseD_12:
0045F56D  8B 91 10 03 00 00         MOV EDX,dword ptr [ECX + 0x310]
0045F573  33 C0                     XOR EAX,EAX
0045F575  83 FA 01                  CMP EDX,0x1
0045F578  0F 94 C0                  SETZ AL
0045F57B  5D                        POP EBP
0045F57C  C2 04 00                  RET 0x4
switchD_0045f410::caseD_8:
0045F57F  8B 91 E8 02 00 00         MOV EDX,dword ptr [ECX + 0x2e8]
0045F585  33 C0                     XOR EAX,EAX
0045F587  83 FA 01                  CMP EDX,0x1
0045F58A  0F 94 C0                  SETZ AL
0045F58D  5D                        POP EBP
0045F58E  C2 04 00                  RET 0x4
switchD_0045f410::caseD_e:
0045F591  8B 91 00 03 00 00         MOV EDX,dword ptr [ECX + 0x300]
0045F597  33 C0                     XOR EAX,EAX
0045F599  83 FA 01                  CMP EDX,0x1
0045F59C  0F 94 C0                  SETZ AL
0045F59F  5D                        POP EBP
0045F5A0  C2 04 00                  RET 0x4
switchD_0045f410::caseD_13:
0045F5A3  68 A8 A0 7A 00            PUSH 0x7aa0a8
0045F5A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
0045F5AD  6A 00                     PUSH 0x0
0045F5AF  6A 00                     PUSH 0x0
0045F5B1  68 E4 13 00 00            PUSH 0x13e4
0045F5B6  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045F5BB  E8 10 DF 24 00            CALL 0x006ad4d0
0045F5C0  83 C4 18                  ADD ESP,0x18
0045F5C3  85 C0                     TEST EAX,EAX
0045F5C5  74 01                     JZ 0x0045f5c8
0045F5C7  CC                        INT3
LAB_0045f5c8:
0045F5C8  33 C0                     XOR EAX,EAX
0045F5CA  5D                        POP EBP
0045F5CB  C2 04 00                  RET 0x4
