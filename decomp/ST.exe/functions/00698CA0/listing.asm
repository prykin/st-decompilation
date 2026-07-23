CGenerate::sub_00698CA0:
00698CA0  55                        PUSH EBP
00698CA1  8B EC                     MOV EBP,ESP
00698CA3  83 EC 08                  SUB ESP,0x8
00698CA6  53                        PUSH EBX
00698CA7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00698CAA  56                        PUSH ESI
00698CAB  57                        PUSH EDI
00698CAC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00698CAF  8D 45 F8                  LEA EAX,[EBP + -0x8]
00698CB2  8B F1                     MOV ESI,ECX
00698CB4  50                        PUSH EAX
00698CB5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00698CB8  57                        PUSH EDI
00698CB9  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00698CBC  53                        PUSH EBX
00698CBD  51                        PUSH ECX
00698CBE  52                        PUSH EDX
00698CBF  E8 88 B4 D6 FF            CALL 0x0040414c
00698CC4  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00698CC7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00698CCA  0F BF C0                  MOVSX EAX,AX
00698CCD  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00698CD0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00698CD3  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
00698CD9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00698CDC  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00698CE2  68 FF 00 00 00            PUSH 0xff
00698CE7  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00698CED  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00698CF0  57                        PUSH EDI
00698CF1  53                        PUSH EBX
00698CF2  51                        PUSH ECX
00698CF3  52                        PUSH EDX
00698CF4  E8 B7 8C D6 FF            CALL 0x004019b0
00698CF9  83 C4 28                  ADD ESP,0x28
00698CFC  85 C0                     TEST EAX,EAX
00698CFE  74 5D                     JZ 0x00698d5d
00698D00  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00698D03  8B C8                     MOV ECX,EAX
00698D05  C1 E9 08                  SHR ECX,0x8
00698D08  83 E1 0F                  AND ECX,0xf
00698D0B  7E 50                     JLE 0x00698d5d
00698D0D  F6 C4 10                  TEST AH,0x10
00698D10  74 0C                     JZ 0x00698d1e
00698D12  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00698D15  49                        DEC ECX
00698D16  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
00698D1C  EB 09                     JMP 0x00698d27
LAB_00698d1e:
00698D1E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00698D21  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
LAB_00698d27:
00698D27  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00698D2A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00698D2D  89 02                     MOV dword ptr [EDX],EAX
00698D2F  2B C1                     SUB EAX,ECX
00698D31  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00698D34  89 01                     MOV dword ptr [ECX],EAX
00698D36  8B 0A                     MOV ECX,dword ptr [EDX]
00698D38  3B F9                     CMP EDI,ECX
00698D3A  75 0E                     JNZ 0x00698d4a
00698D3C  5F                        POP EDI
00698D3D  5E                        POP ESI
00698D3E  B8 04 00 00 00            MOV EAX,0x4
00698D43  5B                        POP EBX
00698D44  8B E5                     MOV ESP,EBP
00698D46  5D                        POP EBP
00698D47  C2 18 00                  RET 0x18
LAB_00698d4a:
00698D4A  33 D2                     XOR EDX,EDX
00698D4C  3B F8                     CMP EDI,EAX
00698D4E  0F 95 C2                  SETNZ DL
00698D51  42                        INC EDX
00698D52  5F                        POP EDI
00698D53  5E                        POP ESI
00698D54  8B C2                     MOV EAX,EDX
00698D56  5B                        POP EBX
00698D57  8B E5                     MOV ESP,EBP
00698D59  5D                        POP EBP
00698D5A  C2 18 00                  RET 0x18
LAB_00698d5d:
00698D5D  5F                        POP EDI
00698D5E  5E                        POP ESI
00698D5F  33 C0                     XOR EAX,EAX
00698D61  5B                        POP EBX
00698D62  8B E5                     MOV ESP,EBP
00698D64  5D                        POP EBP
00698D65  C2 18 00                  RET 0x18
