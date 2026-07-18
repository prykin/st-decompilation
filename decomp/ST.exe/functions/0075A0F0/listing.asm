FUN_0075a0f0:
0075A0F0  55                        PUSH EBP
0075A0F1  8B EC                     MOV EBP,ESP
0075A0F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075A0F6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075A0F9  56                        PUSH ESI
0075A0FA  57                        PUSH EDI
0075A0FB  8B B1 96 01 00 00         MOV ESI,dword ptr [ECX + 0x196]
0075A101  33 FF                     XOR EDI,EDI
0075A103  2B C7                     SUB EAX,EDI
0075A105  74 2F                     JZ 0x0075a136
0075A107  83 E8 02                  SUB EAX,0x2
0075A10A  74 1D                     JZ 0x0075a129
0075A10C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075A111  68 4F 01 00 00            PUSH 0x14f
0075A116  68 E0 2D 7F 00            PUSH 0x7f2de0
0075A11B  50                        PUSH EAX
0075A11C  6A 04                     PUSH 0x4
0075A11E  E8 1D BD F4 FF            CALL 0x006a5e40
0075A123  5F                        POP EDI
0075A124  5E                        POP ESI
0075A125  5D                        POP EBP
0075A126  C2 08 00                  RET 0x8
LAB_0075a129:
0075A129  C7 46 04 40 A6 75 00      MOV dword ptr [ESI + 0x4],0x75a640
0075A130  5F                        POP EDI
0075A131  5E                        POP ESI
0075A132  5D                        POP EBP
0075A133  C2 08 00                  RET 0x8
LAB_0075a136:
0075A136  8B 91 B2 01 00 00         MOV EDX,dword ptr [ECX + 0x1b2]
0075A13C  39 7A 08                  CMP dword ptr [EDX + 0x8],EDI
0075A13F  74 22                     JZ 0x0075a163
0075A141  51                        PUSH ECX
0075A142  C7 46 04 50 A3 75 00      MOV dword ptr [ESI + 0x4],0x75a350
0075A149  E8 32 00 00 00            CALL 0x0075a180
0075A14E  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
0075A151  89 7E 44                  MOV dword ptr [ESI + 0x44],EDI
0075A154  89 7E 4C                  MOV dword ptr [ESI + 0x4c],EDI
0075A157  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
0075A15A  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
0075A15D  5F                        POP EDI
0075A15E  5E                        POP ESI
0075A15F  5D                        POP EBP
0075A160  C2 08 00                  RET 0x8
LAB_0075a163:
0075A163  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
0075A166  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
0075A169  C7 46 04 D0 A2 75 00      MOV dword ptr [ESI + 0x4],0x75a2d0
0075A170  5F                        POP EDI
0075A171  5E                        POP ESI
0075A172  5D                        POP EBP
0075A173  C2 08 00                  RET 0x8
