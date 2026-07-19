FUN_006d8a60:
006D8A60  55                        PUSH EBP
006D8A61  8B EC                     MOV EBP,ESP
006D8A63  83 EC 18                  SUB ESP,0x18
006D8A66  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D8A69  53                        PUSH EBX
006D8A6A  56                        PUSH ESI
006D8A6B  57                        PUSH EDI
006D8A6C  85 C0                     TEST EAX,EAX
006D8A6E  0F 8E B1 14 00 00         JLE 0x006d9f25
006D8A74  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D8A77  85 C0                     TEST EAX,EAX
006D8A79  0F 8E A6 14 00 00         JLE 0x006d9f25
006D8A7F  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D8A82  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D8A85  03 C1                     ADD EAX,ECX
006D8A87  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D8A8A  48                        DEC EAX
006D8A8B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D8A8E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D8A91  F7 D9                     NEG ECX
006D8A93  C1 E1 08                  SHL ECX,0x8
006D8A96  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D8A99  03 C1                     ADD EAX,ECX
006D8A9B  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006D8A9E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006D8AA1  85 C0                     TEST EAX,EAX
006D8AA3  74 22                     JZ 0x006d8ac7
006D8AA5  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D8AA8  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006D8AAB  0F AF 4D 40               IMUL ECX,dword ptr [EBP + 0x40]
006D8AAF  C1 FA 03                  SAR EDX,0x3
006D8AB2  03 D0                     ADD EDX,EAX
006D8AB4  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006D8AB7  03 D1                     ADD EDX,ECX
006D8AB9  85 C0                     TEST EAX,EAX
006D8ABB  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006D8ABE  75 07                     JNZ 0x006d8ac7
006D8AC0  C7 45 30 00 E3 7E 00      MOV dword ptr [EBP + 0x30],0x7ee300
LAB_006d8ac7:
006D8AC7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D8ACA  85 C0                     TEST EAX,EAX
006D8ACC  7E 0E                     JLE 0x006d8adc
006D8ACE  50                        PUSH EAX
006D8ACF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D8AD2  50                        PUSH EAX
006D8AD3  E8 38 73 FF FF            CALL 0x006cfe10
006D8AD8  8B F8                     MOV EDI,EAX
006D8ADA  EB 14                     JMP 0x006d8af0
LAB_006d8adc:
006D8ADC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D8ADF  8A 48 0D                  MOV CL,byte ptr [EAX + 0xd]
006D8AE2  D1 E9                     SHR ECX,0x1
006D8AE4  83 E1 0E                  AND ECX,0xe
006D8AE7  8D 54 01 16               LEA EDX,[ECX + EAX*0x1 + 0x16]
006D8AEB  89 55 2C                  MOV dword ptr [EBP + 0x2c],EDX
006D8AEE  8B FA                     MOV EDI,EDX
LAB_006d8af0:
006D8AF0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D8AF3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D8AF6  0F BF 48 12               MOVSX ECX,word ptr [EAX + 0x12]
006D8AFA  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D8AFD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006D8B00  48                        DEC EAX
006D8B01  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_006d8b04:
006D8B04  33 C0                     XOR EAX,EAX
006D8B06  8A 07                     MOV AL,byte ptr [EDI]
006D8B08  47                        INC EDI
006D8B09  85 C0                     TEST EAX,EAX
006D8B0B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D8B0E  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D8B11  0F 84 F7 13 00 00         JZ 0x006d9f0e
006D8B17  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_006d8b1a:
006D8B1A  A8 80                     TEST AL,0x80
006D8B1C  8B F0                     MOV ESI,EAX
006D8B1E  74 20                     JZ 0x006d8b40
006D8B20  83 E6 3F                  AND ESI,0x3f
006D8B23  3B F1                     CMP ESI,ECX
006D8B25  7F 29                     JG 0x006d8b50
006D8B27  A8 40                     TEST AL,0x40
006D8B29  74 0A                     JZ 0x006d8b35
006D8B2B  47                        INC EDI
006D8B2C  33 C0                     XOR EAX,EAX
006D8B2E  2B CE                     SUB ECX,ESI
006D8B30  8A 07                     MOV AL,byte ptr [EDI]
006D8B32  47                        INC EDI
006D8B33  EB E5                     JMP 0x006d8b1a
LAB_006d8b35:
006D8B35  03 FE                     ADD EDI,ESI
006D8B37  33 C0                     XOR EAX,EAX
006D8B39  2B CE                     SUB ECX,ESI
006D8B3B  8A 07                     MOV AL,byte ptr [EDI]
006D8B3D  47                        INC EDI
006D8B3E  EB DA                     JMP 0x006d8b1a
LAB_006d8b40:
006D8B40  83 E6 7F                  AND ESI,0x7f
006D8B43  3B F1                     CMP ESI,ECX
006D8B45  7F 09                     JG 0x006d8b50
006D8B47  33 C0                     XOR EAX,EAX
006D8B49  2B CE                     SUB ECX,ESI
006D8B4B  8A 07                     MOV AL,byte ptr [EDI]
006D8B4D  47                        INC EDI
006D8B4E  EB CA                     JMP 0x006d8b1a
LAB_006d8b50:
006D8B50  8B D8                     MOV EBX,EAX
006D8B52  2B F1                     SUB ESI,ECX
006D8B54  81 E3 C0 00 00 00         AND EBX,0xc0
006D8B5A  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D8B5D  80 FB 80                  CMP BL,0x80
006D8B60  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D8B63  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006D8B66  75 05                     JNZ 0x006d8b6d
006D8B68  03 F9                     ADD EDI,ECX
006D8B6A  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
LAB_006d8b6d:
006D8B6D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006D8B70  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006D8B73  85 C9                     TEST ECX,ECX
006D8B75  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D8B78  0F 84 80 12 00 00         JZ 0x006d9dfe
006D8B7E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D8B81  8A 49 0D                  MOV CL,byte ptr [ECX + 0xd]
006D8B84  80 E1 03                  AND CL,0x3
006D8B87  80 F9 01                  CMP CL,0x1
006D8B8A  0F 85 08 04 00 00         JNZ 0x006d8f98
006D8B90  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D8B93  80 E1 C0                  AND CL,0xc0
006D8B96  F6 C1 80                  TEST CL,0x80
006D8B99  75 02                     JNZ 0x006d8b9d
006D8B9B  32 C9                     XOR CL,CL
LAB_006d8b9d:
006D8B9D  02 4D F4                  ADD CL,byte ptr [EBP + -0xc]
006D8BA0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D8BA3  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006D8BA6  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
LAB_006d8ba9:
006D8BA9  F6 C1 80                  TEST CL,0x80
006D8BAC  0F 84 DA 01 00 00         JZ 0x006d8d8c
006D8BB2  F6 C1 40                  TEST CL,0x40
006D8BB5  74 6D                     JZ 0x006d8c24
006D8BB7  8A 06                     MOV AL,byte ptr [ESI]
006D8BB9  80 E1 3F                  AND CL,0x3f
006D8BBC  8A E0                     MOV AH,AL
006D8BBE  3B CA                     CMP ECX,EDX
006D8BC0  0F 8F DF 01 00 00         JG 0x006d8da5
006D8BC6  2B D1                     SUB EDX,ECX
006D8BC8  46                        INC ESI
006D8BC9  83 F9 03                  CMP ECX,0x3
006D8BCC  7E 3D                     JLE 0x006d8c0b
006D8BCE  F7 C7 01 00 00 00         TEST EDI,0x1
006D8BD4  74 04                     JZ 0x006d8bda
006D8BD6  88 07                     MOV byte ptr [EDI],AL
006D8BD8  47                        INC EDI
006D8BD9  49                        DEC ECX
LAB_006d8bda:
006D8BDA  F7 C7 02 00 00 00         TEST EDI,0x2
006D8BE0  74 09                     JZ 0x006d8beb
006D8BE2  66 89 07                  MOV word ptr [EDI],AX
006D8BE5  83 C7 02                  ADD EDI,0x2
006D8BE8  83 E9 02                  SUB ECX,0x2
LAB_006d8beb:
006D8BEB  8B D8                     MOV EBX,EAX
006D8BED  C1 E0 10                  SHL EAX,0x10
006D8BF0  83 E9 04                  SUB ECX,0x4
006D8BF3  66 8B C3                  MOV AX,BX
006D8BF6  7C 0A                     JL 0x006d8c02
LAB_006d8bf8:
006D8BF8  89 07                     MOV dword ptr [EDI],EAX
006D8BFA  83 C7 04                  ADD EDI,0x4
006D8BFD  83 E9 04                  SUB ECX,0x4
006D8C00  7D F6                     JGE 0x006d8bf8
LAB_006d8c02:
006D8C02  83 C1 04                  ADD ECX,0x4
006D8C05  0F 84 89 01 00 00         JZ 0x006d8d94
LAB_006d8c0b:
006D8C0B  80 F9 01                  CMP CL,0x1
006D8C0E  74 0B                     JZ 0x006d8c1b
006D8C10  80 F9 02                  CMP CL,0x2
006D8C13  74 03                     JZ 0x006d8c18
006D8C15  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d8c18:
006D8C18  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d8c1b:
006D8C1B  88 07                     MOV byte ptr [EDI],AL
006D8C1D  03 F9                     ADD EDI,ECX
006D8C1F  E9 70 01 00 00            JMP 0x006d8d94
LAB_006d8c24:
006D8C24  83 E1 3F                  AND ECX,0x3f
006D8C27  3B CA                     CMP ECX,EDX
006D8C29  0F 8F 76 01 00 00         JG 0x006d8da5
006D8C2F  2B D1                     SUB EDX,ECX
006D8C31  8A 06                     MOV AL,byte ptr [ESI]
006D8C33  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D8C36  0F 82 EC 00 00 00         JC 0x006d8d28
006D8C3C  3A 45 F0                  CMP AL,byte ptr [EBP + -0x10]
006D8C3F  0F 87 E3 00 00 00         JA 0x006d8d28
006D8C45  52                        PUSH EDX
006D8C46  8B DF                     MOV EBX,EDI
006D8C48  83 E3 FC                  AND EBX,0xfffffffc
006D8C4B  8B 13                     MOV EDX,dword ptr [EBX]
006D8C4D  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006D8C50  25 FF 00 00 00            AND EAX,0xff
006D8C55  F7 C7 03 00 00 00         TEST EDI,0x3
006D8C5B  74 4E                     JZ 0x006d8cab
006D8C5D  51                        PUSH ECX
006D8C5E  8B CF                     MOV ECX,EDI
006D8C60  80 E1 03                  AND CL,0x3
006D8C63  C0 E1 03                  SHL CL,0x3
006D8C66  D3 EA                     SHR EDX,CL
006D8C68  59                        POP ECX
006D8C69  83 F9 03                  CMP ECX,0x3
006D8C6C  76 7C                     JBE 0x006d8cea
006D8C6E  F7 C7 01 00 00 00         TEST EDI,0x1
006D8C74  74 10                     JZ 0x006d8c86
006D8C76  8A E0                     MOV AH,AL
006D8C78  8A C2                     MOV AL,DL
006D8C7A  FE C9                     DEC CL
006D8C7C  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8C7F  46                        INC ESI
006D8C80  88 07                     MOV byte ptr [EDI],AL
006D8C82  C1 EA 08                  SHR EDX,0x8
006D8C85  47                        INC EDI
LAB_006d8c86:
006D8C86  F7 C7 02 00 00 00         TEST EDI,0x2
006D8C8C  74 1B                     JZ 0x006d8ca9
006D8C8E  8A C2                     MOV AL,DL
006D8C90  8A 26                     MOV AH,byte ptr [ESI]
006D8C92  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D8C95  8A C6                     MOV AL,DH
006D8C97  8A 66 01                  MOV AH,byte ptr [ESI + 0x1]
006D8C9A  80 E9 02                  SUB CL,0x2
006D8C9D  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D8CA0  83 C6 02                  ADD ESI,0x2
006D8CA3  66 89 17                  MOV word ptr [EDI],DX
006D8CA6  83 C7 02                  ADD EDI,0x2
LAB_006d8ca9:
006D8CA9  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d8cab:
006D8CAB  80 E9 04                  SUB CL,0x4
006D8CAE  7C 35                     JL 0x006d8ce5
LAB_006d8cb0:
006D8CB0  8A C2                     MOV AL,DL
006D8CB2  8A 26                     MOV AH,byte ptr [ESI]
006D8CB4  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D8CB7  8A C6                     MOV AL,DH
006D8CB9  8A 66 01                  MOV AH,byte ptr [ESI + 0x1]
006D8CBC  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D8CBF  C1 C2 10                  ROL EDX,0x10
006D8CC2  8A C2                     MOV AL,DL
006D8CC4  8A 66 02                  MOV AH,byte ptr [ESI + 0x2]
006D8CC7  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D8CCA  8A C6                     MOV AL,DH
006D8CCC  8A 66 03                  MOV AH,byte ptr [ESI + 0x3]
006D8CCF  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D8CD2  C1 C2 10                  ROL EDX,0x10
006D8CD5  83 C6 04                  ADD ESI,0x4
006D8CD8  89 17                     MOV dword ptr [EDI],EDX
006D8CDA  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D8CDD  83 C7 04                  ADD EDI,0x4
006D8CE0  80 E9 04                  SUB CL,0x4
006D8CE3  7D CB                     JGE 0x006d8cb0
LAB_006d8ce5:
006D8CE5  80 C1 04                  ADD CL,0x4
006D8CE8  74 3B                     JZ 0x006d8d25
LAB_006d8cea:
006D8CEA  8A C2                     MOV AL,DL
006D8CEC  8A 26                     MOV AH,byte ptr [ESI]
006D8CEE  46                        INC ESI
006D8CEF  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8CF2  AA                        STOSB ES:EDI
006D8CF3  C1 EA 08                  SHR EDX,0x8
006D8CF6  49                        DEC ECX
006D8CF7  74 2C                     JZ 0x006d8d25
006D8CF9  F7 C7 03 00 00 00         TEST EDI,0x3
006D8CFF  75 02                     JNZ 0x006d8d03
006D8D01  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d8d03:
006D8D03  8A C2                     MOV AL,DL
006D8D05  8A 26                     MOV AH,byte ptr [ESI]
006D8D07  46                        INC ESI
006D8D08  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8D0B  AA                        STOSB ES:EDI
006D8D0C  C1 EA 08                  SHR EDX,0x8
006D8D0F  49                        DEC ECX
006D8D10  74 13                     JZ 0x006d8d25
006D8D12  F7 C7 03 00 00 00         TEST EDI,0x3
006D8D18  75 02                     JNZ 0x006d8d1c
006D8D1A  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d8d1c:
006D8D1C  8A C2                     MOV AL,DL
006D8D1E  8A 26                     MOV AH,byte ptr [ESI]
006D8D20  46                        INC ESI
006D8D21  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8D24  AA                        STOSB ES:EDI
LAB_006d8d25:
006D8D25  5A                        POP EDX
006D8D26  EB 6C                     JMP 0x006d8d94
LAB_006d8d28:
006D8D28  83 F9 03                  CMP ECX,0x3
006D8D2B  7E 3F                     JLE 0x006d8d6c
006D8D2D  F7 C7 01 00 00 00         TEST EDI,0x1
006D8D33  74 07                     JZ 0x006d8d3c
006D8D35  8A 06                     MOV AL,byte ptr [ESI]
006D8D37  49                        DEC ECX
006D8D38  88 07                     MOV byte ptr [EDI],AL
006D8D3A  46                        INC ESI
006D8D3B  47                        INC EDI
LAB_006d8d3c:
006D8D3C  F7 C7 02 00 00 00         TEST EDI,0x2
006D8D42  74 0F                     JZ 0x006d8d53
006D8D44  66 8B 06                  MOV AX,word ptr [ESI]
006D8D47  83 E9 02                  SUB ECX,0x2
006D8D4A  66 89 07                  MOV word ptr [EDI],AX
006D8D4D  83 C6 02                  ADD ESI,0x2
006D8D50  83 C7 02                  ADD EDI,0x2
LAB_006d8d53:
006D8D53  83 E9 04                  SUB ECX,0x4
006D8D56  7C 0F                     JL 0x006d8d67
LAB_006d8d58:
006D8D58  8B 06                     MOV EAX,dword ptr [ESI]
006D8D5A  83 C6 04                  ADD ESI,0x4
006D8D5D  89 07                     MOV dword ptr [EDI],EAX
006D8D5F  83 C7 04                  ADD EDI,0x4
006D8D62  83 E9 04                  SUB ECX,0x4
006D8D65  7D F1                     JGE 0x006d8d58
LAB_006d8d67:
006D8D67  83 C1 04                  ADD ECX,0x4
006D8D6A  74 28                     JZ 0x006d8d94
LAB_006d8d6c:
006D8D6C  80 F9 01                  CMP CL,0x1
006D8D6F  74 11                     JZ 0x006d8d82
006D8D71  80 F9 02                  CMP CL,0x2
006D8D74  74 06                     JZ 0x006d8d7c
006D8D76  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006D8D79  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d8d7c:
006D8D7C  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006D8D7F  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d8d82:
006D8D82  8A 06                     MOV AL,byte ptr [ESI]
006D8D84  03 F1                     ADD ESI,ECX
006D8D86  88 07                     MOV byte ptr [EDI],AL
006D8D88  03 F9                     ADD EDI,ECX
006D8D8A  EB 08                     JMP 0x006d8d94
LAB_006d8d8c:
006D8D8C  3B CA                     CMP ECX,EDX
006D8D8E  7F 15                     JG 0x006d8da5
006D8D90  2B D1                     SUB EDX,ECX
006D8D92  03 F9                     ADD EDI,ECX
LAB_006d8d94:
006D8D94  33 C9                     XOR ECX,ECX
006D8D96  0B D2                     OR EDX,EDX
006D8D98  7E 0B                     JLE 0x006d8da5
006D8D9A  8A 0E                     MOV CL,byte ptr [ESI]
006D8D9C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D8D9F  46                        INC ESI
006D8DA0  E9 04 FE FF FF            JMP 0x006d8ba9
FUN_006d8a60::cf_common_join_006D8DA5:
006D8DA5  0B D2                     OR EDX,EDX
006D8DA7  0F 8E D1 01 00 00         JLE 0x006d8f7e
006D8DAD  2B CA                     SUB ECX,EDX
006D8DAF  F6 45 FC 80               TEST byte ptr [EBP + -0x4],0x80
006D8DB3  0F 84 C3 01 00 00         JZ 0x006d8f7c
006D8DB9  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
006D8DBD  74 60                     JZ 0x006d8e1f
006D8DBF  8A 06                     MOV AL,byte ptr [ESI]
006D8DC1  8A E0                     MOV AH,AL
006D8DC3  46                        INC ESI
006D8DC4  83 FA 03                  CMP EDX,0x3
006D8DC7  7E 3D                     JLE 0x006d8e06
006D8DC9  F7 C7 01 00 00 00         TEST EDI,0x1
006D8DCF  74 04                     JZ 0x006d8dd5
006D8DD1  88 07                     MOV byte ptr [EDI],AL
006D8DD3  47                        INC EDI
006D8DD4  4A                        DEC EDX
LAB_006d8dd5:
006D8DD5  F7 C7 02 00 00 00         TEST EDI,0x2
006D8DDB  74 09                     JZ 0x006d8de6
006D8DDD  66 89 07                  MOV word ptr [EDI],AX
006D8DE0  83 C7 02                  ADD EDI,0x2
006D8DE3  83 EA 02                  SUB EDX,0x2
LAB_006d8de6:
006D8DE6  8B D8                     MOV EBX,EAX
006D8DE8  C1 E0 10                  SHL EAX,0x10
006D8DEB  83 EA 04                  SUB EDX,0x4
006D8DEE  66 8B C3                  MOV AX,BX
006D8DF1  7C 0A                     JL 0x006d8dfd
LAB_006d8df3:
006D8DF3  89 07                     MOV dword ptr [EDI],EAX
006D8DF5  83 C7 04                  ADD EDI,0x4
006D8DF8  83 EA 04                  SUB EDX,0x4
006D8DFB  7D F6                     JGE 0x006d8df3
LAB_006d8dfd:
006D8DFD  83 C2 04                  ADD EDX,0x4
006D8E00  0F 84 78 01 00 00         JZ 0x006d8f7e
LAB_006d8e06:
006D8E06  80 FA 01                  CMP DL,0x1
006D8E09  74 0B                     JZ 0x006d8e16
006D8E0B  80 FA 02                  CMP DL,0x2
006D8E0E  74 03                     JZ 0x006d8e13
006D8E10  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d8e13:
006D8E13  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d8e16:
006D8E16  88 07                     MOV byte ptr [EDI],AL
006D8E18  03 FA                     ADD EDI,EDX
006D8E1A  E9 5F 01 00 00            JMP 0x006d8f7e
LAB_006d8e1f:
006D8E1F  8A 06                     MOV AL,byte ptr [ESI]
006D8E21  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D8E24  0F 82 EE 00 00 00         JC 0x006d8f18
006D8E2A  3A 45 F0                  CMP AL,byte ptr [EBP + -0x10]
006D8E2D  0F 87 E5 00 00 00         JA 0x006d8f18
006D8E33  51                        PUSH ECX
006D8E34  8B CA                     MOV ECX,EDX
006D8E36  8B DF                     MOV EBX,EDI
006D8E38  83 E3 FC                  AND EBX,0xfffffffc
006D8E3B  8B 13                     MOV EDX,dword ptr [EBX]
006D8E3D  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006D8E40  25 FF 00 00 00            AND EAX,0xff
006D8E45  F7 C7 03 00 00 00         TEST EDI,0x3
006D8E4B  74 4E                     JZ 0x006d8e9b
006D8E4D  51                        PUSH ECX
006D8E4E  8B CF                     MOV ECX,EDI
006D8E50  80 E1 03                  AND CL,0x3
006D8E53  C0 E1 03                  SHL CL,0x3
006D8E56  D3 EA                     SHR EDX,CL
006D8E58  59                        POP ECX
006D8E59  83 F9 03                  CMP ECX,0x3
006D8E5C  76 7C                     JBE 0x006d8eda
006D8E5E  F7 C7 01 00 00 00         TEST EDI,0x1
006D8E64  74 10                     JZ 0x006d8e76
006D8E66  8A E0                     MOV AH,AL
006D8E68  8A C2                     MOV AL,DL
006D8E6A  FE C9                     DEC CL
006D8E6C  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8E6F  46                        INC ESI
006D8E70  88 07                     MOV byte ptr [EDI],AL
006D8E72  C1 EA 08                  SHR EDX,0x8
006D8E75  47                        INC EDI
LAB_006d8e76:
006D8E76  F7 C7 02 00 00 00         TEST EDI,0x2
006D8E7C  74 1B                     JZ 0x006d8e99
006D8E7E  8A C2                     MOV AL,DL
006D8E80  8A 26                     MOV AH,byte ptr [ESI]
006D8E82  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D8E85  8A C6                     MOV AL,DH
006D8E87  8A 66 01                  MOV AH,byte ptr [ESI + 0x1]
006D8E8A  80 E9 02                  SUB CL,0x2
006D8E8D  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D8E90  83 C6 02                  ADD ESI,0x2
006D8E93  66 89 17                  MOV word ptr [EDI],DX
006D8E96  83 C7 02                  ADD EDI,0x2
LAB_006d8e99:
006D8E99  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d8e9b:
006D8E9B  80 E9 04                  SUB CL,0x4
006D8E9E  7C 35                     JL 0x006d8ed5
LAB_006d8ea0:
006D8EA0  8A C2                     MOV AL,DL
006D8EA2  8A 26                     MOV AH,byte ptr [ESI]
006D8EA4  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D8EA7  8A C6                     MOV AL,DH
006D8EA9  8A 66 01                  MOV AH,byte ptr [ESI + 0x1]
006D8EAC  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D8EAF  C1 C2 10                  ROL EDX,0x10
006D8EB2  8A C2                     MOV AL,DL
006D8EB4  8A 66 02                  MOV AH,byte ptr [ESI + 0x2]
006D8EB7  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D8EBA  8A C6                     MOV AL,DH
006D8EBC  8A 66 03                  MOV AH,byte ptr [ESI + 0x3]
006D8EBF  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D8EC2  C1 C2 10                  ROL EDX,0x10
006D8EC5  83 C6 04                  ADD ESI,0x4
006D8EC8  89 17                     MOV dword ptr [EDI],EDX
006D8ECA  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D8ECD  83 C7 04                  ADD EDI,0x4
006D8ED0  80 E9 04                  SUB CL,0x4
006D8ED3  7D CB                     JGE 0x006d8ea0
LAB_006d8ed5:
006D8ED5  80 C1 04                  ADD CL,0x4
006D8ED8  74 3B                     JZ 0x006d8f15
LAB_006d8eda:
006D8EDA  8A C2                     MOV AL,DL
006D8EDC  8A 26                     MOV AH,byte ptr [ESI]
006D8EDE  46                        INC ESI
006D8EDF  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8EE2  AA                        STOSB ES:EDI
006D8EE3  C1 EA 08                  SHR EDX,0x8
006D8EE6  49                        DEC ECX
006D8EE7  74 2C                     JZ 0x006d8f15
006D8EE9  F7 C7 03 00 00 00         TEST EDI,0x3
006D8EEF  75 02                     JNZ 0x006d8ef3
006D8EF1  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d8ef3:
006D8EF3  8A C2                     MOV AL,DL
006D8EF5  8A 26                     MOV AH,byte ptr [ESI]
006D8EF7  46                        INC ESI
006D8EF8  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8EFB  AA                        STOSB ES:EDI
006D8EFC  C1 EA 08                  SHR EDX,0x8
006D8EFF  49                        DEC ECX
006D8F00  74 13                     JZ 0x006d8f15
006D8F02  F7 C7 03 00 00 00         TEST EDI,0x3
006D8F08  75 02                     JNZ 0x006d8f0c
006D8F0A  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d8f0c:
006D8F0C  8A C2                     MOV AL,DL
006D8F0E  8A 26                     MOV AH,byte ptr [ESI]
006D8F10  46                        INC ESI
006D8F11  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D8F14  AA                        STOSB ES:EDI
LAB_006d8f15:
006D8F15  59                        POP ECX
006D8F16  EB 66                     JMP 0x006d8f7e
LAB_006d8f18:
006D8F18  83 FA 03                  CMP EDX,0x3
006D8F1B  7E 3F                     JLE 0x006d8f5c
006D8F1D  F7 C7 01 00 00 00         TEST EDI,0x1
006D8F23  74 07                     JZ 0x006d8f2c
006D8F25  8A 06                     MOV AL,byte ptr [ESI]
006D8F27  88 07                     MOV byte ptr [EDI],AL
006D8F29  46                        INC ESI
006D8F2A  47                        INC EDI
006D8F2B  4A                        DEC EDX
LAB_006d8f2c:
006D8F2C  F7 C7 02 00 00 00         TEST EDI,0x2
006D8F32  74 0F                     JZ 0x006d8f43
006D8F34  66 8B 06                  MOV AX,word ptr [ESI]
006D8F37  66 89 07                  MOV word ptr [EDI],AX
006D8F3A  83 C6 02                  ADD ESI,0x2
006D8F3D  83 C7 02                  ADD EDI,0x2
006D8F40  83 EA 02                  SUB EDX,0x2
LAB_006d8f43:
006D8F43  83 EA 04                  SUB EDX,0x4
006D8F46  7C 0F                     JL 0x006d8f57
LAB_006d8f48:
006D8F48  8B 06                     MOV EAX,dword ptr [ESI]
006D8F4A  83 C6 04                  ADD ESI,0x4
006D8F4D  89 07                     MOV dword ptr [EDI],EAX
006D8F4F  83 C7 04                  ADD EDI,0x4
006D8F52  83 EA 04                  SUB EDX,0x4
006D8F55  7D F1                     JGE 0x006d8f48
LAB_006d8f57:
006D8F57  83 C2 04                  ADD EDX,0x4
006D8F5A  74 22                     JZ 0x006d8f7e
LAB_006d8f5c:
006D8F5C  80 FA 01                  CMP DL,0x1
006D8F5F  74 11                     JZ 0x006d8f72
006D8F61  80 FA 02                  CMP DL,0x2
006D8F64  74 06                     JZ 0x006d8f6c
006D8F66  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006D8F69  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d8f6c:
006D8F6C  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006D8F6F  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d8f72:
006D8F72  8A 06                     MOV AL,byte ptr [ESI]
006D8F74  88 07                     MOV byte ptr [EDI],AL
006D8F76  03 F2                     ADD ESI,EDX
006D8F78  03 FA                     ADD EDI,EDX
006D8F7A  EB 02                     JMP 0x006d8f7e
LAB_006d8f7c:
006D8F7C  03 FA                     ADD EDI,EDX
LAB_006d8f7e:
006D8F7E  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D8F81  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D8F84  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006D8F87  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D8F8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D8F8D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D8F90  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D8F93  E9 14 0F 00 00            JMP 0x006d9eac
LAB_006d8f98:
006D8F98  80 F9 02                  CMP CL,0x2
006D8F9B  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006D8F9E  0F 85 B1 07 00 00         JNZ 0x006d9755
006D8FA4  85 C9                     TEST ECX,ECX
006D8FA6  0F 84 92 02 00 00         JZ 0x006d923e
006D8FAC  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D8FAF  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006D8FB2  83 E1 07                  AND ECX,0x7
006D8FB5  BB 80 00 00 00            MOV EBX,0x80
006D8FBA  D3 FB                     SAR EBX,CL
006D8FBC  3B 75 1C                  CMP ESI,dword ptr [EBP + 0x1c]
006D8FBF  0F 8F 58 01 00 00         JG 0x006d911d
006D8FC5  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D8FC8  8B F8                     MOV EDI,EAX
006D8FCA  81 E7 80 00 00 00         AND EDI,0x80
LAB_006d8fd0:
006D8FD0  2B CE                     SUB ECX,ESI
006D8FD2  85 FF                     TEST EDI,EDI
006D8FD4  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D8FD7  0F 84 D3 00 00 00         JZ 0x006d90b0
006D8FDD  A8 40                     TEST AL,0x40
006D8FDF  0F 84 97 00 00 00         JZ 0x006d907c
006D8FE5  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D8FE8  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D8FEB  47                        INC EDI
006D8FEC  8A 09                     MOV CL,byte ptr [ECX]
006D8FEE  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D8FF1  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D8FF4  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D8FF7  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D8FFA  81 E7 FF 00 00 00         AND EDI,0xff
006D9000  3B F9                     CMP EDI,ECX
006D9002  75 51                     JNZ 0x006d9055
006D9004  33 C9                     XOR ECX,ECX
006D9006  8A EB                     MOV CH,BL
006D9008  8B D9                     MOV EBX,ECX
006D900A  8B CE                     MOV ECX,ESI
006D900C  83 E1 07                  AND ECX,0x7
006D900F  D3 EB                     SHR EBX,CL
006D9011  8B CB                     MOV ECX,EBX
006D9013  81 F9 80 00 00 00         CMP ECX,0x80
006D9019  77 0B                     JA 0x006d9026
006D901B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D901E  8A D9                     MOV BL,CL
006D9020  47                        INC EDI
006D9021  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D9024  EB 04                     JMP 0x006d902a
LAB_006d9026:
006D9026  33 DB                     XOR EBX,EBX
006D9028  8A DD                     MOV BL,CH
LAB_006d902a:
006D902A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D902D  8B CE                     MOV ECX,ESI
006D902F  C1 F9 03                  SAR ECX,0x3
006D9032  03 F9                     ADD EDI,ECX
006D9034  4E                        DEC ESI
006D9035  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D9038  0F 88 A5 00 00 00         JS 0x006d90e3
006D903E  46                        INC ESI
LAB_006d903f:
006D903F  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D9042  33 C9                     XOR ECX,ECX
006D9044  8A 0A                     MOV CL,byte ptr [EDX]
006D9046  42                        INC EDX
006D9047  4E                        DEC ESI
006D9048  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006D904B  88 4A FF                  MOV byte ptr [EDX + -0x1],CL
006D904E  75 EF                     JNZ 0x006d903f
006D9050  E9 8E 00 00 00            JMP 0x006d90e3
LAB_006d9055:
006D9055  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D9058  4E                        DEC ESI
006D9059  8A 0C 0F                  MOV CL,byte ptr [EDI + ECX*0x1]
006D905C  0F 88 81 00 00 00         JS 0x006d90e3
006D9062  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D9065  46                        INC ESI
LAB_006d9066:
006D9066  84 1F                     TEST byte ptr [EDI],BL
006D9068  74 02                     JZ 0x006d906c
006D906A  88 0A                     MOV byte ptr [EDX],CL
LAB_006d906c:
006D906C  42                        INC EDX
006D906D  D0 EB                     SHR BL,0x1
006D906F  75 03                     JNZ 0x006d9074
006D9071  B3 80                     MOV BL,0x80
006D9073  47                        INC EDI
LAB_006d9074:
006D9074  4E                        DEC ESI
006D9075  75 EF                     JNZ 0x006d9066
006D9077  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D907A  EB 67                     JMP 0x006d90e3
LAB_006d907c:
006D907C  4E                        DEC ESI
006D907D  78 64                     JS 0x006d90e3
006D907F  46                        INC ESI
LAB_006d9080:
006D9080  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D9083  84 19                     TEST byte ptr [ECX],BL
006D9085  74 16                     JZ 0x006d909d
006D9087  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D908A  33 C9                     XOR ECX,ECX
006D908C  8A 0F                     MOV CL,byte ptr [EDI]
006D908E  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006D9091  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006D9094  88 0A                     MOV byte ptr [EDX],CL
006D9096  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D9099  41                        INC ECX
006D909A  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
LAB_006d909d:
006D909D  42                        INC EDX
006D909E  D0 EB                     SHR BL,0x1
006D90A0  75 09                     JNZ 0x006d90ab
006D90A2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D90A5  B3 80                     MOV BL,0x80
006D90A7  41                        INC ECX
006D90A8  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006d90ab:
006D90AB  4E                        DEC ESI
006D90AC  75 D2                     JNZ 0x006d9080
006D90AE  EB 33                     JMP 0x006d90e3
LAB_006d90b0:
006D90B0  33 C9                     XOR ECX,ECX
006D90B2  03 D6                     ADD EDX,ESI
006D90B4  8A EB                     MOV CH,BL
006D90B6  8B D9                     MOV EBX,ECX
006D90B8  8B CE                     MOV ECX,ESI
006D90BA  83 E1 07                  AND ECX,0x7
006D90BD  D3 EB                     SHR EBX,CL
006D90BF  8B CB                     MOV ECX,EBX
006D90C1  81 F9 80 00 00 00         CMP ECX,0x80
006D90C7  77 0B                     JA 0x006d90d4
006D90C9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D90CC  8A D9                     MOV BL,CL
006D90CE  47                        INC EDI
006D90CF  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D90D2  EB 04                     JMP 0x006d90d8
LAB_006d90d4:
006D90D4  33 DB                     XOR EBX,EBX
006D90D6  8A DD                     MOV BL,CH
LAB_006d90d8:
006D90D8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D90DB  C1 FE 03                  SAR ESI,0x3
006D90DE  03 CE                     ADD ECX,ESI
006D90E0  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006d90e3:
006D90E3  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D90E6  85 C9                     TEST ECX,ECX
006D90E8  7E 2E                     JLE 0x006d9118
006D90EA  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006D90ED  33 C0                     XOR EAX,EAX
006D90EF  8A 06                     MOV AL,byte ptr [ESI]
006D90F1  8B F8                     MOV EDI,EAX
006D90F3  81 E7 80 00 00 00         AND EDI,0x80
006D90F9  46                        INC ESI
006D90FA  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006D90FD  8B F0                     MOV ESI,EAX
006D90FF  85 FF                     TEST EDI,EDI
006D9101  74 05                     JZ 0x006d9108
006D9103  83 E6 3F                  AND ESI,0x3f
006D9106  EB 03                     JMP 0x006d910b
LAB_006d9108:
006D9108  83 E6 7F                  AND ESI,0x7f
LAB_006d910b:
006D910B  3B F1                     CMP ESI,ECX
006D910D  0F 8E BD FE FF FF         JLE 0x006d8fd0
006D9113  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D9116  EB 05                     JMP 0x006d911d
LAB_006d9118:
006D9118  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D911B  33 F6                     XOR ESI,ESI
LAB_006d911d:
006D911D  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9120  2B F1                     SUB ESI,ECX
006D9122  A8 80                     TEST AL,0x80
006D9124  0F 84 EE 08 00 00         JZ 0x006d9a18
006D912A  A8 40                     TEST AL,0x40
006D912C  0F 84 BB 00 00 00         JZ 0x006d91ed
006D9132  85 C9                     TEST ECX,ECX
006D9134  0F 8E E0 08 00 00         JLE 0x006d9a1a
006D913A  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D913D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9140  47                        INC EDI
006D9141  8A 09                     MOV CL,byte ptr [ECX]
006D9143  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9146  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9149  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D914C  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D914F  81 E7 FF 00 00 00         AND EDI,0xff
006D9155  3B F9                     CMP EDI,ECX
006D9157  75 32                     JNZ 0x006d918b
006D9159  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D915C  49                        DEC ECX
006D915D  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D9160  0F 88 B4 08 00 00         JS 0x006d9a1a
006D9166  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D9169  41                        INC ECX
LAB_006d916a:
006D916A  33 DB                     XOR EBX,EBX
006D916C  8A 1A                     MOV BL,byte ptr [EDX]
006D916E  42                        INC EDX
006D916F  49                        DEC ECX
006D9170  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
006D9173  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D9176  75 F2                     JNZ 0x006d916a
006D9178  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D917B  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006D917E  03 F9                     ADD EDI,ECX
006D9180  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006D9183  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9186  E9 21 0D 00 00            JMP 0x006d9eac
LAB_006d918b:
006D918B  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D918E  8A 0C 0F                  MOV CL,byte ptr [EDI + ECX*0x1]
006D9191  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9194  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9197  49                        DEC ECX
006D9198  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D919B  0F 88 79 08 00 00         JS 0x006d9a1a
006D91A1  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D91A4  8B C1                     MOV EAX,ECX
006D91A6  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D91A9  40                        INC EAX
006D91AA  89 45 40                  MOV dword ptr [EBP + 0x40],EAX
LAB_006d91ad:
006D91AD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D91B0  84 18                     TEST byte ptr [EAX],BL
006D91B2  74 0C                     JZ 0x006d91c0
006D91B4  8B C7                     MOV EAX,EDI
006D91B6  25 FF 00 00 00            AND EAX,0xff
006D91BB  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
006D91BE  88 02                     MOV byte ptr [EDX],AL
LAB_006d91c0:
006D91C0  42                        INC EDX
006D91C1  D0 EB                     SHR BL,0x1
006D91C3  75 09                     JNZ 0x006d91ce
006D91C5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D91C8  B3 80                     MOV BL,0x80
006D91CA  40                        INC EAX
006D91CB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006d91ce:
006D91CE  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006D91D1  48                        DEC EAX
006D91D2  89 45 40                  MOV dword ptr [EBP + 0x40],EAX
006D91D5  75 D6                     JNZ 0x006d91ad
006D91D7  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D91DA  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006D91DD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D91E0  03 F9                     ADD EDI,ECX
006D91E2  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006D91E5  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D91E8  E9 BF 0C 00 00            JMP 0x006d9eac
LAB_006d91ed:
006D91ED  49                        DEC ECX
006D91EE  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D91F1  0F 88 23 08 00 00         JS 0x006d9a1a
006D91F7  8D 79 01                  LEA EDI,[ECX + 0x1]
LAB_006d91fa:
006D91FA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D91FD  84 19                     TEST byte ptr [ECX],BL
006D91FF  74 19                     JZ 0x006d921a
006D9201  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D9204  33 C0                     XOR EAX,EAX
006D9206  8A 01                     MOV AL,byte ptr [ECX]
006D9208  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D920B  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
006D920E  88 02                     MOV byte ptr [EDX],AL
006D9210  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D9213  40                        INC EAX
006D9214  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006D9217  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006d921a:
006D921A  42                        INC EDX
006D921B  D0 EB                     SHR BL,0x1
006D921D  75 09                     JNZ 0x006d9228
006D921F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D9222  B3 80                     MOV BL,0x80
006D9224  41                        INC ECX
006D9225  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006d9228:
006D9228  4F                        DEC EDI
006D9229  75 CF                     JNZ 0x006d91fa
006D922B  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D922E  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006D9231  03 F9                     ADD EDI,ECX
006D9233  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006D9236  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9239  E9 6E 0C 00 00            JMP 0x006d9eac
LAB_006d923e:
006D923E  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D9241  85 C9                     TEST ECX,ECX
006D9243  0F 84 5D 01 00 00         JZ 0x006d93a6
006D9249  3B 75 1C                  CMP ESI,dword ptr [EBP + 0x1c]
006D924C  0F 8F BC 00 00 00         JG 0x006d930e
006D9252  8B C8                     MOV ECX,EAX
006D9254  81 E1 80 00 00 00         AND ECX,0x80
LAB_006d925a:
006D925A  2B DE                     SUB EBX,ESI
006D925C  85 C9                     TEST ECX,ECX
006D925E  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D9261  0F 84 8E 00 00 00         JZ 0x006d92f5
006D9267  A8 40                     TEST AL,0x40
006D9269  74 6B                     JZ 0x006d92d6
006D926B  8A 0F                     MOV CL,byte ptr [EDI]
006D926D  47                        INC EDI
006D926E  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9271  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9274  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9277  81 E1 FF 00 00 00         AND ECX,0xff
006D927D  3B 4D 28                  CMP ECX,dword ptr [EBP + 0x28]
006D9280  75 3B                     JNZ 0x006d92bd
006D9282  8B CE                     MOV ECX,ESI
006D9284  4E                        DEC ESI
006D9285  85 C9                     TEST ECX,ECX
006D9287  7E 15                     JLE 0x006d929e
006D9289  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006D928C  46                        INC ESI
LAB_006d928d:
006D928D  33 DB                     XOR EBX,EBX
006D928F  8A 1A                     MOV BL,byte ptr [EDX]
006D9291  42                        INC EDX
006D9292  4E                        DEC ESI
006D9293  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
006D9296  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D9299  75 F2                     JNZ 0x006d928d
LAB_006d929b:
006D929B  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
LAB_006d929e:
006D929E  85 DB                     TEST EBX,EBX
006D92A0  7E 67                     JLE 0x006d9309
006D92A2  33 C0                     XOR EAX,EAX
006D92A4  8A 07                     MOV AL,byte ptr [EDI]
006D92A6  8B C8                     MOV ECX,EAX
006D92A8  8B F0                     MOV ESI,EAX
006D92AA  81 E1 80 00 00 00         AND ECX,0x80
006D92B0  47                        INC EDI
006D92B1  85 C9                     TEST ECX,ECX
006D92B3  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D92B6  74 41                     JZ 0x006d92f9
006D92B8  83 E6 3F                  AND ESI,0x3f
006D92BB  EB 3F                     JMP 0x006d92fc
LAB_006d92bd:
006D92BD  8B DE                     MOV EBX,ESI
006D92BF  4E                        DEC ESI
006D92C0  85 DB                     TEST EBX,EBX
006D92C2  7E D7                     JLE 0x006d929b
006D92C4  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006D92C7  46                        INC ESI
LAB_006d92c8:
006D92C8  8A 1C 39                  MOV BL,byte ptr [ECX + EDI*0x1]
006D92CB  88 1A                     MOV byte ptr [EDX],BL
006D92CD  42                        INC EDX
006D92CE  4E                        DEC ESI
006D92CF  75 F7                     JNZ 0x006d92c8
006D92D1  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D92D4  EB C5                     JMP 0x006d929b
LAB_006d92d6:
006D92D6  8B CE                     MOV ECX,ESI
006D92D8  4E                        DEC ESI
006D92D9  85 C9                     TEST ECX,ECX
006D92DB  7E C1                     JLE 0x006d929e
006D92DD  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D92E0  46                        INC ESI
LAB_006d92e1:
006D92E1  33 DB                     XOR EBX,EBX
006D92E3  42                        INC EDX
006D92E4  8A 1F                     MOV BL,byte ptr [EDI]
006D92E6  47                        INC EDI
006D92E7  4E                        DEC ESI
006D92E8  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
006D92EB  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D92EE  75 F1                     JNZ 0x006d92e1
006D92F0  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D92F3  EB A6                     JMP 0x006d929b
LAB_006d92f5:
006D92F5  03 D6                     ADD EDX,ESI
006D92F7  EB A5                     JMP 0x006d929e
LAB_006d92f9:
006D92F9  83 E6 7F                  AND ESI,0x7f
LAB_006d92fc:
006D92FC  3B F3                     CMP ESI,EBX
006D92FE  0F 8E 56 FF FF FF         JLE 0x006d925a
006D9304  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D9307  EB 05                     JMP 0x006d930e
LAB_006d9309:
006D9309  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D930C  33 F6                     XOR ESI,ESI
LAB_006d930e:
006D930E  2B F3                     SUB ESI,EBX
006D9310  A8 80                     TEST AL,0x80
006D9312  0F 84 0C 09 00 00         JZ 0x006d9c24
006D9318  A8 40                     TEST AL,0x40
006D931A  74 59                     JZ 0x006d9375
006D931C  85 DB                     TEST EBX,EBX
006D931E  0F 8E 88 0B 00 00         JLE 0x006d9eac
006D9324  8A 0F                     MOV CL,byte ptr [EDI]
006D9326  47                        INC EDI
006D9327  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D932A  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D932D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9330  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006D9333  81 E1 FF 00 00 00         AND ECX,0xff
006D9339  3B CF                     CMP ECX,EDI
006D933B  75 1C                     JNZ 0x006d9359
006D933D  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9340  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006d9343:
006D9343  33 DB                     XOR EBX,EBX
006D9345  8A 1A                     MOV BL,byte ptr [EDX]
006D9347  42                        INC EDX
006D9348  49                        DEC ECX
006D9349  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
006D934C  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D934F  75 F2                     JNZ 0x006d9343
006D9351  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9354  E9 53 0B 00 00            JMP 0x006d9eac
LAB_006d9359:
006D9359  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006D935C  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006D935F  8D 38                     LEA EDI,[EAX]
LAB_006d9361:
006D9361  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006D9364  88 02                     MOV byte ptr [EDX],AL
006D9366  42                        INC EDX
006D9367  4F                        DEC EDI
006D9368  75 F7                     JNZ 0x006d9361
006D936A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D936D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9370  E9 37 0B 00 00            JMP 0x006d9eac
LAB_006d9375:
006D9375  8B CB                     MOV ECX,EBX
006D9377  4B                        DEC EBX
006D9378  85 C9                     TEST ECX,ECX
006D937A  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D937D  0F 8E 29 0B 00 00         JLE 0x006d9eac
006D9383  8B CB                     MOV ECX,EBX
006D9385  41                        INC ECX
LAB_006d9386:
006D9386  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9389  33 DB                     XOR EBX,EBX
006D938B  42                        INC EDX
006D938C  8A 1F                     MOV BL,byte ptr [EDI]
006D938E  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006D9391  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
006D9394  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9397  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D939A  47                        INC EDI
006D939B  49                        DEC ECX
006D939C  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D939F  75 E5                     JNZ 0x006d9386
006D93A1  E9 06 0B 00 00            JMP 0x006d9eac
LAB_006d93a6:
006D93A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D93A9  80 E1 C0                  AND CL,0xc0
006D93AC  F6 C1 80                  TEST CL,0x80
006D93AF  75 02                     JNZ 0x006d93b3
006D93B1  32 C9                     XOR CL,CL
LAB_006d93b3:
006D93B3  02 4D F4                  ADD CL,byte ptr [EBP + -0xc]
006D93B6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D93B9  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006D93BC  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
LAB_006d93bf:
006D93BF  F6 C1 80                  TEST CL,0x80
006D93C2  0F 84 AD 01 00 00         JZ 0x006d9575
006D93C8  F6 C1 40                  TEST CL,0x40
006D93CB  0F 84 37 01 00 00         JZ 0x006d9508
006D93D1  8A 06                     MOV AL,byte ptr [ESI]
006D93D3  80 E1 3F                  AND CL,0x3f
006D93D6  8A E0                     MOV AH,AL
006D93D8  3B CA                     CMP ECX,EDX
006D93DA  0F 8F AE 01 00 00         JG 0x006d958e
006D93E0  2B D1                     SUB EDX,ECX
006D93E2  46                        INC ESI
006D93E3  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D93E6  0F 82 C4 00 00 00         JC 0x006d94b0
006D93EC  3A 45 F0                  CMP AL,byte ptr [EBP + -0x10]
006D93EF  0F 87 BB 00 00 00         JA 0x006d94b0
006D93F5  52                        PUSH EDX
006D93F6  8B DF                     MOV EBX,EDI
006D93F8  83 E3 FC                  AND EBX,0xfffffffc
006D93FB  8B 13                     MOV EDX,dword ptr [EBX]
006D93FD  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006D9400  25 FF 00 00 00            AND EAX,0xff
006D9405  F7 C7 03 00 00 00         TEST EDI,0x3
006D940B  74 43                     JZ 0x006d9450
006D940D  51                        PUSH ECX
006D940E  8B CF                     MOV ECX,EDI
006D9410  80 E1 03                  AND CL,0x3
006D9413  C0 E1 03                  SHL CL,0x3
006D9416  D3 EA                     SHR EDX,CL
006D9418  59                        POP ECX
006D9419  83 F9 03                  CMP ECX,0x3
006D941C  76 63                     JBE 0x006d9481
006D941E  F7 C7 01 00 00 00         TEST EDI,0x1
006D9424  74 0D                     JZ 0x006d9433
006D9426  8A C2                     MOV AL,DL
006D9428  FE C9                     DEC CL
006D942A  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D942D  88 07                     MOV byte ptr [EDI],AL
006D942F  C1 EA 08                  SHR EDX,0x8
006D9432  47                        INC EDI
LAB_006d9433:
006D9433  F7 C7 02 00 00 00         TEST EDI,0x2
006D9439  74 13                     JZ 0x006d944e
006D943B  8A C2                     MOV AL,DL
006D943D  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D9440  8A C6                     MOV AL,DH
006D9442  80 E9 02                  SUB CL,0x2
006D9445  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D9448  66 89 17                  MOV word ptr [EDI],DX
006D944B  83 C7 02                  ADD EDI,0x2
LAB_006d944e:
006D944E  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d9450:
006D9450  80 E9 04                  SUB CL,0x4
006D9453  7C 27                     JL 0x006d947c
LAB_006d9455:
006D9455  8A C2                     MOV AL,DL
006D9457  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D945A  8A C6                     MOV AL,DH
006D945C  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D945F  C1 C2 10                  ROL EDX,0x10
006D9462  8A C2                     MOV AL,DL
006D9464  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D9467  8A C6                     MOV AL,DH
006D9469  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D946C  C1 C2 10                  ROL EDX,0x10
006D946F  89 17                     MOV dword ptr [EDI],EDX
006D9471  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D9474  83 C7 04                  ADD EDI,0x4
006D9477  80 E9 04                  SUB CL,0x4
006D947A  7D D9                     JGE 0x006d9455
LAB_006d947c:
006D947C  80 C1 04                  ADD CL,0x4
006D947F  74 29                     JZ 0x006d94aa
LAB_006d9481:
006D9481  80 F9 01                  CMP CL,0x1
006D9484  74 1B                     JZ 0x006d94a1
006D9486  80 F9 02                  CMP CL,0x2
006D9489  74 0E                     JZ 0x006d9499
006D948B  C1 CA 10                  ROR EDX,0x10
006D948E  8A C2                     MOV AL,DL
006D9490  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D9493  C1 C2 10                  ROL EDX,0x10
006D9496  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d9499:
006D9499  8A C6                     MOV AL,DH
006D949B  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D949E  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d94a1:
006D94A1  8A C2                     MOV AL,DL
006D94A3  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D94A6  88 07                     MOV byte ptr [EDI],AL
006D94A8  03 F9                     ADD EDI,ECX
LAB_006d94aa:
006D94AA  5A                        POP EDX
006D94AB  E9 CD 00 00 00            JMP 0x006d957d
LAB_006d94b0:
006D94B0  83 F9 03                  CMP ECX,0x3
006D94B3  7E 3D                     JLE 0x006d94f2
006D94B5  F7 C7 01 00 00 00         TEST EDI,0x1
006D94BB  74 04                     JZ 0x006d94c1
006D94BD  88 07                     MOV byte ptr [EDI],AL
006D94BF  47                        INC EDI
006D94C0  49                        DEC ECX
LAB_006d94c1:
006D94C1  F7 C7 02 00 00 00         TEST EDI,0x2
006D94C7  74 09                     JZ 0x006d94d2
006D94C9  66 89 07                  MOV word ptr [EDI],AX
006D94CC  83 C7 02                  ADD EDI,0x2
006D94CF  83 E9 02                  SUB ECX,0x2
LAB_006d94d2:
006D94D2  8B D8                     MOV EBX,EAX
006D94D4  C1 E0 10                  SHL EAX,0x10
006D94D7  83 E9 04                  SUB ECX,0x4
006D94DA  66 8B C3                  MOV AX,BX
006D94DD  7C 0A                     JL 0x006d94e9
LAB_006d94df:
006D94DF  89 07                     MOV dword ptr [EDI],EAX
006D94E1  83 C7 04                  ADD EDI,0x4
006D94E4  83 E9 04                  SUB ECX,0x4
006D94E7  7D F6                     JGE 0x006d94df
LAB_006d94e9:
006D94E9  83 C1 04                  ADD ECX,0x4
006D94EC  0F 84 8B 00 00 00         JZ 0x006d957d
LAB_006d94f2:
006D94F2  80 F9 01                  CMP CL,0x1
006D94F5  74 0B                     JZ 0x006d9502
006D94F7  80 F9 02                  CMP CL,0x2
006D94FA  74 03                     JZ 0x006d94ff
006D94FC  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d94ff:
006D94FF  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d9502:
006D9502  88 07                     MOV byte ptr [EDI],AL
006D9504  03 F9                     ADD EDI,ECX
006D9506  EB 75                     JMP 0x006d957d
LAB_006d9508:
006D9508  83 E1 3F                  AND ECX,0x3f
006D950B  3B CA                     CMP ECX,EDX
006D950D  7F 7F                     JG 0x006d958e
006D950F  2B D1                     SUB EDX,ECX
006D9511  83 F9 03                  CMP ECX,0x3
006D9514  7E 3F                     JLE 0x006d9555
006D9516  F7 C7 01 00 00 00         TEST EDI,0x1
006D951C  74 07                     JZ 0x006d9525
006D951E  8A 06                     MOV AL,byte ptr [ESI]
006D9520  49                        DEC ECX
006D9521  88 07                     MOV byte ptr [EDI],AL
006D9523  46                        INC ESI
006D9524  47                        INC EDI
LAB_006d9525:
006D9525  F7 C7 02 00 00 00         TEST EDI,0x2
006D952B  74 0F                     JZ 0x006d953c
006D952D  66 8B 06                  MOV AX,word ptr [ESI]
006D9530  83 E9 02                  SUB ECX,0x2
006D9533  66 89 07                  MOV word ptr [EDI],AX
006D9536  83 C6 02                  ADD ESI,0x2
006D9539  83 C7 02                  ADD EDI,0x2
LAB_006d953c:
006D953C  83 E9 04                  SUB ECX,0x4
006D953F  7C 0F                     JL 0x006d9550
LAB_006d9541:
006D9541  8B 06                     MOV EAX,dword ptr [ESI]
006D9543  83 C6 04                  ADD ESI,0x4
006D9546  89 07                     MOV dword ptr [EDI],EAX
006D9548  83 C7 04                  ADD EDI,0x4
006D954B  83 E9 04                  SUB ECX,0x4
006D954E  7D F1                     JGE 0x006d9541
LAB_006d9550:
006D9550  83 C1 04                  ADD ECX,0x4
006D9553  74 28                     JZ 0x006d957d
LAB_006d9555:
006D9555  80 F9 01                  CMP CL,0x1
006D9558  74 11                     JZ 0x006d956b
006D955A  80 F9 02                  CMP CL,0x2
006D955D  74 06                     JZ 0x006d9565
006D955F  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006D9562  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d9565:
006D9565  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006D9568  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d956b:
006D956B  8A 06                     MOV AL,byte ptr [ESI]
006D956D  03 F1                     ADD ESI,ECX
006D956F  88 07                     MOV byte ptr [EDI],AL
006D9571  03 F9                     ADD EDI,ECX
006D9573  EB 08                     JMP 0x006d957d
LAB_006d9575:
006D9575  3B CA                     CMP ECX,EDX
006D9577  7F 15                     JG 0x006d958e
006D9579  2B D1                     SUB EDX,ECX
006D957B  03 F9                     ADD EDI,ECX
LAB_006d957d:
006D957D  33 C9                     XOR ECX,ECX
006D957F  0B D2                     OR EDX,EDX
006D9581  7E 0B                     JLE 0x006d958e
006D9583  8A 0E                     MOV CL,byte ptr [ESI]
006D9585  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D9588  46                        INC ESI
006D9589  E9 31 FE FF FF            JMP 0x006d93bf
FUN_006d8a60::cf_common_join_006D958E:
006D958E  0B D2                     OR EDX,EDX
006D9590  0F 8E A5 01 00 00         JLE 0x006d973b
006D9596  2B CA                     SUB ECX,EDX
006D9598  F6 45 FC 80               TEST byte ptr [EBP + -0x4],0x80
006D959C  0F 84 97 01 00 00         JZ 0x006d9739
006D95A2  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
006D95A6  0F 84 29 01 00 00         JZ 0x006d96d5
006D95AC  8A 06                     MOV AL,byte ptr [ESI]
006D95AE  8A E0                     MOV AH,AL
006D95B0  46                        INC ESI
006D95B1  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D95B4  0F 82 C7 00 00 00         JC 0x006d9681
006D95BA  3A 45 F0                  CMP AL,byte ptr [EBP + -0x10]
006D95BD  0F 87 BE 00 00 00         JA 0x006d9681
006D95C3  51                        PUSH ECX
006D95C4  8B CA                     MOV ECX,EDX
006D95C6  8B DF                     MOV EBX,EDI
006D95C8  83 E3 FC                  AND EBX,0xfffffffc
006D95CB  8B 13                     MOV EDX,dword ptr [EBX]
006D95CD  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006D95D0  25 FF 00 00 00            AND EAX,0xff
006D95D5  F7 C7 03 00 00 00         TEST EDI,0x3
006D95DB  74 44                     JZ 0x006d9621
006D95DD  51                        PUSH ECX
006D95DE  8B CF                     MOV ECX,EDI
006D95E0  80 E1 03                  AND CL,0x3
006D95E3  C0 E1 03                  SHL CL,0x3
006D95E6  D3 EA                     SHR EDX,CL
006D95E8  59                        POP ECX
006D95E9  83 F9 03                  CMP ECX,0x3
006D95EC  76 64                     JBE 0x006d9652
006D95EE  F7 C7 01 00 00 00         TEST EDI,0x1
006D95F4  74 0E                     JZ 0x006d9604
006D95F6  8A C2                     MOV AL,DL
006D95F8  FE C9                     DEC CL
006D95FA  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D95FD  46                        INC ESI
006D95FE  88 07                     MOV byte ptr [EDI],AL
006D9600  C1 EA 08                  SHR EDX,0x8
006D9603  47                        INC EDI
LAB_006d9604:
006D9604  F7 C7 02 00 00 00         TEST EDI,0x2
006D960A  74 13                     JZ 0x006d961f
006D960C  8A C2                     MOV AL,DL
006D960E  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D9611  8A C6                     MOV AL,DH
006D9613  80 E9 02                  SUB CL,0x2
006D9616  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D9619  66 89 17                  MOV word ptr [EDI],DX
006D961C  83 C7 02                  ADD EDI,0x2
LAB_006d961f:
006D961F  8B 17                     MOV EDX,dword ptr [EDI]
LAB_006d9621:
006D9621  80 E9 04                  SUB CL,0x4
006D9624  7C 27                     JL 0x006d964d
LAB_006d9626:
006D9626  8A C2                     MOV AL,DL
006D9628  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D962B  8A C6                     MOV AL,DH
006D962D  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D9630  C1 C2 10                  ROL EDX,0x10
006D9633  8A C2                     MOV AL,DL
006D9635  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006D9638  8A C6                     MOV AL,DH
006D963A  8A 34 03                  MOV DH,byte ptr [EBX + EAX*0x1]
006D963D  C1 C2 10                  ROL EDX,0x10
006D9640  89 17                     MOV dword ptr [EDI],EDX
006D9642  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D9645  83 C7 04                  ADD EDI,0x4
006D9648  80 E9 04                  SUB CL,0x4
006D964B  7D D9                     JGE 0x006d9626
LAB_006d964d:
006D964D  80 C1 04                  ADD CL,0x4
006D9650  74 29                     JZ 0x006d967b
LAB_006d9652:
006D9652  80 F9 01                  CMP CL,0x1
006D9655  74 1B                     JZ 0x006d9672
006D9657  80 F9 02                  CMP CL,0x2
006D965A  74 0E                     JZ 0x006d966a
006D965C  C1 CA 10                  ROR EDX,0x10
006D965F  8A C2                     MOV AL,DL
006D9661  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D9664  C1 C2 10                  ROL EDX,0x10
006D9667  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d966a:
006D966A  8A C6                     MOV AL,DH
006D966C  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D966F  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d9672:
006D9672  8A C2                     MOV AL,DL
006D9674  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D9677  88 07                     MOV byte ptr [EDI],AL
006D9679  03 F9                     ADD EDI,ECX
LAB_006d967b:
006D967B  59                        POP ECX
006D967C  E9 BA 00 00 00            JMP 0x006d973b
LAB_006d9681:
006D9681  83 FA 03                  CMP EDX,0x3
006D9684  7E 39                     JLE 0x006d96bf
006D9686  F7 C7 01 00 00 00         TEST EDI,0x1
006D968C  74 04                     JZ 0x006d9692
006D968E  88 07                     MOV byte ptr [EDI],AL
006D9690  47                        INC EDI
006D9691  4A                        DEC EDX
LAB_006d9692:
006D9692  F7 C7 02 00 00 00         TEST EDI,0x2
006D9698  74 09                     JZ 0x006d96a3
006D969A  66 89 07                  MOV word ptr [EDI],AX
006D969D  83 C7 02                  ADD EDI,0x2
006D96A0  83 EA 02                  SUB EDX,0x2
LAB_006d96a3:
006D96A3  8B D8                     MOV EBX,EAX
006D96A5  C1 E0 10                  SHL EAX,0x10
006D96A8  83 EA 04                  SUB EDX,0x4
006D96AB  66 8B C3                  MOV AX,BX
006D96AE  7C 0A                     JL 0x006d96ba
LAB_006d96b0:
006D96B0  89 07                     MOV dword ptr [EDI],EAX
006D96B2  83 C7 04                  ADD EDI,0x4
006D96B5  83 EA 04                  SUB EDX,0x4
006D96B8  7D F6                     JGE 0x006d96b0
LAB_006d96ba:
006D96BA  83 C2 04                  ADD EDX,0x4
006D96BD  74 7C                     JZ 0x006d973b
LAB_006d96bf:
006D96BF  80 FA 01                  CMP DL,0x1
006D96C2  74 0B                     JZ 0x006d96cf
006D96C4  80 FA 02                  CMP DL,0x2
006D96C7  74 03                     JZ 0x006d96cc
006D96C9  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d96cc:
006D96CC  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d96cf:
006D96CF  88 07                     MOV byte ptr [EDI],AL
006D96D1  03 FA                     ADD EDI,EDX
006D96D3  EB 66                     JMP 0x006d973b
LAB_006d96d5:
006D96D5  83 FA 03                  CMP EDX,0x3
006D96D8  7E 3F                     JLE 0x006d9719
006D96DA  F7 C7 01 00 00 00         TEST EDI,0x1
006D96E0  74 07                     JZ 0x006d96e9
006D96E2  8A 06                     MOV AL,byte ptr [ESI]
006D96E4  88 07                     MOV byte ptr [EDI],AL
006D96E6  46                        INC ESI
006D96E7  47                        INC EDI
006D96E8  4A                        DEC EDX
LAB_006d96e9:
006D96E9  F7 C7 02 00 00 00         TEST EDI,0x2
006D96EF  74 0F                     JZ 0x006d9700
006D96F1  66 8B 06                  MOV AX,word ptr [ESI]
006D96F4  66 89 07                  MOV word ptr [EDI],AX
006D96F7  83 C6 02                  ADD ESI,0x2
006D96FA  83 C7 02                  ADD EDI,0x2
006D96FD  83 EA 02                  SUB EDX,0x2
LAB_006d9700:
006D9700  83 EA 04                  SUB EDX,0x4
006D9703  7C 0F                     JL 0x006d9714
LAB_006d9705:
006D9705  8B 06                     MOV EAX,dword ptr [ESI]
006D9707  83 C6 04                  ADD ESI,0x4
006D970A  89 07                     MOV dword ptr [EDI],EAX
006D970C  83 C7 04                  ADD EDI,0x4
006D970F  83 EA 04                  SUB EDX,0x4
006D9712  7D F1                     JGE 0x006d9705
LAB_006d9714:
006D9714  83 C2 04                  ADD EDX,0x4
006D9717  74 22                     JZ 0x006d973b
LAB_006d9719:
006D9719  80 FA 01                  CMP DL,0x1
006D971C  74 11                     JZ 0x006d972f
006D971E  80 FA 02                  CMP DL,0x2
006D9721  74 06                     JZ 0x006d9729
006D9723  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006D9726  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d9729:
006D9729  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006D972C  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d972f:
006D972F  8A 06                     MOV AL,byte ptr [ESI]
006D9731  88 07                     MOV byte ptr [EDI],AL
006D9733  03 F2                     ADD ESI,EDX
006D9735  03 FA                     ADD EDI,EDX
006D9737  EB 02                     JMP 0x006d973b
LAB_006d9739:
006D9739  03 FA                     ADD EDI,EDX
LAB_006d973b:
006D973B  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D973E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D9741  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006D9744  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D9747  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D974A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D974D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9750  E9 57 07 00 00            JMP 0x006d9eac
LAB_006d9755:
006D9755  85 C9                     TEST ECX,ECX
006D9757  0F 84 D0 02 00 00         JZ 0x006d9a2d
006D975D  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006D9760  BB 80 00 00 00            MOV EBX,0x80
006D9765  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D9768  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006D976B  83 E1 07                  AND ECX,0x7
006D976E  D3 FB                     SAR EBX,CL
006D9770  3B 75 1C                  CMP ESI,dword ptr [EBP + 0x1c]
006D9773  0F 8F 7E 01 00 00         JG 0x006d98f7
006D9779  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D977C  8B F8                     MOV EDI,EAX
006D977E  81 E7 80 00 00 00         AND EDI,0x80
LAB_006d9784:
006D9784  2B CE                     SUB ECX,ESI
006D9786  85 FF                     TEST EDI,EDI
006D9788  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D978B  0F 84 F9 00 00 00         JZ 0x006d988a
006D9791  A8 40                     TEST AL,0x40
006D9793  0F 84 9A 00 00 00         JZ 0x006d9833
006D9799  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D979C  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D979F  47                        INC EDI
006D97A0  8A 09                     MOV CL,byte ptr [ECX]
006D97A2  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D97A5  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D97A8  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D97AB  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D97AE  81 E7 FF 00 00 00         AND EDI,0xff
006D97B4  3B F9                     CMP EDI,ECX
006D97B6  75 51                     JNZ 0x006d9809
006D97B8  33 C9                     XOR ECX,ECX
006D97BA  8A EB                     MOV CH,BL
006D97BC  8B D9                     MOV EBX,ECX
006D97BE  8B CE                     MOV ECX,ESI
006D97C0  83 E1 07                  AND ECX,0x7
006D97C3  D3 EB                     SHR EBX,CL
006D97C5  8B CB                     MOV ECX,EBX
006D97C7  81 F9 80 00 00 00         CMP ECX,0x80
006D97CD  77 0B                     JA 0x006d97da
006D97CF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D97D2  8A D9                     MOV BL,CL
006D97D4  47                        INC EDI
006D97D5  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D97D8  EB 04                     JMP 0x006d97de
LAB_006d97da:
006D97DA  33 DB                     XOR EBX,EBX
006D97DC  8A DD                     MOV BL,CH
LAB_006d97de:
006D97DE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D97E1  8B CE                     MOV ECX,ESI
006D97E3  C1 F9 03                  SAR ECX,0x3
006D97E6  03 F9                     ADD EDI,ECX
006D97E8  4E                        DEC ESI
006D97E9  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D97EC  0F 88 CB 00 00 00         JS 0x006d98bd
006D97F2  46                        INC ESI
LAB_006d97f3:
006D97F3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D97F6  33 C9                     XOR ECX,ECX
006D97F8  8A 0A                     MOV CL,byte ptr [EDX]
006D97FA  42                        INC EDX
006D97FB  4E                        DEC ESI
006D97FC  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006D97FF  88 4A FF                  MOV byte ptr [EDX + -0x1],CL
006D9802  75 EF                     JNZ 0x006d97f3
006D9804  E9 B4 00 00 00            JMP 0x006d98bd
LAB_006d9809:
006D9809  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D980C  4E                        DEC ESI
006D980D  8A 0C 0F                  MOV CL,byte ptr [EDI + ECX*0x1]
006D9810  0F 88 A7 00 00 00         JS 0x006d98bd
006D9816  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D9819  46                        INC ESI
LAB_006d981a:
006D981A  84 1F                     TEST byte ptr [EDI],BL
006D981C  74 02                     JZ 0x006d9820
006D981E  88 0A                     MOV byte ptr [EDX],CL
LAB_006d9820:
006D9820  42                        INC EDX
006D9821  D0 EB                     SHR BL,0x1
006D9823  75 03                     JNZ 0x006d9828
006D9825  B3 80                     MOV BL,0x80
006D9827  47                        INC EDI
LAB_006d9828:
006D9828  4E                        DEC ESI
006D9829  75 EF                     JNZ 0x006d981a
006D982B  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D982E  E9 8A 00 00 00            JMP 0x006d98bd
LAB_006d9833:
006D9833  4E                        DEC ESI
006D9834  0F 88 83 00 00 00         JS 0x006d98bd
006D983A  8D 7E 01                  LEA EDI,[ESI + 0x1]
LAB_006d983d:
006D983D  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D9840  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006D9843  46                        INC ESI
006D9844  8A 09                     MOV CL,byte ptr [ECX]
006D9846  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006D9849  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D984C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D984F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D9852  81 E6 FF 00 00 00         AND ESI,0xff
006D9858  3B F1                     CMP ESI,ECX
006D985A  75 0C                     JNZ 0x006d9868
006D985C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D985F  33 C9                     XOR ECX,ECX
006D9861  8A 0A                     MOV CL,byte ptr [EDX]
006D9863  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006D9866  EB 0D                     JMP 0x006d9875
LAB_006d9868:
006D9868  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D986B  84 19                     TEST byte ptr [ECX],BL
006D986D  74 08                     JZ 0x006d9877
006D986F  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D9872  8A 0C 0E                  MOV CL,byte ptr [ESI + ECX*0x1]
LAB_006d9875:
006D9875  88 0A                     MOV byte ptr [EDX],CL
LAB_006d9877:
006D9877  42                        INC EDX
006D9878  D0 EB                     SHR BL,0x1
006D987A  75 09                     JNZ 0x006d9885
006D987C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D987F  B3 80                     MOV BL,0x80
006D9881  41                        INC ECX
006D9882  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006d9885:
006D9885  4F                        DEC EDI
006D9886  75 B5                     JNZ 0x006d983d
006D9888  EB 33                     JMP 0x006d98bd
LAB_006d988a:
006D988A  33 C9                     XOR ECX,ECX
006D988C  03 D6                     ADD EDX,ESI
006D988E  8A EB                     MOV CH,BL
006D9890  8B D9                     MOV EBX,ECX
006D9892  8B CE                     MOV ECX,ESI
006D9894  83 E1 07                  AND ECX,0x7
006D9897  D3 EB                     SHR EBX,CL
006D9899  8B CB                     MOV ECX,EBX
006D989B  81 F9 80 00 00 00         CMP ECX,0x80
006D98A1  77 0B                     JA 0x006d98ae
006D98A3  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D98A6  8A D9                     MOV BL,CL
006D98A8  47                        INC EDI
006D98A9  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D98AC  EB 04                     JMP 0x006d98b2
LAB_006d98ae:
006D98AE  33 DB                     XOR EBX,EBX
006D98B0  8A DD                     MOV BL,CH
LAB_006d98b2:
006D98B2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D98B5  C1 FE 03                  SAR ESI,0x3
006D98B8  03 CE                     ADD ECX,ESI
006D98BA  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006d98bd:
006D98BD  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D98C0  85 C9                     TEST ECX,ECX
006D98C2  7E 2E                     JLE 0x006d98f2
006D98C4  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006D98C7  33 C0                     XOR EAX,EAX
006D98C9  8A 06                     MOV AL,byte ptr [ESI]
006D98CB  8B F8                     MOV EDI,EAX
006D98CD  81 E7 80 00 00 00         AND EDI,0x80
006D98D3  46                        INC ESI
006D98D4  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006D98D7  8B F0                     MOV ESI,EAX
006D98D9  85 FF                     TEST EDI,EDI
006D98DB  74 05                     JZ 0x006d98e2
006D98DD  83 E6 3F                  AND ESI,0x3f
006D98E0  EB 03                     JMP 0x006d98e5
LAB_006d98e2:
006D98E2  83 E6 7F                  AND ESI,0x7f
LAB_006d98e5:
006D98E5  3B F1                     CMP ESI,ECX
006D98E7  0F 8E 97 FE FF FF         JLE 0x006d9784
006D98ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D98F0  EB 05                     JMP 0x006d98f7
LAB_006d98f2:
006D98F2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D98F5  33 F6                     XOR ESI,ESI
LAB_006d98f7:
006D98F7  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D98FA  2B F1                     SUB ESI,ECX
006D98FC  A8 80                     TEST AL,0x80
006D98FE  0F 84 14 01 00 00         JZ 0x006d9a18
006D9904  A8 40                     TEST AL,0x40
006D9906  0F 84 9B 00 00 00         JZ 0x006d99a7
006D990C  85 C9                     TEST ECX,ECX
006D990E  0F 8E 06 01 00 00         JLE 0x006d9a1a
006D9914  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D9917  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D991A  47                        INC EDI
006D991B  8A 09                     MOV CL,byte ptr [ECX]
006D991D  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9920  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9923  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D9926  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D9929  81 E7 FF 00 00 00         AND EDI,0xff
006D992F  3B F9                     CMP EDI,ECX
006D9931  75 32                     JNZ 0x006d9965
006D9933  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9936  49                        DEC ECX
006D9937  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D993A  0F 88 DA 00 00 00         JS 0x006d9a1a
006D9940  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D9943  41                        INC ECX
LAB_006d9944:
006D9944  33 DB                     XOR EBX,EBX
006D9946  8A 1A                     MOV BL,byte ptr [EDX]
006D9948  42                        INC EDX
006D9949  49                        DEC ECX
006D994A  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
006D994D  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D9950  75 F2                     JNZ 0x006d9944
006D9952  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D9955  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006D9958  03 F9                     ADD EDI,ECX
006D995A  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006D995D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9960  E9 47 05 00 00            JMP 0x006d9eac
LAB_006d9965:
006D9965  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D9968  8A 0C 0F                  MOV CL,byte ptr [EDI + ECX*0x1]
006D996B  8B 7D 40                  MOV EDI,dword ptr [EBP + 0x40]
006D996E  4F                        DEC EDI
006D996F  89 7D 40                  MOV dword ptr [EBP + 0x40],EDI
006D9972  0F 88 A2 00 00 00         JS 0x006d9a1a
006D9978  8B C7                     MOV EAX,EDI
006D997A  8D 78 01                  LEA EDI,[EAX + 0x1]
006D997D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006d9980:
006D9980  84 18                     TEST byte ptr [EAX],BL
006D9982  74 02                     JZ 0x006d9986
006D9984  88 0A                     MOV byte ptr [EDX],CL
LAB_006d9986:
006D9986  42                        INC EDX
006D9987  D0 EB                     SHR BL,0x1
006D9989  75 03                     JNZ 0x006d998e
006D998B  B3 80                     MOV BL,0x80
006D998D  40                        INC EAX
LAB_006d998e:
006D998E  4F                        DEC EDI
006D998F  75 EF                     JNZ 0x006d9980
006D9991  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D9994  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006D9997  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D999A  03 F9                     ADD EDI,ECX
006D999C  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006D999F  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D99A2  E9 05 05 00 00            JMP 0x006d9eac
LAB_006d99a7:
006D99A7  49                        DEC ECX
006D99A8  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D99AB  78 6D                     JS 0x006d9a1a
006D99AD  41                        INC ECX
006D99AE  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D99B1  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
LAB_006d99b4:
006D99B4  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D99B7  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D99BA  47                        INC EDI
006D99BB  8A 00                     MOV AL,byte ptr [EAX]
006D99BD  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D99C0  88 45 18                  MOV byte ptr [EBP + 0x18],AL
006D99C3  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D99C6  81 E7 FF 00 00 00         AND EDI,0xff
006D99CC  3B F9                     CMP EDI,ECX
006D99CE  75 0C                     JNZ 0x006d99dc
006D99D0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D99D3  33 C0                     XOR EAX,EAX
006D99D5  8A 02                     MOV AL,byte ptr [EDX]
006D99D7  8A 04 38                  MOV AL,byte ptr [EAX + EDI*0x1]
006D99DA  EB 0D                     JMP 0x006d99e9
LAB_006d99dc:
006D99DC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D99DF  84 18                     TEST byte ptr [EAX],BL
006D99E1  74 08                     JZ 0x006d99eb
006D99E3  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006D99E6  8A 04 07                  MOV AL,byte ptr [EDI + EAX*0x1]
LAB_006d99e9:
006D99E9  88 02                     MOV byte ptr [EDX],AL
LAB_006d99eb:
006D99EB  42                        INC EDX
006D99EC  D0 EB                     SHR BL,0x1
006D99EE  75 09                     JNZ 0x006d99f9
006D99F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D99F3  B3 80                     MOV BL,0x80
006D99F5  40                        INC EAX
006D99F6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006d99f9:
006D99F9  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006D99FC  48                        DEC EAX
006D99FD  89 45 40                  MOV dword ptr [EBP + 0x40],EAX
006D9A00  75 B2                     JNZ 0x006d99b4
006D9A02  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D9A05  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006D9A08  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D9A0B  03 F9                     ADD EDI,ECX
006D9A0D  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006D9A10  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9A13  E9 94 04 00 00            JMP 0x006d9eac
LAB_006d9a18:
006D9A18  03 D1                     ADD EDX,ECX
FUN_006d8a60::cf_common_join_006D9A1A:
006D9A1A  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D9A1D  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006D9A20  03 F9                     ADD EDI,ECX
006D9A22  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006D9A25  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9A28  E9 7F 04 00 00            JMP 0x006d9eac
LAB_006d9a2d:
006D9A2D  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D9A30  85 C9                     TEST ECX,ECX
006D9A32  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D9A35  0F 84 F0 01 00 00         JZ 0x006d9c2b
006D9A3B  3B F1                     CMP ESI,ECX
006D9A3D  0F 8F 0F 01 00 00         JG 0x006d9b52
006D9A43  8B C8                     MOV ECX,EAX
006D9A45  81 E1 80 00 00 00         AND ECX,0x80
LAB_006d9a4b:
006D9A4B  2B DE                     SUB EBX,ESI
006D9A4D  85 C9                     TEST ECX,ECX
006D9A4F  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D9A52  0F 84 DE 00 00 00         JZ 0x006d9b36
006D9A58  A8 40                     TEST AL,0x40
006D9A5A  0F 84 9B 00 00 00         JZ 0x006d9afb
006D9A60  8A 0F                     MOV CL,byte ptr [EDI]
006D9A62  47                        INC EDI
006D9A63  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9A66  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9A69  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9A6C  81 E1 FF 00 00 00         AND ECX,0xff
006D9A72  3B 4D 28                  CMP ECX,dword ptr [EBP + 0x28]
006D9A75  75 49                     JNZ 0x006d9ac0
006D9A77  8B CE                     MOV ECX,ESI
006D9A79  4E                        DEC ESI
006D9A7A  85 C9                     TEST ECX,ECX
006D9A7C  7E 15                     JLE 0x006d9a93
006D9A7E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006D9A81  46                        INC ESI
LAB_006d9a82:
006D9A82  33 DB                     XOR EBX,EBX
006D9A84  8A 1A                     MOV BL,byte ptr [EDX]
006D9A86  42                        INC EDX
006D9A87  4E                        DEC ESI
006D9A88  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
006D9A8B  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D9A8E  75 F2                     JNZ 0x006d9a82
LAB_006d9a90:
006D9A90  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
LAB_006d9a93:
006D9A93  85 DB                     TEST EBX,EBX
006D9A95  0F 8E B2 00 00 00         JLE 0x006d9b4d
006D9A9B  33 C0                     XOR EAX,EAX
006D9A9D  8A 07                     MOV AL,byte ptr [EDI]
006D9A9F  8B C8                     MOV ECX,EAX
006D9AA1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D9AA4  81 E1 80 00 00 00         AND ECX,0x80
006D9AAA  47                        INC EDI
006D9AAB  85 C9                     TEST ECX,ECX
006D9AAD  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9AB0  8B F0                     MOV ESI,EAX
006D9AB2  0F 84 85 00 00 00         JZ 0x006d9b3d
006D9AB8  83 E6 3F                  AND ESI,0x3f
006D9ABB  E9 80 00 00 00            JMP 0x006d9b40
LAB_006d9ac0:
006D9AC0  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006D9AC3  8A 1C 19                  MOV BL,byte ptr [ECX + EBX*0x1]
006D9AC6  8B CE                     MOV ECX,ESI
006D9AC8  4E                        DEC ESI
006D9AC9  85 C9                     TEST ECX,ECX
006D9ACB  7E C3                     JLE 0x006d9a90
006D9ACD  8A C3                     MOV AL,BL
006D9ACF  8A FB                     MOV BH,BL
006D9AD1  8D 4E 01                  LEA ECX,[ESI + 0x1]
006D9AD4  8B C3                     MOV EAX,EBX
006D9AD6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D9AD9  8B F1                     MOV ESI,ECX
006D9ADB  C1 E0 10                  SHL EAX,0x10
006D9ADE  8B FA                     MOV EDI,EDX
006D9AE0  66 8B C3                  MOV AX,BX
006D9AE3  C1 E9 02                  SHR ECX,0x2
006D9AE6  F3 AB                     STOSD.REP ES:EDI
006D9AE8  8B CE                     MOV ECX,ESI
006D9AEA  83 E1 03                  AND ECX,0x3
006D9AED  F3 AA                     STOSB.REP ES:EDI
006D9AEF  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9AF2  8B C6                     MOV EAX,ESI
006D9AF4  03 D0                     ADD EDX,EAX
006D9AF6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D9AF9  EB 95                     JMP 0x006d9a90
LAB_006d9afb:
006D9AFB  8B CE                     MOV ECX,ESI
006D9AFD  4E                        DEC ESI
006D9AFE  85 C9                     TEST ECX,ECX
006D9B00  7E 91                     JLE 0x006d9a93
006D9B02  46                        INC ESI
LAB_006d9b03:
006D9B03  8A 0F                     MOV CL,byte ptr [EDI]
006D9B05  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006D9B08  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9B0B  47                        INC EDI
006D9B0C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9B0F  81 E1 FF 00 00 00         AND ECX,0xff
006D9B15  3B CB                     CMP ECX,EBX
006D9B17  75 09                     JNZ 0x006d9b22
006D9B19  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006D9B1C  33 C9                     XOR ECX,ECX
006D9B1E  8A 0A                     MOV CL,byte ptr [EDX]
006D9B20  EB 03                     JMP 0x006d9b25
LAB_006d9b22:
006D9B22  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
LAB_006d9b25:
006D9B25  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006D9B28  88 0A                     MOV byte ptr [EDX],CL
006D9B2A  42                        INC EDX
006D9B2B  4E                        DEC ESI
006D9B2C  75 D5                     JNZ 0x006d9b03
006D9B2E  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9B31  E9 5A FF FF FF            JMP 0x006d9a90
LAB_006d9b36:
006D9B36  03 D6                     ADD EDX,ESI
006D9B38  E9 56 FF FF FF            JMP 0x006d9a93
LAB_006d9b3d:
006D9B3D  83 E6 7F                  AND ESI,0x7f
LAB_006d9b40:
006D9B40  3B F3                     CMP ESI,EBX
006D9B42  0F 8E 03 FF FF FF         JLE 0x006d9a4b
006D9B48  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D9B4B  EB 05                     JMP 0x006d9b52
LAB_006d9b4d:
006D9B4D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D9B50  33 F6                     XOR ESI,ESI
LAB_006d9b52:
006D9B52  2B F3                     SUB ESI,EBX
006D9B54  A8 80                     TEST AL,0x80
006D9B56  0F 84 C8 00 00 00         JZ 0x006d9c24
006D9B5C  A8 40                     TEST AL,0x40
006D9B5E  74 78                     JZ 0x006d9bd8
006D9B60  85 DB                     TEST EBX,EBX
006D9B62  0F 8E 44 03 00 00         JLE 0x006d9eac
006D9B68  8A 0F                     MOV CL,byte ptr [EDI]
006D9B6A  47                        INC EDI
006D9B6B  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9B6E  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9B71  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9B74  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006D9B77  81 E1 FF 00 00 00         AND ECX,0xff
006D9B7D  3B CF                     CMP ECX,EDI
006D9B7F  75 1C                     JNZ 0x006d9b9d
006D9B81  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9B84  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006d9b87:
006D9B87  33 DB                     XOR EBX,EBX
006D9B89  8A 1A                     MOV BL,byte ptr [EDX]
006D9B8B  42                        INC EDX
006D9B8C  49                        DEC ECX
006D9B8D  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
006D9B90  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D9B93  75 F2                     JNZ 0x006d9b87
006D9B95  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9B98  E9 0F 03 00 00            JMP 0x006d9eac
LAB_006d9b9d:
006D9B9D  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006D9BA0  8B FA                     MOV EDI,EDX
006D9BA2  8A 1C 01                  MOV BL,byte ptr [ECX + EAX*0x1]
006D9BA5  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9BA8  8A C3                     MOV AL,BL
006D9BAA  8A FB                     MOV BH,BL
006D9BAC  8B C3                     MOV EAX,EBX
006D9BAE  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D9BB1  8B D1                     MOV EDX,ECX
006D9BB3  C1 E0 10                  SHL EAX,0x10
006D9BB6  66 8B C3                  MOV AX,BX
006D9BB9  C1 E9 02                  SHR ECX,0x2
006D9BBC  F3 AB                     STOSD.REP ES:EDI
006D9BBE  8B CA                     MOV ECX,EDX
006D9BC0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D9BC3  83 E1 03                  AND ECX,0x3
006D9BC6  F3 AA                     STOSB.REP ES:EDI
006D9BC8  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006D9BCB  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9BCE  03 D0                     ADD EDX,EAX
006D9BD0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D9BD3  E9 D4 02 00 00            JMP 0x006d9eac
LAB_006d9bd8:
006D9BD8  8B CB                     MOV ECX,EBX
006D9BDA  4B                        DEC EBX
006D9BDB  85 C9                     TEST ECX,ECX
006D9BDD  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D9BE0  0F 8E C6 02 00 00         JLE 0x006d9eac
006D9BE6  8B CB                     MOV ECX,EBX
006D9BE8  8D 59 01                  LEA EBX,[ECX + 0x1]
LAB_006d9beb:
006D9BEB  8A 0F                     MOV CL,byte ptr [EDI]
006D9BED  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006D9BF0  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9BF3  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D9BF6  41                        INC ECX
006D9BF7  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006D9BFA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9BFD  81 E1 FF 00 00 00         AND ECX,0xff
006D9C03  3B CF                     CMP ECX,EDI
006D9C05  75 09                     JNZ 0x006d9c10
006D9C07  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D9C0A  33 C9                     XOR ECX,ECX
006D9C0C  8A 0A                     MOV CL,byte ptr [EDX]
006D9C0E  EB 03                     JMP 0x006d9c13
LAB_006d9c10:
006D9C10  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
LAB_006d9c13:
006D9C13  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006D9C16  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9C19  88 0A                     MOV byte ptr [EDX],CL
006D9C1B  42                        INC EDX
006D9C1C  4B                        DEC EBX
006D9C1D  75 CC                     JNZ 0x006d9beb
006D9C1F  E9 88 02 00 00            JMP 0x006d9eac
LAB_006d9c24:
006D9C24  03 D3                     ADD EDX,EBX
006D9C26  E9 81 02 00 00            JMP 0x006d9eac
LAB_006d9c2b:
006D9C2B  3B F1                     CMP ESI,ECX
006D9C2D  0F 8F 07 01 00 00         JG 0x006d9d3a
006D9C33  8B C8                     MOV ECX,EAX
006D9C35  81 E1 80 00 00 00         AND ECX,0x80
LAB_006d9c3b:
006D9C3B  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006D9C3E  2B DE                     SUB EBX,ESI
006D9C40  85 C9                     TEST ECX,ECX
006D9C42  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D9C45  0F 84 CF 00 00 00         JZ 0x006d9d1a
006D9C4B  A8 40                     TEST AL,0x40
006D9C4D  0F 84 8E 00 00 00         JZ 0x006d9ce1
006D9C53  8A 1F                     MOV BL,byte ptr [EDI]
006D9C55  47                        INC EDI
006D9C56  88 5D 18                  MOV byte ptr [EBP + 0x18],BL
006D9C59  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9C5C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9C5F  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006D9C62  81 E1 FF 00 00 00         AND ECX,0xff
006D9C68  3B CF                     CMP ECX,EDI
006D9C6A  8B CE                     MOV ECX,ESI
006D9C6C  75 43                     JNZ 0x006d9cb1
006D9C6E  4E                        DEC ESI
006D9C6F  85 C9                     TEST ECX,ECX
006D9C71  7E 12                     JLE 0x006d9c85
006D9C73  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D9C76  46                        INC ESI
LAB_006d9c77:
006D9C77  33 C9                     XOR ECX,ECX
006D9C79  8A 0A                     MOV CL,byte ptr [EDX]
006D9C7B  42                        INC EDX
006D9C7C  4E                        DEC ESI
006D9C7D  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006D9C80  88 4A FF                  MOV byte ptr [EDX + -0x1],CL
006D9C83  75 F2                     JNZ 0x006d9c77
LAB_006d9c85:
006D9C85  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
LAB_006d9c88:
006D9C88  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9C8B  85 C9                     TEST ECX,ECX
006D9C8D  0F 8E 9F 00 00 00         JLE 0x006d9d32
006D9C93  33 C0                     XOR EAX,EAX
006D9C95  8A 07                     MOV AL,byte ptr [EDI]
006D9C97  8B C8                     MOV ECX,EAX
006D9C99  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D9C9C  81 E1 80 00 00 00         AND ECX,0x80
006D9CA2  47                        INC EDI
006D9CA3  85 C9                     TEST ECX,ECX
006D9CA5  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9CA8  8B F0                     MOV ESI,EAX
006D9CAA  74 75                     JZ 0x006d9d21
006D9CAC  83 E6 3F                  AND ESI,0x3f
006D9CAF  EB 73                     JMP 0x006d9d24
LAB_006d9cb1:
006D9CB1  4E                        DEC ESI
006D9CB2  85 C9                     TEST ECX,ECX
006D9CB4  7E CF                     JLE 0x006d9c85
006D9CB6  8A C3                     MOV AL,BL
006D9CB8  8A FB                     MOV BH,BL
006D9CBA  8D 4E 01                  LEA ECX,[ESI + 0x1]
006D9CBD  8B C3                     MOV EAX,EBX
006D9CBF  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D9CC2  8B F1                     MOV ESI,ECX
006D9CC4  C1 E0 10                  SHL EAX,0x10
006D9CC7  8B FA                     MOV EDI,EDX
006D9CC9  66 8B C3                  MOV AX,BX
006D9CCC  C1 E9 02                  SHR ECX,0x2
006D9CCF  F3 AB                     STOSD.REP ES:EDI
006D9CD1  8B CE                     MOV ECX,ESI
006D9CD3  83 E1 03                  AND ECX,0x3
006D9CD6  F3 AA                     STOSB.REP ES:EDI
006D9CD8  8B C6                     MOV EAX,ESI
006D9CDA  03 D0                     ADD EDX,EAX
006D9CDC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D9CDF  EB A4                     JMP 0x006d9c85
LAB_006d9ce1:
006D9CE1  8B CE                     MOV ECX,ESI
006D9CE3  4E                        DEC ESI
006D9CE4  85 C9                     TEST ECX,ECX
006D9CE6  7E A0                     JLE 0x006d9c88
006D9CE8  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006D9CEB  46                        INC ESI
LAB_006d9cec:
006D9CEC  8A 0F                     MOV CL,byte ptr [EDI]
006D9CEE  47                        INC EDI
006D9CEF  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9CF2  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9CF5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D9CF8  81 E7 FF 00 00 00         AND EDI,0xff
006D9CFE  3B FB                     CMP EDI,EBX
006D9D00  75 0A                     JNZ 0x006d9d0c
006D9D02  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D9D05  33 C9                     XOR ECX,ECX
006D9D07  8A 0A                     MOV CL,byte ptr [EDX]
006D9D09  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
LAB_006d9d0c:
006D9D0C  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9D0F  88 0A                     MOV byte ptr [EDX],CL
006D9D11  42                        INC EDX
006D9D12  4E                        DEC ESI
006D9D13  75 D7                     JNZ 0x006d9cec
006D9D15  E9 6E FF FF FF            JMP 0x006d9c88
LAB_006d9d1a:
006D9D1A  03 D6                     ADD EDX,ESI
006D9D1C  E9 67 FF FF FF            JMP 0x006d9c88
LAB_006d9d21:
006D9D21  83 E6 7F                  AND ESI,0x7f
LAB_006d9d24:
006D9D24  3B 75 40                  CMP ESI,dword ptr [EBP + 0x40]
006D9D27  0F 8E 0E FF FF FF         JLE 0x006d9c3b
006D9D2D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D9D30  EB 05                     JMP 0x006d9d37
LAB_006d9d32:
006D9D32  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D9D35  33 F6                     XOR ESI,ESI
LAB_006d9d37:
006D9D37  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
LAB_006d9d3a:
006D9D3A  2B F3                     SUB ESI,EBX
006D9D3C  A8 80                     TEST AL,0x80
006D9D3E  0F 84 E0 FE FF FF         JZ 0x006d9c24
006D9D44  A8 40                     TEST AL,0x40
006D9D46  74 74                     JZ 0x006d9dbc
006D9D48  85 DB                     TEST EBX,EBX
006D9D4A  0F 8E 5C 01 00 00         JLE 0x006d9eac
006D9D50  8A 1F                     MOV BL,byte ptr [EDI]
006D9D52  47                        INC EDI
006D9D53  88 5D 18                  MOV byte ptr [EBP + 0x18],BL
006D9D56  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9D59  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9D5C  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006D9D5F  81 E1 FF 00 00 00         AND ECX,0xff
006D9D65  3B CF                     CMP ECX,EDI
006D9D67  75 1C                     JNZ 0x006d9d85
006D9D69  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9D6C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006d9d6f:
006D9D6F  33 DB                     XOR EBX,EBX
006D9D71  8A 1A                     MOV BL,byte ptr [EDX]
006D9D73  42                        INC EDX
006D9D74  49                        DEC ECX
006D9D75  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
006D9D78  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006D9D7B  75 F2                     JNZ 0x006d9d6f
006D9D7D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9D80  E9 27 01 00 00            JMP 0x006d9eac
LAB_006d9d85:
006D9D85  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006D9D88  8A FB                     MOV BH,BL
006D9D8A  8B FA                     MOV EDI,EDX
006D9D8C  8D 08                     LEA ECX,[EAX]
006D9D8E  8A C3                     MOV AL,BL
006D9D90  8B C3                     MOV EAX,EBX
006D9D92  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D9D95  8B D1                     MOV EDX,ECX
006D9D97  C1 E0 10                  SHL EAX,0x10
006D9D9A  66 8B C3                  MOV AX,BX
006D9D9D  C1 E9 02                  SHR ECX,0x2
006D9DA0  F3 AB                     STOSD.REP ES:EDI
006D9DA2  8B CA                     MOV ECX,EDX
006D9DA4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D9DA7  83 E1 03                  AND ECX,0x3
006D9DAA  F3 AA                     STOSB.REP ES:EDI
006D9DAC  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006D9DAF  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9DB2  03 D0                     ADD EDX,EAX
006D9DB4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D9DB7  E9 F0 00 00 00            JMP 0x006d9eac
LAB_006d9dbc:
006D9DBC  8B CB                     MOV ECX,EBX
006D9DBE  4B                        DEC EBX
006D9DBF  85 C9                     TEST ECX,ECX
006D9DC1  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D9DC4  0F 8E E2 00 00 00         JLE 0x006d9eac
006D9DCA  8B CB                     MOV ECX,EBX
006D9DCC  8D 59 01                  LEA EBX,[ECX + 0x1]
LAB_006d9dcf:
006D9DCF  8A 0F                     MOV CL,byte ptr [EDI]
006D9DD1  47                        INC EDI
006D9DD2  88 4D 18                  MOV byte ptr [EBP + 0x18],CL
006D9DD5  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9DD8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D9DDB  81 E7 FF 00 00 00         AND EDI,0xff
006D9DE1  3B 7D 28                  CMP EDI,dword ptr [EBP + 0x28]
006D9DE4  75 0A                     JNZ 0x006d9df0
006D9DE6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D9DE9  33 C9                     XOR ECX,ECX
006D9DEB  8A 0A                     MOV CL,byte ptr [EDX]
006D9DED  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
LAB_006d9df0:
006D9DF0  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9DF3  88 0A                     MOV byte ptr [EDX],CL
006D9DF5  42                        INC EDX
006D9DF6  4B                        DEC EBX
006D9DF7  75 D6                     JNZ 0x006d9dcf
006D9DF9  E9 AE 00 00 00            JMP 0x006d9eac
LAB_006d9dfe:
006D9DFE  3B F3                     CMP ESI,EBX
006D9E00  7F 61                     JG 0x006d9e63
LAB_006d9e02:
006D9E02  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006D9E05  2B DE                     SUB EBX,ESI
006D9E07  A8 80                     TEST AL,0x80
006D9E09  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006D9E0C  74 31                     JZ 0x006d9e3f
006D9E0E  8B CE                     MOV ECX,ESI
006D9E10  4E                        DEC ESI
006D9E11  85 C9                     TEST ECX,ECX
006D9E13  7E 2C                     JLE 0x006d9e41
006D9E15  46                        INC ESI
LAB_006d9e16:
006D9E16  8A 1F                     MOV BL,byte ptr [EDI]
006D9E18  47                        INC EDI
006D9E19  88 5D 18                  MOV byte ptr [EBP + 0x18],BL
006D9E1C  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9E1F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9E22  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006D9E25  81 E1 FF 00 00 00         AND ECX,0xff
006D9E2B  3B CF                     CMP ECX,EDI
006D9E2D  7C 05                     JL 0x006d9e34
006D9E2F  3B 4D EC                  CMP ECX,dword ptr [EBP + -0x14]
006D9E32  7C 02                     JL 0x006d9e36
LAB_006d9e34:
006D9E34  88 1A                     MOV byte ptr [EDX],BL
LAB_006d9e36:
006D9E36  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9E39  42                        INC EDX
006D9E3A  4E                        DEC ESI
006D9E3B  75 D9                     JNZ 0x006d9e16
006D9E3D  EB 02                     JMP 0x006d9e41
LAB_006d9e3f:
006D9E3F  03 D6                     ADD EDX,ESI
LAB_006d9e41:
006D9E41  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9E44  85 C9                     TEST ECX,ECX
006D9E46  7E 16                     JLE 0x006d9e5e
006D9E48  33 C0                     XOR EAX,EAX
006D9E4A  8A 07                     MOV AL,byte ptr [EDI]
006D9E4C  8B F0                     MOV ESI,EAX
006D9E4E  83 E6 7F                  AND ESI,0x7f
006D9E51  47                        INC EDI
006D9E52  3B F1                     CMP ESI,ECX
006D9E54  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9E57  7E A9                     JLE 0x006d9e02
006D9E59  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D9E5C  EB 05                     JMP 0x006d9e63
LAB_006d9e5e:
006D9E5E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D9E61  33 F6                     XOR ESI,ESI
LAB_006d9e63:
006D9E63  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D9E66  2B F1                     SUB ESI,ECX
006D9E68  A8 80                     TEST AL,0x80
006D9E6A  74 3E                     JZ 0x006d9eaa
006D9E6C  8B D9                     MOV EBX,ECX
006D9E6E  49                        DEC ECX
006D9E6F  85 DB                     TEST EBX,EBX
006D9E71  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006D9E74  7E 36                     JLE 0x006d9eac
006D9E76  8B C1                     MOV EAX,ECX
006D9E78  8D 78 01                  LEA EDI,[EAX + 0x1]
LAB_006d9e7b:
006D9E7B  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D9E7E  8A 18                     MOV BL,byte ptr [EAX]
006D9E80  40                        INC EAX
006D9E81  88 5D 18                  MOV byte ptr [EBP + 0x18],BL
006D9E84  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006D9E87  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D9E8A  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D9E8D  81 E1 FF 00 00 00         AND ECX,0xff
006D9E93  3B C8                     CMP ECX,EAX
006D9E95  7C 05                     JL 0x006d9e9c
006D9E97  3B 4D EC                  CMP ECX,dword ptr [EBP + -0x14]
006D9E9A  7C 02                     JL 0x006d9e9e
LAB_006d9e9c:
006D9E9C  88 1A                     MOV byte ptr [EDX],BL
LAB_006d9e9e:
006D9E9E  42                        INC EDX
006D9E9F  4F                        DEC EDI
006D9EA0  75 D9                     JNZ 0x006d9e7b
006D9EA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D9EA5  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9EA8  EB 02                     JMP 0x006d9eac
LAB_006d9eaa:
006D9EAA  03 D1                     ADD EDX,ECX
FUN_006d8a60::cf_common_join_006D9EAC:
006D9EAC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D9EAF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006D9EB2  2B CB                     SUB ECX,EBX
006D9EB4  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006D9EB7  2B CB                     SUB ECX,EBX
006D9EB9  3B F1                     CMP ESI,ECX
006D9EBB  7D 3A                     JGE 0x006d9ef7
LAB_006d9ebd:
006D9EBD  25 C0 00 00 00            AND EAX,0xc0
006D9EC2  2B CE                     SUB ECX,ESI
006D9EC4  3C 80                     CMP AL,0x80
006D9EC6  75 05                     JNZ 0x006d9ecd
006D9EC8  03 FE                     ADD EDI,ESI
006D9ECA  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
LAB_006d9ecd:
006D9ECD  33 C0                     XOR EAX,EAX
006D9ECF  8A 07                     MOV AL,byte ptr [EDI]
006D9ED1  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006D9ED4  8B D8                     MOV EBX,EAX
006D9ED6  8B F0                     MOV ESI,EAX
006D9ED8  80 E3 80                  AND BL,0x80
006D9EDB  47                        INC EDI
006D9EDC  84 DB                     TEST BL,BL
006D9EDE  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9EE1  74 0D                     JZ 0x006d9ef0
006D9EE3  83 E6 3F                  AND ESI,0x3f
006D9EE6  A8 40                     TEST AL,0x40
006D9EE8  74 09                     JZ 0x006d9ef3
006D9EEA  47                        INC EDI
006D9EEB  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006D9EEE  EB 03                     JMP 0x006d9ef3
LAB_006d9ef0:
006D9EF0  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
LAB_006d9ef3:
006D9EF3  3B F1                     CMP ESI,ECX
006D9EF5  7C C6                     JL 0x006d9ebd
LAB_006d9ef7:
006D9EF7  25 C0 00 00 00            AND EAX,0xc0
006D9EFC  3C 80                     CMP AL,0x80
006D9EFE  75 02                     JNZ 0x006d9f02
006D9F00  03 F9                     ADD EDI,ECX
LAB_006d9f02:
006D9F02  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D9F05  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006D9F08  2B CE                     SUB ECX,ESI
006D9F0A  03 D1                     ADD EDX,ECX
006D9F0C  EB 03                     JMP 0x006d9f11
LAB_006d9f0e:
006D9F0E  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
LAB_006d9f11:
006D9F11  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D9F14  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D9F17  8B C8                     MOV ECX,EAX
006D9F19  48                        DEC EAX
006D9F1A  85 C9                     TEST ECX,ECX
006D9F1C  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006D9F1F  0F 8F DF EB FF FF         JG 0x006d8b04
LAB_006d9f25:
006D9F25  5F                        POP EDI
006D9F26  5E                        POP ESI
006D9F27  5B                        POP EBX
006D9F28  8B E5                     MOV ESP,EBP
006D9F2A  5D                        POP EBP
006D9F2B  C2 3C 00                  RET 0x3c
