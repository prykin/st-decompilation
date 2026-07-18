FUN_00751cb0:
00751CB0  55                        PUSH EBP
00751CB1  8B EC                     MOV EBP,ESP
00751CB3  51                        PUSH ECX
00751CB4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00751CB7  53                        PUSH EBX
00751CB8  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00751CBB  56                        PUSH ESI
00751CBC  85 C0                     TEST EAX,EAX
00751CBE  57                        PUSH EDI
00751CBF  75 09                     JNZ 0x00751cca
00751CC1  53                        PUSH EBX
00751CC2  E8 D9 32 F6 FF            CALL 0x006b4fa0
00751CC7  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_00751cca:
00751CCA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00751CCD  33 FF                     XOR EDI,EDI
00751CCF  66 8B 7B 0E               MOV DI,word ptr [EBX + 0xe]
00751CD3  85 F6                     TEST ESI,ESI
00751CD5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00751CD8  75 46                     JNZ 0x00751d20
00751CDA  53                        PUSH EBX
00751CDB  E8 30 33 F6 FF            CALL 0x006b5010
00751CE0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00751CE3  8B F0                     MOV ESI,EAX
00751CE5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00751CE8  6A 01                     PUSH 0x1
00751CEA  C1 EE 02                  SHR ESI,0x2
00751CED  56                        PUSH ESI
00751CEE  57                        PUSH EDI
00751CEF  50                        PUSH EAX
00751CF0  51                        PUSH ECX
00751CF1  E8 FA F3 F7 FF            CALL 0x006d10f0
00751CF6  85 C0                     TEST EAX,EAX
00751CF8  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00751CFB  0F 84 3C 01 00 00         JZ 0x00751e3d
00751D01  50                        PUSH EAX
00751D02  E8 99 32 F6 FF            CALL 0x006b4fa0
00751D07  85 F6                     TEST ESI,ESI
00751D09  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00751D0C  74 31                     JZ 0x00751d3f
00751D0E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00751D11  8B CE                     MOV ECX,ESI
00751D13  8D 73 28                  LEA ESI,[EBX + 0x28]
00751D16  8D 7A 28                  LEA EDI,[EDX + 0x28]
00751D19  F3 A5                     MOVSD.REP ES:EDI,ESI
00751D1B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00751D1E  EB 1F                     JMP 0x00751d3f
LAB_00751d20:
00751D20  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00751D23  85 C0                     TEST EAX,EAX
00751D25  75 09                     JNZ 0x00751d30
00751D27  56                        PUSH ESI
00751D28  E8 73 32 F6 FF            CALL 0x006b4fa0
00751D2D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_00751d30:
00751D30  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00751D33  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00751D36  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00751D39  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00751D3C  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
LAB_00751d3f:
00751D3F  33 D2                     XOR EDX,EDX
00751D41  8B CF                     MOV ECX,EDI
00751D43  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00751D46  66 8B 53 0E               MOV DX,word ptr [EBX + 0xe]
00751D4A  0F AF 4D 18               IMUL ECX,dword ptr [EBP + 0x18]
00751D4E  0F AF D7                  IMUL EDX,EDI
00751D51  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00751D54  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
00751D57  83 C1 1F                  ADD ECX,0x1f
00751D5A  83 C2 1F                  ADD EDX,0x1f
00751D5D  C1 E9 03                  SHR ECX,0x3
00751D60  C1 EA 03                  SHR EDX,0x3
00751D63  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
00751D69  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
00751D6F  83 F8 08                  CMP EAX,0x8
00751D72  75 68                     JNZ 0x00751ddc
00751D74  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00751D77  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
00751D7A  3B D8                     CMP EBX,EAX
00751D7C  75 27                     JNZ 0x00751da5
00751D7E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00751D81  8D 1C 36                  LEA EBX,[ESI + ESI*0x1]
00751D84  3B C3                     CMP EAX,EBX
00751D86  75 20                     JNZ 0x00751da8
00751D88  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00751D8B  56                        PUSH ESI
00751D8C  57                        PUSH EDI
00751D8D  52                        PUSH EDX
00751D8E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00751D91  52                        PUSH EDX
00751D92  51                        PUSH ECX
00751D93  50                        PUSH EAX
00751D94  E8 B7 96 F8 FF            CALL 0x006db450
00751D99  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00751D9C  5F                        POP EDI
00751D9D  5E                        POP ESI
00751D9E  5B                        POP EBX
00751D9F  8B E5                     MOV ESP,EBP
00751DA1  5D                        POP EBP
00751DA2  C2 18 00                  RET 0x18
LAB_00751da5:
00751DA5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
LAB_00751da8:
00751DA8  56                        PUSH ESI
00751DA9  57                        PUSH EDI
00751DAA  8B FA                     MOV EDI,EDX
00751DAC  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00751DAF  F7 DF                     NEG EDI
00751DB1  4E                        DEC ESI
00751DB2  57                        PUSH EDI
00751DB3  0F AF F2                  IMUL ESI,EDX
00751DB6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00751DB9  03 F3                     ADD ESI,EBX
00751DBB  56                        PUSH ESI
00751DBC  50                        PUSH EAX
00751DBD  52                        PUSH EDX
00751DBE  8B D1                     MOV EDX,ECX
00751DC0  F7 DA                     NEG EDX
00751DC2  48                        DEC EAX
00751DC3  52                        PUSH EDX
00751DC4  0F AF C1                  IMUL EAX,ECX
00751DC7  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
00751DCA  50                        PUSH EAX
00751DCB  E8 40 95 F8 FF            CALL 0x006db310
00751DD0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00751DD3  5F                        POP EDI
00751DD4  5E                        POP ESI
00751DD5  5B                        POP EBX
00751DD6  8B E5                     MOV ESP,EBP
00751DD8  5D                        POP EBP
00751DD9  C2 18 00                  RET 0x18
LAB_00751ddc:
00751DDC  83 F8 10                  CMP EAX,0x10
00751DDF  75 68                     JNZ 0x00751e49
00751DE1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00751DE4  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
00751DE7  3B D8                     CMP EBX,EAX
00751DE9  75 27                     JNZ 0x00751e12
00751DEB  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00751DEE  8D 1C 36                  LEA EBX,[ESI + ESI*0x1]
00751DF1  3B C3                     CMP EAX,EBX
00751DF3  75 20                     JNZ 0x00751e15
00751DF5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00751DF8  56                        PUSH ESI
00751DF9  57                        PUSH EDI
00751DFA  52                        PUSH EDX
00751DFB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00751DFE  52                        PUSH EDX
00751DFF  51                        PUSH ECX
00751E00  50                        PUSH EAX
00751E01  E8 CA 91 F8 FF            CALL 0x006dafd0
00751E06  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00751E09  5F                        POP EDI
00751E0A  5E                        POP ESI
00751E0B  5B                        POP EBX
00751E0C  8B E5                     MOV ESP,EBP
00751E0E  5D                        POP EBP
00751E0F  C2 18 00                  RET 0x18
LAB_00751e12:
00751E12  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
LAB_00751e15:
00751E15  56                        PUSH ESI
00751E16  57                        PUSH EDI
00751E17  8B FA                     MOV EDI,EDX
00751E19  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00751E1C  F7 DF                     NEG EDI
00751E1E  4E                        DEC ESI
00751E1F  57                        PUSH EDI
00751E20  0F AF F2                  IMUL ESI,EDX
00751E23  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00751E26  03 F3                     ADD ESI,EBX
00751E28  56                        PUSH ESI
00751E29  50                        PUSH EAX
00751E2A  52                        PUSH EDX
00751E2B  8B D1                     MOV EDX,ECX
00751E2D  F7 DA                     NEG EDX
00751E2F  48                        DEC EAX
00751E30  52                        PUSH EDX
00751E31  0F AF C1                  IMUL EAX,ECX
00751E34  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
00751E37  50                        PUSH EAX
00751E38  E8 93 90 F8 FF            CALL 0x006daed0
LAB_00751e3d:
00751E3D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00751E40  5F                        POP EDI
00751E41  5E                        POP ESI
00751E42  5B                        POP EBX
00751E43  8B E5                     MOV ESP,EBP
00751E45  5D                        POP EBP
00751E46  C2 18 00                  RET 0x18
LAB_00751e49:
00751E49  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00751E4E  6A 4C                     PUSH 0x4c
00751E50  68 30 2B 7F 00            PUSH 0x7f2b30
00751E55  50                        PUSH EAX
00751E56  6A D0                     PUSH -0x30
00751E58  E8 E3 3F F5 FF            CALL 0x006a5e40
00751E5D  5F                        POP EDI
00751E5E  5E                        POP ESI
00751E5F  33 C0                     XOR EAX,EAX
00751E61  5B                        POP EBX
00751E62  8B E5                     MOV ESP,EBP
00751E64  5D                        POP EBP
00751E65  C2 18 00                  RET 0x18
