FUN_006e6af0:
006E6AF0  55                        PUSH EBP
006E6AF1  8B EC                     MOV EBP,ESP
006E6AF3  83 EC 34                  SUB ESP,0x34
006E6AF6  53                        PUSH EBX
006E6AF7  56                        PUSH ESI
006E6AF8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E6AFB  33 C0                     XOR EAX,EAX
006E6AFD  57                        PUSH EDI
006E6AFE  33 FF                     XOR EDI,EDI
006E6B00  8A 46 16                  MOV AL,byte ptr [ESI + 0x16]
006E6B03  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006E6B06  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006E6B09  8B 1C 82                  MOV EBX,dword ptr [EDX + EAX*0x4]
006E6B0C  8B 91 A8 00 00 00         MOV EDX,dword ptr [ECX + 0xa8]
006E6B12  33 C0                     XOR EAX,EAX
006E6B14  83 FA 03                  CMP EDX,0x3
006E6B17  0F 87 F0 00 00 00         JA 0x006e6c0d
switchD_006e6b1d::switchD:
006E6B1D  FF 24 95 94 6F 6E 00      JMP dword ptr [EDX*0x4 + 0x6e6f94]
switchD_006e6b1d::caseD_0:
006E6B24  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E6B2A  D9 46 04                  FLD float ptr [ESI + 0x4]
006E6B2D  D8 66 08                  FSUB float ptr [ESI + 0x8]
006E6B30  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6B36  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E6B3C  D8 C9                     FMUL ST1
006E6B3E  E8 45 77 04 00            CALL 0x0072e288
006E6B43  D9 46 04                  FLD float ptr [ESI + 0x4]
006E6B46  D8 46 08                  FADD float ptr [ESI + 0x8]
006E6B49  8B F8                     MOV EDI,EAX
006E6B4B  D8 C9                     FMUL ST1
006E6B4D  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6B53  E9 AE 00 00 00            JMP 0x006e6c06
switchD_006e6b1d::caseD_1:
006E6B58  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E6B5E  D9 46 04                  FLD float ptr [ESI + 0x4]
006E6B61  D8 46 08                  FADD float ptr [ESI + 0x8]
006E6B64  D8 C9                     FMUL ST1
006E6B66  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6B6C  E8 17 77 04 00            CALL 0x0072e288
006E6B71  D9 46 08                  FLD float ptr [ESI + 0x8]
006E6B74  D8 66 04                  FSUB float ptr [ESI + 0x4]
006E6B77  8B F8                     MOV EDI,EAX
006E6B79  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6B7F  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E6B85  EB 7D                     JMP 0x006e6c04
switchD_006e6b1d::caseD_2:
006E6B87  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E6B8D  D9 46 04                  FLD float ptr [ESI + 0x4]
006E6B90  D8 66 08                  FSUB float ptr [ESI + 0x8]
006E6B93  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6B99  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E6B9F  D8 C9                     FMUL ST1
006E6BA1  E8 E2 76 04 00            CALL 0x0072e288
006E6BA6  8B F8                     MOV EDI,EAX
006E6BA8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E6BAB  DB 80 DC 03 00 00         FILD dword ptr [EAX + 0x3dc]
006E6BB1  D9 46 04                  FLD float ptr [ESI + 0x4]
006E6BB4  D8 46 08                  FADD float ptr [ESI + 0x8]
006E6BB7  D8 CA                     FMUL ST2
006E6BB9  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6BBF  DE E9                     FSUBP
006E6BC1  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E6BC7  EB 3D                     JMP 0x006e6c06
switchD_006e6b1d::caseD_3:
006E6BC9  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E6BCF  DB 81 DC 03 00 00         FILD dword ptr [ECX + 0x3dc]
006E6BD5  D9 46 04                  FLD float ptr [ESI + 0x4]
006E6BD8  D8 46 08                  FADD float ptr [ESI + 0x8]
006E6BDB  D8 CA                     FMUL ST2
006E6BDD  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6BE3  DE E9                     FSUBP
006E6BE5  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E6BEB  E8 98 76 04 00            CALL 0x0072e288
006E6BF0  D9 46 08                  FLD float ptr [ESI + 0x8]
006E6BF3  D8 66 04                  FSUB float ptr [ESI + 0x4]
006E6BF6  8B F8                     MOV EDI,EAX
006E6BF8  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E6BFE  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
LAB_006e6c04:
006E6C04  D8 C9                     FMUL ST1
LAB_006e6c06:
006E6C06  E8 7D 76 04 00            CALL 0x0072e288
006E6C0B  DD D8                     FSTP ST0
switchD_006e6b1d::default:
006E6C0D  0F BF 4B 0E               MOVSX ECX,word ptr [EBX + 0xe]
006E6C11  0F BF 56 0E               MOVSX EDX,word ptr [ESI + 0xe]
006E6C15  2B CA                     SUB ECX,EDX
006E6C17  68 90 6D 85 00            PUSH 0x856d90
006E6C1C  0F BF 56 10               MOVSX EDX,word ptr [ESI + 0x10]
006E6C20  03 CF                     ADD ECX,EDI
006E6C22  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006E6C25  8B F9                     MOV EDI,ECX
006E6C27  0F BF 4B 10               MOVSX ECX,word ptr [EBX + 0x10]
006E6C2B  2B CA                     SUB ECX,EDX
006E6C2D  8D 55 CC                  LEA EDX,[EBP + -0x34]
006E6C30  03 C8                     ADD ECX,EAX
006E6C32  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006E6C35  8B F1                     MOV ESI,ECX
006E6C37  0F BF 43 12               MOVSX EAX,word ptr [EBX + 0x12]
006E6C3B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E6C3E  0F BF 4B 14               MOVSX ECX,word ptr [EBX + 0x14]
006E6C42  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006E6C45  8D 4D CC                  LEA ECX,[EBP + -0x34]
006E6C48  E8 13 98 FC FF            CALL 0x006b0460
006E6C4D  85 C0                     TEST EAX,EAX
006E6C4F  0F 84 34 03 00 00         JZ 0x006e6f89
006E6C55  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E6C58  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006E6C5B  8B C2                     MOV EAX,EDX
006E6C5D  2B C7                     SUB EAX,EDI
006E6C5F  8B 3D 88 6D 85 00         MOV EDI,dword ptr [0x00856d88]
006E6C65  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006E6C68  8B C1                     MOV EAX,ECX
006E6C6A  2B C6                     SUB EAX,ESI
006E6C6C  8B 35 8C 6D 85 00         MOV ESI,dword ptr [0x00856d8c]
006E6C72  0F AF F1                  IMUL ESI,ECX
006E6C75  2B FE                     SUB EDI,ESI
006E6C77  03 FA                     ADD EDI,EDX
006E6C79  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E6C7F  3B CA                     CMP ECX,EDX
006E6C81  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006E6C84  7F 0E                     JG 0x006e6c94
006E6C86  8B F2                     MOV ESI,EDX
006E6C88  2B F1                     SUB ESI,ECX
006E6C8A  03 D1                     ADD EDX,ECX
006E6C8C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006E6C8F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E6C92  EB 20                     JMP 0x006e6cb4
LAB_006e6c94:
006E6C94  8B F1                     MOV ESI,ECX
006E6C96  2B F2                     SUB ESI,EDX
006E6C98  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E6C9B  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006E6C9E  8B 35 84 6D 85 00         MOV ESI,dword ptr [0x00856d84]
006E6CA4  8B 92 DC 03 00 00         MOV EDX,dword ptr [EDX + 0x3dc]
006E6CAA  2B D1                     SUB EDX,ECX
006E6CAC  03 D6                     ADD EDX,ESI
006E6CAE  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006E6CB1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006e6cb4:
006E6CB4  85 C0                     TEST EAX,EAX
006E6CB6  7E 0C                     JLE 0x006e6cc4
006E6CB8  50                        PUSH EAX
006E6CB9  53                        PUSH EBX
006E6CBA  E8 51 91 FE FF            CALL 0x006cfe10
006E6CBF  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006E6CC2  EB 0C                     JMP 0x006e6cd0
LAB_006e6cc4:
006E6CC4  8A 43 0D                  MOV AL,byte ptr [EBX + 0xd]
006E6CC7  D1 E8                     SHR EAX,0x1
006E6CC9  83 E0 0E                  AND EAX,0xe
006E6CCC  8D 44 18 16               LEA EAX,[EAX + EBX*0x1 + 0x16]
LAB_006e6cd0:
006E6CD0  0F BF 53 12               MOVSX EDX,word ptr [EBX + 0x12]
006E6CD4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006E6CD7  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006E6CDA  4A                        DEC EDX
006E6CDB  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006E6CDE  0F 88 A5 02 00 00         JS 0x006e6f89
LAB_006e6ce4:
006E6CE4  33 D2                     XOR EDX,EDX
006E6CE6  8A 10                     MOV DL,byte ptr [EAX]
006E6CE8  40                        INC EAX
006E6CE9  85 D2                     TEST EDX,EDX
006E6CEB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E6CEE  0F 84 5C 02 00 00         JZ 0x006e6f50
006E6CF4  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006E6CF7  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006E6CFE  3B CE                     CMP ECX,ESI
006E6D00  7D 1D                     JGE 0x006e6d1f
006E6D02  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006E6D05  2B F1                     SUB ESI,ECX
006E6D07  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006E6D0A  03 CE                     ADD ECX,ESI
006E6D0C  3B CB                     CMP ECX,EBX
006E6D0E  7D 0A                     JGE 0x006e6d1a
006E6D10  03 FE                     ADD EDI,ESI
006E6D12  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006E6D15  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006E6D18  EB 08                     JMP 0x006e6d22
LAB_006e6d1a:
006E6D1A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006E6D1D  EB 03                     JMP 0x006e6d22
LAB_006e6d1f:
006E6D1F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_006e6d22:
006E6D22  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006E6D25  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006E6D28  3B CE                     CMP ECX,ESI
006E6D2A  0F 8D F0 01 00 00         JGE 0x006e6f20
LAB_006e6d30:
006E6D30  F6 C2 80                  TEST DL,0x80
006E6D33  8B F2                     MOV ESI,EDX
006E6D35  74 21                     JZ 0x006e6d58
006E6D37  83 E6 3F                  AND ESI,0x3f
006E6D3A  3B F1                     CMP ESI,ECX
006E6D3C  7F 2A                     JG 0x006e6d68
006E6D3E  F6 C2 40                  TEST DL,0x40
006E6D41  74 0A                     JZ 0x006e6d4d
006E6D43  40                        INC EAX
006E6D44  33 D2                     XOR EDX,EDX
006E6D46  2B CE                     SUB ECX,ESI
006E6D48  8A 10                     MOV DL,byte ptr [EAX]
006E6D4A  40                        INC EAX
006E6D4B  EB E3                     JMP 0x006e6d30
LAB_006e6d4d:
006E6D4D  03 C6                     ADD EAX,ESI
006E6D4F  33 D2                     XOR EDX,EDX
006E6D51  2B CE                     SUB ECX,ESI
006E6D53  8A 10                     MOV DL,byte ptr [EAX]
006E6D55  40                        INC EAX
006E6D56  EB D8                     JMP 0x006e6d30
LAB_006e6d58:
006E6D58  83 E6 7F                  AND ESI,0x7f
006E6D5B  3B F1                     CMP ESI,ECX
006E6D5D  7F 09                     JG 0x006e6d68
006E6D5F  33 D2                     XOR EDX,EDX
006E6D61  2B CE                     SUB ECX,ESI
006E6D63  8A 10                     MOV DL,byte ptr [EAX]
006E6D65  40                        INC EAX
006E6D66  EB C8                     JMP 0x006e6d30
LAB_006e6d68:
006E6D68  8B DA                     MOV EBX,EDX
006E6D6A  2B F1                     SUB ESI,ECX
006E6D6C  81 E3 C0 00 00 00         AND EBX,0xc0
006E6D72  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E6D75  81 FB 80 00 00 00         CMP EBX,0x80
006E6D7B  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006E6D7E  75 02                     JNZ 0x006e6d82
006E6D80  03 C1                     ADD EAX,ECX
LAB_006e6d82:
006E6D82  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006E6D85  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
006E6D88  03 CB                     ADD ECX,EBX
006E6D8A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006E6D8D  3B CB                     CMP ECX,EBX
006E6D8F  7F 08                     JG 0x006e6d99
006E6D91  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006E6D94  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006E6D97  EB 0B                     JMP 0x006e6da4
LAB_006e6d99:
006E6D99  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E6D9C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006E6D9F  2B CB                     SUB ECX,EBX
006E6DA1  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
LAB_006e6da4:
006E6DA4  2B CB                     SUB ECX,EBX
006E6DA6  85 C9                     TEST ECX,ECX
006E6DA8  0F 8E 0B 01 00 00         JLE 0x006e6eb9
006E6DAE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006E6DB1  03 D9                     ADD EBX,ECX
006E6DB3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006E6DB6  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006E6DB9  03 D9                     ADD EBX,ECX
006E6DBB  3B F1                     CMP ESI,ECX
006E6DBD  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006E6DC0  0F 8F 98 00 00 00         JG 0x006e6e5e
006E6DC6  8B DA                     MOV EBX,EDX
006E6DC8  81 E3 80 00 00 00         AND EBX,0x80
LAB_006e6dce:
006E6DCE  2B CE                     SUB ECX,ESI
006E6DD0  85 DB                     TEST EBX,EBX
006E6DD2  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006E6DD5  74 51                     JZ 0x006e6e28
006E6DD7  F6 C2 40                  TEST DL,0x40
006E6DDA  74 3D                     JZ 0x006e6e19
006E6DDC  33 DB                     XOR EBX,EBX
006E6DDE  8A 18                     MOV BL,byte ptr [EAX]
006E6DE0  40                        INC EAX
006E6DE1  4E                        DEC ESI
006E6DE2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006E6DE5  78 46                     JS 0x006e6e2d
006E6DE7  8A C3                     MOV AL,BL
006E6DE9  8A FB                     MOV BH,BL
006E6DEB  8D 4E 01                  LEA ECX,[ESI + 0x1]
006E6DEE  8B C3                     MOV EAX,EBX
006E6DF0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006E6DF3  8B F1                     MOV ESI,ECX
006E6DF5  C1 E0 10                  SHL EAX,0x10
006E6DF8  66 8B C3                  MOV AX,BX
006E6DFB  C1 E9 02                  SHR ECX,0x2
006E6DFE  F3 AB                     STOSD.REP ES:EDI
006E6E00  8B CE                     MOV ECX,ESI
006E6E02  83 E1 03                  AND ECX,0x3
006E6E05  F3 AA                     STOSB.REP ES:EDI
006E6E07  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E6E0A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006E6E0D  8B C6                     MOV EAX,ESI
006E6E0F  03 F8                     ADD EDI,EAX
006E6E11  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006E6E14  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006E6E17  EB 14                     JMP 0x006e6e2d
LAB_006e6e19:
006E6E19  4E                        DEC ESI
006E6E1A  78 11                     JS 0x006e6e2d
006E6E1C  46                        INC ESI
LAB_006e6e1d:
006E6E1D  8A 18                     MOV BL,byte ptr [EAX]
006E6E1F  88 1F                     MOV byte ptr [EDI],BL
006E6E21  47                        INC EDI
006E6E22  40                        INC EAX
006E6E23  4E                        DEC ESI
006E6E24  75 F7                     JNZ 0x006e6e1d
006E6E26  EB 02                     JMP 0x006e6e2a
LAB_006e6e28:
006E6E28  03 FE                     ADD EDI,ESI
LAB_006e6e2a:
006E6E2A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006e6e2d:
006E6E2D  85 C9                     TEST ECX,ECX
006E6E2F  7E 28                     JLE 0x006e6e59
006E6E31  33 D2                     XOR EDX,EDX
006E6E33  8A 10                     MOV DL,byte ptr [EAX]
006E6E35  8B DA                     MOV EBX,EDX
006E6E37  8B F2                     MOV ESI,EDX
006E6E39  81 E3 80 00 00 00         AND EBX,0x80
006E6E3F  40                        INC EAX
006E6E40  85 DB                     TEST EBX,EBX
006E6E42  74 05                     JZ 0x006e6e49
006E6E44  83 E6 3F                  AND ESI,0x3f
006E6E47  EB 03                     JMP 0x006e6e4c
LAB_006e6e49:
006E6E49  83 E6 7F                  AND ESI,0x7f
LAB_006e6e4c:
006E6E4C  3B F1                     CMP ESI,ECX
006E6E4E  0F 8E 7A FF FF FF         JLE 0x006e6dce
006E6E54  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E6E57  EB 05                     JMP 0x006e6e5e
LAB_006e6e59:
006E6E59  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E6E5C  33 F6                     XOR ESI,ESI
LAB_006e6e5e:
006E6E5E  2B F1                     SUB ESI,ECX
006E6E60  F6 C2 80                  TEST DL,0x80
006E6E63  74 50                     JZ 0x006e6eb5
006E6E65  F6 C2 40                  TEST DL,0x40
006E6E68  74 3C                     JZ 0x006e6ea6
006E6E6A  85 C9                     TEST ECX,ECX
006E6E6C  7E 55                     JLE 0x006e6ec3
006E6E6E  33 DB                     XOR EBX,EBX
006E6E70  8A 18                     MOV BL,byte ptr [EAX]
006E6E72  40                        INC EAX
006E6E73  49                        DEC ECX
006E6E74  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006E6E77  78 4A                     JS 0x006e6ec3
006E6E79  8A C3                     MOV AL,BL
006E6E7B  8A FB                     MOV BH,BL
006E6E7D  41                        INC ECX
006E6E7E  8B C3                     MOV EAX,EBX
006E6E80  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006E6E83  8B D1                     MOV EDX,ECX
006E6E85  C1 E0 10                  SHL EAX,0x10
006E6E88  66 8B C3                  MOV AX,BX
006E6E8B  C1 E9 02                  SHR ECX,0x2
006E6E8E  F3 AB                     STOSD.REP ES:EDI
006E6E90  8B CA                     MOV ECX,EDX
006E6E92  83 E1 03                  AND ECX,0x3
006E6E95  F3 AA                     STOSB.REP ES:EDI
006E6E97  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E6E9A  8B C2                     MOV EAX,EDX
006E6E9C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E6E9F  03 F8                     ADD EDI,EAX
006E6EA1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006E6EA4  EB 1D                     JMP 0x006e6ec3
LAB_006e6ea6:
006E6EA6  49                        DEC ECX
006E6EA7  78 1A                     JS 0x006e6ec3
006E6EA9  41                        INC ECX
LAB_006e6eaa:
006E6EAA  8A 18                     MOV BL,byte ptr [EAX]
006E6EAC  88 1F                     MOV byte ptr [EDI],BL
006E6EAE  47                        INC EDI
006E6EAF  40                        INC EAX
006E6EB0  49                        DEC ECX
006E6EB1  75 F7                     JNZ 0x006e6eaa
006E6EB3  EB 0E                     JMP 0x006e6ec3
LAB_006e6eb5:
006E6EB5  03 F9                     ADD EDI,ECX
006E6EB7  EB 0A                     JMP 0x006e6ec3
LAB_006e6eb9:
006E6EB9  81 7D DC C0 00 00 00      CMP dword ptr [EBP + -0x24],0xc0
006E6EC0  75 01                     JNZ 0x006e6ec3
006E6EC2  40                        INC EAX
LAB_006e6ec3:
006E6EC3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006E6EC6  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006E6EC9  2B CB                     SUB ECX,EBX
006E6ECB  3B F1                     CMP ESI,ECX
006E6ECD  7D 2C                     JGE 0x006e6efb
LAB_006e6ecf:
006E6ECF  81 E2 C0 00 00 00         AND EDX,0xc0
006E6ED5  2B CE                     SUB ECX,ESI
006E6ED7  80 FA 80                  CMP DL,0x80
006E6EDA  75 02                     JNZ 0x006e6ede
006E6EDC  03 C6                     ADD EAX,ESI
LAB_006e6ede:
006E6EDE  33 D2                     XOR EDX,EDX
006E6EE0  8A 10                     MOV DL,byte ptr [EAX]
006E6EE2  8B DA                     MOV EBX,EDX
006E6EE4  8B F2                     MOV ESI,EDX
006E6EE6  80 E3 80                  AND BL,0x80
006E6EE9  40                        INC EAX
006E6EEA  84 DB                     TEST BL,BL
006E6EEC  74 09                     JZ 0x006e6ef7
006E6EEE  83 E6 3F                  AND ESI,0x3f
006E6EF1  F6 C2 40                  TEST DL,0x40
006E6EF4  74 01                     JZ 0x006e6ef7
006E6EF6  40                        INC EAX
LAB_006e6ef7:
006E6EF7  3B F1                     CMP ESI,ECX
006E6EF9  7C D4                     JL 0x006e6ecf
LAB_006e6efb:
006E6EFB  81 E2 C0 00 00 00         AND EDX,0xc0
006E6F01  80 FA 80                  CMP DL,0x80
006E6F04  75 02                     JNZ 0x006e6f08
006E6F06  03 C1                     ADD EAX,ECX
LAB_006e6f08:
006E6F08  8B 0D 8C 6D 85 00         MOV ECX,dword ptr [0x00856d8c]
006E6F0E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E6F11  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006E6F14  03 CA                     ADD ECX,EDX
006E6F16  2B F9                     SUB EDI,ECX
006E6F18  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006E6F1B  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006E6F1E  EB 39                     JMP 0x006e6f59
LAB_006e6f20:
006E6F20  F6 C2 80                  TEST DL,0x80
006E6F23  74 15                     JZ 0x006e6f3a
006E6F25  8B F2                     MOV ESI,EDX
006E6F27  83 E6 3F                  AND ESI,0x3f
006E6F2A  3B F1                     CMP ESI,ECX
006E6F2C  7F DA                     JG 0x006e6f08
006E6F2E  F6 C2 40                  TEST DL,0x40
006E6F31  74 03                     JZ 0x006e6f36
006E6F33  40                        INC EAX
006E6F34  EB 0D                     JMP 0x006e6f43
LAB_006e6f36:
006E6F36  03 C6                     ADD EAX,ESI
006E6F38  EB 09                     JMP 0x006e6f43
LAB_006e6f3a:
006E6F3A  83 E2 7F                  AND EDX,0x7f
006E6F3D  8B F2                     MOV ESI,EDX
006E6F3F  3B F1                     CMP ESI,ECX
006E6F41  7D C5                     JGE 0x006e6f08
LAB_006e6f43:
006E6F43  2B CE                     SUB ECX,ESI
006E6F45  85 C9                     TEST ECX,ECX
006E6F47  7E BF                     JLE 0x006e6f08
006E6F49  33 D2                     XOR EDX,EDX
006E6F4B  8A 10                     MOV DL,byte ptr [EAX]
006E6F4D  40                        INC EAX
006E6F4E  EB D0                     JMP 0x006e6f20
LAB_006e6f50:
006E6F50  2B 3D 8C 6D 85 00         SUB EDI,dword ptr [0x00856d8c]
006E6F56  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006e6f59:
006E6F59  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E6F5F  41                        INC ECX
006E6F60  3B CA                     CMP ECX,EDX
006E6F62  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006E6F65  7F 0A                     JG 0x006e6f71
006E6F67  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E6F6A  4E                        DEC ESI
006E6F6B  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006E6F6E  42                        INC EDX
006E6F6F  EB 08                     JMP 0x006e6f79
LAB_006e6f71:
006E6F71  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E6F74  46                        INC ESI
006E6F75  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006E6F78  4A                        DEC EDX
LAB_006e6f79:
006E6F79  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E6F7C  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006E6F7F  4A                        DEC EDX
006E6F80  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006E6F83  0F 89 5B FD FF FF         JNS 0x006e6ce4
LAB_006e6f89:
006E6F89  5F                        POP EDI
006E6F8A  5E                        POP ESI
006E6F8B  5B                        POP EBX
006E6F8C  8B E5                     MOV ESP,EBP
006E6F8E  5D                        POP EBP
006E6F8F  C2 04 00                  RET 0x4
