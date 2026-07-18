FUN_00516a40:
00516A40  55                        PUSH EBP
00516A41  8B EC                     MOV EBP,ESP
00516A43  81 EC 84 00 00 00         SUB ESP,0x84
00516A49  8B 81 48 02 00 00         MOV EAX,dword ptr [ECX + 0x248]
00516A4F  53                        PUSH EBX
00516A50  56                        PUSH ESI
00516A51  57                        PUSH EDI
00516A52  33 F6                     XOR ESI,ESI
00516A54  6A 04                     PUSH 0x4
00516A56  50                        PUSH EAX
00516A57  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00516A5A  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
00516A5E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00516A61  E8 3A 49 1F 00            CALL 0x0070b3a0
00516A66  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00516A6C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00516A6F  8D 45 80                  LEA EAX,[EBP + -0x80]
00516A72  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
00516A78  56                        PUSH ESI
00516A79  50                        PUSH EAX
00516A7A  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
00516A80  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00516A86  E8 65 6D 21 00            CALL 0x0072d7f0
00516A8B  8B F8                     MOV EDI,EAX
00516A8D  83 C4 10                  ADD ESP,0x10
00516A90  3B FE                     CMP EDI,ESI
00516A92  0F 85 2B 0C 00 00         JNZ 0x005176c3
00516A98  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00516A9B  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
00516A9E  84 C0                     TEST AL,AL
00516AA0  0F 85 96 00 00 00         JNZ 0x00516b3c
00516AA6  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
00516AAC  84 C0                     TEST AL,AL
00516AAE  74 17                     JZ 0x00516ac7
00516AB0  3C 06                     CMP AL,0x6
00516AB2  74 13                     JZ 0x00516ac7
00516AB4  3C 0A                     CMP AL,0xa
00516AB6  74 0F                     JZ 0x00516ac7
00516AB8  C6 83 A2 01 00 00 00      MOV byte ptr [EBX + 0x1a2],0x0
00516ABF  89 B3 AB 01 00 00         MOV dword ptr [EBX + 0x1ab],ESI
00516AC5  EB 12                     JMP 0x00516ad9
LAB_00516ac7:
00516AC7  8B 8B A3 01 00 00         MOV ECX,dword ptr [EBX + 0x1a3]
00516ACD  88 83 A2 01 00 00         MOV byte ptr [EBX + 0x1a2],AL
00516AD3  89 8B AB 01 00 00         MOV dword ptr [EBX + 0x1ab],ECX
LAB_00516ad9:
00516AD9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00516ADC  8B 83 78 01 00 00         MOV EAX,dword ptr [EBX + 0x178]
00516AE2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00516AE5  81 E2 FF 00 00 00         AND EDX,0xff
00516AEB  3B C6                     CMP EAX,ESI
00516AED  C6 83 A1 01 00 00 05      MOV byte ptr [EBX + 0x1a1],0x5
00516AF4  89 BB A3 01 00 00         MOV dword ptr [EBX + 0x1a3],EDI
00516AFA  89 93 A7 01 00 00         MOV dword ptr [EBX + 0x1a7],EDX
00516B00  66 C7 83 AF 01 00 00 32 00  MOV word ptr [EBX + 0x1af],0x32
00516B09  66 C7 83 B1 01 00 00 05 00  MOV word ptr [EBX + 0x1b1],0x5
00516B12  74 2B                     JZ 0x00516b3f
00516B14  C7 43 28 02 42 00 00      MOV dword ptr [EBX + 0x28],0x4202
00516B1B  66 89 73 2C               MOV word ptr [EBX + 0x2c],SI
00516B1F  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
00516B25  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
00516B28  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00516B2E  3B CE                     CMP ECX,ESI
00516B30  74 0D                     JZ 0x00516b3f
00516B32  8B 01                     MOV EAX,dword ptr [ECX]
00516B34  8D 53 18                  LEA EDX,[EBX + 0x18]
00516B37  52                        PUSH EDX
00516B38  FF 10                     CALL dword ptr [EAX]
00516B3A  EB 03                     JMP 0x00516b3f
LAB_00516b3c:
00516B3C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00516b3f:
00516B3F  33 C0                     XOR EAX,EAX
LAB_00516b41:
00516B41  8B C8                     MOV ECX,EAX
00516B43  81 E1 FF FF 00 00         AND ECX,0xffff
00516B49  8B 14 8D 04 FC 7B 00      MOV EDX,dword ptr [ECX*0x4 + 0x7bfc04]
00516B50  80 3C 3A 00               CMP byte ptr [EDX + EDI*0x1],0x0
00516B54  75 09                     JNZ 0x00516b5f
00516B56  40                        INC EAX
00516B57  66 3D 03 00               CMP AX,0x3
00516B5B  72 E4                     JC 0x00516b41
00516B5D  EB 03                     JMP 0x00516b62
LAB_00516b5f:
00516B5F  00 45 F8                  ADD byte ptr [EBP + -0x8],AL
LAB_00516b62:
00516B62  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00516B65  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00516B68  81 E6 FF 00 00 00         AND ESI,0xff
00516B6E  50                        PUSH EAX
00516B6F  57                        PUSH EDI
00516B70  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00516B73  E8 B1 DF EE FF            CALL 0x00404b29
00516B78  83 C4 08                  ADD ESP,0x8
00516B7B  8B CB                     MOV ECX,EBX
00516B7D  50                        PUSH EAX
00516B7E  56                        PUSH ESI
00516B7F  68 FC 55 00 00            PUSH 0x55fc
00516B84  E8 70 D3 EE FF            CALL 0x00403ef9
00516B89  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00516B8C  56                        PUSH ESI
00516B8D  57                        PUSH EDI
00516B8E  E8 5D C8 EE FF            CALL 0x004033f0
00516B93  8B 8B 30 02 00 00         MOV ECX,dword ptr [EBX + 0x230]
00516B99  50                        PUSH EAX
00516B9A  51                        PUSH ECX
00516B9B  E8 00 48 1F 00            CALL 0x0070b3a0
00516BA0  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00516BA3  50                        PUSH EAX
00516BA4  6A 01                     PUSH 0x1
00516BA6  6A 2A                     PUSH 0x2a
00516BA8  6A 35                     PUSH 0x35
00516BAA  52                        PUSH EDX
00516BAB  E8 79 C6 EE FF            CALL 0x00403229
00516BB0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00516BB3  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00516BB9  83 C4 24                  ADD ESP,0x24
00516BBC  6A 0F                     PUSH 0xf
00516BBE  68 91 00 00 00            PUSH 0x91
00516BC3  50                        PUSH EAX
00516BC4  6A 00                     PUSH 0x0
00516BC6  6A 00                     PUSH 0x0
00516BC8  51                        PUSH ECX
00516BC9  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516BCF  E8 BC 9E 1F 00            CALL 0x00710a90
00516BD4  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00516BDA  6A 03                     PUSH 0x3
00516BDC  6A FF                     PUSH -0x1
00516BDE  6A FD                     PUSH -0x3
00516BE0  52                        PUSH EDX
00516BE1  68 22 56 00 00            PUSH 0x5622
00516BE6  E8 55 95 19 00            CALL 0x006b0140
00516BEB  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516BF1  50                        PUSH EAX
00516BF2  E8 C9 AD 1F 00            CALL 0x007119c0
00516BF7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00516BFA  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00516C00  6A 0F                     PUSH 0xf
00516C02  68 06 01 00 00            PUSH 0x106
00516C07  50                        PUSH EAX
00516C08  68 96 00 00 00            PUSH 0x96
00516C0D  6A 00                     PUSH 0x0
00516C0F  51                        PUSH ECX
00516C10  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516C16  E8 75 9E 1F 00            CALL 0x00710a90
00516C1B  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
00516C1E  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516C23  3A D0                     CMP DL,AL
00516C25  57                        PUSH EDI
00516C26  0F 85 B0 01 00 00         JNZ 0x00516ddc
00516C2C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516C32  33 C0                     XOR EAX,EAX
00516C34  A0 4D 87 80 00            MOV AL,[0x0080874d]
00516C39  50                        PUSH EAX
00516C3A  E8 10 E6 EE FF            CALL 0x0040524f
00516C3F  85 C0                     TEST EAX,EAX
00516C41  0F 84 5D 01 00 00         JZ 0x00516da4
00516C47  33 C9                     XOR ECX,ECX
00516C49  57                        PUSH EDI
00516C4A  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00516C50  81 E6 FF 00 00 00         AND ESI,0xff
00516C56  51                        PUSH ECX
00516C57  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516C5D  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
00516C60  E8 A8 E6 EE FF            CALL 0x0040530d
00516C65  3B F0                     CMP ESI,EAX
00516C67  0F 8F 37 01 00 00         JG 0x00516da4
00516C6D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516C73  33 D2                     XOR EDX,EDX
00516C75  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00516C7B  57                        PUSH EDI
00516C7C  52                        PUSH EDX
00516C7D  E8 8B E6 EE FF            CALL 0x0040530d
00516C82  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516C88  8B F0                     MOV ESI,EAX
00516C8A  33 C0                     XOR EAX,EAX
00516C8C  57                        PUSH EDI
00516C8D  A0 4D 87 80 00            MOV AL,[0x0080874d]
00516C92  50                        PUSH EAX
00516C93  E8 D3 AB EE FF            CALL 0x0040186b
00516C98  3B C6                     CMP EAX,ESI
00516C9A  0F 8D CB 00 00 00         JGE 0x00516d6b
00516CA0  33 C9                     XOR ECX,ECX
00516CA2  57                        PUSH EDI
00516CA3  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00516CA9  51                        PUSH ECX
00516CAA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516CB0  E8 6A B1 EE FF            CALL 0x00401e1f
00516CB5  85 C0                     TEST EAX,EAX
00516CB7  74 22                     JZ 0x00516cdb
00516CB9  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516CBE  33 D2                     XOR EDX,EDX
00516CC0  3C 03                     CMP AL,0x3
00516CC2  A1 18 76 80 00            MOV EAX,[0x00807618]
00516CC7  0F 95 C2                  SETNZ DL
00516CCA  4A                        DEC EDX
00516CCB  83 E2 05                  AND EDX,0x5
00516CCE  52                        PUSH EDX
00516CCF  6A FF                     PUSH -0x1
00516CD1  6A 01                     PUSH 0x1
00516CD3  50                        PUSH EAX
00516CD4  68 54 5D 00 00            PUSH 0x5d54
00516CD9  EB 3D                     JMP 0x00516d18
LAB_00516cdb:
00516CDB  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00516CDE  33 C9                     XOR ECX,ECX
00516CE0  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00516CE6  50                        PUSH EAX
00516CE7  57                        PUSH EDI
00516CE8  51                        PUSH ECX
00516CE9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516CEF  E8 9B D2 EE FF            CALL 0x00403f8f
00516CF4  85 C0                     TEST EAX,EAX
00516CF6  74 38                     JZ 0x00516d30
00516CF8  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516CFD  33 D2                     XOR EDX,EDX
00516CFF  3C 03                     CMP AL,0x3
00516D01  A1 18 76 80 00            MOV EAX,[0x00807618]
00516D06  0F 95 C2                  SETNZ DL
00516D09  4A                        DEC EDX
00516D0A  83 E2 05                  AND EDX,0x5
00516D0D  52                        PUSH EDX
00516D0E  6A FF                     PUSH -0x1
00516D10  6A 01                     PUSH 0x1
00516D12  50                        PUSH EAX
00516D13  68 53 5D 00 00            PUSH 0x5d53
LAB_00516d18:
00516D18  E8 23 94 19 00            CALL 0x006b0140
00516D1D  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516D23  50                        PUSH EAX
00516D24  E8 97 AC 1F 00            CALL 0x007119c0
00516D29  6A 03                     PUSH 0x3
00516D2B  E9 24 02 00 00            JMP 0x00516f54
LAB_00516d30:
00516D30  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00516D36  33 C0                     XOR EAX,EAX
00516D38  80 FA 03                  CMP DL,0x3
00516D3B  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00516D41  0F 95 C0                  SETNZ AL
00516D44  48                        DEC EAX
00516D45  83 E0 05                  AND EAX,0x5
00516D48  50                        PUSH EAX
00516D49  6A FF                     PUSH -0x1
00516D4B  6A 01                     PUSH 0x1
00516D4D  51                        PUSH ECX
00516D4E  68 55 5D 00 00            PUSH 0x5d55
00516D53  E8 E8 93 19 00            CALL 0x006b0140
00516D58  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516D5E  50                        PUSH EAX
00516D5F  E8 5C AC 1F 00            CALL 0x007119c0
00516D64  6A 01                     PUSH 0x1
00516D66  E9 4D 01 00 00            JMP 0x00516eb8
LAB_00516d6b:
00516D6B  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516D70  33 C9                     XOR ECX,ECX
00516D72  3C 03                     CMP AL,0x3
00516D74  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00516D7A  0F 95 C1                  SETNZ CL
00516D7D  49                        DEC ECX
00516D7E  83 E1 05                  AND ECX,0x5
00516D81  51                        PUSH ECX
00516D82  6A FF                     PUSH -0x1
00516D84  6A 01                     PUSH 0x1
00516D86  52                        PUSH EDX
00516D87  68 56 5D 00 00            PUSH 0x5d56
00516D8C  E8 AF 93 19 00            CALL 0x006b0140
00516D91  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516D97  50                        PUSH EAX
00516D98  E8 23 AC 1F 00            CALL 0x007119c0
00516D9D  6A 02                     PUSH 0x2
00516D9F  E9 64 01 00 00            JMP 0x00516f08
LAB_00516da4:
00516DA4  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516DA9  33 D2                     XOR EDX,EDX
00516DAB  3C 03                     CMP AL,0x3
00516DAD  A1 18 76 80 00            MOV EAX,[0x00807618]
00516DB2  0F 95 C2                  SETNZ DL
00516DB5  4A                        DEC EDX
00516DB6  83 E2 05                  AND EDX,0x5
00516DB9  52                        PUSH EDX
00516DBA  6A FF                     PUSH -0x1
00516DBC  6A 01                     PUSH 0x1
00516DBE  50                        PUSH EAX
00516DBF  68 52 5D 00 00            PUSH 0x5d52
00516DC4  E8 77 93 19 00            CALL 0x006b0140
00516DC9  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516DCF  50                        PUSH EAX
00516DD0  E8 EB AB 1F 00            CALL 0x007119c0
00516DD5  6A 01                     PUSH 0x1
00516DD7  E9 78 01 00 00            JMP 0x00516f54
LAB_00516ddc:
00516DDC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516DE2  33 C0                     XOR EAX,EAX
00516DE4  A0 4D 87 80 00            MOV AL,[0x0080874d]
00516DE9  50                        PUSH EAX
00516DEA  E8 1E E5 EE FF            CALL 0x0040530d
00516DEF  33 C9                     XOR ECX,ECX
00516DF1  57                        PUSH EDI
00516DF2  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00516DF8  8B F0                     MOV ESI,EAX
00516DFA  51                        PUSH ECX
00516DFB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516E01  E8 65 AA EE FF            CALL 0x0040186b
00516E06  3B C6                     CMP EAX,ESI
00516E08  0F 8D 13 01 00 00         JGE 0x00516f21
00516E0E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00516E11  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516E17  81 E2 FF 00 00 00         AND EDX,0xff
00516E1D  33 C0                     XOR EAX,EAX
00516E1F  A0 4D 87 80 00            MOV AL,[0x0080874d]
00516E24  52                        PUSH EDX
00516E25  57                        PUSH EDI
00516E26  50                        PUSH EAX
00516E27  E8 16 B5 EE FF            CALL 0x00402342
00516E2C  85 C0                     TEST EAX,EAX
00516E2E  75 39                     JNZ 0x00516e69
00516E30  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516E35  33 C9                     XOR ECX,ECX
00516E37  3C 03                     CMP AL,0x3
00516E39  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00516E3F  0F 95 C1                  SETNZ CL
00516E42  49                        DEC ECX
00516E43  83 E1 05                  AND ECX,0x5
00516E46  51                        PUSH ECX
00516E47  6A FF                     PUSH -0x1
00516E49  6A 01                     PUSH 0x1
00516E4B  52                        PUSH EDX
00516E4C  68 52 5D 00 00            PUSH 0x5d52
00516E51  E8 EA 92 19 00            CALL 0x006b0140
00516E56  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516E5C  50                        PUSH EAX
00516E5D  E8 5E AB 1F 00            CALL 0x007119c0
00516E62  6A 01                     PUSH 0x1
00516E64  E9 9F 00 00 00            JMP 0x00516f08
LAB_00516e69:
00516E69  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516E6F  33 D2                     XOR EDX,EDX
00516E71  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00516E77  57                        PUSH EDI
00516E78  52                        PUSH EDX
00516E79  E8 A1 AF EE FF            CALL 0x00401e1f
00516E7E  85 C0                     TEST EAX,EAX
00516E80  74 52                     JZ 0x00516ed4
00516E82  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00516E88  33 C0                     XOR EAX,EAX
00516E8A  80 FA 03                  CMP DL,0x3
00516E8D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00516E93  0F 95 C0                  SETNZ AL
00516E96  48                        DEC EAX
00516E97  83 E0 05                  AND EAX,0x5
00516E9A  50                        PUSH EAX
00516E9B  6A FF                     PUSH -0x1
00516E9D  6A 01                     PUSH 0x1
00516E9F  51                        PUSH ECX
00516EA0  68 54 5D 00 00            PUSH 0x5d54
00516EA5  E8 96 92 19 00            CALL 0x006b0140
00516EAA  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516EB0  50                        PUSH EAX
00516EB1  E8 0A AB 1F 00            CALL 0x007119c0
00516EB6  6A 03                     PUSH 0x3
LAB_00516eb8:
00516EB8  8B 93 48 02 00 00         MOV EDX,dword ptr [EBX + 0x248]
00516EBE  52                        PUSH EDX
00516EBF  E8 DC 44 1F 00            CALL 0x0070b3a0
00516EC4  50                        PUSH EAX
00516EC5  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00516EC8  6A 06                     PUSH 0x6
00516ECA  6A 28                     PUSH 0x28
00516ECC  6A 33                     PUSH 0x33
00516ECE  50                        PUSH EAX
00516ECF  E9 97 00 00 00            JMP 0x00516f6b
LAB_00516ed4:
00516ED4  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516ED9  33 C9                     XOR ECX,ECX
00516EDB  3C 03                     CMP AL,0x3
00516EDD  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00516EE3  0F 95 C1                  SETNZ CL
00516EE6  49                        DEC ECX
00516EE7  83 E1 05                  AND ECX,0x5
00516EEA  51                        PUSH ECX
00516EEB  6A FF                     PUSH -0x1
00516EED  6A 01                     PUSH 0x1
00516EEF  52                        PUSH EDX
00516EF0  68 53 5D 00 00            PUSH 0x5d53
00516EF5  E8 46 92 19 00            CALL 0x006b0140
00516EFA  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516F00  50                        PUSH EAX
00516F01  E8 BA AA 1F 00            CALL 0x007119c0
00516F06  6A 03                     PUSH 0x3
LAB_00516f08:
00516F08  8B 83 48 02 00 00         MOV EAX,dword ptr [EBX + 0x248]
00516F0E  50                        PUSH EAX
00516F0F  E8 8C 44 1F 00            CALL 0x0070b3a0
00516F14  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00516F17  50                        PUSH EAX
00516F18  6A 06                     PUSH 0x6
00516F1A  6A 28                     PUSH 0x28
00516F1C  6A 33                     PUSH 0x33
00516F1E  51                        PUSH ECX
00516F1F  EB 4A                     JMP 0x00516f6b
LAB_00516f21:
00516F21  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516F26  33 D2                     XOR EDX,EDX
00516F28  3C 03                     CMP AL,0x3
00516F2A  A1 18 76 80 00            MOV EAX,[0x00807618]
00516F2F  0F 95 C2                  SETNZ DL
00516F32  4A                        DEC EDX
00516F33  83 E2 05                  AND EDX,0x5
00516F36  52                        PUSH EDX
00516F37  6A FF                     PUSH -0x1
00516F39  6A 01                     PUSH 0x1
00516F3B  50                        PUSH EAX
00516F3C  68 56 5D 00 00            PUSH 0x5d56
00516F41  E8 FA 91 19 00            CALL 0x006b0140
00516F46  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516F4C  50                        PUSH EAX
00516F4D  E8 6E AA 1F 00            CALL 0x007119c0
00516F52  6A 02                     PUSH 0x2
LAB_00516f54:
00516F54  8B 8B 48 02 00 00         MOV ECX,dword ptr [EBX + 0x248]
00516F5A  51                        PUSH ECX
00516F5B  E8 40 44 1F 00            CALL 0x0070b3a0
00516F60  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00516F63  50                        PUSH EAX
00516F64  6A 06                     PUSH 0x6
00516F66  6A 28                     PUSH 0x28
00516F68  6A 33                     PUSH 0x33
00516F6A  52                        PUSH EDX
LAB_00516f6b:
00516F6B  E8 B9 C2 EE FF            CALL 0x00403229
00516F70  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00516F73  83 C4 1C                  ADD ESP,0x1c
00516F76  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516F7C  83 C0 0F                  ADD EAX,0xf
00516F7F  6A 0F                     PUSH 0xf
00516F81  68 91 00 00 00            PUSH 0x91
00516F86  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00516F89  50                        PUSH EAX
00516F8A  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00516F90  6A 00                     PUSH 0x0
00516F92  6A 00                     PUSH 0x0
00516F94  50                        PUSH EAX
00516F95  E8 F6 9A 1F 00            CALL 0x00710a90
00516F9A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00516FA0  6A 03                     PUSH 0x3
00516FA2  6A FF                     PUSH -0x1
00516FA4  6A FD                     PUSH -0x3
00516FA6  51                        PUSH ECX
00516FA7  68 23 56 00 00            PUSH 0x5623
00516FAC  E8 8F 91 19 00            CALL 0x006b0140
00516FB1  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516FB7  50                        PUSH EAX
00516FB8  E8 03 AA 1F 00            CALL 0x007119c0
00516FBD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00516FC0  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00516FC6  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516FCC  6A 0F                     PUSH 0xf
00516FCE  68 06 01 00 00            PUSH 0x106
00516FD3  52                        PUSH EDX
00516FD4  68 96 00 00 00            PUSH 0x96
00516FD9  6A 00                     PUSH 0x0
00516FDB  50                        PUSH EAX
00516FDC  E8 AF 9A 1F 00            CALL 0x00710a90
00516FE1  A0 4E 87 80 00            MOV AL,[0x0080874e]
00516FE6  33 C9                     XOR ECX,ECX
00516FE8  3C 03                     CMP AL,0x3
00516FEA  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00516FF0  0F 95 C1                  SETNZ CL
00516FF3  49                        DEC ECX
00516FF4  83 E1 05                  AND ECX,0x5
00516FF7  51                        PUSH ECX
00516FF8  6A FF                     PUSH -0x1
00516FFA  6A 01                     PUSH 0x1
00516FFC  52                        PUSH EDX
00516FFD  57                        PUSH EDI
00516FFE  E8 86 B7 EE FF            CALL 0x00402789
00517003  83 C4 04                  ADD ESP,0x4
00517006  50                        PUSH EAX
00517007  E8 34 91 19 00            CALL 0x006b0140
0051700C  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517012  50                        PUSH EAX
00517013  E8 A8 A9 1F 00            CALL 0x007119c0
00517018  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051701B  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517021  83 C0 0F                  ADD EAX,0xf
00517024  6A 0F                     PUSH 0xf
00517026  68 91 00 00 00            PUSH 0x91
0051702B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051702E  50                        PUSH EAX
0051702F  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00517035  6A 00                     PUSH 0x0
00517037  6A 00                     PUSH 0x0
00517039  50                        PUSH EAX
0051703A  E8 51 9A 1F 00            CALL 0x00710a90
0051703F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00517045  6A 03                     PUSH 0x3
00517047  6A FF                     PUSH -0x1
00517049  6A FD                     PUSH -0x3
0051704B  51                        PUSH ECX
0051704C  68 F7 55 00 00            PUSH 0x55f7
00517051  E8 EA 90 19 00            CALL 0x006b0140
00517056  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051705C  50                        PUSH EAX
0051705D  E8 5E A9 1F 00            CALL 0x007119c0
00517062  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00517065  6A 14                     PUSH 0x14
00517067  83 C2 FD                  ADD EDX,-0x3
0051706A  68 06 01 00 00            PUSH 0x106
0051706F  52                        PUSH EDX
00517070  68 96 00 00 00            PUSH 0x96
00517075  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051707B  8B 8B E8 01 00 00         MOV ECX,dword ptr [EBX + 0x1e8]
00517081  6A 00                     PUSH 0x0
00517083  50                        PUSH EAX
00517084  E8 07 9A 1F 00            CALL 0x00710a90
00517089  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0051708C  81 E6 FF 00 00 00         AND ESI,0xff
00517092  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
00517095  8D 34 BE                  LEA ESI,[ESI + EDI*0x4]
00517098  C1 E6 02                  SHL ESI,0x2
0051709B  8B 8E 18 48 7E 00         MOV ECX,dword ptr [ESI + 0x7e4818]
005170A1  51                        PUSH ECX
005170A2  68 E4 1A 7C 00            PUSH 0x7c1ae4
005170A7  68 3A F3 80 00            PUSH 0x80f33a
005170AC  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005170B2  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
005170B8  83 C4 0C                  ADD ESP,0xc
005170BB  80 EA 03                  SUB DL,0x3
005170BE  8B 8B E8 01 00 00         MOV ECX,dword ptr [EBX + 0x1e8]
005170C4  F6 DA                     NEG DL
005170C6  1B D2                     SBB EDX,EDX
005170C8  83 E2 FE                  AND EDX,0xfffffffe
005170CB  83 C2 03                  ADD EDX,0x3
005170CE  52                        PUSH EDX
005170CF  6A FF                     PUSH -0x1
005170D1  6A 01                     PUSH 0x1
005170D3  68 3A F3 80 00            PUSH 0x80f33a
005170D8  E8 E3 A8 1F 00            CALL 0x007119c0
005170DD  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
005170E0  8B 8B 38 02 00 00         MOV ECX,dword ptr [EBX + 0x238]
005170E6  2C 03                     SUB AL,0x3
005170E8  F6 D8                     NEG AL
005170EA  1B C0                     SBB EAX,EAX
005170EC  24 FE                     AND AL,0xfe
005170EE  83 C0 04                  ADD EAX,0x4
005170F1  50                        PUSH EAX
005170F2  51                        PUSH ECX
005170F3  E8 A8 42 1F 00            CALL 0x0070b3a0
005170F8  83 C4 08                  ADD ESP,0x8
005170FB  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
005170FE  85 C0                     TEST EAX,EAX
00517100  74 68                     JZ 0x0051716a
00517102  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00517105  6A 3A                     PUSH 0x3a
00517107  6A 00                     PUSH 0x0
00517109  50                        PUSH EAX
0051710A  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00517110  52                        PUSH EDX
00517111  68 B4 00 00 00            PUSH 0xb4
00517116  6A 00                     PUSH 0x0
00517118  50                        PUSH EAX
00517119  E8 22 E3 19 00            CALL 0x006b5440
0051711E  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00517121  C7 45 D0 B4 00 00 00      MOV dword ptr [EBP + -0x30],0xb4
00517128  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051712B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0051712E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00517131  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00517134  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
00517137  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0051713A  80 E9 03                  SUB CL,0x3
0051713D  F6 D9                     NEG CL
0051713F  1B C9                     SBB ECX,ECX
00517141  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00517144  83 E1 FC                  AND ECX,0xfffffffc
00517147  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0051714A  81 C1 E0 00 00 00         ADD ECX,0xe0
00517150  8D 45 D0                  LEA EAX,[EBP + -0x30]
00517153  89 4D E1                  MOV dword ptr [EBP + -0x1f],ECX
00517156  8B 8B D7 01 00 00         MOV ECX,dword ptr [EBX + 0x1d7]
0051715C  50                        PUSH EAX
0051715D  51                        PUSH ECX
0051715E  C6 45 E0 01               MOV byte ptr [EBP + -0x20],0x1
00517162  89 55 E5                  MOV dword ptr [EBP + -0x1b],EDX
00517165  E8 56 70 19 00            CALL 0x006ae1c0
LAB_0051716a:
0051716A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051716D  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
00517173  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517179  83 C0 0F                  ADD EAX,0xf
0051717C  6A 0F                     PUSH 0xf
0051717E  68 91 00 00 00            PUSH 0x91
00517183  50                        PUSH EAX
00517184  6A 00                     PUSH 0x0
00517186  6A 00                     PUSH 0x0
00517188  52                        PUSH EDX
00517189  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051718C  E8 FF 98 1F 00            CALL 0x00710a90
00517191  A1 18 76 80 00            MOV EAX,[0x00807618]
00517196  6A 03                     PUSH 0x3
00517198  6A FF                     PUSH -0x1
0051719A  6A FD                     PUSH -0x3
0051719C  50                        PUSH EAX
0051719D  68 24 56 00 00            PUSH 0x5624
005171A2  E8 99 8F 19 00            CALL 0x006b0140
005171A7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005171AD  50                        PUSH EAX
005171AE  E8 0D A8 1F 00            CALL 0x007119c0
005171B3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005171B6  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005171BC  6A 0F                     PUSH 0xf
005171BE  68 06 01 00 00            PUSH 0x106
005171C3  51                        PUSH ECX
005171C4  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005171CA  68 96 00 00 00            PUSH 0x96
005171CF  6A 00                     PUSH 0x0
005171D1  52                        PUSH EDX
005171D2  E8 B9 98 1F 00            CALL 0x00710a90
005171D7  8B B6 74 54 7E 00         MOV ESI,dword ptr [ESI + 0x7e5474]
005171DD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005171E2  F7 EE                     IMUL ESI
005171E4  C1 FA 03                  SAR EDX,0x3
005171E7  8B CA                     MOV ECX,EDX
005171E9  8B C2                     MOV EAX,EDX
005171EB  C1 E9 1F                  SHR ECX,0x1f
005171EE  03 C1                     ADD EAX,ECX
005171F0  B9 10 0E 00 00            MOV ECX,0xe10
005171F5  99                        CDQ
005171F6  F7 F9                     IDIV ECX
005171F8  BE 3C 00 00 00            MOV ESI,0x3c
005171FD  8B CA                     MOV ECX,EDX
005171FF  8B C1                     MOV EAX,ECX
00517201  99                        CDQ
00517202  F7 FE                     IDIV ESI
00517204  B8 89 88 88 88            MOV EAX,0x88888889
00517209  52                        PUSH EDX
0051720A  F7 E9                     IMUL ECX
0051720C  03 D1                     ADD EDX,ECX
0051720E  C1 FA 05                  SAR EDX,0x5
00517211  8B C2                     MOV EAX,EDX
00517213  C1 E8 1F                  SHR EAX,0x1f
00517216  03 D0                     ADD EDX,EAX
00517218  52                        PUSH EDX
00517219  68 60 3C 7C 00            PUSH 0x7c3c60
0051721E  68 3A F3 80 00            PUSH 0x80f33a
00517223  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00517229  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051722F  83 C4 10                  ADD ESP,0x10
00517232  6A 02                     PUSH 0x2
00517234  6A FF                     PUSH -0x1
00517236  6A 01                     PUSH 0x1
00517238  68 3A F3 80 00            PUSH 0x80f33a
0051723D  E8 7E A7 1F 00            CALL 0x007119c0
00517242  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517245  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051724B  83 C0 0F                  ADD EAX,0xf
0051724E  6A 0F                     PUSH 0xf
00517250  68 91 00 00 00            PUSH 0x91
00517255  50                        PUSH EAX
00517256  6A 00                     PUSH 0x0
00517258  6A 00                     PUSH 0x0
0051725A  51                        PUSH ECX
0051725B  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517261  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00517264  E8 27 98 1F 00            CALL 0x00710a90
00517269  6A 03                     PUSH 0x3
0051726B  6A FF                     PUSH -0x1
0051726D  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00517273  6A FD                     PUSH -0x3
00517275  52                        PUSH EDX
00517276  68 25 56 00 00            PUSH 0x5625
0051727B  E8 C0 8E 19 00            CALL 0x006b0140
00517280  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517286  50                        PUSH EAX
00517287  E8 34 A7 1F 00            CALL 0x007119c0
0051728C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051728F  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517295  6A 0F                     PUSH 0xf
00517297  68 06 01 00 00            PUSH 0x106
0051729C  50                        PUSH EAX
0051729D  68 96 00 00 00            PUSH 0x96
005172A2  6A 00                     PUSH 0x0
005172A4  51                        PUSH ECX
005172A5  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005172AB  E8 E0 97 1F 00            CALL 0x00710a90
005172B0  8A 8F BC 53 7E 00         MOV CL,byte ptr [EDI + 0x7e53bc]
005172B6  B8 57 5D 00 00            MOV EAX,0x5d57
005172BB  84 C9                     TEST CL,CL
005172BD  74 19                     JZ 0x005172d8
005172BF  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
005172C2  80 F9 02                  CMP CL,0x2
005172C5  75 07                     JNZ 0x005172ce
005172C7  B8 58 5D 00 00            MOV EAX,0x5d58
005172CC  EB 0A                     JMP 0x005172d8
LAB_005172ce:
005172CE  80 F9 01                  CMP CL,0x1
005172D1  75 05                     JNZ 0x005172d8
005172D3  B8 59 5D 00 00            MOV EAX,0x5d59
LAB_005172d8:
005172D8  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005172DE  33 D2                     XOR EDX,EDX
005172E0  80 F9 03                  CMP CL,0x3
005172E3  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005172E9  0F 95 C2                  SETNZ DL
005172EC  4A                        DEC EDX
005172ED  83 E2 05                  AND EDX,0x5
005172F0  52                        PUSH EDX
005172F1  6A FF                     PUSH -0x1
005172F3  6A 01                     PUSH 0x1
005172F5  51                        PUSH ECX
005172F6  50                        PUSH EAX
005172F7  E8 44 8E 19 00            CALL 0x006b0140
005172FC  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517302  50                        PUSH EAX
00517303  E8 B8 A6 1F 00            CALL 0x007119c0
00517308  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051730B  83 C1 0F                  ADD ECX,0xf
0051730E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00517311  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00517317  85 C9                     TEST ECX,ECX
00517319  0F 84 65 03 00 00         JZ 0x00517684
0051731F  8D 55 F0                  LEA EDX,[EBP + -0x10]
00517322  8D 45 F4                  LEA EAX,[EBP + -0xc]
00517325  52                        PUSH EDX
00517326  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00517329  50                        PUSH EAX
0051732A  57                        PUSH EDI
0051732B  52                        PUSH EDX
0051732C  33 F6                     XOR ESI,ESI
0051732E  E8 15 E1 EE FF            CALL 0x00405448
00517333  33 C0                     XOR EAX,EAX
LAB_00517335:
00517335  8B C8                     MOV ECX,EAX
00517337  81 E1 FF FF 00 00         AND ECX,0xffff
0051733D  8B 54 8D F4               MOV EDX,dword ptr [EBP + ECX*0x4 + -0xc]
00517341  85 D2                     TEST EDX,EDX
00517343  75 09                     JNZ 0x0051734e
00517345  40                        INC EAX
00517346  66 3D 01 00               CMP AX,0x1
0051734A  72 E9                     JC 0x00517335
0051734C  EB 05                     JMP 0x00517353
LAB_0051734e:
0051734E  BE 01 00 00 00            MOV ESI,0x1
LAB_00517353:
00517353  85 F6                     TEST ESI,ESI
00517355  75 28                     JNZ 0x0051737f
00517357  33 C0                     XOR EAX,EAX
LAB_00517359:
00517359  8B D0                     MOV EDX,EAX
0051735B  81 E2 FF FF 00 00         AND EDX,0xffff
00517361  8B 4C 95 F0               MOV ECX,dword ptr [EBP + EDX*0x4 + -0x10]
00517365  85 C9                     TEST ECX,ECX
00517367  75 09                     JNZ 0x00517372
00517369  40                        INC EAX
0051736A  66 3D 01 00               CMP AX,0x1
0051736E  72 E9                     JC 0x00517359
00517370  EB 05                     JMP 0x00517377
LAB_00517372:
00517372  BE 01 00 00 00            MOV ESI,0x1
LAB_00517377:
00517377  85 F6                     TEST ESI,ESI
00517379  0F 84 05 03 00 00         JZ 0x00517684
LAB_0051737f:
0051737F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517382  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517388  6A 0F                     PUSH 0xf
0051738A  68 91 00 00 00            PUSH 0x91
0051738F  50                        PUSH EAX
00517390  6A 00                     PUSH 0x0
00517392  6A 00                     PUSH 0x0
00517394  51                        PUSH ECX
00517395  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051739B  E8 F0 96 1F 00            CALL 0x00710a90
005173A0  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005173A6  6A 03                     PUSH 0x3
005173A8  6A FF                     PUSH -0x1
005173AA  6A FD                     PUSH -0x3
005173AC  52                        PUSH EDX
005173AD  68 26 56 00 00            PUSH 0x5626
005173B2  E8 89 8D 19 00            CALL 0x006b0140
005173B7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005173BD  50                        PUSH EAX
005173BE  E8 FD A5 1F 00            CALL 0x007119c0
005173C3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005173C6  85 C0                     TEST EAX,EAX
005173C8  0F 84 57 01 00 00         JZ 0x00517525
005173CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005173D1  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
005173D7  6A 0F                     PUSH 0xf
005173D9  68 06 01 00 00            PUSH 0x106
005173DE  50                        PUSH EAX
005173DF  68 96 00 00 00            PUSH 0x96
005173E4  6A 00                     PUSH 0x0
005173E6  51                        PUSH ECX
005173E7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005173ED  E8 9E 96 1F 00            CALL 0x00710a90
005173F2  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005173F8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005173FB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005173FE  52                        PUSH EDX
005173FF  6A 00                     PUSH 0x0
00517401  50                        PUSH EAX
00517402  51                        PUSH ECX
00517403  E8 7C C2 EE FF            CALL 0x00403684
00517408  83 C4 0C                  ADD ESP,0xc
0051740B  50                        PUSH EAX
0051740C  E8 2F 8D 19 00            CALL 0x006b0140
00517411  8B F8                     MOV EDI,EAX
00517413  83 C9 FF                  OR ECX,0xffffffff
00517416  33 C0                     XOR EAX,EAX
00517418  6A 0A                     PUSH 0xa
0051741A  F2 AE                     SCASB.REPNE ES:EDI
0051741C  F7 D1                     NOT ECX
0051741E  2B F9                     SUB EDI,ECX
00517420  68 3A F3 80 00            PUSH 0x80f33a
00517425  8B D1                     MOV EDX,ECX
00517427  8B F7                     MOV ESI,EDI
00517429  BF 3A F3 80 00            MOV EDI,0x80f33a
0051742E  C1 E9 02                  SHR ECX,0x2
00517431  F3 A5                     MOVSD.REP ES:EDI,ESI
00517433  8B CA                     MOV ECX,EDX
00517435  83 E1 03                  AND ECX,0x3
00517438  F3 A4                     MOVSB.REP ES:EDI,ESI
0051743A  E8 21 71 21 00            CALL 0x0072e560
0051743F  83 C4 08                  ADD ESP,0x8
00517442  85 C0                     TEST EAX,EAX
00517444  74 12                     JZ 0x00517458
LAB_00517446:
00517446  6A 0A                     PUSH 0xa
00517448  50                        PUSH EAX
00517449  C6 00 20                  MOV byte ptr [EAX],0x20
0051744C  E8 0F 71 21 00            CALL 0x0072e560
00517451  83 C4 08                  ADD ESP,0x8
00517454  85 C0                     TEST EAX,EAX
00517456  75 EE                     JNZ 0x00517446
LAB_00517458:
00517458  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051745E  33 C0                     XOR EAX,EAX
00517460  80 F9 03                  CMP CL,0x3
00517463  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517469  0F 95 C0                  SETNZ AL
0051746C  48                        DEC EAX
0051746D  83 E0 05                  AND EAX,0x5
00517470  50                        PUSH EAX
00517471  6A FF                     PUSH -0x1
00517473  6A 01                     PUSH 0x1
00517475  68 3A F3 80 00            PUSH 0x80f33a
0051747A  E8 41 A5 1F 00            CALL 0x007119c0
0051747F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517482  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00517485  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00517488  83 C0 0F                  ADD EAX,0xf
0051748B  51                        PUSH ECX
0051748C  52                        PUSH EDX
0051748D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00517490  E8 60 E2 EE FF            CALL 0x004056f5
00517495  50                        PUSH EAX
00517496  8B 83 40 02 00 00         MOV EAX,dword ptr [EBX + 0x240]
0051749C  50                        PUSH EAX
0051749D  E8 FE 3E 1F 00            CALL 0x0070b3a0
005174A2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005174A5  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005174AB  50                        PUSH EAX
005174AC  6A 01                     PUSH 0x1
005174AE  51                        PUSH ECX
005174AF  68 96 00 00 00            PUSH 0x96
005174B4  52                        PUSH EDX
005174B5  E8 6F BD EE FF            CALL 0x00403229
005174BA  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
005174BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005174C0  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
005174C6  56                        PUSH ESI
005174C7  83 C0 FE                  ADD EAX,-0x2
005174CA  6A 06                     PUSH 0x6
005174CC  50                        PUSH EAX
005174CD  68 94 00 00 00            PUSH 0x94
005174D2  51                        PUSH ECX
005174D3  E8 51 BD EE FF            CALL 0x00403229
005174D8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005174DB  C7 45 D0 94 00 00 00      MOV dword ptr [EBP + -0x30],0x94
005174E2  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005174E5  83 C0 FE                  ADD EAX,-0x2
005174E8  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005174EB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005174EE  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005174F1  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005174F4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005174F7  83 C4 38                  ADD ESP,0x38
005174FA  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005174FD  89 55 E1                  MOV dword ptr [EBP + -0x1f],EDX
00517500  8B 93 D7 01 00 00         MOV EDX,dword ptr [EBX + 0x1d7]
00517506  8D 4D D0                  LEA ECX,[EBP + -0x30]
00517509  51                        PUSH ECX
0051750A  52                        PUSH EDX
0051750B  C6 45 E0 02               MOV byte ptr [EBP + -0x20],0x2
0051750F  89 45 E5                  MOV dword ptr [EBP + -0x1b],EAX
00517512  E8 A9 6C 19 00            CALL 0x006ae1c0
00517517  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0051751A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051751D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00517520  03 C8                     ADD ECX,EAX
00517522  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00517525:
00517525  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00517528  85 C0                     TEST EAX,EAX
0051752A  0F 84 54 01 00 00         JZ 0x00517684
00517530  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00517533  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
00517539  6A 0F                     PUSH 0xf
0051753B  68 06 01 00 00            PUSH 0x106
00517540  51                        PUSH ECX
00517541  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517547  68 96 00 00 00            PUSH 0x96
0051754C  6A 00                     PUSH 0x0
0051754E  52                        PUSH EDX
0051754F  E8 3C 95 1F 00            CALL 0x00710a90
00517554  A1 18 76 80 00            MOV EAX,[0x00807618]
00517559  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051755C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0051755F  50                        PUSH EAX
00517560  6A 00                     PUSH 0x0
00517562  51                        PUSH ECX
00517563  52                        PUSH EDX
00517564  E8 1B C1 EE FF            CALL 0x00403684
00517569  83 C4 0C                  ADD ESP,0xc
0051756C  50                        PUSH EAX
0051756D  E8 CE 8B 19 00            CALL 0x006b0140
00517572  8B F8                     MOV EDI,EAX
00517574  83 C9 FF                  OR ECX,0xffffffff
00517577  33 C0                     XOR EAX,EAX
00517579  6A 0A                     PUSH 0xa
0051757B  F2 AE                     SCASB.REPNE ES:EDI
0051757D  F7 D1                     NOT ECX
0051757F  2B F9                     SUB EDI,ECX
00517581  68 3A F3 80 00            PUSH 0x80f33a
00517586  8B C1                     MOV EAX,ECX
00517588  8B F7                     MOV ESI,EDI
0051758A  BF 3A F3 80 00            MOV EDI,0x80f33a
0051758F  C1 E9 02                  SHR ECX,0x2
00517592  F3 A5                     MOVSD.REP ES:EDI,ESI
00517594  8B C8                     MOV ECX,EAX
00517596  83 E1 03                  AND ECX,0x3
00517599  F3 A4                     MOVSB.REP ES:EDI,ESI
0051759B  E8 C0 6F 21 00            CALL 0x0072e560
005175A0  83 C4 08                  ADD ESP,0x8
005175A3  85 C0                     TEST EAX,EAX
005175A5  74 12                     JZ 0x005175b9
LAB_005175a7:
005175A7  6A 0A                     PUSH 0xa
005175A9  50                        PUSH EAX
005175AA  C6 00 20                  MOV byte ptr [EAX],0x20
005175AD  E8 AE 6F 21 00            CALL 0x0072e560
005175B2  83 C4 08                  ADD ESP,0x8
005175B5  85 C0                     TEST EAX,EAX
005175B7  75 EE                     JNZ 0x005175a7
LAB_005175b9:
005175B9  A0 4E 87 80 00            MOV AL,[0x0080874e]
005175BE  33 C9                     XOR ECX,ECX
005175C0  3C 03                     CMP AL,0x3
005175C2  0F 95 C1                  SETNZ CL
005175C5  49                        DEC ECX
005175C6  83 E1 05                  AND ECX,0x5
005175C9  51                        PUSH ECX
005175CA  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005175D0  6A FF                     PUSH -0x1
005175D2  6A 01                     PUSH 0x1
005175D4  68 3A F3 80 00            PUSH 0x80f33a
005175D9  E8 E2 A3 1F 00            CALL 0x007119c0
005175DE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005175E1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005175E4  83 C0 0F                  ADD EAX,0xf
005175E7  52                        PUSH EDX
005175E8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005175EB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005175EE  50                        PUSH EAX
005175EF  E8 01 E1 EE FF            CALL 0x004056f5
005175F4  8B 8B 3C 02 00 00         MOV ECX,dword ptr [EBX + 0x23c]
005175FA  50                        PUSH EAX
005175FB  51                        PUSH ECX
005175FC  E8 9F 3D 1F 00            CALL 0x0070b3a0
00517601  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00517604  50                        PUSH EAX
00517605  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051760B  6A 01                     PUSH 0x1
0051760D  52                        PUSH EDX
0051760E  68 96 00 00 00            PUSH 0x96
00517613  50                        PUSH EAX
00517614  E8 10 BC EE FF            CALL 0x00403229
00517619  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
0051761C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051761F  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
00517625  56                        PUSH ESI
00517626  83 C1 FE                  ADD ECX,-0x2
00517629  6A 06                     PUSH 0x6
0051762B  51                        PUSH ECX
0051762C  68 94 00 00 00            PUSH 0x94
00517631  52                        PUSH EDX
00517632  E8 F2 BB EE FF            CALL 0x00403229
00517637  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051763A  C7 45 D0 94 00 00 00      MOV dword ptr [EBP + -0x30],0x94
00517641  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00517644  83 C1 FE                  ADD ECX,-0x2
00517647  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0051764A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051764D  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00517650  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00517653  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00517656  83 C4 38                  ADD ESP,0x38
00517659  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0051765C  89 45 E1                  MOV dword ptr [EBP + -0x1f],EAX
0051765F  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
00517665  8D 55 D0                  LEA EDX,[EBP + -0x30]
00517668  52                        PUSH EDX
00517669  50                        PUSH EAX
0051766A  C6 45 E0 03               MOV byte ptr [EBP + -0x20],0x3
0051766E  89 4D E5                  MOV dword ptr [EBP + -0x1b],ECX
00517671  E8 4A 6B 19 00            CALL 0x006ae1c0
00517676  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00517679  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051767C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051767F  03 C1                     ADD EAX,ECX
00517681  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00517684:
00517684  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00517687  52                        PUSH EDX
00517688  57                        PUSH EDI
00517689  E8 E8 BE EE FF            CALL 0x00403576
0051768E  83 C4 08                  ADD ESP,0x8
00517691  8B CB                     MOV ECX,EBX
00517693  50                        PUSH EAX
00517694  8D 45 FC                  LEA EAX,[EBP + -0x4]
00517697  50                        PUSH EAX
00517698  E8 0E B7 EE FF            CALL 0x00402dab
0051769D  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
005176A0  8D 55 FC                  LEA EDX,[EBP + -0x4]
005176A3  51                        PUSH ECX
005176A4  57                        PUSH EDI
005176A5  6A 05                     PUSH 0x5
005176A7  52                        PUSH EDX
005176A8  8B CB                     MOV ECX,EBX
005176AA  E8 C0 D9 EE FF            CALL 0x0040506f
005176AF  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
005176B5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005176BA  5F                        POP EDI
005176BB  5E                        POP ESI
005176BC  5B                        POP EBX
005176BD  8B E5                     MOV ESP,EBP
005176BF  5D                        POP EBP
005176C0  C2 0C 00                  RET 0xc
LAB_005176c3:
005176C3  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
005176C9  68 44 3C 7C 00            PUSH 0x7c3c44
005176CE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005176D3  57                        PUSH EDI
005176D4  56                        PUSH ESI
005176D5  68 5A 05 00 00            PUSH 0x55a
005176DA  68 3C 38 7C 00            PUSH 0x7c383c
005176DF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005176E5  E8 E6 5D 19 00            CALL 0x006ad4d0
005176EA  83 C4 18                  ADD ESP,0x18
005176ED  85 C0                     TEST EAX,EAX
005176EF  74 01                     JZ 0x005176f2
005176F1  CC                        INT3
LAB_005176f2:
005176F2  68 5A 05 00 00            PUSH 0x55a
005176F7  68 3C 38 7C 00            PUSH 0x7c383c
005176FC  56                        PUSH ESI
005176FD  57                        PUSH EDI
005176FE  E8 3D E7 18 00            CALL 0x006a5e40
00517703  5F                        POP EDI
00517704  5E                        POP ESI
00517705  5B                        POP EBX
00517706  8B E5                     MOV ESP,EBP
00517708  5D                        POP EBP
00517709  C2 0C 00                  RET 0xc
