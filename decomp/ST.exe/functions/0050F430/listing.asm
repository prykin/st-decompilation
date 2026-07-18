CPanelTy::SetCmdObj:
0050F430  55                        PUSH EBP
0050F431  8B EC                     MOV EBP,ESP
0050F433  81 EC 98 01 00 00         SUB ESP,0x198
0050F439  A1 84 87 80 00            MOV EAX,[0x00808784]
0050F43E  53                        PUSH EBX
0050F43F  33 DB                     XOR EBX,EBX
0050F441  56                        PUSH ESI
0050F442  3B C3                     CMP EAX,EBX
0050F444  57                        PUSH EDI
0050F445  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0050F448  0F 85 A2 05 00 00         JNZ 0x0050f9f0
0050F44E  39 1D 88 87 80 00         CMP dword ptr [0x00808788],EBX
0050F454  75 14                     JNZ 0x0050f46a
0050F456  39 1D 8C 87 80 00         CMP dword ptr [0x0080878c],EBX
0050F45C  75 0C                     JNZ 0x0050f46a
0050F45E  39 1D 90 87 80 00         CMP dword ptr [0x00808790],EBX
0050F464  75 04                     JNZ 0x0050f46a
0050F466  33 C0                     XOR EAX,EAX
0050F468  EB 05                     JMP 0x0050f46f
LAB_0050f46a:
0050F46A  B8 01 00 00 00            MOV EAX,0x1
LAB_0050f46f:
0050F46F  3B C3                     CMP EAX,EBX
0050F471  0F 85 79 05 00 00         JNZ 0x0050f9f0
0050F477  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050F47C  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
0050F482  8D 8D 1C FF FF FF         LEA ECX,[EBP + 0xffffff1c]
0050F488  53                        PUSH EBX
0050F489  52                        PUSH EDX
0050F48A  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
0050F490  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050F496  E8 55 E3 21 00            CALL 0x0072d7f0
0050F49B  8B F0                     MOV ESI,EAX
0050F49D  83 C4 08                  ADD ESP,0x8
0050F4A0  3B F3                     CMP ESI,EBX
0050F4A2  0F 85 08 05 00 00         JNZ 0x0050f9b0
0050F4A8  68 AE 00 00 00            PUSH 0xae
0050F4AD  E8 7D 69 EF FF            CALL 0x00405e2f
0050F4B2  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0050F4B5  83 C4 04                  ADD ESP,0x4
0050F4B8  8A 87 52 0C 00 00         MOV AL,byte ptr [EDI + 0xc52]
0050F4BE  89 9F 2C 01 00 00         MOV dword ptr [EDI + 0x12c],EBX
0050F4C4  3A C3                     CMP AL,BL
0050F4C6  75 09                     JNZ 0x0050f4d1
0050F4C8  53                        PUSH EBX
0050F4C9  53                        PUSH EBX
0050F4CA  8B CF                     MOV ECX,EDI
0050F4CC  E8 44 29 EF FF            CALL 0x00401e15
LAB_0050f4d1:
0050F4D1  C7 87 2C 01 00 00 01 00 00 00  MOV dword ptr [EDI + 0x12c],0x1
0050F4DB  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
0050F4E1  3B CB                     CMP ECX,EBX
0050F4E3  74 06                     JZ 0x0050f4eb
0050F4E5  53                        PUSH EBX
0050F4E6  E8 88 25 EF FF            CALL 0x00401a73
LAB_0050f4eb:
0050F4EB  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
0050F4F1  3B CB                     CMP ECX,EBX
0050F4F3  74 06                     JZ 0x0050f4fb
0050F4F5  53                        PUSH EBX
0050F4F6  E8 78 25 EF FF            CALL 0x00401a73
LAB_0050f4fb:
0050F4FB  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
0050F501  3B CB                     CMP ECX,EBX
0050F503  74 06                     JZ 0x0050f50b
0050F505  53                        PUSH EBX
0050F506  E8 68 25 EF FF            CALL 0x00401a73
LAB_0050f50b:
0050F50B  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
0050F511  3B CB                     CMP ECX,EBX
0050F513  74 06                     JZ 0x0050f51b
0050F515  8B 01                     MOV EAX,dword ptr [ECX]
0050F517  53                        PUSH EBX
0050F518  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_0050f51b:
0050F51B  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
0050F521  3B CB                     CMP ECX,EBX
0050F523  74 07                     JZ 0x0050f52c
0050F525  53                        PUSH EBX
0050F526  53                        PUSH EBX
0050F527  E8 CB 55 EF FF            CALL 0x00404af7
LAB_0050f52c:
0050F52C  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
0050F532  3B CB                     CMP ECX,EBX
0050F534  74 06                     JZ 0x0050f53c
0050F536  53                        PUSH EBX
0050F537  E8 37 25 EF FF            CALL 0x00401a73
LAB_0050f53c:
0050F53C  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
0050F542  3B CB                     CMP ECX,EBX
0050F544  74 06                     JZ 0x0050f54c
0050F546  8B 11                     MOV EDX,dword ptr [ECX]
0050F548  53                        PUSH EBX
0050F549  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_0050f54c:
0050F54C  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
0050F552  3B CB                     CMP ECX,EBX
0050F554  74 06                     JZ 0x0050f55c
0050F556  8B 01                     MOV EAX,dword ptr [ECX]
0050F558  53                        PUSH EBX
0050F559  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_0050f55c:
0050F55C  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
0050F562  3B CB                     CMP ECX,EBX
0050F564  74 06                     JZ 0x0050f56c
0050F566  8B 11                     MOV EDX,dword ptr [ECX]
0050F568  53                        PUSH EBX
0050F569  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_0050f56c:
0050F56C  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
0050F572  3B CB                     CMP ECX,EBX
0050F574  74 06                     JZ 0x0050f57c
0050F576  8B 01                     MOV EAX,dword ptr [ECX]
0050F578  53                        PUSH EBX
0050F579  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_0050f57c:
0050F57C  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0050F582  E8 75 4B EF FF            CALL 0x004040fc
0050F587  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0050F58A  81 E1 FF 00 00 00         AND ECX,0xff
0050F590  8A 94 39 FE 0B 00 00      MOV DL,byte ptr [ECX + EDI*0x1 + 0xbfe]
0050F597  8B C2                     MOV EAX,EDX
0050F599  25 FF 00 00 00            AND EAX,0xff
0050F59E  8D 70 FF                  LEA ESI,[EAX + -0x1]
0050F5A1  83 FE 51                  CMP ESI,0x51
0050F5A4  0F 87 F2 03 00 00         JA 0x0050f99c
0050F5AA  33 C9                     XOR ECX,ECX
0050F5AC  8A 8E 60 FA 50 00         MOV CL,byte ptr [ESI + 0x50fa60]
switchD_0050f5b2::switchD:
0050F5B2  FF 24 8D FC F9 50 00      JMP dword ptr [ECX*0x4 + 0x50f9fc]
switchD_0050f5b2::caseD_1:
0050F5B9  6A FF                     PUSH -0x1
0050F5BB  8D 55 FE                  LEA EDX,[EBP + -0x2]
0050F5BE  53                        PUSH EBX
0050F5BF  52                        PUSH EDX
0050F5C0  88 5D FE                  MOV byte ptr [EBP + -0x2],BL
0050F5C3  6A 08                     PUSH 0x8
0050F5C5  E9 C7 03 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_27:
0050F5CA  6A FF                     PUSH -0x1
0050F5CC  8D 45 FC                  LEA EAX,[EBP + -0x4]
0050F5CF  53                        PUSH EBX
0050F5D0  50                        PUSH EAX
0050F5D1  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0050F5D4  6A 09                     PUSH 0x9
0050F5D6  E9 B6 03 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_2:
0050F5DB  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0050F5E1  53                        PUSH EBX
0050F5E2  50                        PUSH EAX
0050F5E3  E8 C5 3F EF FF            CALL 0x004035ad
0050F5E8  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F5EE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F5F3  5F                        POP EDI
0050F5F4  5E                        POP ESI
0050F5F5  5B                        POP EBX
0050F5F6  8B E5                     MOV ESP,EBP
0050F5F8  5D                        POP EBP
0050F5F9  C2 04 00                  RET 0x4
switchD_0050f5b2::caseD_15:
0050F5FC  80 FA 15                  CMP DL,0x15
0050F5FF  6A FF                     PUSH -0x1
0050F601  8D 55 FF                  LEA EDX,[EBP + -0x1]
0050F604  53                        PUSH EBX
0050F605  0F 95 C1                  SETNZ CL
0050F608  52                        PUSH EDX
0050F609  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
0050F60C  6A 28                     PUSH 0x28
0050F60E  E9 7E 03 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_1e:
0050F613  80 EA 1E                  SUB DL,0x1e
0050F616  33 C0                     XOR EAX,EAX
0050F618  F6 DA                     NEG DL
0050F61A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050F61D  6A FF                     PUSH -0x1
0050F61F  1B D2                     SBB EDX,EDX
0050F621  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0050F624  83 E2 0C                  AND EDX,0xc
0050F627  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
0050F62B  8D 4D F0                  LEA ECX,[EBP + -0x10]
0050F62E  83 C2 09                  ADD EDX,0x9
0050F631  53                        PUSH EBX
0050F632  88 45 FA                  MOV byte ptr [EBP + -0x6],AL
0050F635  51                        PUSH ECX
0050F636  C6 45 F0 01               MOV byte ptr [EBP + -0x10],0x1
0050F63A  89 55 F1                  MOV dword ptr [EBP + -0xf],EDX
0050F63D  66 C7 45 F5 01 00         MOV word ptr [EBP + -0xb],0x1
0050F643  C7 45 F7 FF FF FF FF      MOV dword ptr [EBP + -0x9],0xffffffff
0050F64A  6A 1E                     PUSH 0x1e
0050F64C  E9 40 03 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_20:
0050F651  6A FF                     PUSH -0x1
0050F653  8D 55 FD                  LEA EDX,[EBP + -0x3]
0050F656  53                        PUSH EBX
0050F657  52                        PUSH EDX
0050F658  88 5D FD                  MOV byte ptr [EBP + -0x3],BL
0050F65B  6A 22                     PUSH 0x22
0050F65D  E9 2F 03 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_22:
0050F662  33 C0                     XOR EAX,EAX
0050F664  6A FF                     PUSH -0x1
0050F666  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0050F669  8D 4D C4                  LEA ECX,[EBP + -0x3c]
0050F66C  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
0050F670  53                        PUSH EBX
0050F671  51                        PUSH ECX
0050F672  88 45 CA                  MOV byte ptr [EBP + -0x36],AL
0050F675  C6 45 C4 02               MOV byte ptr [EBP + -0x3c],0x2
0050F679  6A 1F                     PUSH 0x1f
0050F67B  E9 11 03 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_1b:
0050F680  33 D2                     XOR EDX,EDX
0050F682  6A FF                     PUSH -0x1
0050F684  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0050F687  8D 45 CC                  LEA EAX,[EBP + -0x34]
0050F68A  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0050F68D  53                        PUSH EBX
0050F68E  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
0050F692  50                        PUSH EAX
0050F693  88 55 D6                  MOV byte ptr [EBP + -0x2a],DL
0050F696  C6 45 CC 06               MOV byte ptr [EBP + -0x34],0x6
0050F69A  66 C7 45 D1 01 00         MOV word ptr [EBP + -0x2f],0x1
0050F6A0  C7 45 D3 FF FF FF FF      MOV dword ptr [EBP + -0x2d],0xffffffff
0050F6A7  6A 1E                     PUSH 0x1e
0050F6A9  E9 E3 02 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_1c:
0050F6AE  33 C9                     XOR ECX,ECX
0050F6B0  6A FF                     PUSH -0x1
0050F6B2  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0050F6B5  8D 55 D8                  LEA EDX,[EBP + -0x28]
0050F6B8  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0050F6BB  53                        PUSH EBX
0050F6BC  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
0050F6C0  52                        PUSH EDX
0050F6C1  88 4D E2                  MOV byte ptr [EBP + -0x1e],CL
0050F6C4  C6 45 D8 04               MOV byte ptr [EBP + -0x28],0x4
0050F6C8  66 C7 45 DD 01 00         MOV word ptr [EBP + -0x23],0x1
0050F6CE  C7 45 DF FF FF FF FF      MOV dword ptr [EBP + -0x21],0xffffffff
0050F6D5  6A 1E                     PUSH 0x1e
0050F6D7  E9 B5 02 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_4f:
0050F6DC  33 C0                     XOR EAX,EAX
0050F6DE  6A FF                     PUSH -0x1
0050F6E0  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0050F6E3  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0050F6E6  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0050F6E9  53                        PUSH EBX
0050F6EA  66 89 45 EC               MOV word ptr [EBP + -0x14],AX
0050F6EE  51                        PUSH ECX
0050F6EF  88 45 EE                  MOV byte ptr [EBP + -0x12],AL
0050F6F2  C6 45 E4 08               MOV byte ptr [EBP + -0x1c],0x8
0050F6F6  66 C7 45 E9 01 00         MOV word ptr [EBP + -0x17],0x1
0050F6FC  C7 45 EB FF FF FF FF      MOV dword ptr [EBP + -0x15],0xffffffff
0050F703  6A 1E                     PUSH 0x1e
0050F705  E9 87 02 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_1d:
0050F70A  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
0050F710  3B CB                     CMP ECX,EBX
0050F712  74 11                     JZ 0x0050f725
0050F714  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
0050F71C  75 07                     JNZ 0x0050f725
0050F71E  6A 01                     PUSH 0x1
0050F720  E8 4E 23 EF FF            CALL 0x00401a73
LAB_0050f725:
0050F725  8B CF                     MOV ECX,EDI
0050F727  E8 6C 30 EF FF            CALL 0x00402798
0050F72C  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F732  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F737  5F                        POP EDI
0050F738  5E                        POP ESI
0050F739  5B                        POP EBX
0050F73A  8B E5                     MOV ESP,EBP
0050F73C  5D                        POP EBP
0050F73D  C2 04 00                  RET 0x4
switchD_0050f5b2::caseD_21:
0050F740  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
0050F746  3B CB                     CMP ECX,EBX
0050F748  74 11                     JZ 0x0050f75b
0050F74A  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
0050F752  75 07                     JNZ 0x0050f75b
0050F754  6A 01                     PUSH 0x1
0050F756  E8 18 23 EF FF            CALL 0x00401a73
LAB_0050f75b:
0050F75B  8B CF                     MOV ECX,EDI
0050F75D  E8 36 30 EF FF            CALL 0x00402798
0050F762  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F768  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F76D  5F                        POP EDI
0050F76E  5E                        POP ESI
0050F76F  5B                        POP EBX
0050F770  8B E5                     MOV ESP,EBP
0050F772  5D                        POP EBP
0050F773  C2 04 00                  RET 0x4
switchD_0050f5b2::caseD_44:
0050F776  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
0050F77C  3B CB                     CMP ECX,EBX
0050F77E  74 11                     JZ 0x0050f791
0050F780  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
0050F788  75 07                     JNZ 0x0050f791
0050F78A  6A 01                     PUSH 0x1
0050F78C  E8 E2 22 EF FF            CALL 0x00401a73
LAB_0050f791:
0050F791  8B CF                     MOV ECX,EDI
0050F793  E8 00 30 EF FF            CALL 0x00402798
0050F798  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F79E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F7A3  5F                        POP EDI
0050F7A4  5E                        POP ESI
0050F7A5  5B                        POP EBX
0050F7A6  8B E5                     MOV ESP,EBP
0050F7A8  5D                        POP EBP
0050F7A9  C2 04 00                  RET 0x4
switchD_0050f5b2::caseD_30:
0050F7AC  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
0050F7B2  3B CB                     CMP ECX,EBX
0050F7B4  74 12                     JZ 0x0050f7c8
0050F7B6  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
0050F7BE  75 08                     JNZ 0x0050f7c8
0050F7C0  53                        PUSH EBX
0050F7C1  6A 01                     PUSH 0x1
0050F7C3  E8 2F 53 EF FF            CALL 0x00404af7
LAB_0050f7c8:
0050F7C8  8B CF                     MOV ECX,EDI
0050F7CA  E8 C9 2F EF FF            CALL 0x00402798
0050F7CF  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F7D5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F7DA  5F                        POP EDI
0050F7DB  5E                        POP ESI
0050F7DC  5B                        POP EBX
0050F7DD  8B E5                     MOV ESP,EBP
0050F7DF  5D                        POP EBP
0050F7E0  C2 04 00                  RET 0x4
switchD_0050f5b2::caseD_31:
0050F7E3  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
0050F7E9  3B CB                     CMP ECX,EBX
0050F7EB  74 13                     JZ 0x0050f800
0050F7ED  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
0050F7F5  75 09                     JNZ 0x0050f800
0050F7F7  6A 01                     PUSH 0x1
0050F7F9  6A 01                     PUSH 0x1
0050F7FB  E8 F7 52 EF FF            CALL 0x00404af7
LAB_0050f800:
0050F800  8B CF                     MOV ECX,EDI
0050F802  E8 91 2F EF FF            CALL 0x00402798
0050F807  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F80D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F812  5F                        POP EDI
0050F813  5E                        POP ESI
0050F814  5B                        POP EBX
0050F815  8B E5                     MOV ESP,EBP
0050F817  5D                        POP EBP
0050F818  C2 04 00                  RET 0x4
switchD_0050f5b2::caseD_28:
0050F81B  B9 08 00 00 00            MOV ECX,0x8
0050F820  33 C0                     XOR EAX,EAX
0050F822  8D BD 8C FE FF FF         LEA EDI,[EBP + 0xfffffe8c]
0050F828  80 FA 28                  CMP DL,0x28
0050F82B  F3 AB                     STOSD.REP ES:EDI
0050F82D  AA                        STOSB ES:EDI
0050F82E  0F 95 C2                  SETNZ DL
0050F831  6A FF                     PUSH -0x1
0050F833  8D 85 8C FE FF FF         LEA EAX,[EBP + 0xfffffe8c]
0050F839  83 C2 0C                  ADD EDX,0xc
0050F83C  53                        PUSH EBX
0050F83D  50                        PUSH EAX
0050F83E  88 95 8C FE FF FF         MOV byte ptr [EBP + 0xfffffe8c],DL
0050F844  6A 17                     PUSH 0x17
0050F846  E9 46 01 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_39:
0050F84B  B9 08 00 00 00            MOV ECX,0x8
0050F850  33 C0                     XOR EAX,EAX
0050F852  8D BD 68 FE FF FF         LEA EDI,[EBP + 0xfffffe68]
0050F858  80 FA 39                  CMP DL,0x39
0050F85B  F3 AB                     STOSD.REP ES:EDI
0050F85D  0F 95 C1                  SETNZ CL
0050F860  6A FF                     PUSH -0x1
0050F862  8D 95 68 FE FF FF         LEA EDX,[EBP + 0xfffffe68]
0050F868  83 C1 0C                  ADD ECX,0xc
0050F86B  53                        PUSH EBX
0050F86C  AA                        STOSB ES:EDI
0050F86D  52                        PUSH EDX
0050F86E  88 8D 68 FE FF FF         MOV byte ptr [EBP + 0xfffffe68],CL
0050F874  6A 17                     PUSH 0x17
0050F876  E9 16 01 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_23:
0050F87B  B9 08 00 00 00            MOV ECX,0x8
0050F880  33 C0                     XOR EAX,EAX
0050F882  8D BD F8 FE FF FF         LEA EDI,[EBP + 0xfffffef8]
0050F888  6A FF                     PUSH -0x1
0050F88A  F3 AB                     STOSD.REP ES:EDI
0050F88C  AA                        STOSB ES:EDI
0050F88D  8D 85 F8 FE FF FF         LEA EAX,[EBP + 0xfffffef8]
0050F893  53                        PUSH EBX
0050F894  50                        PUSH EAX
0050F895  C6 85 F8 FE FF FF 09      MOV byte ptr [EBP + 0xfffffef8],0x9
0050F89C  6A 17                     PUSH 0x17
0050F89E  E9 EE 00 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_24:
0050F8A3  B9 08 00 00 00            MOV ECX,0x8
0050F8A8  33 C0                     XOR EAX,EAX
0050F8AA  8D BD 60 FF FF FF         LEA EDI,[EBP + 0xffffff60]
0050F8B0  6A FF                     PUSH -0x1
0050F8B2  F3 AB                     STOSD.REP ES:EDI
0050F8B4  33 C9                     XOR ECX,ECX
0050F8B6  80 FA 24                  CMP DL,0x24
0050F8B9  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
0050F8BF  53                        PUSH EBX
0050F8C0  0F 94 C1                  SETZ CL
0050F8C3  AA                        STOSB ES:EDI
0050F8C4  52                        PUSH EDX
0050F8C5  C6 85 60 FF FF FF 08      MOV byte ptr [EBP + 0xffffff60],0x8
0050F8CC  89 8D 7D FF FF FF         MOV dword ptr [EBP + 0xffffff7d],ECX
0050F8D2  6A 17                     PUSH 0x17
0050F8D4  E9 B8 00 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_36:
0050F8D9  B9 08 00 00 00            MOV ECX,0x8
0050F8DE  33 C0                     XOR EAX,EAX
0050F8E0  8D BD D4 FE FF FF         LEA EDI,[EBP + 0xfffffed4]
0050F8E6  6A FF                     PUSH -0x1
0050F8E8  F3 AB                     STOSD.REP ES:EDI
0050F8EA  AA                        STOSB ES:EDI
0050F8EB  8D 85 D4 FE FF FF         LEA EAX,[EBP + 0xfffffed4]
0050F8F1  53                        PUSH EBX
0050F8F2  50                        PUSH EAX
0050F8F3  C6 85 D4 FE FF FF 12      MOV byte ptr [EBP + 0xfffffed4],0x12
0050F8FA  6A 17                     PUSH 0x17
0050F8FC  E9 90 00 00 00            JMP 0x0050f991
switchD_0050f5b2::caseD_3e:
0050F901  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0050F907  6A 6C                     PUSH 0x6c
0050F909  6A 0E                     PUSH 0xe
0050F90B  E8 9D 3C EF FF            CALL 0x004035ad
0050F910  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F916  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F91B  5F                        POP EDI
0050F91C  5E                        POP ESI
0050F91D  5B                        POP EBX
0050F91E  8B E5                     MOV ESP,EBP
0050F920  5D                        POP EBP
0050F921  C2 04 00                  RET 0x4
switchD_0050f5b2::caseD_38:
0050F924  B9 08 00 00 00            MOV ECX,0x8
0050F929  33 C0                     XOR EAX,EAX
0050F92B  8D 7D 84                  LEA EDI,[EBP + -0x7c]
0050F92E  6A FF                     PUSH -0x1
0050F930  F3 AB                     STOSD.REP ES:EDI
0050F932  33 C9                     XOR ECX,ECX
0050F934  80 FA 38                  CMP DL,0x38
0050F937  8D 55 84                  LEA EDX,[EBP + -0x7c]
0050F93A  53                        PUSH EBX
0050F93B  0F 95 C1                  SETNZ CL
0050F93E  AA                        STOSB ES:EDI
0050F93F  52                        PUSH EDX
0050F940  C6 45 84 1A               MOV byte ptr [EBP + -0x7c],0x1a
0050F944  89 4D A1                  MOV dword ptr [EBP + -0x5f],ECX
0050F947  6A 17                     PUSH 0x17
0050F949  EB 46                     JMP 0x0050f991
switchD_0050f5b2::caseD_50:
0050F94B  B9 08 00 00 00            MOV ECX,0x8
0050F950  33 C0                     XOR EAX,EAX
0050F952  8D BD B0 FE FF FF         LEA EDI,[EBP + 0xfffffeb0]
0050F958  80 FA 50                  CMP DL,0x50
0050F95B  F3 AB                     STOSD.REP ES:EDI
0050F95D  AA                        STOSB ES:EDI
0050F95E  0F 95 C0                  SETNZ AL
0050F961  6A FF                     PUSH -0x1
0050F963  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
0050F969  83 C0 1B                  ADD EAX,0x1b
0050F96C  53                        PUSH EBX
0050F96D  51                        PUSH ECX
0050F96E  88 85 B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],AL
0050F974  6A 17                     PUSH 0x17
0050F976  EB 19                     JMP 0x0050f991
switchD_0050f5b2::caseD_52:
0050F978  B9 06 00 00 00            MOV ECX,0x6
0050F97D  33 C0                     XOR EAX,EAX
0050F97F  8D 7D A8                  LEA EDI,[EBP + -0x58]
0050F982  6A FF                     PUSH -0x1
0050F984  8D 55 A8                  LEA EDX,[EBP + -0x58]
0050F987  53                        PUSH EBX
0050F988  F3 AB                     STOSD.REP ES:EDI
0050F98A  52                        PUSH EDX
0050F98B  C6 45 A8 07               MOV byte ptr [EBP + -0x58],0x7
0050F98F  6A 16                     PUSH 0x16
LAB_0050f991:
0050F991  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0050F997  E8 97 42 EF FF            CALL 0x00403c33
switchD_0050f5b2::caseD_4:
0050F99C  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0050F9A2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F9A7  5F                        POP EDI
0050F9A8  5E                        POP ESI
0050F9A9  5B                        POP EBX
0050F9AA  8B E5                     MOV ESP,EBP
0050F9AC  5D                        POP EBP
0050F9AD  C2 04 00                  RET 0x4
LAB_0050f9b0:
0050F9B0  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
0050F9B6  68 40 29 7C 00            PUSH 0x7c2940
0050F9BB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050F9C0  56                        PUSH ESI
0050F9C1  53                        PUSH EBX
0050F9C2  68 1A 0A 00 00            PUSH 0xa1a
0050F9C7  68 00 27 7C 00            PUSH 0x7c2700
0050F9CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050F9D2  E8 F9 DA 19 00            CALL 0x006ad4d0
0050F9D7  83 C4 18                  ADD ESP,0x18
0050F9DA  85 C0                     TEST EAX,EAX
0050F9DC  74 01                     JZ 0x0050f9df
0050F9DE  CC                        INT3
LAB_0050f9df:
0050F9DF  68 1A 0A 00 00            PUSH 0xa1a
0050F9E4  68 00 27 7C 00            PUSH 0x7c2700
0050F9E9  53                        PUSH EBX
0050F9EA  56                        PUSH ESI
0050F9EB  E8 50 64 19 00            CALL 0x006a5e40
LAB_0050f9f0:
0050F9F0  5F                        POP EDI
0050F9F1  5E                        POP ESI
0050F9F2  5B                        POP EBX
0050F9F3  8B E5                     MOV ESP,EBP
0050F9F5  5D                        POP EBP
0050F9F6  C2 04 00                  RET 0x4
