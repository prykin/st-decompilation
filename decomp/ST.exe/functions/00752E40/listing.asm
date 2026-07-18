FUN_00752e40:
00752E40  55                        PUSH EBP
00752E41  8B EC                     MOV EBP,ESP
00752E43  51                        PUSH ECX
00752E44  53                        PUSH EBX
00752E45  56                        PUSH ESI
00752E46  57                        PUSH EDI
00752E47  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00752E4A  85 FF                     TEST EDI,EDI
00752E4C  75 19                     JNZ 0x00752e67
00752E4E  6A 3E                     PUSH 0x3e
00752E50  E8 BB 7D F5 FF            CALL 0x006aac10
00752E55  8B D8                     MOV EBX,EAX
00752E57  85 DB                     TEST EBX,EBX
00752E59  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00752E5C  75 19                     JNZ 0x00752e77
00752E5E  5F                        POP EDI
00752E5F  5E                        POP ESI
00752E60  5B                        POP EBX
00752E61  8B E5                     MOV ESP,EBP
00752E63  5D                        POP EBP
00752E64  C2 08 00                  RET 0x8
LAB_00752e67:
00752E67  B9 0F 00 00 00            MOV ECX,0xf
00752E6C  33 C0                     XOR EAX,EAX
00752E6E  8B DF                     MOV EBX,EDI
00752E70  F3 AB                     STOSD.REP ES:EDI
00752E72  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00752E75  66 AB                     STOSW ES:EDI
LAB_00752e77:
00752E77  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00752E7A  C7 43 1A FF FF FF FF      MOV dword ptr [EBX + 0x1a],0xffffffff
00752E81  8B 11                     MOV EDX,dword ptr [ECX]
00752E83  8D 41 04                  LEA EAX,[ECX + 0x4]
00752E86  81 FA 52 49 46 46         CMP EDX,0x46464952
00752E8C  0F 85 54 01 00 00         JNZ 0x00752fe6
00752E92  8B 08                     MOV ECX,dword ptr [EAX]
00752E94  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00752E97  83 C0 04                  ADD EAX,0x4
00752E9A  03 C8                     ADD ECX,EAX
00752E9C  83 C0 04                  ADD EAX,0x4
00752E9F  81 FA 57 41 56 45         CMP EDX,0x45564157
00752EA5  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00752EA8  0F 85 38 01 00 00         JNZ 0x00752fe6
00752EAE  3B C1                     CMP EAX,ECX
00752EB0  0F 83 C3 00 00 00         JNC 0x00752f79
LAB_00752eb6:
00752EB6  8B 08                     MOV ECX,dword ptr [EAX]
00752EB8  83 C0 04                  ADD EAX,0x4
00752EBB  81 F9 66 6D 74 20         CMP ECX,0x20746d66
00752EC1  75 78                     JNZ 0x00752f3b
00752EC3  8B 10                     MOV EDX,dword ptr [EAX]
00752EC5  83 C0 04                  ADD EAX,0x4
00752EC8  83 FA 10                  CMP EDX,0x10
00752ECB  0F 82 15 01 00 00         JC 0x00752fe6
00752ED1  83 FA 32                  CMP EDX,0x32
00752ED4  0F 87 0C 01 00 00         JA 0x00752fe6
00752EDA  8B C8                     MOV ECX,EAX
00752EDC  8B F3                     MOV ESI,EBX
00752EDE  83 FA 12                  CMP EDX,0x12
00752EE1  8B 39                     MOV EDI,dword ptr [ECX]
00752EE3  89 3E                     MOV dword ptr [ESI],EDI
00752EE5  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00752EE8  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00752EEB  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00752EEE  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
00752EF1  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00752EF4  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
00752EF7  76 22                     JBE 0x00752f1b
00752EF9  66 8B 48 10               MOV CX,word ptr [EAX + 0x10]
00752EFD  8D 7B 1E                  LEA EDI,[EBX + 0x1e]
00752F00  66 89 4B 10               MOV word ptr [EBX + 0x10],CX
00752F04  8D 4A EE                  LEA ECX,[EDX + -0x12]
00752F07  8B D9                     MOV EBX,ECX
00752F09  8D 70 12                  LEA ESI,[EAX + 0x12]
00752F0C  C1 E9 02                  SHR ECX,0x2
00752F0F  F3 A5                     MOVSD.REP ES:EDI,ESI
00752F11  8B CB                     MOV ECX,EBX
00752F13  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00752F16  83 E1 03                  AND ECX,0x3
00752F19  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00752f1b:
00752F1B  66 8B 0B                  MOV CX,word ptr [EBX]
00752F1E  66 83 F9 01               CMP CX,0x1
00752F22  74 37                     JZ 0x00752f5b
00752F24  66 83 F9 02               CMP CX,0x2
00752F28  0F 85 B8 00 00 00         JNZ 0x00752fe6
00752F2E  66 83 7B 0E 04            CMP word ptr [EBX + 0xe],0x4
00752F33  0F 85 AD 00 00 00         JNZ 0x00752fe6
00752F39  EB 20                     JMP 0x00752f5b
LAB_00752f3b:
00752F3B  81 F9 64 61 74 61         CMP ECX,0x61746164
00752F41  74 2B                     JZ 0x00752f6e
00752F43  8B 10                     MOV EDX,dword ptr [EAX]
00752F45  81 F9 66 61 63 74         CMP ECX,0x74636166
00752F4B  75 0B                     JNZ 0x00752f58
00752F4D  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00752F50  83 C0 04                  ADD EAX,0x4
00752F53  89 4B 1A                  MOV dword ptr [EBX + 0x1a],ECX
00752F56  EB 03                     JMP 0x00752f5b
LAB_00752f58:
00752F58  83 C0 04                  ADD EAX,0x4
LAB_00752f5b:
00752F5B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00752F5E  42                        INC EDX
00752F5F  83 E2 FE                  AND EDX,0xfffffffe
00752F62  03 C2                     ADD EAX,EDX
00752F64  3B C1                     CMP EAX,ECX
00752F66  0F 82 4A FF FF FF         JC 0x00752eb6
00752F6C  EB 0B                     JMP 0x00752f79
LAB_00752f6e:
00752F6E  8B 10                     MOV EDX,dword ptr [EAX]
00752F70  83 C0 04                  ADD EAX,0x4
00752F73  89 53 12                  MOV dword ptr [EBX + 0x12],EDX
00752F76  89 43 16                  MOV dword ptr [EBX + 0x16],EAX
LAB_00752f79:
00752F79  66 83 3B 02               CMP word ptr [EBX],0x2
00752F7D  75 60                     JNZ 0x00752fdf
00752F7F  8B 73 12                  MOV ESI,dword ptr [EBX + 0x12]
00752F82  33 C9                     XOR ECX,ECX
00752F84  66 8B 4B 0C               MOV CX,word ptr [EBX + 0xc]
00752F88  8B C6                     MOV EAX,ESI
00752F8A  33 D2                     XOR EDX,EDX
00752F8C  F7 F1                     DIV ECX
00752F8E  33 D2                     XOR EDX,EDX
00752F90  8B F8                     MOV EDI,EAX
00752F92  8B C6                     MOV EAX,ESI
00752F94  F7 F1                     DIV ECX
00752F96  66 83 7B 02 01            CMP word ptr [EBX + 0x2],0x1
00752F9B  75 1C                     JNZ 0x00752fb9
00752F9D  83 FA 07                  CMP EDX,0x7
00752FA0  7E 05                     JLE 0x00752fa7
00752FA2  83 C2 FA                  ADD EDX,-0x6
00752FA5  EB 02                     JMP 0x00752fa9
LAB_00752fa7:
00752FA7  33 D2                     XOR EDX,EDX
LAB_00752fa9:
00752FA9  8D 41 FA                  LEA EAX,[ECX + -0x6]
00752FAC  0F AF C7                  IMUL EAX,EDI
00752FAF  03 C2                     ADD EAX,EDX
00752FB1  D1 E0                     SHL EAX,0x1
00752FB3  85 C0                     TEST EAX,EAX
00752FB5  7E 2F                     JLE 0x00752fe6
00752FB7  EB 18                     JMP 0x00752fd1
LAB_00752fb9:
00752FB9  83 FA 0E                  CMP EDX,0xe
00752FBC  7E 05                     JLE 0x00752fc3
00752FBE  83 C2 F4                  ADD EDX,-0xc
00752FC1  EB 02                     JMP 0x00752fc5
LAB_00752fc3:
00752FC3  33 D2                     XOR EDX,EDX
LAB_00752fc5:
00752FC5  8D 41 F4                  LEA EAX,[ECX + -0xc]
00752FC8  0F AF C7                  IMUL EAX,EDI
00752FCB  03 C2                     ADD EAX,EDX
00752FCD  85 C0                     TEST EAX,EAX
00752FCF  7E 15                     JLE 0x00752fe6
LAB_00752fd1:
00752FD1  8B 4B 1A                  MOV ECX,dword ptr [EBX + 0x1a]
00752FD4  85 C9                     TEST ECX,ECX
00752FD6  7E 04                     JLE 0x00752fdc
00752FD8  3B C8                     CMP ECX,EAX
00752FDA  7E 03                     JLE 0x00752fdf
LAB_00752fdc:
00752FDC  89 43 1A                  MOV dword ptr [EBX + 0x1a],EAX
LAB_00752fdf:
00752FDF  8B 43 16                  MOV EAX,dword ptr [EBX + 0x16]
00752FE2  85 C0                     TEST EAX,EAX
00752FE4  75 2C                     JNZ 0x00753012
LAB_00752fe6:
00752FE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00752FE9  85 C0                     TEST EAX,EAX
00752FEB  75 06                     JNZ 0x00752ff3
00752FED  53                        PUSH EBX
00752FEE  E8 9D 2E F5 FF            CALL 0x006a5e90
LAB_00752ff3:
00752FF3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00752FF8  6A 5D                     PUSH 0x5d
00752FFA  68 D8 2B 7F 00            PUSH 0x7f2bd8
00752FFF  50                        PUSH EAX
00753000  6A FB                     PUSH -0x5
00753002  E8 39 2E F5 FF            CALL 0x006a5e40
00753007  5F                        POP EDI
00753008  5E                        POP ESI
00753009  33 C0                     XOR EAX,EAX
0075300B  5B                        POP EBX
0075300C  8B E5                     MOV ESP,EBP
0075300E  5D                        POP EBP
0075300F  C2 08 00                  RET 0x8
LAB_00753012:
00753012  5F                        POP EDI
00753013  8B C3                     MOV EAX,EBX
00753015  5E                        POP ESI
00753016  5B                        POP EBX
00753017  8B E5                     MOV ESP,EBP
00753019  5D                        POP EBP
0075301A  C2 08 00                  RET 0x8
