EditorClassTy::_Draw:
00720A50  55                        PUSH EBP
00720A51  8B EC                     MOV EBP,ESP
00720A53  83 EC 60                  SUB ESP,0x60
00720A56  8B 81 38 01 00 00         MOV EAX,dword ptr [ECX + 0x138]
00720A5C  53                        PUSH EBX
00720A5D  56                        PUSH ESI
00720A5E  57                        PUSH EDI
00720A5F  85 C0                     TEST EAX,EAX
00720A61  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00720A64  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00720A6B  0F 84 B1 02 00 00         JZ 0x00720d22
00720A71  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00720A74  85 C9                     TEST ECX,ECX
00720A76  0F 84 A6 02 00 00         JZ 0x00720d22
00720A7C  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00720A81  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00720A84  8D 4D A0                  LEA ECX,[EBP + -0x60]
00720A87  6A 00                     PUSH 0x0
00720A89  52                        PUSH EDX
00720A8A  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00720A8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00720A93  E8 58 CD 00 00            CALL 0x0072d7f0
00720A98  8B F0                     MOV ESI,EAX
00720A9A  83 C4 08                  ADD ESP,0x8
00720A9D  85 F6                     TEST ESI,ESI
00720A9F  0F 85 3B 02 00 00         JNZ 0x00720ce0
00720AA5  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00720AA8  8B CB                     MOV ECX,EBX
00720AAA  E8 81 02 00 00            CALL 0x00720d30
00720AAF  8B F8                     MOV EDI,EAX
00720AB1  85 FF                     TEST EDI,EDI
00720AB3  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00720AB6  75 12                     JNZ 0x00720aca
00720AB8  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
00720ABF  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00720AC2  85 FF                     TEST EDI,EDI
00720AC4  0F 84 CB 01 00 00         JZ 0x00720c95
LAB_00720aca:
00720ACA  8D 04 BD 04 00 00 00      LEA EAX,[EDI*0x4 + 0x4]
00720AD1  50                        PUSH EAX
00720AD2  E8 39 A1 F8 FF            CALL 0x006aac10
00720AD7  8B 8B 38 01 00 00         MOV ECX,dword ptr [EBX + 0x138]
00720ADD  8B 93 44 01 00 00         MOV EDX,dword ptr [EBX + 0x144]
00720AE3  33 F6                     XOR ESI,ESI
00720AE5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00720AE8  85 FF                     TEST EDI,EDI
00720AEA  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00720AED  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00720AF0  0F 8E 9F 01 00 00         JLE 0x00720c95
LAB_00720af6:
00720AF6  8B 83 38 01 00 00         MOV EAX,dword ptr [EBX + 0x138]
00720AFC  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00720AFF  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00720B02  3B CA                     CMP ECX,EDX
00720B04  7D 0D                     JGE 0x00720b13
00720B06  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00720B09  41                        INC ECX
00720B0A  8B 54 8A FC               MOV EDX,dword ptr [EDX + ECX*0x4 + -0x4]
00720B0E  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00720B11  EB 02                     JMP 0x00720b15
LAB_00720b13:
00720B13  33 D2                     XOR EDX,EDX
LAB_00720b15:
00720B15  85 D2                     TEST EDX,EDX
00720B17  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00720B1A  0F 84 75 01 00 00         JZ 0x00720c95
00720B20  8B FA                     MOV EDI,EDX
00720B22  83 C9 FF                  OR ECX,0xffffffff
00720B25  33 C0                     XOR EAX,EAX
00720B27  F2 AE                     SCASB.REPNE ES:EDI
00720B29  8B 83 48 01 00 00         MOV EAX,dword ptr [EBX + 0x148]
00720B2F  F7 D1                     NOT ECX
00720B31  49                        DEC ECX
00720B32  8B F9                     MOV EDI,ECX
00720B34  3B F8                     CMP EDI,EAX
00720B36  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00720B39  7F 4A                     JG 0x00720b85
00720B3B  8B 3D FC 0A 7F 00         MOV EDI,dword ptr [0x007f0afc]
00720B41  83 C9 FF                  OR ECX,0xffffffff
00720B44  33 C0                     XOR EAX,EAX
00720B46  F2 AE                     SCASB.REPNE ES:EDI
00720B48  F7 D1                     NOT ECX
00720B4A  51                        PUSH ECX
00720B4B  E8 C0 A0 F8 FF            CALL 0x006aac10
00720B50  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00720B53  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
00720B56  8B 35 FC 0A 7F 00         MOV ESI,dword ptr [0x007f0afc]
00720B5C  8B FE                     MOV EDI,ESI
00720B5E  83 C9 FF                  OR ECX,0xffffffff
00720B61  33 C0                     XOR EAX,EAX
00720B63  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00720B66  F2 AE                     SCASB.REPNE ES:EDI
00720B68  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00720B6B  F7 D1                     NOT ECX
00720B6D  8B 3C 82                  MOV EDI,dword ptr [EDX + EAX*0x4]
00720B70  8B D1                     MOV EDX,ECX
00720B72  C1 E9 02                  SHR ECX,0x2
00720B75  F3 A5                     MOVSD.REP ES:EDI,ESI
00720B77  8B CA                     MOV ECX,EDX
00720B79  83 E1 03                  AND ECX,0x3
00720B7C  F3 A4                     MOVSB.REP ES:EDI,ESI
00720B7E  8B F0                     MOV ESI,EAX
00720B80  E9 01 01 00 00            JMP 0x00720c86
LAB_00720b85:
00720B85  F6 43 20 20               TEST byte ptr [EBX + 0x20],0x20
00720B89  74 18                     JZ 0x00720ba3
00720B8B  52                        PUSH EDX
00720B8C  E8 1F 3E FA FF            CALL 0x006c49b0
00720B91  57                        PUSH EDI
00720B92  6A 2A                     PUSH 0x2a
00720B94  50                        PUSH EAX
00720B95  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00720B98  E8 33 3A 01 00            CALL 0x007345d0
00720B9D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00720BA0  83 C4 0C                  ADD ESP,0xc
LAB_00720ba3:
00720BA3  F6 43 20 04               TEST byte ptr [EBX + 0x20],0x4
00720BA7  74 29                     JZ 0x00720bd2
00720BA9  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
00720BAC  8B 8B 48 01 00 00         MOV ECX,dword ptr [EBX + 0x148]
00720BB2  6A 00                     PUSH 0x0
00720BB4  50                        PUSH EAX
00720BB5  03 CA                     ADD ECX,EDX
00720BB7  6A 00                     PUSH 0x0
00720BB9  51                        PUSH ECX
00720BBA  8B 8B 14 02 00 00         MOV ECX,dword ptr [EBX + 0x214]
00720BC0  6A 00                     PUSH 0x0
00720BC2  E8 39 26 FF FF            CALL 0x00713200
00720BC7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00720BCA  89 04 B2                  MOV dword ptr [EDX + ESI*0x4],EAX
00720BCD  E9 A5 00 00 00            JMP 0x00720c77
LAB_00720bd2:
00720BD2  8B 83 48 01 00 00         MOV EAX,dword ptr [EBX + 0x148]
00720BD8  33 F6                     XOR ESI,ESI
00720BDA  2B F8                     SUB EDI,EAX
00720BDC  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00720BDF  85 FF                     TEST EDI,EDI
00720BE1  7E 5A                     JLE 0x00720c3d
00720BE3  EB 03                     JMP 0x00720be8
LAB_00720be5:
00720BE5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00720be8:
00720BE8  8B BB 14 02 00 00         MOV EDI,dword ptr [EBX + 0x214]
00720BEE  03 C6                     ADD EAX,ESI
00720BF0  03 C2                     ADD EAX,EDX
00720BF2  8B CF                     MOV ECX,EDI
00720BF4  50                        PUSH EAX
00720BF5  E8 B6 03 FF FF            CALL 0x00710fb0
00720BFA  8B 8F 9A 00 00 00         MOV ECX,dword ptr [EDI + 0x9a]
00720C00  25 FF FF 00 00            AND EAX,0xffff
00720C05  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00720C08  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00720C0B  0F BF 44 41 6A            MOVSX EAX,word ptr [ECX + EAX*0x2 + 0x6a]
00720C10  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
00720C13  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
00720C16  3B CA                     CMP ECX,EDX
00720C18  7F 23                     JG 0x00720c3d
00720C1A  8B 93 14 02 00 00         MOV EDX,dword ptr [EBX + 0x214]
00720C20  8B 4A 58                  MOV ECX,dword ptr [EDX + 0x58]
00720C23  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00720C26  03 C8                     ADD ECX,EAX
00720C28  8B 83 48 01 00 00         MOV EAX,dword ptr [EBX + 0x148]
00720C2E  03 D1                     ADD EDX,ECX
00720C30  46                        INC ESI
00720C31  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00720C34  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00720C37  2B D0                     SUB EDX,EAX
00720C39  3B F2                     CMP ESI,EDX
00720C3B  7C A8                     JL 0x00720be5
LAB_00720c3d:
00720C3D  85 F6                     TEST ESI,ESI
00720C3F  75 05                     JNZ 0x00720c46
00720C41  BE 01 00 00 00            MOV ESI,0x1
LAB_00720c46:
00720C46  8D 46 01                  LEA EAX,[ESI + 0x1]
00720C49  50                        PUSH EAX
00720C4A  E8 C1 9F F8 FF            CALL 0x006aac10
00720C4F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00720C52  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00720C55  56                        PUSH ESI
00720C56  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
00720C59  8B 83 48 01 00 00         MOV EAX,dword ptr [EBX + 0x148]
00720C5F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00720C62  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00720C65  03 C6                     ADD EAX,ESI
00720C67  50                        PUSH EAX
00720C68  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
00720C6B  50                        PUSH EAX
00720C6C  E8 CF D6 00 00            CALL 0x0072e340
00720C71  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00720C74  83 C4 0C                  ADD ESP,0xc
LAB_00720c77:
00720C77  F6 43 20 20               TEST byte ptr [EBX + 0x20],0x20
00720C7B  74 09                     JZ 0x00720c86
00720C7D  8D 4D F8                  LEA ECX,[EBP + -0x8]
00720C80  51                        PUSH ECX
00720C81  E8 DA A3 F8 FF            CALL 0x006ab060
LAB_00720c86:
00720C86  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00720C89  46                        INC ESI
00720C8A  3B F0                     CMP ESI,EAX
00720C8C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00720C8F  0F 8C 61 FE FF FF         JL 0x00720af6
LAB_00720c95:
00720C95  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00720C98  8B 13                     MOV EDX,dword ptr [EBX]
00720C9A  50                        PUSH EAX
00720C9B  8B CB                     MOV ECX,EBX
00720C9D  FF 52 08                  CALL dword ptr [EDX + 0x8]
00720CA0  8B F8                     MOV EDI,EAX
00720CA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00720CA5  85 C0                     TEST EAX,EAX
00720CA7  74 26                     JZ 0x00720ccf
00720CA9  83 38 00                  CMP dword ptr [EAX],0x0
00720CAC  74 18                     JZ 0x00720cc6
00720CAE  33 F6                     XOR ESI,ESI
LAB_00720cb0:
00720CB0  50                        PUSH EAX
00720CB1  E8 AA A3 F8 FF            CALL 0x006ab060
00720CB6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00720CB9  83 C6 04                  ADD ESI,0x4
00720CBC  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
00720CBF  8B 0C 0E                  MOV ECX,dword ptr [ESI + ECX*0x1]
00720CC2  85 C9                     TEST ECX,ECX
00720CC4  75 EA                     JNZ 0x00720cb0
LAB_00720cc6:
00720CC6  8D 55 FC                  LEA EDX,[EBP + -0x4]
00720CC9  52                        PUSH EDX
00720CCA  E8 91 A3 F8 FF            CALL 0x006ab060
LAB_00720ccf:
00720CCF  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00720CD2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00720CD7  8B C7                     MOV EAX,EDI
00720CD9  5F                        POP EDI
00720CDA  5E                        POP ESI
00720CDB  5B                        POP EBX
00720CDC  8B E5                     MOV ESP,EBP
00720CDE  5D                        POP EBP
00720CDF  C3                        RET
LAB_00720ce0:
00720CE0  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00720CE3  68 20 0B 7F 00            PUSH 0x7f0b20
00720CE8  68 CC 4C 7A 00            PUSH 0x7a4ccc
00720CED  56                        PUSH ESI
00720CEE  6A 00                     PUSH 0x0
00720CF0  6A 51                     PUSH 0x51
00720CF2  68 08 0B 7F 00            PUSH 0x7f0b08
00720CF7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00720CFD  E8 CE C7 F8 FF            CALL 0x006ad4d0
00720D02  83 C4 18                  ADD ESP,0x18
00720D05  85 C0                     TEST EAX,EAX
00720D07  74 01                     JZ 0x00720d0a
00720D09  CC                        INT3
LAB_00720d0a:
00720D0A  6A 52                     PUSH 0x52
00720D0C  68 08 0B 7F 00            PUSH 0x7f0b08
00720D11  6A 00                     PUSH 0x0
00720D13  56                        PUSH ESI
00720D14  E8 27 51 F8 FF            CALL 0x006a5e40
00720D19  8B C6                     MOV EAX,ESI
00720D1B  5F                        POP EDI
00720D1C  5E                        POP ESI
00720D1D  5B                        POP EBX
00720D1E  8B E5                     MOV ESP,EBP
00720D20  5D                        POP EBP
00720D21  C3                        RET
LAB_00720d22:
00720D22  5F                        POP EDI
00720D23  5E                        POP ESI
00720D24  33 C0                     XOR EAX,EAX
00720D26  5B                        POP EBX
00720D27  8B E5                     MOV ESP,EBP
00720D29  5D                        POP EBP
00720D2A  C3                        RET
