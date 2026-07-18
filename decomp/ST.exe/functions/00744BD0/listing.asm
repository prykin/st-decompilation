FUN_00744bd0:
00744BD0  55                        PUSH EBP
00744BD1  8B EC                     MOV EBP,ESP
00744BD3  B8 24 10 00 00            MOV EAX,0x1024
00744BD8  E8 63 8E FE FF            CALL 0x0072da40
00744BDD  53                        PUSH EBX
00744BDE  56                        PUSH ESI
00744BDF  57                        PUSH EDI
00744BE0  8D 85 FC EF FF FF         LEA EAX,[EBP + 0xffffeffc]
00744BE6  89 85 EC EF FF FF         MOV dword ptr [EBP + 0xffffefec],EAX
00744BEC  C7 85 E4 EF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffefe4],0x0
00744BF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744BF9  3B 0D DC A2 85 00         CMP ECX,dword ptr [0x0085a2dc]
00744BFF  73 1F                     JNC 0x00744c20
00744C01  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744C04  C1 FA 05                  SAR EDX,0x5
00744C07  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744C0A  83 E0 1F                  AND EAX,0x1f
00744C0D  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00744C14  0F BE 54 C1 04            MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x4]
00744C19  83 E2 01                  AND EDX,0x1
00744C1C  85 D2                     TEST EDX,EDX
00744C1E  75 12                     JNZ 0x00744c32
LAB_00744c20:
00744C20  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00744C2A  83 C8 FF                  OR EAX,0xffffffff
00744C2D  E9 FC 01 00 00            JMP 0x00744e2e
LAB_00744c32:
00744C32  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00744C36  7D 21                     JGE 0x00744c59
00744C38  68 E8 0F 7A 00            PUSH 0x7a0fe8
00744C3D  6A 00                     PUSH 0x0
00744C3F  68 81 00 00 00            PUSH 0x81
00744C44  68 DC 0F 7A 00            PUSH 0x7a0fdc
00744C49  6A 02                     PUSH 0x2
00744C4B  E8 50 C3 FE FF            CALL 0x00730fa0
00744C50  83 C4 14                  ADD ESP,0x14
00744C53  83 F8 01                  CMP EAX,0x1
00744C56  75 01                     JNZ 0x00744c59
00744C58  CC                        INT3
LAB_00744c59:
00744C59  33 C0                     XOR EAX,EAX
00744C5B  85 C0                     TEST EAX,EAX
00744C5D  75 D3                     JNZ 0x00744c32
00744C5F  6A 01                     PUSH 0x1
00744C61  6A 00                     PUSH 0x0
00744C63  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744C66  51                        PUSH ECX
00744C67  E8 E4 E0 FF FF            CALL 0x00742d50
00744C6C  83 C4 0C                  ADD ESP,0xc
00744C6F  89 85 F4 EF FF FF         MOV dword ptr [EBP + 0xffffeff4],EAX
00744C75  83 BD F4 EF FF FF FF      CMP dword ptr [EBP + 0xffffeff4],-0x1
00744C7C  74 1F                     JZ 0x00744c9d
00744C7E  6A 02                     PUSH 0x2
00744C80  6A 00                     PUSH 0x0
00744C82  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744C85  52                        PUSH EDX
00744C86  E8 C5 E0 FF FF            CALL 0x00742d50
00744C8B  83 C4 0C                  ADD ESP,0xc
00744C8E  89 85 F0 EF FF FF         MOV dword ptr [EBP + 0xffffeff0],EAX
00744C94  83 BD F0 EF FF FF FF      CMP dword ptr [EBP + 0xffffeff0],-0x1
00744C9B  75 08                     JNZ 0x00744ca5
LAB_00744c9d:
00744C9D  83 C8 FF                  OR EAX,0xffffffff
00744CA0  E9 89 01 00 00            JMP 0x00744e2e
LAB_00744ca5:
00744CA5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00744CA8  2B 85 F0 EF FF FF         SUB EAX,dword ptr [EBP + 0xffffeff0]
00744CAE  89 85 E8 EF FF FF         MOV dword ptr [EBP + 0xffffefe8],EAX
00744CB4  83 BD E8 EF FF FF 00      CMP dword ptr [EBP + 0xffffefe8],0x0
00744CBB  0F 8E F9 00 00 00         JLE 0x00744dba
00744CC1  68 00 10 00 00            PUSH 0x1000
00744CC6  6A 00                     PUSH 0x0
00744CC8  8B 8D EC EF FF FF         MOV ECX,dword ptr [EBP + 0xffffefec]
00744CCE  51                        PUSH ECX
00744CCF  E8 3C 67 FF FF            CALL 0x0073b410
00744CD4  83 C4 0C                  ADD ESP,0xc
00744CD7  68 00 80 00 00            PUSH 0x8000
00744CDC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744CDF  52                        PUSH EDX
00744CE0  E8 6B 12 00 00            CALL 0x00745f50
00744CE5  83 C4 08                  ADD ESP,0x8
00744CE8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00744ceb:
00744CEB  81 BD E8 EF FF FF 00 10 00 00  CMP dword ptr [EBP + 0xffffefe8],0x1000
00744CF5  7C 0C                     JL 0x00744d03
00744CF7  C7 85 E0 EF FF FF 00 10 00 00  MOV dword ptr [EBP + 0xffffefe0],0x1000
00744D01  EB 0C                     JMP 0x00744d0f
LAB_00744d03:
00744D03  8B 85 E8 EF FF FF         MOV EAX,dword ptr [EBP + 0xffffefe8]
00744D09  89 85 E0 EF FF FF         MOV dword ptr [EBP + 0xffffefe0],EAX
LAB_00744d0f:
00744D0F  8B 8D E0 EF FF FF         MOV ECX,dword ptr [EBP + 0xffffefe0]
00744D15  89 8D F8 EF FF FF         MOV dword ptr [EBP + 0xffffeff8],ECX
00744D1B  81 BD E8 EF FF FF 00 10 00 00  CMP dword ptr [EBP + 0xffffefe8],0x1000
00744D25  7C 0C                     JL 0x00744d33
00744D27  C7 85 DC EF FF FF 00 10 00 00  MOV dword ptr [EBP + 0xffffefdc],0x1000
00744D31  EB 0C                     JMP 0x00744d3f
LAB_00744d33:
00744D33  8B 95 E8 EF FF FF         MOV EDX,dword ptr [EBP + 0xffffefe8]
00744D39  89 95 DC EF FF FF         MOV dword ptr [EBP + 0xffffefdc],EDX
LAB_00744d3f:
00744D3F  8B 85 DC EF FF FF         MOV EAX,dword ptr [EBP + 0xffffefdc]
00744D45  50                        PUSH EAX
00744D46  8B 8D EC EF FF FF         MOV ECX,dword ptr [EBP + 0xffffefec]
00744D4C  51                        PUSH ECX
00744D4D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744D50  52                        PUSH EDX
00744D51  E8 1A 96 FF FF            CALL 0x0073e370
00744D56  83 C4 0C                  ADD ESP,0xc
00744D59  89 85 F8 EF FF FF         MOV dword ptr [EBP + 0xffffeff8],EAX
00744D5F  83 BD F8 EF FF FF FF      CMP dword ptr [EBP + 0xffffeff8],-0x1
00744D66  75 21                     JNZ 0x00744d89
00744D68  83 3D 4C 71 85 00 05      CMP dword ptr [0x0085714c],0x5
00744D6F  75 0A                     JNZ 0x00744d7b
00744D71  C7 05 48 71 85 00 0D 00 00 00  MOV dword ptr [0x00857148],0xd
LAB_00744d7b:
00744D7B  8B 85 F8 EF FF FF         MOV EAX,dword ptr [EBP + 0xffffeff8]
00744D81  89 85 E4 EF FF FF         MOV dword ptr [EBP + 0xffffefe4],EAX
00744D87  EB 1F                     JMP 0x00744da8
LAB_00744d89:
00744D89  8B 8D E8 EF FF FF         MOV ECX,dword ptr [EBP + 0xffffefe8]
00744D8F  2B 8D F8 EF FF FF         SUB ECX,dword ptr [EBP + 0xffffeff8]
00744D95  89 8D E8 EF FF FF         MOV dword ptr [EBP + 0xffffefe8],ECX
00744D9B  83 BD E8 EF FF FF 00      CMP dword ptr [EBP + 0xffffefe8],0x0
00744DA2  0F 8F 43 FF FF FF         JG 0x00744ceb
LAB_00744da8:
00744DA8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00744DAB  52                        PUSH EDX
00744DAC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744DAF  50                        PUSH EAX
00744DB0  E8 9B 11 00 00            CALL 0x00745f50
00744DB5  83 C4 08                  ADD ESP,0x8
00744DB8  EB 59                     JMP 0x00744e13
LAB_00744dba:
00744DBA  83 BD E8 EF FF FF 00      CMP dword ptr [EBP + 0xffffefe8],0x0
00744DC1  7D 50                     JGE 0x00744e13
00744DC3  6A 00                     PUSH 0x0
00744DC5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00744DC8  51                        PUSH ECX
00744DC9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744DCC  52                        PUSH EDX
00744DCD  E8 7E DF FF FF            CALL 0x00742d50
00744DD2  83 C4 0C                  ADD ESP,0xc
00744DD5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744DD8  50                        PUSH EAX
00744DD9  E8 52 C1 FF FF            CALL 0x00740f30
00744DDE  83 C4 04                  ADD ESP,0x4
00744DE1  50                        PUSH EAX
00744DE2  FF 15 50 BB 85 00         CALL dword ptr [0x0085bb50]
00744DE8  F7 D8                     NEG EAX
00744DEA  1B C0                     SBB EAX,EAX
00744DEC  F7 D8                     NEG EAX
00744DEE  48                        DEC EAX
00744DEF  89 85 E4 EF FF FF         MOV dword ptr [EBP + 0xffffefe4],EAX
00744DF5  83 BD E4 EF FF FF FF      CMP dword ptr [EBP + 0xffffefe4],-0x1
00744DFC  75 15                     JNZ 0x00744e13
00744DFE  C7 05 48 71 85 00 0D 00 00 00  MOV dword ptr [0x00857148],0xd
00744E08  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
00744E0E  A3 4C 71 85 00            MOV [0x0085714c],EAX
LAB_00744e13:
00744E13  6A 00                     PUSH 0x0
00744E15  8B 8D F4 EF FF FF         MOV ECX,dword ptr [EBP + 0xffffeff4]
00744E1B  51                        PUSH ECX
00744E1C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744E1F  52                        PUSH EDX
00744E20  E8 2B DF FF FF            CALL 0x00742d50
00744E25  83 C4 0C                  ADD ESP,0xc
00744E28  8B 85 E4 EF FF FF         MOV EAX,dword ptr [EBP + 0xffffefe4]
LAB_00744e2e:
00744E2E  5F                        POP EDI
00744E2F  5E                        POP ESI
00744E30  5B                        POP EBX
00744E31  8B E5                     MOV ESP,EBP
00744E33  5D                        POP EBP
00744E34  C3                        RET
