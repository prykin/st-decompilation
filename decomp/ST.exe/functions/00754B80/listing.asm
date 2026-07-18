FUN_00754b80:
00754B80  55                        PUSH EBP
00754B81  8B EC                     MOV EBP,ESP
00754B83  81 EC 1C 02 00 00         SUB ESP,0x21c
00754B89  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00754B8C  53                        PUSH EBX
00754B8D  56                        PUSH ESI
00754B8E  57                        PUSH EDI
00754B8F  85 C9                     TEST ECX,ECX
00754B91  74 13                     JZ 0x00754ba6
00754B93  8B 01                     MOV EAX,dword ptr [ECX]
00754B95  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00754B98  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00754B9B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00754B9E  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00754BA1  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00754BA4  EB 1A                     JMP 0x00754bc0
LAB_00754ba6:
00754BA6  B8 00 7C 00 00            MOV EAX,0x7c00
00754BAB  BA E0 03 00 00            MOV EDX,0x3e0
00754BB0  C7 45 F0 1F 00 00 00      MOV dword ptr [EBP + -0x10],0x1f
00754BB7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00754BBA  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00754BBD  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_00754bc0:
00754BC0  83 C9 FF                  OR ECX,0xffffffff
00754BC3  83 CB FF                  OR EBX,0xffffffff
00754BC6  3D 00 F8 00 00            CMP EAX,0xf800
00754BCB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00754BCE  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00754BD1  C7 45 20 FF FF FF FF      MOV dword ptr [EBP + 0x20],0xffffffff
00754BD8  75 04                     JNZ 0x00754bde
00754BDA  33 C9                     XOR ECX,ECX
00754BDC  EB 0C                     JMP 0x00754bea
LAB_00754bde:
00754BDE  3D 00 7C 00 00            CMP EAX,0x7c00
00754BE3  75 08                     JNZ 0x00754bed
00754BE5  B9 01 00 00 00            MOV ECX,0x1
LAB_00754bea:
00754BEA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00754bed:
00754BED  81 FA E0 07 00 00         CMP EDX,0x7e0
00754BF3  75 07                     JNZ 0x00754bfc
00754BF5  BB 05 00 00 00            MOV EBX,0x5
00754BFA  EB 0D                     JMP 0x00754c09
LAB_00754bfc:
00754BFC  81 FA E0 03 00 00         CMP EDX,0x3e0
00754C02  75 08                     JNZ 0x00754c0c
00754C04  BB 06 00 00 00            MOV EBX,0x6
LAB_00754c09:
00754C09  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00754c0c:
00754C0C  83 FE 1F                  CMP ESI,0x1f
00754C0F  75 07                     JNZ 0x00754c18
00754C11  C7 45 20 0B 00 00 00      MOV dword ptr [EBP + 0x20],0xb
LAB_00754c18:
00754C18  83 F9 FF                  CMP ECX,-0x1
00754C1B  75 15                     JNZ 0x00754c32
00754C1D  33 C9                     XOR ECX,ECX
00754C1F  F6 C4 80                  TEST AH,0x80
00754C22  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00754C25  75 0B                     JNZ 0x00754c32
LAB_00754c27:
00754C27  D1 E0                     SHL EAX,0x1
00754C29  41                        INC ECX
00754C2A  F6 C4 80                  TEST AH,0x80
00754C2D  74 F8                     JZ 0x00754c27
00754C2F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00754c32:
00754C32  83 FB FF                  CMP EBX,-0x1
00754C35  75 17                     JNZ 0x00754c4e
00754C37  33 DB                     XOR EBX,EBX
00754C39  8B C2                     MOV EAX,EDX
00754C3B  F6 C6 80                  TEST DH,0x80
00754C3E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00754C41  75 0B                     JNZ 0x00754c4e
LAB_00754c43:
00754C43  D1 E0                     SHL EAX,0x1
00754C45  43                        INC EBX
00754C46  F6 C4 80                  TEST AH,0x80
00754C49  74 F8                     JZ 0x00754c43
00754C4B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00754c4e:
00754C4E  83 7D 20 FF               CMP dword ptr [EBP + 0x20],-0x1
00754C52  75 1F                     JNZ 0x00754c73
00754C54  F7 C6 00 80 00 00         TEST ESI,0x8000
00754C5A  C7 45 20 00 00 00 00      MOV dword ptr [EBP + 0x20],0x0
00754C61  8B C6                     MOV EAX,ESI
00754C63  75 0E                     JNZ 0x00754c73
LAB_00754c65:
00754C65  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00754C68  D1 E0                     SHL EAX,0x1
00754C6A  47                        INC EDI
00754C6B  F6 C4 80                  TEST AH,0x80
00754C6E  89 7D 20                  MOV dword ptr [EBP + 0x20],EDI
00754C71  74 F2                     JZ 0x00754c65
LAB_00754c73:
00754C73  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00754C76  B8 01 00 00 00            MOV EAX,0x1
00754C7B  39 46 74                  CMP dword ptr [ESI + 0x74],EAX
00754C7E  0F 85 67 01 00 00         JNZ 0x00754deb
00754C84  39 46 24                  CMP dword ptr [ESI + 0x24],EAX
00754C87  74 7C                     JZ 0x00754d05
00754C89  8B 46 7C                  MOV EAX,dword ptr [ESI + 0x7c]
00754C8C  33 FF                     XOR EDI,EDI
00754C8E  85 C0                     TEST EAX,EAX
00754C90  0F 8E DC 00 00 00         JLE 0x00754d72
00754C96  8D 85 E4 FD FF FF         LEA EAX,[EBP + 0xfffffde4]
00754C9C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00754C9F  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
00754CA5  8B 10                     MOV EDX,dword ptr [EAX]
00754CA7  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00754CAA  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00754CAD  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00754CB0  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00754CB3  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00754CB6  EB 03                     JMP 0x00754cbb
LAB_00754cb8:
00754CB8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_00754cbb:
00754CBB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00754CBE  33 D2                     XOR EDX,EDX
00754CC0  8A 34 38                  MOV DH,byte ptr [EAX + EDI*0x1]
00754CC3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00754CC6  D3 FA                     SAR EDX,CL
00754CC8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00754CCB  23 D0                     AND EDX,EAX
00754CCD  33 C0                     XOR EAX,EAX
00754CCF  8A 24 39                  MOV AH,byte ptr [ECX + EDI*0x1]
00754CD2  8B CB                     MOV ECX,EBX
00754CD4  D3 F8                     SAR EAX,CL
00754CD6  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00754CD9  23 C1                     AND EAX,ECX
00754CDB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00754CDE  0B D0                     OR EDX,EAX
00754CE0  33 C0                     XOR EAX,EAX
00754CE2  8A 24 39                  MOV AH,byte ptr [ECX + EDI*0x1]
00754CE5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00754CE8  D3 F8                     SAR EAX,CL
00754CEA  23 45 F0                  AND EAX,dword ptr [EBP + -0x10]
00754CED  0B D0                     OR EDX,EAX
00754CEF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00754CF2  47                        INC EDI
00754CF3  66 89 10                  MOV word ptr [EAX],DX
00754CF6  83 C0 02                  ADD EAX,0x2
00754CF9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00754CFC  8B 46 7C                  MOV EAX,dword ptr [ESI + 0x7c]
00754CFF  3B F8                     CMP EDI,EAX
00754D01  7C B5                     JL 0x00754cb8
00754D03  EB 6D                     JMP 0x00754d72
LAB_00754d05:
00754D05  8B 46 7C                  MOV EAX,dword ptr [ESI + 0x7c]
00754D08  33 D2                     XOR EDX,EDX
00754D0A  85 C0                     TEST EAX,EAX
00754D0C  7E 64                     JLE 0x00754d72
00754D0E  8B 8E 80 00 00 00         MOV ECX,dword ptr [ESI + 0x80]
00754D14  8D 85 E4 FD FF FF         LEA EAX,[EBP + 0xfffffde4]
00754D1A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00754D1D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00754D20  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00754D23  EB 03                     JMP 0x00754d28
LAB_00754d25:
00754D25  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00754d28:
00754D28  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00754D2B  33 C0                     XOR EAX,EAX
00754D2D  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
00754D30  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00754D33  C1 E0 08                  SHL EAX,0x8
00754D36  8B F8                     MOV EDI,EAX
00754D38  D3 FF                     SAR EDI,CL
00754D3A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00754D3D  23 F9                     AND EDI,ECX
00754D3F  8B CB                     MOV ECX,EBX
00754D41  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00754D44  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00754D47  8B F8                     MOV EDI,EAX
00754D49  D3 FF                     SAR EDI,CL
00754D4B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00754D4E  D3 F8                     SAR EAX,CL
00754D50  23 FB                     AND EDI,EBX
00754D52  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00754D55  0B DF                     OR EBX,EDI
00754D57  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00754D5A  23 C7                     AND EAX,EDI
00754D5C  0B D8                     OR EBX,EAX
00754D5E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00754D61  42                        INC EDX
00754D62  66 89 18                  MOV word ptr [EAX],BX
00754D65  83 C0 02                  ADD EAX,0x2
00754D68  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00754D6B  8B 46 7C                  MOV EAX,dword ptr [ESI + 0x7c]
00754D6E  3B D0                     CMP EDX,EAX
00754D70  7C B3                     JL 0x00754d25
LAB_00754d72:
00754D72  8B 96 84 00 00 00         MOV EDX,dword ptr [ESI + 0x84]
00754D78  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00754D7B  3B D0                     CMP EDX,EAX
00754D7D  0F 83 2D 01 00 00         JNC 0x00754eb0
00754D83  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_00754d86:
00754D86  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00754D89  8B C8                     MOV ECX,EAX
00754D8B  48                        DEC EAX
00754D8C  85 C9                     TEST ECX,ECX
00754D8E  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00754D91  0F 84 19 01 00 00         JZ 0x00754eb0
00754D97  6A 01                     PUSH 0x1
00754D99  57                        PUSH EDI
00754D9A  56                        PUSH ESI
00754D9B  E8 30 1B 00 00            CALL 0x007568d0
00754DA0  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00754DA3  33 C0                     XOR EAX,EAX
00754DA5  85 C9                     TEST ECX,ECX
00754DA7  7E 21                     JLE 0x00754dca
00754DA9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_00754dac:
00754DAC  8B 17                     MOV EDX,dword ptr [EDI]
00754DAE  33 DB                     XOR EBX,EBX
00754DB0  83 C1 02                  ADD ECX,0x2
00754DB3  8A 1C 02                  MOV BL,byte ptr [EDX + EAX*0x1]
00754DB6  40                        INC EAX
00754DB7  66 8B 94 5D E4 FD FF FF   MOV DX,word ptr [EBP + EBX*0x2 + 0xfffffde4]
00754DBF  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
00754DC3  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00754DC6  3B C2                     CMP EAX,EDX
00754DC8  7C E2                     JL 0x00754dac
LAB_00754dca:
00754DCA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00754DCD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00754DD0  2B C8                     SUB ECX,EAX
00754DD2  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00754DD5  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00754DD8  8B 8E 84 00 00 00         MOV ECX,dword ptr [ESI + 0x84]
00754DDE  3B C8                     CMP ECX,EAX
00754DE0  72 A4                     JC 0x00754d86
00754DE2  5F                        POP EDI
00754DE3  5E                        POP ESI
00754DE4  5B                        POP EBX
00754DE5  8B E5                     MOV ESP,EBP
00754DE7  5D                        POP EBP
00754DE8  C2 1C 00                  RET 0x1c
LAB_00754deb:
00754DEB  8B 96 84 00 00 00         MOV EDX,dword ptr [ESI + 0x84]
00754DF1  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00754DF4  83 C1 10                  ADD ECX,0x10
00754DF7  83 C3 08                  ADD EBX,0x8
00754DFA  3B D0                     CMP EDX,EAX
00754DFC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00754DFF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00754E02  0F 83 A8 00 00 00         JNC 0x00754eb0
00754E08  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_00754e0b:
00754E0B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00754E0E  8B C8                     MOV ECX,EAX
00754E10  48                        DEC EAX
00754E11  85 C9                     TEST ECX,ECX
00754E13  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00754E16  0F 84 94 00 00 00         JZ 0x00754eb0
00754E1C  6A 01                     PUSH 0x1
00754E1E  57                        PUSH EDI
00754E1F  56                        PUSH ESI
00754E20  E8 AB 1A 00 00            CALL 0x007568d0
00754E25  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00754E28  8B 17                     MOV EDX,dword ptr [EDI]
00754E2A  85 C0                     TEST EAX,EAX
00754E2C  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
00754E33  7E 5F                     JLE 0x00754e94
00754E35  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00754E38  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00754E3B  EB 03                     JMP 0x00754e40
LAB_00754e3d:
00754E3D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00754e40:
00754E40  8B 02                     MOV EAX,dword ptr [EDX]
00754E42  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00754E45  C1 E0 08                  SHL EAX,0x8
00754E48  8B F8                     MOV EDI,EAX
00754E4A  83 C2 03                  ADD EDX,0x3
00754E4D  D3 EF                     SHR EDI,CL
00754E4F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00754E52  23 F9                     AND EDI,ECX
00754E54  8B CB                     MOV ECX,EBX
00754E56  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00754E59  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00754E5C  8B F8                     MOV EDI,EAX
00754E5E  D3 EF                     SHR EDI,CL
00754E60  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00754E63  D3 E8                     SHR EAX,CL
00754E65  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00754E68  23 FB                     AND EDI,EBX
00754E6A  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00754E6D  0B DF                     OR EBX,EDI
00754E6F  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00754E72  23 C7                     AND EAX,EDI
00754E74  83 C1 02                  ADD ECX,0x2
00754E77  0B D8                     OR EBX,EAX
00754E79  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00754E7C  66 89 59 FE               MOV word ptr [ECX + -0x2],BX
00754E80  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00754E83  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00754E86  40                        INC EAX
00754E87  3B C1                     CMP EAX,ECX
00754E89  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00754E8C  7C AF                     JL 0x00754e3d
00754E8E  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00754E91  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00754e94:
00754E94  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00754E97  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00754E9A  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00754E9D  2B D1                     SUB EDX,ECX
00754E9F  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00754EA2  8B 96 84 00 00 00         MOV EDX,dword ptr [ESI + 0x84]
00754EA8  3B D0                     CMP EDX,EAX
00754EAA  0F 82 5B FF FF FF         JC 0x00754e0b
LAB_00754eb0:
00754EB0  5F                        POP EDI
00754EB1  5E                        POP ESI
00754EB2  5B                        POP EBX
00754EB3  8B E5                     MOV ESP,EBP
00754EB5  5D                        POP EBP
00754EB6  C2 1C 00                  RET 0x1c
