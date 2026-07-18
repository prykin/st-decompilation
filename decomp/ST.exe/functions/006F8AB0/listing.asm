FUN_006f8ab0:
006F8AB0  55                        PUSH EBP
006F8AB1  8B EC                     MOV EBP,ESP
006F8AB3  83 EC 08                  SUB ESP,0x8
006F8AB6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F8AB9  53                        PUSH EBX
006F8ABA  48                        DEC EAX
006F8ABB  56                        PUSH ESI
006F8ABC  57                        PUSH EDI
006F8ABD  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F8AC7  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F8ACA  0F 88 1C 04 00 00         JS 0x006f8eec
006F8AD0  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006F8AD3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_006f8ad6:
006F8AD6  83 7D 34 01               CMP dword ptr [EBP + 0x34],0x1
006F8ADA  75 49                     JNZ 0x006f8b25
006F8ADC  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F8ADF  48                        DEC EAX
006F8AE0  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F8AE3  0F 88 03 04 00 00         JS 0x006f8eec
006F8AE9  33 C0                     XOR EAX,EAX
006F8AEB  8A 02                     MOV AL,byte ptr [EDX]
006F8AED  42                        INC EDX
006F8AEE  85 C0                     TEST EAX,EAX
006F8AF0  74 2C                     JZ 0x006f8b1e
006F8AF2  8B CF                     MOV ECX,EDI
LAB_006f8af4:
006F8AF4  A8 80                     TEST AL,0x80
006F8AF6  74 16                     JZ 0x006f8b0e
006F8AF8  A8 40                     TEST AL,0x40
006F8AFA  74 06                     JZ 0x006f8b02
006F8AFC  42                        INC EDX
006F8AFD  83 E0 3F                  AND EAX,0x3f
006F8B00  EB 0F                     JMP 0x006f8b11
LAB_006f8b02:
006F8B02  8B F0                     MOV ESI,EAX
006F8B04  83 E6 3F                  AND ESI,0x3f
006F8B07  03 D6                     ADD EDX,ESI
006F8B09  83 E0 3F                  AND EAX,0x3f
006F8B0C  EB 03                     JMP 0x006f8b11
LAB_006f8b0e:
006F8B0E  83 E0 7F                  AND EAX,0x7f
LAB_006f8b11:
006F8B11  2B C8                     SUB ECX,EAX
006F8B13  85 C9                     TEST ECX,ECX
006F8B15  7E 07                     JLE 0x006f8b1e
006F8B17  33 C0                     XOR EAX,EAX
006F8B19  8A 02                     MOV AL,byte ptr [EDX]
006F8B1B  42                        INC EDX
006F8B1C  EB D6                     JMP 0x006f8af4
LAB_006f8b1e:
006F8B1E  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006f8b25:
006F8B25  33 C0                     XOR EAX,EAX
006F8B27  8A 02                     MOV AL,byte ptr [EDX]
006F8B29  42                        INC EDX
006F8B2A  85 C0                     TEST EAX,EAX
006F8B2C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F8B2F  0F 84 81 03 00 00         JZ 0x006f8eb6
006F8B35  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F8B38  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F8B3B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F8B3E  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006F8B41  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006f8b44:
006F8B44  A8 80                     TEST AL,0x80
006F8B46  74 34                     JZ 0x006f8b7c
006F8B48  83 E0 3F                  AND EAX,0x3f
006F8B4B  3B C3                     CMP EAX,EBX
006F8B4D  7F 43                     JG 0x006f8b92
006F8B4F  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
006F8B53  74 13                     JZ 0x006f8b68
006F8B55  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8B58  42                        INC EDX
006F8B59  2B D8                     SUB EBX,EAX
006F8B5B  33 C0                     XOR EAX,EAX
006F8B5D  8A 02                     MOV AL,byte ptr [EDX]
006F8B5F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8B62  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F8B65  42                        INC EDX
006F8B66  EB DC                     JMP 0x006f8b44
LAB_006f8b68:
006F8B68  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8B6B  03 D0                     ADD EDX,EAX
006F8B6D  2B D8                     SUB EBX,EAX
006F8B6F  33 C0                     XOR EAX,EAX
006F8B71  8A 02                     MOV AL,byte ptr [EDX]
006F8B73  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8B76  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F8B79  42                        INC EDX
006F8B7A  EB C8                     JMP 0x006f8b44
LAB_006f8b7c:
006F8B7C  83 E0 7F                  AND EAX,0x7f
006F8B7F  3B C3                     CMP EAX,EBX
006F8B81  7F 0F                     JG 0x006f8b92
006F8B83  2B D8                     SUB EBX,EAX
006F8B85  33 C0                     XOR EAX,EAX
006F8B87  8A 02                     MOV AL,byte ptr [EDX]
006F8B89  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8B8C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F8B8F  42                        INC EDX
006F8B90  EB B2                     JMP 0x006f8b44
LAB_006f8b92:
006F8B92  2B C3                     SUB EAX,EBX
006F8B94  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F8B97  81 E3 C0 00 00 00         AND EBX,0xc0
006F8B9D  80 FB 80                  CMP BL,0x80
006F8BA0  75 03                     JNZ 0x006f8ba5
006F8BA2  03 55 1C                  ADD EDX,dword ptr [EBP + 0x1c]
LAB_006f8ba5:
006F8BA5  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F8BA8  3B C3                     CMP EAX,EBX
006F8BAA  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8BAD  0F 8F 7D 01 00 00         JG 0x006f8d30
006F8BB3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F8BB6  81 E3 80 00 00 00         AND EBX,0x80
006F8BBC  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006f8bbf:
006F8BBF  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8BC2  2B D8                     SUB EBX,EAX
006F8BC4  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8BC7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F8BCA  85 DB                     TEST EBX,EBX
006F8BCC  0F 84 11 01 00 00         JZ 0x006f8ce3
006F8BD2  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
006F8BD6  0F 84 90 00 00 00         JZ 0x006f8c6c
006F8BDC  33 DB                     XOR EBX,EBX
006F8BDE  8A 1A                     MOV BL,byte ptr [EDX]
006F8BE0  42                        INC EDX
006F8BE1  85 C9                     TEST ECX,ECX
006F8BE3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F8BE6  7E 2D                     JLE 0x006f8c15
006F8BE8  83 F9 01                  CMP ECX,0x1
006F8BEB  75 06                     JNZ 0x006f8bf3
006F8BED  B9 02 00 00 00            MOV ECX,0x2
006F8BF2  48                        DEC EAX
LAB_006f8bf3:
006F8BF3  85 C0                     TEST EAX,EAX
006F8BF5  0F 8E 00 01 00 00         JLE 0x006f8cfb
006F8BFB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F8BFE  33 C9                     XOR ECX,ECX
006F8C00  66 8B 0E                  MOV CX,word ptr [ESI]
006F8C03  3B D9                     CMP EBX,ECX
006F8C05  77 05                     JA 0x006f8c0c
006F8C07  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F8C0A  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8c0c:
006F8C0C  83 C6 02                  ADD ESI,0x2
006F8C0F  47                        INC EDI
006F8C10  33 C9                     XOR ECX,ECX
006F8C12  48                        DEC EAX
006F8C13  EB 03                     JMP 0x006f8c18
LAB_006f8c15:
006F8C15  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006f8c18:
006F8C18  85 C0                     TEST EAX,EAX
006F8C1A  0F 8E DB 00 00 00         JLE 0x006f8cfb
LAB_006f8c20:
006F8C20  33 C9                     XOR ECX,ECX
006F8C22  66 8B 0E                  MOV CX,word ptr [ESI]
006F8C25  3B D9                     CMP EBX,ECX
006F8C27  77 05                     JA 0x006f8c2e
006F8C29  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F8C2C  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8c2e:
006F8C2E  83 C6 02                  ADD ESI,0x2
006F8C31  47                        INC EDI
006F8C32  48                        DEC EAX
006F8C33  B9 01 00 00 00            MOV ECX,0x1
006F8C38  85 C0                     TEST EAX,EAX
006F8C3A  0F 8E BB 00 00 00         JLE 0x006f8cfb
006F8C40  48                        DEC EAX
006F8C41  B9 02 00 00 00            MOV ECX,0x2
006F8C46  85 C0                     TEST EAX,EAX
006F8C48  0F 8E AD 00 00 00         JLE 0x006f8cfb
006F8C4E  33 C9                     XOR ECX,ECX
006F8C50  66 8B 0E                  MOV CX,word ptr [ESI]
006F8C53  3B D9                     CMP EBX,ECX
006F8C55  77 05                     JA 0x006f8c5c
006F8C57  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F8C5A  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8c5c:
006F8C5C  83 C6 02                  ADD ESI,0x2
006F8C5F  47                        INC EDI
006F8C60  33 C9                     XOR ECX,ECX
006F8C62  48                        DEC EAX
006F8C63  85 C0                     TEST EAX,EAX
006F8C65  7F B9                     JG 0x006f8c20
006F8C67  E9 8F 00 00 00            JMP 0x006f8cfb
LAB_006f8c6c:
006F8C6C  85 C9                     TEST ECX,ECX
006F8C6E  7E 2A                     JLE 0x006f8c9a
006F8C70  83 F9 01                  CMP ECX,0x1
006F8C73  75 07                     JNZ 0x006f8c7c
006F8C75  42                        INC EDX
006F8C76  B9 02 00 00 00            MOV ECX,0x2
006F8C7B  48                        DEC EAX
LAB_006f8c7c:
006F8C7C  85 C0                     TEST EAX,EAX
006F8C7E  7E 7B                     JLE 0x006f8cfb
006F8C80  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F8C83  33 C9                     XOR ECX,ECX
006F8C85  66 8B 0E                  MOV CX,word ptr [ESI]
006F8C88  3B D9                     CMP EBX,ECX
006F8C8A  77 04                     JA 0x006f8c90
006F8C8C  8A 0A                     MOV CL,byte ptr [EDX]
006F8C8E  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8c90:
006F8C90  83 C6 02                  ADD ESI,0x2
006F8C93  47                        INC EDI
006F8C94  42                        INC EDX
006F8C95  33 C9                     XOR ECX,ECX
006F8C97  48                        DEC EAX
006F8C98  EB 03                     JMP 0x006f8c9d
LAB_006f8c9a:
006F8C9A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006f8c9d:
006F8C9D  85 C0                     TEST EAX,EAX
006F8C9F  7E 5A                     JLE 0x006f8cfb
LAB_006f8ca1:
006F8CA1  33 C9                     XOR ECX,ECX
006F8CA3  66 8B 0E                  MOV CX,word ptr [ESI]
006F8CA6  3B D9                     CMP EBX,ECX
006F8CA8  77 04                     JA 0x006f8cae
006F8CAA  8A 0A                     MOV CL,byte ptr [EDX]
006F8CAC  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8cae:
006F8CAE  83 C6 02                  ADD ESI,0x2
006F8CB1  47                        INC EDI
006F8CB2  42                        INC EDX
006F8CB3  48                        DEC EAX
006F8CB4  85 C0                     TEST EAX,EAX
006F8CB6  B9 01 00 00 00            MOV ECX,0x1
006F8CBB  7E 3E                     JLE 0x006f8cfb
006F8CBD  42                        INC EDX
006F8CBE  48                        DEC EAX
006F8CBF  85 C0                     TEST EAX,EAX
006F8CC1  B9 02 00 00 00            MOV ECX,0x2
006F8CC6  7E 33                     JLE 0x006f8cfb
006F8CC8  33 C9                     XOR ECX,ECX
006F8CCA  66 8B 0E                  MOV CX,word ptr [ESI]
006F8CCD  3B D9                     CMP EBX,ECX
006F8CCF  77 04                     JA 0x006f8cd5
006F8CD1  8A 0A                     MOV CL,byte ptr [EDX]
006F8CD3  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8cd5:
006F8CD5  83 C6 02                  ADD ESI,0x2
006F8CD8  47                        INC EDI
006F8CD9  42                        INC EDX
006F8CDA  33 C9                     XOR ECX,ECX
006F8CDC  48                        DEC EAX
006F8CDD  85 C0                     TEST EAX,EAX
006F8CDF  7F C0                     JG 0x006f8ca1
006F8CE1  EB 18                     JMP 0x006f8cfb
LAB_006f8ce3:
006F8CE3  48                        DEC EAX
006F8CE4  78 15                     JS 0x006f8cfb
006F8CE6  40                        INC EAX
LAB_006f8ce7:
006F8CE7  83 F9 01                  CMP ECX,0x1
006F8CEA  74 04                     JZ 0x006f8cf0
006F8CEC  47                        INC EDI
006F8CED  83 C6 02                  ADD ESI,0x2
LAB_006f8cf0:
006F8CF0  41                        INC ECX
006F8CF1  83 F9 02                  CMP ECX,0x2
006F8CF4  7E 02                     JLE 0x006f8cf8
006F8CF6  33 C9                     XOR ECX,ECX
LAB_006f8cf8:
006F8CF8  48                        DEC EAX
006F8CF9  75 EC                     JNZ 0x006f8ce7
LAB_006f8cfb:
006F8CFB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8CFE  85 DB                     TEST EBX,EBX
006F8D00  7E 2C                     JLE 0x006f8d2e
006F8D02  33 C0                     XOR EAX,EAX
006F8D04  8A 02                     MOV AL,byte ptr [EDX]
006F8D06  8B D8                     MOV EBX,EAX
006F8D08  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F8D0B  81 E3 80 00 00 00         AND EBX,0x80
006F8D11  42                        INC EDX
006F8D12  85 DB                     TEST EBX,EBX
006F8D14  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F8D17  74 05                     JZ 0x006f8d1e
006F8D19  83 E0 3F                  AND EAX,0x3f
006F8D1C  EB 03                     JMP 0x006f8d21
LAB_006f8d1e:
006F8D1E  83 E0 7F                  AND EAX,0x7f
LAB_006f8d21:
006F8D21  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8D24  3B C3                     CMP EAX,EBX
006F8D26  0F 8E 93 FE FF FF         JLE 0x006f8bbf
006F8D2C  EB 02                     JMP 0x006f8d30
LAB_006f8d2e:
006F8D2E  33 C0                     XOR EAX,EAX
LAB_006f8d30:
006F8D30  2B C3                     SUB EAX,EBX
006F8D32  85 DB                     TEST EBX,EBX
006F8D34  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F8D37  0F 8E 2E 01 00 00         JLE 0x006f8e6b
006F8D3D  F6 C3 80                  TEST BL,0x80
006F8D40  0F 84 25 01 00 00         JZ 0x006f8e6b
006F8D46  F6 C3 40                  TEST BL,0x40
006F8D49  0F 84 97 00 00 00         JZ 0x006f8de6
006F8D4F  33 DB                     XOR EBX,EBX
006F8D51  8A 1A                     MOV BL,byte ptr [EDX]
006F8D53  42                        INC EDX
006F8D54  85 C9                     TEST ECX,ECX
006F8D56  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F8D59  7E 31                     JLE 0x006f8d8c
006F8D5B  83 F9 01                  CMP ECX,0x1
006F8D5E  75 03                     JNZ 0x006f8d63
006F8D60  FF 4D 1C                  DEC dword ptr [EBP + 0x1c]
LAB_006f8d63:
006F8D63  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8D66  85 C9                     TEST ECX,ECX
006F8D68  0F 8E FA 00 00 00         JLE 0x006f8e68
006F8D6E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F8D71  33 C9                     XOR ECX,ECX
006F8D73  66 8B 0E                  MOV CX,word ptr [ESI]
006F8D76  3B D9                     CMP EBX,ECX
006F8D78  77 05                     JA 0x006f8d7f
006F8D7A  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F8D7D  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8d7f:
006F8D7F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8D82  83 C6 02                  ADD ESI,0x2
006F8D85  47                        INC EDI
006F8D86  49                        DEC ECX
006F8D87  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F8D8A  EB 03                     JMP 0x006f8d8f
LAB_006f8d8c:
006F8D8C  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006f8d8f:
006F8D8F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8D92  85 C9                     TEST ECX,ECX
006F8D94  0F 8E CE 00 00 00         JLE 0x006f8e68
LAB_006f8d9a:
006F8D9A  33 C9                     XOR ECX,ECX
006F8D9C  66 8B 0E                  MOV CX,word ptr [ESI]
006F8D9F  3B D9                     CMP EBX,ECX
006F8DA1  77 05                     JA 0x006f8da8
006F8DA3  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F8DA6  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8da8:
006F8DA8  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8DAB  83 C6 02                  ADD ESI,0x2
006F8DAE  47                        INC EDI
006F8DAF  49                        DEC ECX
006F8DB0  85 C9                     TEST ECX,ECX
006F8DB2  0F 8E B0 00 00 00         JLE 0x006f8e68
006F8DB8  49                        DEC ECX
006F8DB9  85 C9                     TEST ECX,ECX
006F8DBB  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F8DBE  0F 8E A4 00 00 00         JLE 0x006f8e68
006F8DC4  33 C9                     XOR ECX,ECX
006F8DC6  66 8B 0E                  MOV CX,word ptr [ESI]
006F8DC9  3B D9                     CMP EBX,ECX
006F8DCB  77 05                     JA 0x006f8dd2
006F8DCD  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F8DD0  88 0F                     MOV byte ptr [EDI],CL
LAB_006f8dd2:
006F8DD2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8DD5  83 C6 02                  ADD ESI,0x2
006F8DD8  47                        INC EDI
006F8DD9  49                        DEC ECX
006F8DDA  85 C9                     TEST ECX,ECX
006F8DDC  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F8DDF  7F B9                     JG 0x006f8d9a
006F8DE1  E9 82 00 00 00            JMP 0x006f8e68
LAB_006f8de6:
006F8DE6  85 C9                     TEST ECX,ECX
006F8DE8  7E 35                     JLE 0x006f8e1f
006F8DEA  83 F9 01                  CMP ECX,0x1
006F8DED  75 08                     JNZ 0x006f8df7
006F8DEF  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8DF2  42                        INC EDX
006F8DF3  49                        DEC ECX
006F8DF4  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006f8df7:
006F8DF7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8DFA  85 C9                     TEST ECX,ECX
006F8DFC  7E 6D                     JLE 0x006f8e6b
006F8DFE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F8E01  33 DB                     XOR EBX,EBX
006F8E03  66 8B 1E                  MOV BX,word ptr [ESI]
006F8E06  3B CB                     CMP ECX,EBX
006F8E08  77 04                     JA 0x006f8e0e
006F8E0A  8A 1A                     MOV BL,byte ptr [EDX]
006F8E0C  88 1F                     MOV byte ptr [EDI],BL
LAB_006f8e0e:
006F8E0E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8E11  83 C6 02                  ADD ESI,0x2
006F8E14  47                        INC EDI
006F8E15  42                        INC EDX
006F8E16  4B                        DEC EBX
006F8E17  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8E1A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F8E1D  EB 03                     JMP 0x006f8e22
LAB_006f8e1f:
006F8E1F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_006f8e22:
006F8E22  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
006F8E26  7E 43                     JLE 0x006f8e6b
LAB_006f8e28:
006F8E28  33 DB                     XOR EBX,EBX
006F8E2A  66 8B 1E                  MOV BX,word ptr [ESI]
006F8E2D  3B CB                     CMP ECX,EBX
006F8E2F  77 04                     JA 0x006f8e35
006F8E31  8A 1A                     MOV BL,byte ptr [EDX]
006F8E33  88 1F                     MOV byte ptr [EDI],BL
LAB_006f8e35:
006F8E35  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8E38  83 C6 02                  ADD ESI,0x2
006F8E3B  47                        INC EDI
006F8E3C  42                        INC EDX
006F8E3D  4B                        DEC EBX
006F8E3E  85 DB                     TEST EBX,EBX
006F8E40  7E 26                     JLE 0x006f8e68
006F8E42  42                        INC EDX
006F8E43  4B                        DEC EBX
006F8E44  85 DB                     TEST EBX,EBX
006F8E46  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8E49  7E 1D                     JLE 0x006f8e68
006F8E4B  33 DB                     XOR EBX,EBX
006F8E4D  66 8B 1E                  MOV BX,word ptr [ESI]
006F8E50  3B CB                     CMP ECX,EBX
006F8E52  77 04                     JA 0x006f8e58
006F8E54  8A 1A                     MOV BL,byte ptr [EDX]
006F8E56  88 1F                     MOV byte ptr [EDI],BL
LAB_006f8e58:
006F8E58  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8E5B  83 C6 02                  ADD ESI,0x2
006F8E5E  47                        INC EDI
006F8E5F  42                        INC EDX
006F8E60  4B                        DEC EBX
006F8E61  85 DB                     TEST EBX,EBX
006F8E63  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8E66  7F C0                     JG 0x006f8e28
LAB_006f8e68:
006F8E68  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006f8e6b:
006F8E6B  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006F8E6E  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F8E71  8B F7                     MOV ESI,EDI
006F8E73  2B F1                     SUB ESI,ECX
006F8E75  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006F8E78  2B F1                     SUB ESI,ECX
006F8E7A  3B C6                     CMP EAX,ESI
006F8E7C  7D 2B                     JGE 0x006f8ea9
LAB_006f8e7e:
006F8E7E  81 E3 C0 00 00 00         AND EBX,0xc0
006F8E84  2B F0                     SUB ESI,EAX
006F8E86  80 FB 80                  CMP BL,0x80
006F8E89  75 02                     JNZ 0x006f8e8d
006F8E8B  03 D0                     ADD EDX,EAX
LAB_006f8e8d:
006F8E8D  33 DB                     XOR EBX,EBX
006F8E8F  8A 1A                     MOV BL,byte ptr [EDX]
006F8E91  8B C3                     MOV EAX,EBX
006F8E93  24 80                     AND AL,0x80
006F8E95  42                        INC EDX
006F8E96  84 C0                     TEST AL,AL
006F8E98  8B C3                     MOV EAX,EBX
006F8E9A  74 09                     JZ 0x006f8ea5
006F8E9C  83 E0 3F                  AND EAX,0x3f
006F8E9F  F6 C3 40                  TEST BL,0x40
006F8EA2  74 01                     JZ 0x006f8ea5
006F8EA4  42                        INC EDX
LAB_006f8ea5:
006F8EA5  3B C6                     CMP EAX,ESI
006F8EA7  7C D5                     JL 0x006f8e7e
LAB_006f8ea9:
006F8EA9  81 E3 C0 00 00 00         AND EBX,0xc0
006F8EAF  80 FB 80                  CMP BL,0x80
006F8EB2  75 02                     JNZ 0x006f8eb6
006F8EB4  03 D6                     ADD EDX,ESI
LAB_006f8eb6:
006F8EB6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F8EB9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F8EBC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F8EBF  03 C1                     ADD EAX,ECX
006F8EC1  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006F8EC4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F8EC7  03 D8                     ADD EBX,EAX
006F8EC9  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F8ECC  40                        INC EAX
006F8ECD  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F8ED0  83 F8 02                  CMP EAX,0x2
006F8ED3  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006F8ED6  7E 07                     JLE 0x006f8edf
006F8ED8  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006f8edf:
006F8EDF  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F8EE2  48                        DEC EAX
006F8EE3  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F8EE6  0F 89 EA FB FF FF         JNS 0x006f8ad6
LAB_006f8eec:
006F8EEC  5F                        POP EDI
006F8EED  5E                        POP ESI
006F8EEE  5B                        POP EBX
006F8EEF  8B E5                     MOV ESP,EBP
006F8EF1  5D                        POP EBP
006F8EF2  C2 30 00                  RET 0x30
