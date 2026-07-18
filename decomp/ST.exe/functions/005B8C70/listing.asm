FUN_005b8c70:
005B8C70  55                        PUSH EBP
005B8C71  8B EC                     MOV EBP,ESP
005B8C73  83 EC 6C                  SUB ESP,0x6c
005B8C76  8A 41 65                  MOV AL,byte ptr [ECX + 0x65]
005B8C79  53                        PUSH EBX
005B8C7A  56                        PUSH ESI
005B8C7B  3C 02                     CMP AL,0x2
005B8C7D  57                        PUSH EDI
005B8C7E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005B8C81  0F 84 13 02 00 00         JZ 0x005b8e9a
005B8C87  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B8C8C  8D 55 98                  LEA EDX,[EBP + -0x68]
005B8C8F  8D 4D 94                  LEA ECX,[EBP + -0x6c]
005B8C92  6A 00                     PUSH 0x0
005B8C94  52                        PUSH EDX
005B8C95  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
005B8C98  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B8C9E  E8 4D 4B 17 00            CALL 0x0072d7f0
005B8CA3  8B F0                     MOV ESI,EAX
005B8CA5  83 C4 08                  ADD ESP,0x8
005B8CA8  85 F6                     TEST ESI,ESI
005B8CAA  0F 85 AB 01 00 00         JNZ 0x005b8e5b
005B8CB0  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005B8CB3  BB 0D 00 00 00            MOV EBX,0xd
005B8CB8  8D 7E 66                  LEA EDI,[ESI + 0x66]
LAB_005b8cbb:
005B8CBB  8B 07                     MOV EAX,dword ptr [EDI]
005B8CBD  85 C0                     TEST EAX,EAX
005B8CBF  74 09                     JZ 0x005b8cca
005B8CC1  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005B8CC4  50                        PUSH EAX
005B8CC5  E8 E6 C9 12 00            CALL 0x006e56b0
LAB_005b8cca:
005B8CCA  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
005B8CD0  83 C7 04                  ADD EDI,0x4
005B8CD3  4B                        DEC EBX
005B8CD4  75 E5                     JNZ 0x005b8cbb
005B8CD6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005B8CD9  85 C0                     TEST EAX,EAX
005B8CDB  75 15                     JNZ 0x005b8cf2
005B8CDD  C6 86 AA 1C 00 00 00      MOV byte ptr [ESI + 0x1caa],0x0
005B8CE4  C6 86 A9 1C 00 00 00      MOV byte ptr [ESI + 0x1ca9],0x0
005B8CEB  C6 86 5A 1A 00 00 FF      MOV byte ptr [ESI + 0x1a5a],0xff
LAB_005b8cf2:
005B8CF2  8B 86 8C 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d8c]
005B8CF8  83 F8 FF                  CMP EAX,-0x1
005B8CFB  74 0D                     JZ 0x005b8d0a
005B8CFD  50                        PUSH EAX
005B8CFE  8B 86 D0 1D 00 00         MOV EAX,dword ptr [ESI + 0x1dd0]
005B8D04  50                        PUSH EAX
005B8D05  E8 E6 AD 0F 00            CALL 0x006b3af0
LAB_005b8d0a:
005B8D0A  8B 96 AB 1C 00 00         MOV EDX,dword ptr [ESI + 0x1cab]
005B8D10  85 D2                     TEST EDX,EDX
005B8D12  74 29                     JZ 0x005b8d3d
005B8D14  B9 08 00 00 00            MOV ECX,0x8
005B8D19  33 C0                     XOR EAX,EAX
005B8D1B  8D 7D D8                  LEA EDI,[EBP + -0x28]
005B8D1E  F3 AB                     STOSD.REP ES:EDI
005B8D20  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005B8D23  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005B8D26  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
005B8D2D  C7 45 E8 40 69 00 00      MOV dword ptr [EBP + -0x18],0x6940
005B8D34  8B 11                     MOV EDX,dword ptr [ECX]
005B8D36  8D 45 D8                  LEA EAX,[EBP + -0x28]
005B8D39  50                        PUSH EAX
005B8D3A  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005b8d3d:
005B8D3D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B8D40  85 C0                     TEST EAX,EAX
005B8D42  0F 84 F7 00 00 00         JZ 0x005b8e3f
005B8D48  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005B8D4B  85 C0                     TEST EAX,EAX
005B8D4D  74 71                     JZ 0x005b8dc0
005B8D4F  8D 96 9C 1C 00 00         LEA EDX,[ESI + 0x1c9c]
005B8D55  B9 01 01 01 01            MOV ECX,0x1010101
005B8D5A  32 DB                     XOR BL,BL
005B8D5C  89 0A                     MOV dword ptr [EDX],ECX
005B8D5E  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005B8D61  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
005B8D64  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
005B8D67  88 4A 0C                  MOV byte ptr [EDX + 0xc],CL
005B8D6A  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B8D70  84 C0                     TEST AL,AL
005B8D72  0F 86 A5 00 00 00         JBE 0x005b8e1d
LAB_005b8d78:
005B8D78  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B8D7B  25 FF 00 00 00            AND EAX,0xff
005B8D80  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B8D87  2B C8                     SUB ECX,EAX
005B8D89  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B8D8C  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005B8D8F  8D 14 46                  LEA EDX,[ESI + EAX*0x2]
005B8D92  8B 8C 10 78 01 00 00      MOV ECX,dword ptr [EAX + EDX*0x1 + 0x178]
005B8D99  8D 84 10 74 01 00 00      LEA EAX,[EAX + EDX*0x1 + 0x174]
005B8DA0  83 F9 FF                  CMP ECX,-0x1
005B8DA3  74 0A                     JZ 0x005b8daf
005B8DA5  8B 40 48                  MOV EAX,dword ptr [EAX + 0x48]
005B8DA8  51                        PUSH ECX
005B8DA9  50                        PUSH EAX
005B8DAA  E8 41 AD 0F 00            CALL 0x006b3af0
LAB_005b8daf:
005B8DAF  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B8DB5  FE C3                     INC BL
005B8DB7  3A D8                     CMP BL,AL
005B8DB9  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005B8DBC  72 BA                     JC 0x005b8d78
005B8DBE  EB 5D                     JMP 0x005b8e1d
LAB_005b8dc0:
005B8DC0  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B8DC6  32 DB                     XOR BL,BL
005B8DC8  84 C0                     TEST AL,AL
005B8DCA  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005B8DCD  76 4E                     JBE 0x005b8e1d
LAB_005b8dcf:
005B8DCF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B8DD2  81 E1 FF 00 00 00         AND ECX,0xff
005B8DD8  8A 84 31 9C 1C 00 00      MOV AL,byte ptr [ECX + ESI*0x1 + 0x1c9c]
005B8DDF  84 C0                     TEST AL,AL
005B8DE1  74 2B                     JZ 0x005b8e0e
005B8DE3  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005B8DEA  2B C1                     SUB EAX,ECX
005B8DEC  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005B8DEF  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
005B8DF2  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
005B8DF5  8D 84 08 74 01 00 00      LEA EAX,[EAX + ECX*0x1 + 0x174]
005B8DFC  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005B8DFF  83 F9 FF                  CMP ECX,-0x1
005B8E02  74 0A                     JZ 0x005b8e0e
005B8E04  8B 50 48                  MOV EDX,dword ptr [EAX + 0x48]
005B8E07  51                        PUSH ECX
005B8E08  52                        PUSH EDX
005B8E09  E8 E2 AC 0F 00            CALL 0x006b3af0
LAB_005b8e0e:
005B8E0E  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B8E14  FE C3                     INC BL
005B8E16  3A D8                     CMP BL,AL
005B8E18  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005B8E1B  72 B2                     JC 0x005b8dcf
LAB_005b8e1d:
005B8E1D  6A FF                     PUSH -0x1
005B8E1F  6A 01                     PUSH 0x1
005B8E21  6A 06                     PUSH 0x6
005B8E23  8B CE                     MOV ECX,ESI
005B8E25  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005B8E29  E8 C3 BD E4 FF            CALL 0x00404bf1
005B8E2E  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
005B8E31  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B8E36  5F                        POP EDI
005B8E37  5E                        POP ESI
005B8E38  5B                        POP EBX
005B8E39  8B E5                     MOV ESP,EBP
005B8E3B  5D                        POP EBP
005B8E3C  C2 0C 00                  RET 0xc
LAB_005b8e3f:
005B8E3F  8B CE                     MOV ECX,ESI
005B8E41  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005B8E45  E8 E4 B7 E4 FF            CALL 0x0040462e
005B8E4A  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
005B8E4D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B8E52  5F                        POP EDI
005B8E53  5E                        POP ESI
005B8E54  5B                        POP EBX
005B8E55  8B E5                     MOV ESP,EBP
005B8E57  5D                        POP EBP
005B8E58  C2 0C 00                  RET 0xc
LAB_005b8e5b:
005B8E5B  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
005B8E5E  68 C8 CC 7C 00            PUSH 0x7cccc8
005B8E63  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B8E68  56                        PUSH ESI
005B8E69  6A 00                     PUSH 0x0
005B8E6B  68 A4 01 00 00            PUSH 0x1a4
005B8E70  68 74 CB 7C 00            PUSH 0x7ccb74
005B8E75  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B8E7B  E8 50 46 0F 00            CALL 0x006ad4d0
005B8E80  83 C4 18                  ADD ESP,0x18
005B8E83  85 C0                     TEST EAX,EAX
005B8E85  74 01                     JZ 0x005b8e88
005B8E87  CC                        INT3
LAB_005b8e88:
005B8E88  68 A4 01 00 00            PUSH 0x1a4
005B8E8D  68 74 CB 7C 00            PUSH 0x7ccb74
005B8E92  6A 00                     PUSH 0x0
005B8E94  56                        PUSH ESI
005B8E95  E8 A6 CF 0E 00            CALL 0x006a5e40
LAB_005b8e9a:
005B8E9A  5F                        POP EDI
005B8E9B  5E                        POP ESI
005B8E9C  5B                        POP EBX
005B8E9D  8B E5                     MOV ESP,EBP
005B8E9F  5D                        POP EBP
005B8EA0  C2 0C 00                  RET 0xc
