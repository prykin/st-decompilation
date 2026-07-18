FUN_005c5ca0:
005C5CA0  55                        PUSH EBP
005C5CA1  8B EC                     MOV EBP,ESP
005C5CA3  51                        PUSH ECX
005C5CA4  56                        PUSH ESI
005C5CA5  8B F1                     MOV ESI,ECX
005C5CA7  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C5CAD  3C 02                     CMP AL,0x2
005C5CAF  74 34                     JZ 0x005c5ce5
005C5CB1  3C 05                     CMP AL,0x5
005C5CB3  74 30                     JZ 0x005c5ce5
005C5CB5  3C 0F                     CMP AL,0xf
005C5CB7  74 2C                     JZ 0x005c5ce5
005C5CB9  3C 0C                     CMP AL,0xc
005C5CBB  74 28                     JZ 0x005c5ce5
005C5CBD  3C 10                     CMP AL,0x10
005C5CBF  74 24                     JZ 0x005c5ce5
005C5CC1  83 BE 27 1E 00 00 13      CMP dword ptr [ESI + 0x1e27],0x13
005C5CC8  75 0D                     JNZ 0x005c5cd7
005C5CCA  A0 00 34 80 00            MOV AL,[0x00803400]
005C5CCF  3C 14                     CMP AL,0x14
005C5CD1  74 12                     JZ 0x005c5ce5
005C5CD3  3C 15                     CMP AL,0x15
005C5CD5  74 0E                     JZ 0x005c5ce5
LAB_005c5cd7:
005C5CD7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005C5CDE  B9 01 00 00 00            MOV ECX,0x1
005C5CE3  EB 08                     JMP 0x005c5ced
LAB_005c5ce5:
005C5CE5  B9 01 00 00 00            MOV ECX,0x1
005C5CEA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_005c5ced:
005C5CED  53                        PUSH EBX
005C5CEE  57                        PUSH EDI
005C5CEF  89 8E 63 1C 00 00         MOV dword ptr [ESI + 0x1c63],ECX
005C5CF5  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005C5CFC  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005C5D03  8D BE 60 1F 00 00         LEA EDI,[ESI + 0x1f60]
005C5D09  BB 07 00 00 00            MOV EBX,0x7
LAB_005c5d0e:
005C5D0E  8B 07                     MOV EAX,dword ptr [EDI]
005C5D10  85 C0                     TEST EAX,EAX
005C5D12  74 21                     JZ 0x005c5d35
005C5D14  8A 15 7E 87 80 00         MOV DL,byte ptr [0x0080877e]
005C5D1A  84 D2                     TEST DL,DL
005C5D1C  74 17                     JZ 0x005c5d35
005C5D1E  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005C5D21  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5D24  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5D27  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5D2A  8B 01                     MOV EAX,dword ptr [ECX]
005C5D2C  52                        PUSH EDX
005C5D2D  FF 50 18                  CALL dword ptr [EAX + 0x18]
005C5D30  B9 01 00 00 00            MOV ECX,0x1
LAB_005c5d35:
005C5D35  83 C7 04                  ADD EDI,0x4
005C5D38  4B                        DEC EBX
005C5D39  75 D3                     JNZ 0x005c5d0e
005C5D3B  8B 86 5D 21 00 00         MOV EAX,dword ptr [ESI + 0x215d]
005C5D41  85 C0                     TEST EAX,EAX
005C5D43  74 21                     JZ 0x005c5d66
005C5D45  8A 15 7E 87 80 00         MOV DL,byte ptr [0x0080877e]
005C5D4B  84 D2                     TEST DL,DL
005C5D4D  74 17                     JZ 0x005c5d66
005C5D4F  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005C5D52  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5D55  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5D58  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5D5B  8B 01                     MOV EAX,dword ptr [ECX]
005C5D5D  52                        PUSH EDX
005C5D5E  FF 50 18                  CALL dword ptr [EAX + 0x18]
005C5D61  B9 01 00 00 00            MOV ECX,0x1
LAB_005c5d66:
005C5D66  8D BE 25 21 00 00         LEA EDI,[ESI + 0x2125]
005C5D6C  BB 0E 00 00 00            MOV EBX,0xe
LAB_005c5d71:
005C5D71  8B 07                     MOV EAX,dword ptr [EDI]
005C5D73  85 C0                     TEST EAX,EAX
005C5D75  74 28                     JZ 0x005c5d9f
005C5D77  8A 15 7E 87 80 00         MOV DL,byte ptr [0x0080877e]
005C5D7D  84 D2                     TEST DL,DL
005C5D7F  74 1E                     JZ 0x005c5d9f
005C5D81  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005C5D84  85 D2                     TEST EDX,EDX
005C5D86  75 17                     JNZ 0x005c5d9f
005C5D88  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005C5D8B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5D8E  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5D91  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5D94  8B 01                     MOV EAX,dword ptr [ECX]
005C5D96  52                        PUSH EDX
005C5D97  FF 50 18                  CALL dword ptr [EAX + 0x18]
005C5D9A  B9 01 00 00 00            MOV ECX,0x1
LAB_005c5d9f:
005C5D9F  83 C7 04                  ADD EDI,0x4
005C5DA2  4B                        DEC EBX
005C5DA3  75 CC                     JNZ 0x005c5d71
005C5DA5  8B 86 1D 21 00 00         MOV EAX,dword ptr [ESI + 0x211d]
005C5DAB  85 C0                     TEST EAX,EAX
005C5DAD  74 5D                     JZ 0x005c5e0c
005C5DAF  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005C5DB2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5DB5  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5DB8  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005C5DBB  8B 01                     MOV EAX,dword ptr [ECX]
005C5DBD  57                        PUSH EDI
005C5DBE  FF 50 18                  CALL dword ptr [EAX + 0x18]
005C5DC1  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5DC4  33 C0                     XOR EAX,EAX
005C5DC6  C7 46 2D 22 00 00 00      MOV dword ptr [ESI + 0x2d],0x22
005C5DCD  89 86 88 1F 00 00         MOV dword ptr [ESI + 0x1f88],EAX
005C5DD3  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005C5DD6  8B 11                     MOV EDX,dword ptr [ECX]
005C5DD8  57                        PUSH EDI
005C5DD9  FF 52 18                  CALL dword ptr [EDX + 0x18]
005C5DDC  8B 86 84 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f84]
005C5DE2  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005C5DE9  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
005C5DEC  83 F8 0A                  CMP EAX,0xa
005C5DEF  77 07                     JA 0x005c5df8
005C5DF1  B8 01 00 00 00            MOV EAX,0x1
005C5DF6  EB 03                     JMP 0x005c5dfb
LAB_005c5df8:
005C5DF8  83 C0 F7                  ADD EAX,-0x9
LAB_005c5dfb:
005C5DFB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5DFE  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005C5E01  57                        PUSH EDI
005C5E02  8B 11                     MOV EDX,dword ptr [ECX]
005C5E04  FF 52 18                  CALL dword ptr [EDX + 0x18]
005C5E07  B9 01 00 00 00            MOV ECX,0x1
LAB_005c5e0c:
005C5E0C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C5E11  5F                        POP EDI
005C5E12  5B                        POP EBX
005C5E13  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005C5E19  85 C0                     TEST EAX,EAX
005C5E1B  74 12                     JZ 0x005c5e2f
005C5E1D  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005C5E20  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5E23  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5E26  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005C5E29  8B 11                     MOV EDX,dword ptr [ECX]
005C5E2B  50                        PUSH EAX
005C5E2C  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005c5e2f:
005C5E2F  8B 16                     MOV EDX,dword ptr [ESI]
005C5E31  8B CE                     MOV ECX,ESI
005C5E33  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005C5E36  5E                        POP ESI
005C5E37  8B E5                     MOV ESP,EBP
005C5E39  5D                        POP EBP
005C5E3A  C3                        RET
