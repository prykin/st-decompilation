FUN_0053ac00:
0053AC00  55                        PUSH EBP
0053AC01  8B EC                     MOV EBP,ESP
0053AC03  83 EC 54                  SUB ESP,0x54
0053AC06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053AC0B  53                        PUSH EBX
0053AC0C  56                        PUSH ESI
0053AC0D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053AC10  57                        PUSH EDI
0053AC11  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053AC14  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053AC17  6A 00                     PUSH 0x0
0053AC19  52                        PUSH EDX
0053AC1A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053AC1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053AC23  E8 C8 2B 1F 00            CALL 0x0072d7f0
0053AC28  8B F0                     MOV ESI,EAX
0053AC2A  83 C4 08                  ADD ESP,0x8
0053AC2D  85 F6                     TEST ESI,ESI
0053AC2F  0F 85 6C 02 00 00         JNZ 0x0053aea1
0053AC35  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0053AC38  8B 83 CD 01 00 00         MOV EAX,dword ptr [EBX + 0x1cd]
0053AC3E  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0053AC41  50                        PUSH EAX
0053AC42  6A 01                     PUSH 0x1
0053AC44  6A 13                     PUSH 0x13
0053AC46  6A 1D                     PUSH 0x1d
0053AC48  51                        PUSH ECX
0053AC49  E8 DB 85 EC FF            CALL 0x00403229
0053AC4E  BF 1B 00 00 00            MOV EDI,0x1b
0053AC53  83 C4 14                  ADD ESP,0x14
0053AC56  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0053AC59  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0053AC5C  C7 45 F4 08 00 00 00      MOV dword ptr [EBP + -0xc],0x8
LAB_0053ac63:
0053AC63  8B 93 C9 01 00 00         MOV EDX,dword ptr [EBX + 0x1c9]
0053AC69  33 C9                     XOR ECX,ECX
0053AC6B  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
0053AC71  8D 04 16                  LEA EAX,[ESI + EDX*0x1]
0053AC74  3B C1                     CMP EAX,ECX
0053AC76  0F 83 E4 01 00 00         JNC 0x0053ae60
0053AC7C  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0053AC7F  8B 8B D1 01 00 00         MOV ECX,dword ptr [EBX + 0x1d1]
0053AC85  C1 E2 03                  SHL EDX,0x3
0053AC88  2B D0                     SUB EDX,EAX
0053AC8A  33 C0                     XOR EAX,EAX
0053AC8C  8A 04 95 F4 8A 80 00      MOV AL,byte ptr [EDX*0x4 + 0x808af4]
0053AC93  83 C0 09                  ADD EAX,0x9
0053AC96  50                        PUSH EAX
0053AC97  51                        PUSH ECX
0053AC98  E8 03 07 1D 00            CALL 0x0070b3a0
0053AC9D  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0053ACA0  50                        PUSH EAX
0053ACA1  6A 01                     PUSH 0x1
0053ACA3  57                        PUSH EDI
0053ACA4  6A 22                     PUSH 0x22
0053ACA6  52                        PUSH EDX
0053ACA7  E8 7D 85 EC FF            CALL 0x00403229
0053ACAC  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0053ACAF  83 C4 1C                  ADD ESP,0x1c
0053ACB2  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053ACB8  6A 0C                     PUSH 0xc
0053ACBA  6A 10                     PUSH 0x10
0053ACBC  57                        PUSH EDI
0053ACBD  6A 37                     PUSH 0x37
0053ACBF  6A 00                     PUSH 0x0
0053ACC1  50                        PUSH EAX
0053ACC2  E8 C9 5D 1D 00            CALL 0x00710a90
0053ACC7  8B 8B C9 01 00 00         MOV ECX,dword ptr [EBX + 0x1c9]
0053ACCD  8B C6                     MOV EAX,ESI
0053ACCF  03 C1                     ADD EAX,ECX
0053ACD1  33 D2                     XOR EDX,EDX
0053ACD3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0053ACD6  C1 E1 03                  SHL ECX,0x3
0053ACD9  2B C8                     SUB ECX,EAX
0053ACDB  33 C0                     XOR EAX,EAX
0053ACDD  8A 04 8D F4 8A 80 00      MOV AL,byte ptr [ECX*0x4 + 0x808af4]
0053ACE4  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0053ACE7  8A 94 C0 E8 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0053ACEE  8B C2                     MOV EAX,EDX
0053ACF0  48                        DEC EAX
0053ACF1  74 1B                     JZ 0x0053ad0e
0053ACF3  48                        DEC EAX
0053ACF4  74 11                     JZ 0x0053ad07
0053ACF6  48                        DEC EAX
0053ACF7  74 07                     JZ 0x0053ad00
0053ACF9  B8 10 27 00 00            MOV EAX,0x2710
0053ACFE  EB 13                     JMP 0x0053ad13
LAB_0053ad00:
0053AD00  B8 45 27 00 00            MOV EAX,0x2745
0053AD05  EB 0C                     JMP 0x0053ad13
LAB_0053ad07:
0053AD07  B8 43 27 00 00            MOV EAX,0x2743
0053AD0C  EB 05                     JMP 0x0053ad13
LAB_0053ad0e:
0053AD0E  B8 42 27 00 00            MOV EAX,0x2742
LAB_0053ad13:
0053AD13  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0053AD19  33 C9                     XOR ECX,ECX
0053AD1B  80 FA 03                  CMP DL,0x3
0053AD1E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0053AD24  0F 95 C1                  SETNZ CL
0053AD27  49                        DEC ECX
0053AD28  83 E1 05                  AND ECX,0x5
0053AD2B  51                        PUSH ECX
0053AD2C  6A FF                     PUSH -0x1
0053AD2E  6A FF                     PUSH -0x1
0053AD30  52                        PUSH EDX
0053AD31  50                        PUSH EAX
0053AD32  E8 09 54 17 00            CALL 0x006b0140
0053AD37  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053AD3D  50                        PUSH EAX
0053AD3E  E8 7D 6C 1D 00            CALL 0x007119c0
0053AD43  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0053AD46  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053AD4C  6A 0C                     PUSH 0xc
0053AD4E  68 0E 01 00 00            PUSH 0x10e
0053AD53  57                        PUSH EDI
0053AD54  6A 68                     PUSH 0x68
0053AD56  6A 00                     PUSH 0x0
0053AD58  50                        PUSH EAX
0053AD59  E8 32 5D 1D 00            CALL 0x00710a90
0053AD5E  8B 8B C9 01 00 00         MOV ECX,dword ptr [EBX + 0x1c9]
0053AD64  8B C6                     MOV EAX,ESI
0053AD66  03 C1                     ADD EAX,ECX
0053AD68  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0053AD6B  C1 E1 03                  SHL ECX,0x3
0053AD6E  2B C8                     SUB ECX,EAX
0053AD70  8D 14 8D B0 8A 80 00      LEA EDX,[ECX*0x4 + 0x808ab0]
0053AD77  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053AD7D  52                        PUSH EDX
0053AD7E  E8 8D 63 1D 00            CALL 0x00711110
0053AD83  3D 0E 01 00 00            CMP EAX,0x10e
0053AD88  7C 72                     JL 0x0053adfc
0053AD8A  8B BB C9 01 00 00         MOV EDI,dword ptr [EBX + 0x1c9]
0053AD90  8B C6                     MOV EAX,ESI
0053AD92  03 C7                     ADD EAX,EDI
0053AD94  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0053AD97  C1 E1 03                  SHL ECX,0x3
0053AD9A  2B C8                     SUB ECX,EAX
0053AD9C  33 C0                     XOR EAX,EAX
0053AD9E  8D 3C 8D B0 8A 80 00      LEA EDI,[ECX*0x4 + 0x808ab0]
0053ADA5  83 C9 FF                  OR ECX,0xffffffff
0053ADA8  F2 AE                     SCASB.REPNE ES:EDI
0053ADAA  F7 D1                     NOT ECX
0053ADAC  49                        DEC ECX
0053ADAD  BF 14 00 00 00            MOV EDI,0x14
0053ADB2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0053adb5:
0053ADB5  8B 93 C9 01 00 00         MOV EDX,dword ptr [EBX + 0x1c9]
0053ADBB  8B C6                     MOV EAX,ESI
0053ADBD  03 C2                     ADD EAX,EDX
0053ADBF  47                        INC EDI
0053ADC0  57                        PUSH EDI
0053ADC1  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0053ADC4  C1 E2 03                  SHL EDX,0x3
0053ADC7  2B D0                     SUB EDX,EAX
0053ADC9  8D 04 95 B0 8A 80 00      LEA EAX,[EDX*0x4 + 0x808ab0]
0053ADD0  50                        PUSH EAX
0053ADD1  68 3A F3 80 00            PUSH 0x80f33a
0053ADD6  E8 65 35 1F 00            CALL 0x0072e340
0053ADDB  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053ADE1  83 C4 0C                  ADD ESP,0xc
0053ADE4  68 3A F3 80 00            PUSH 0x80f33a
0053ADE9  E8 22 63 1D 00            CALL 0x00711110
0053ADEE  3D 0E 01 00 00            CMP EAX,0x10e
0053ADF3  7D 41                     JGE 0x0053ae36
0053ADF5  3B 7D FC                  CMP EDI,dword ptr [EBP + -0x4]
0053ADF8  7C BB                     JL 0x0053adb5
0053ADFA  EB 3A                     JMP 0x0053ae36
LAB_0053adfc:
0053ADFC  8B 8B C9 01 00 00         MOV ECX,dword ptr [EBX + 0x1c9]
0053AE02  33 C0                     XOR EAX,EAX
0053AE04  03 F1                     ADD ESI,ECX
0053AE06  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0053AE09  C1 E1 03                  SHL ECX,0x3
0053AE0C  2B CE                     SUB ECX,ESI
0053AE0E  8D 3C 8D B0 8A 80 00      LEA EDI,[ECX*0x4 + 0x808ab0]
0053AE15  83 C9 FF                  OR ECX,0xffffffff
0053AE18  F2 AE                     SCASB.REPNE ES:EDI
0053AE1A  F7 D1                     NOT ECX
0053AE1C  2B F9                     SUB EDI,ECX
0053AE1E  8B D1                     MOV EDX,ECX
0053AE20  8B F7                     MOV ESI,EDI
0053AE22  BF 3A F3 80 00            MOV EDI,0x80f33a
0053AE27  C1 E9 02                  SHR ECX,0x2
0053AE2A  F3 A5                     MOVSD.REP ES:EDI,ESI
0053AE2C  8B CA                     MOV ECX,EDX
0053AE2E  83 E1 03                  AND ECX,0x3
0053AE31  F3 A4                     MOVSB.REP ES:EDI,ESI
0053AE33  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0053ae36:
0053AE36  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0053AE3C  33 C0                     XOR EAX,EAX
0053AE3E  80 F9 03                  CMP CL,0x3
0053AE41  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053AE47  0F 95 C0                  SETNZ AL
0053AE4A  48                        DEC EAX
0053AE4B  83 E0 05                  AND EAX,0x5
0053AE4E  50                        PUSH EAX
0053AE4F  6A FF                     PUSH -0x1
0053AE51  6A 05                     PUSH 0x5
0053AE53  68 3A F3 80 00            PUSH 0x80f33a
0053AE58  E8 63 6B 1D 00            CALL 0x007119c0
0053AE5D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0053ae60:
0053AE60  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053AE63  46                        INC ESI
0053AE64  83 C7 0F                  ADD EDI,0xf
0053AE67  48                        DEC EAX
0053AE68  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0053AE6B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0053AE6E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0053AE71  0F 85 EC FD FF FF         JNZ 0x0053ac63
0053AE77  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0053AE7A  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
0053AE7D  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
0053AE80  51                        PUSH ECX
0053AE81  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0053AE87  52                        PUSH EDX
0053AE88  6A FF                     PUSH -0x1
0053AE8A  50                        PUSH EAX
0053AE8B  51                        PUSH ECX
0053AE8C  E8 AF 87 17 00            CALL 0x006b3640
0053AE91  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0053AE94  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053AE9A  5F                        POP EDI
0053AE9B  5E                        POP ESI
0053AE9C  5B                        POP EBX
0053AE9D  8B E5                     MOV ESP,EBP
0053AE9F  5D                        POP EBP
0053AEA0  C3                        RET
LAB_0053aea1:
0053AEA1  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053AEA4  68 88 76 7C 00            PUSH 0x7c7688
0053AEA9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053AEAE  56                        PUSH ESI
0053AEAF  6A 00                     PUSH 0x0
0053AEB1  68 1F 01 00 00            PUSH 0x11f
0053AEB6  68 74 75 7C 00            PUSH 0x7c7574
0053AEBB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053AEC0  E8 0B 26 17 00            CALL 0x006ad4d0
0053AEC5  83 C4 18                  ADD ESP,0x18
0053AEC8  85 C0                     TEST EAX,EAX
0053AECA  74 01                     JZ 0x0053aecd
0053AECC  CC                        INT3
LAB_0053aecd:
0053AECD  68 1F 01 00 00            PUSH 0x11f
0053AED2  68 74 75 7C 00            PUSH 0x7c7574
0053AED7  6A 00                     PUSH 0x0
0053AED9  56                        PUSH ESI
0053AEDA  E8 61 AF 16 00            CALL 0x006a5e40
0053AEDF  5F                        POP EDI
0053AEE0  5E                        POP ESI
0053AEE1  5B                        POP EBX
0053AEE2  8B E5                     MOV ESP,EBP
0053AEE4  5D                        POP EBP
0053AEE5  C3                        RET
