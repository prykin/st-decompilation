FUN_00701ad0:
00701AD0  55                        PUSH EBP
00701AD1  8B EC                     MOV EBP,ESP
00701AD3  83 EC 24                  SUB ESP,0x24
00701AD6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00701AD9  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00701AE0  48                        DEC EAX
00701AE1  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00701AEB  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00701AEE  0F 88 D1 09 00 00         JS 0x007024c5
00701AF4  53                        PUSH EBX
00701AF5  56                        PUSH ESI
00701AF6  57                        PUSH EDI
00701AF7  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_00701afa:
00701AFA  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
00701AFD  F6 C3 01                  TEST BL,0x1
00701B00  0F 85 9E 00 00 00         JNZ 0x00701ba4
LAB_00701b06:
00701B06  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00701B09  48                        DEC EAX
00701B0A  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00701B0D  0F 88 91 00 00 00         JS 0x00701ba4
00701B13  33 C0                     XOR EAX,EAX
00701B15  8A 07                     MOV AL,byte ptr [EDI]
00701B17  47                        INC EDI
00701B18  85 C0                     TEST EAX,EAX
00701B1A  74 2D                     JZ 0x00701b49
00701B1C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_00701b1f:
00701B1F  A8 80                     TEST AL,0x80
00701B21  74 16                     JZ 0x00701b39
00701B23  A8 40                     TEST AL,0x40
00701B25  74 06                     JZ 0x00701b2d
00701B27  47                        INC EDI
00701B28  83 E0 3F                  AND EAX,0x3f
00701B2B  EB 0F                     JMP 0x00701b3c
LAB_00701b2d:
00701B2D  8B D0                     MOV EDX,EAX
00701B2F  83 E2 3F                  AND EDX,0x3f
00701B32  03 FA                     ADD EDI,EDX
00701B34  83 E0 3F                  AND EAX,0x3f
00701B37  EB 03                     JMP 0x00701b3c
LAB_00701b39:
00701B39  83 E0 7F                  AND EAX,0x7f
LAB_00701b3c:
00701B3C  2B C8                     SUB ECX,EAX
00701B3E  85 C9                     TEST ECX,ECX
00701B40  7E 07                     JLE 0x00701b49
00701B42  33 C0                     XOR EAX,EAX
00701B44  8A 07                     MOV AL,byte ptr [EDI]
00701B46  47                        INC EDI
00701B47  EB D6                     JMP 0x00701b1f
LAB_00701b49:
00701B49  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00701B4C  33 C0                     XOR EAX,EAX
00701B4E  8A 01                     MOV AL,byte ptr [ECX]
00701B50  41                        INC ECX
00701B51  85 C0                     TEST EAX,EAX
00701B53  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
00701B56  74 30                     JZ 0x00701b88
00701B58  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
LAB_00701b5b:
00701B5B  A8 80                     TEST AL,0x80
00701B5D  74 16                     JZ 0x00701b75
00701B5F  A8 40                     TEST AL,0x40
00701B61  74 06                     JZ 0x00701b69
00701B63  41                        INC ECX
00701B64  83 E0 3F                  AND EAX,0x3f
00701B67  EB 0F                     JMP 0x00701b78
LAB_00701b69:
00701B69  8B F0                     MOV ESI,EAX
00701B6B  83 E6 3F                  AND ESI,0x3f
00701B6E  03 CE                     ADD ECX,ESI
00701B70  83 E0 3F                  AND EAX,0x3f
00701B73  EB 03                     JMP 0x00701b78
LAB_00701b75:
00701B75  83 E0 7F                  AND EAX,0x7f
LAB_00701b78:
00701B78  2B D0                     SUB EDX,EAX
00701B7A  85 D2                     TEST EDX,EDX
00701B7C  7E 07                     JLE 0x00701b85
00701B7E  33 C0                     XOR EAX,EAX
00701B80  8A 01                     MOV AL,byte ptr [ECX]
00701B82  41                        INC ECX
00701B83  EB D6                     JMP 0x00701b5b
LAB_00701b85:
00701B85  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_00701b88:
00701B88  43                        INC EBX
00701B89  83 FB 04                  CMP EBX,0x4
00701B8C  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
00701B8F  7E 0A                     JLE 0x00701b9b
00701B91  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
00701B98  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
LAB_00701b9b:
00701B9B  F6 C3 01                  TEST BL,0x1
00701B9E  0F 84 62 FF FF FF         JZ 0x00701b06
LAB_00701ba4:
00701BA4  33 C0                     XOR EAX,EAX
00701BA6  8A 07                     MOV AL,byte ptr [EDI]
00701BA8  47                        INC EDI
00701BA9  85 C0                     TEST EAX,EAX
00701BAB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00701BAE  0F 84 DB 08 00 00         JZ 0x0070248f
00701BB4  8B C8                     MOV ECX,EAX
00701BB6  81 E1 C0 00 00 00         AND ECX,0xc0
00701BBC  81 F9 C0 00 00 00         CMP ECX,0xc0
00701BC2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00701BC5  75 12                     JNZ 0x00701bd9
00701BC7  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
00701BCA  33 C9                     XOR ECX,ECX
00701BCC  8A 0F                     MOV CL,byte ptr [EDI]
00701BCE  8B D1                     MOV EDX,ECX
00701BD0  33 C9                     XOR ECX,ECX
00701BD2  47                        INC EDI
00701BD3  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
00701BD6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00701bd9:
00701BD9  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00701BDC  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00701BDF  33 C9                     XOR ECX,ECX
00701BE1  8A 0E                     MOV CL,byte ptr [ESI]
00701BE3  46                        INC ESI
00701BE4  F6 C1 80                  TEST CL,0x80
00701BE7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00701BEA  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
00701BED  8B D1                     MOV EDX,ECX
00701BEF  74 15                     JZ 0x00701c06
00701BF1  83 E2 3F                  AND EDX,0x3f
00701BF4  F6 C1 40                  TEST CL,0x40
00701BF7  74 06                     JZ 0x00701bff
00701BF9  46                        INC ESI
00701BFA  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
00701BFD  EB 0A                     JMP 0x00701c09
LAB_00701bff:
00701BFF  03 F2                     ADD ESI,EDX
00701C01  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
00701C04  EB 03                     JMP 0x00701c09
LAB_00701c06:
00701C06  83 E2 7F                  AND EDX,0x7f
LAB_00701c09:
00701C09  3B 55 40                  CMP EDX,dword ptr [EBP + 0x40]
00701C0C  7F 2A                     JG 0x00701c38
LAB_00701c0e:
00701C0E  33 C9                     XOR ECX,ECX
00701C10  2B DA                     SUB EBX,EDX
00701C12  8A 0E                     MOV CL,byte ptr [ESI]
00701C14  46                        INC ESI
00701C15  F6 C1 80                  TEST CL,0x80
00701C18  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00701C1B  8B D1                     MOV EDX,ECX
00701C1D  74 0F                     JZ 0x00701c2e
00701C1F  83 E2 3F                  AND EDX,0x3f
00701C22  F6 C1 40                  TEST CL,0x40
00701C25  74 03                     JZ 0x00701c2a
00701C27  46                        INC ESI
00701C28  EB 07                     JMP 0x00701c31
LAB_00701c2a:
00701C2A  03 F2                     ADD ESI,EDX
00701C2C  EB 03                     JMP 0x00701c31
LAB_00701c2e:
00701C2E  83 E2 7F                  AND EDX,0x7f
LAB_00701c31:
00701C31  3B D3                     CMP EDX,EBX
00701C33  7E D9                     JLE 0x00701c0e
00701C35  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
LAB_00701c38:
00701C38  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00701C3B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00701C3E  2B D3                     SUB EDX,EBX
00701C40  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00701C43  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00701C46  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00701C49  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00701C4C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00701c4f:
00701C4F  A8 80                     TEST AL,0x80
00701C51  74 17                     JZ 0x00701c6a
00701C53  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701C56  83 E0 3F                  AND EAX,0x3f
00701C59  3B C3                     CMP EAX,EBX
00701C5B  7F 52                     JG 0x00701caf
00701C5D  81 7D 1C 80 00 00 00      CMP dword ptr [EBP + 0x1c],0x80
00701C64  75 0E                     JNZ 0x00701c74
00701C66  03 F8                     ADD EDI,EAX
00701C68  EB 0A                     JMP 0x00701c74
LAB_00701c6a:
00701C6A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701C6D  83 E0 7F                  AND EAX,0x7f
00701C70  3B C3                     CMP EAX,EBX
00701C72  7F 3B                     JG 0x00701caf
LAB_00701c74:
00701C74  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701C77  2B D8                     SUB EBX,EAX
00701C79  33 C0                     XOR EAX,EAX
00701C7B  8A 07                     MOV AL,byte ptr [EDI]
00701C7D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701C80  8B D8                     MOV EBX,EAX
00701C82  47                        INC EDI
00701C83  81 E3 C0 00 00 00         AND EBX,0xc0
00701C89  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00701C8C  81 FB C0 00 00 00         CMP EBX,0xc0
00701C92  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00701C95  75 B8                     JNZ 0x00701c4f
00701C97  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00701C9A  33 D2                     XOR EDX,EDX
00701C9C  8A 17                     MOV DL,byte ptr [EDI]
00701C9E  33 C0                     XOR EAX,EAX
00701CA0  47                        INC EDI
00701CA1  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
00701CA4  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00701CA7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00701CAA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00701CAD  EB A0                     JMP 0x00701c4f
LAB_00701caf:
00701CAF  2B C3                     SUB EAX,EBX
00701CB1  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00701CB4  81 E3 C0 00 00 00         AND EBX,0xc0
00701CBA  80 FB 80                  CMP BL,0x80
00701CBD  75 03                     JNZ 0x00701cc2
00701CBF  03 7D FC                  ADD EDI,dword ptr [EBP + -0x4]
LAB_00701cc2:
00701CC2  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00701CC5  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00701CCC  85 DB                     TEST EBX,EBX
00701CCE  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00701CD1  0F 8E 25 07 00 00         JLE 0x007023fc
LAB_00701cd7:
00701CD7  3B D3                     CMP EDX,EBX
00701CD9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00701CDC  7D 7A                     JGE 0x00701d58
00701CDE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00701CE1  81 E2 80 00 00 00         AND EDX,0x80
00701CE7  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_00701cea:
00701CEA  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00701CED  33 D2                     XOR EDX,EDX
00701CEF  8A 13                     MOV DL,byte ptr [EBX]
00701CF1  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00701CF4  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00701CF7  81 E2 80 00 00 00         AND EDX,0x80
00701CFD  33 D3                     XOR EDX,EBX
00701CFF  75 57                     JNZ 0x00701d58
00701D01  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00701D04  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00701D07  2B DA                     SUB EBX,EDX
00701D09  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
00701D0C  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00701D0F  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00701D12  42                        INC EDX
00701D13  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00701D16  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00701D19  8B D3                     MOV EDX,EBX
00701D1B  81 E2 80 00 00 00         AND EDX,0x80
00701D21  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
00701D24  8B D3                     MOV EDX,EBX
00701D26  74 1B                     JZ 0x00701d43
00701D28  83 E2 3F                  AND EDX,0x3f
00701D2B  F6 C3 40                  TEST BL,0x40
00701D2E  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00701D31  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00701D34  74 06                     JZ 0x00701d3c
00701D36  43                        INC EBX
00701D37  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
00701D3A  EB 0D                     JMP 0x00701d49
LAB_00701d3c:
00701D3C  03 DA                     ADD EBX,EDX
00701D3E  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
00701D41  EB 06                     JMP 0x00701d49
LAB_00701d43:
00701D43  83 E2 7F                  AND EDX,0x7f
00701D46  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_00701d49:
00701D49  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701D4C  03 DA                     ADD EBX,EDX
00701D4E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701D51  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00701D54  3B D3                     CMP EDX,EBX
00701D56  7C 92                     JL 0x00701cea
LAB_00701d58:
00701D58  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00701D5B  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00701D5E  03 DA                     ADD EBX,EDX
00701D60  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00701D63  3B DA                     CMP EBX,EDX
00701D65  7E 05                     JLE 0x00701d6c
00701D67  2B 55 E0                  SUB EDX,dword ptr [EBP + -0x20]
00701D6A  EB 03                     JMP 0x00701d6f
LAB_00701d6c:
00701D6C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_00701d6f:
00701D6F  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00701D72  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00701D75  03 DA                     ADD EBX,EDX
00701D77  3B C2                     CMP EAX,EDX
00701D79  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00701D7C  0F 8F F2 02 00 00         JG 0x00702074
00701D82  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00701D85  81 E2 80 00 00 00         AND EDX,0x80
00701D8B  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00701D8E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00701d91:
00701D91  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701D94  2B D8                     SUB EBX,EAX
00701D96  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701D99  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00701D9C  85 DB                     TEST EBX,EBX
00701D9E  0F 84 5A 02 00 00         JZ 0x00701ffe
00701DA4  F6 45 EC 40               TEST byte ptr [EBP + -0x14],0x40
00701DA8  0F 84 19 01 00 00         JZ 0x00701ec7
00701DAE  85 C9                     TEST ECX,ECX
00701DB0  7E 78                     JLE 0x00701e2a
00701DB2  8D 59 FF                  LEA EBX,[ECX + -0x1]
00701DB5  83 FB 03                  CMP EBX,0x3
00701DB8  77 70                     JA 0x00701e2a
switchD_00701dba::switchD:
00701DBA  FF 24 9D CC 24 70 00      JMP dword ptr [EBX*0x4 + 0x7024cc]
switchD_00701dba::caseD_1:
00701DC1  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00701DC5  74 11                     JZ 0x00701dd8
00701DC7  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701DCA  33 C9                     XOR ECX,ECX
00701DCC  66 8B 0A                  MOV CX,word ptr [EDX]
00701DCF  3B D9                     CMP EBX,ECX
00701DD1  77 05                     JA 0x00701dd8
00701DD3  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
00701DD6  88 0E                     MOV byte ptr [ESI],CL
LAB_00701dd8:
00701DD8  83 C2 02                  ADD EDX,0x2
00701DDB  46                        INC ESI
00701DDC  48                        DEC EAX
00701DDD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00701DE0  85 C0                     TEST EAX,EAX
00701DE2  B9 02 00 00 00            MOV ECX,0x2
00701DE7  0F 8E 31 02 00 00         JLE 0x0070201e
switchD_00701dba::caseD_2:
00701DED  48                        DEC EAX
00701DEE  B9 03 00 00 00            MOV ECX,0x3
00701DF3  85 C0                     TEST EAX,EAX
00701DF5  0F 8E 23 02 00 00         JLE 0x0070201e
switchD_00701dba::caseD_3:
00701DFB  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00701DFF  74 11                     JZ 0x00701e12
00701E01  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701E04  33 C9                     XOR ECX,ECX
00701E06  66 8B 0A                  MOV CX,word ptr [EDX]
00701E09  3B D9                     CMP EBX,ECX
00701E0B  77 05                     JA 0x00701e12
00701E0D  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
00701E10  88 0E                     MOV byte ptr [ESI],CL
LAB_00701e12:
00701E12  83 C2 02                  ADD EDX,0x2
00701E15  46                        INC ESI
00701E16  48                        DEC EAX
00701E17  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00701E1A  85 C0                     TEST EAX,EAX
00701E1C  B9 04 00 00 00            MOV ECX,0x4
00701E21  0F 8E F7 01 00 00         JLE 0x0070201e
switchD_00701dba::caseD_4:
00701E27  33 C9                     XOR ECX,ECX
00701E29  48                        DEC EAX
switchD_00701dba::default:
00701E2A  85 C0                     TEST EAX,EAX
00701E2C  0F 8E EC 01 00 00         JLE 0x0070201e
00701E32  48                        DEC EAX
00701E33  B9 01 00 00 00            MOV ECX,0x1
00701E38  85 C0                     TEST EAX,EAX
00701E3A  0F 8E DE 01 00 00         JLE 0x0070201e
00701E40  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00701E43  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701E46  81 E1 80 00 00 00         AND ECX,0x80
00701E4C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00701E4F  EB 03                     JMP 0x00701e54
LAB_00701e51:
00701E51  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_00701e54:
00701E54  85 C9                     TEST ECX,ECX
00701E56  74 0E                     JZ 0x00701e66
00701E58  33 C9                     XOR ECX,ECX
00701E5A  66 8B 0A                  MOV CX,word ptr [EDX]
00701E5D  3B D9                     CMP EBX,ECX
00701E5F  77 05                     JA 0x00701e66
00701E61  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
00701E64  88 0E                     MOV byte ptr [ESI],CL
LAB_00701e66:
00701E66  83 C2 02                  ADD EDX,0x2
00701E69  46                        INC ESI
00701E6A  48                        DEC EAX
00701E6B  B9 02 00 00 00            MOV ECX,0x2
00701E70  85 C0                     TEST EAX,EAX
00701E72  0F 8E A3 01 00 00         JLE 0x0070201b
00701E78  48                        DEC EAX
00701E79  B9 03 00 00 00            MOV ECX,0x3
00701E7E  85 C0                     TEST EAX,EAX
00701E80  0F 8E 95 01 00 00         JLE 0x0070201b
00701E86  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00701E89  85 C9                     TEST ECX,ECX
00701E8B  74 0E                     JZ 0x00701e9b
00701E8D  33 C9                     XOR ECX,ECX
00701E8F  66 8B 0A                  MOV CX,word ptr [EDX]
00701E92  3B D9                     CMP EBX,ECX
00701E94  77 05                     JA 0x00701e9b
00701E96  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
00701E99  88 0E                     MOV byte ptr [ESI],CL
LAB_00701e9b:
00701E9B  83 C2 02                  ADD EDX,0x2
00701E9E  46                        INC ESI
00701E9F  48                        DEC EAX
00701EA0  B9 04 00 00 00            MOV ECX,0x4
00701EA5  85 C0                     TEST EAX,EAX
00701EA7  0F 8E 6E 01 00 00         JLE 0x0070201b
00701EAD  33 C9                     XOR ECX,ECX
00701EAF  48                        DEC EAX
00701EB0  85 C0                     TEST EAX,EAX
00701EB2  0F 8E 63 01 00 00         JLE 0x0070201b
00701EB8  48                        DEC EAX
00701EB9  B9 01 00 00 00            MOV ECX,0x1
00701EBE  85 C0                     TEST EAX,EAX
00701EC0  7F 8F                     JG 0x00701e51
00701EC2  E9 54 01 00 00            JMP 0x0070201b
LAB_00701ec7:
00701EC7  85 C9                     TEST ECX,ECX
00701EC9  0F 8E 8E 00 00 00         JLE 0x00701f5d
00701ECF  8D 59 FF                  LEA EBX,[ECX + -0x1]
00701ED2  83 FB 03                  CMP EBX,0x3
00701ED5  0F 87 82 00 00 00         JA 0x00701f5d
switchD_00701edb::switchD:
00701EDB  FF 24 9D DC 24 70 00      JMP dword ptr [EBX*0x4 + 0x7024dc]
switchD_00701edb::caseD_1:
00701EE2  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00701EE6  74 18                     JZ 0x00701f00
00701EE8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701EEB  33 C9                     XOR ECX,ECX
00701EED  66 8B 0A                  MOV CX,word ptr [EDX]
00701EF0  3B D9                     CMP EBX,ECX
00701EF2  77 0C                     JA 0x00701f00
00701EF4  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00701EF7  33 C9                     XOR ECX,ECX
00701EF9  8A 0F                     MOV CL,byte ptr [EDI]
00701EFB  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00701EFE  88 0E                     MOV byte ptr [ESI],CL
LAB_00701f00:
00701F00  83 C2 02                  ADD EDX,0x2
00701F03  46                        INC ESI
00701F04  47                        INC EDI
00701F05  48                        DEC EAX
00701F06  85 C0                     TEST EAX,EAX
00701F08  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00701F0B  B9 02 00 00 00            MOV ECX,0x2
00701F10  0F 8E 08 01 00 00         JLE 0x0070201e
switchD_00701edb::caseD_2:
00701F16  47                        INC EDI
00701F17  48                        DEC EAX
00701F18  85 C0                     TEST EAX,EAX
00701F1A  B9 03 00 00 00            MOV ECX,0x3
00701F1F  0F 8E F9 00 00 00         JLE 0x0070201e
switchD_00701edb::caseD_3:
00701F25  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00701F29  74 18                     JZ 0x00701f43
00701F2B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701F2E  33 C9                     XOR ECX,ECX
00701F30  66 8B 0A                  MOV CX,word ptr [EDX]
00701F33  3B D9                     CMP EBX,ECX
00701F35  77 0C                     JA 0x00701f43
00701F37  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00701F3A  33 C9                     XOR ECX,ECX
00701F3C  8A 0F                     MOV CL,byte ptr [EDI]
00701F3E  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00701F41  88 0E                     MOV byte ptr [ESI],CL
LAB_00701f43:
00701F43  83 C2 02                  ADD EDX,0x2
00701F46  46                        INC ESI
00701F47  47                        INC EDI
00701F48  48                        DEC EAX
00701F49  85 C0                     TEST EAX,EAX
00701F4B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00701F4E  B9 04 00 00 00            MOV ECX,0x4
00701F53  0F 8E C5 00 00 00         JLE 0x0070201e
switchD_00701edb::caseD_4:
00701F59  47                        INC EDI
00701F5A  33 C9                     XOR ECX,ECX
00701F5C  48                        DEC EAX
switchD_00701edb::default:
00701F5D  85 C0                     TEST EAX,EAX
00701F5F  0F 8E B9 00 00 00         JLE 0x0070201e
00701F65  47                        INC EDI
00701F66  48                        DEC EAX
00701F67  85 C0                     TEST EAX,EAX
00701F69  B9 01 00 00 00            MOV ECX,0x1
00701F6E  0F 8E AA 00 00 00         JLE 0x0070201e
00701F74  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00701F77  81 E1 80 00 00 00         AND ECX,0x80
00701F7D  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00701F80  EB 03                     JMP 0x00701f85
LAB_00701f82:
00701F82  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_00701f85:
00701F85  85 C9                     TEST ECX,ECX
00701F87  74 18                     JZ 0x00701fa1
00701F89  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701F8C  33 C9                     XOR ECX,ECX
00701F8E  66 8B 0A                  MOV CX,word ptr [EDX]
00701F91  3B D9                     CMP EBX,ECX
00701F93  77 0C                     JA 0x00701fa1
00701F95  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00701F98  33 C9                     XOR ECX,ECX
00701F9A  8A 0F                     MOV CL,byte ptr [EDI]
00701F9C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00701F9F  88 0E                     MOV byte ptr [ESI],CL
LAB_00701fa1:
00701FA1  83 C2 02                  ADD EDX,0x2
00701FA4  46                        INC ESI
00701FA5  47                        INC EDI
00701FA6  48                        DEC EAX
00701FA7  85 C0                     TEST EAX,EAX
00701FA9  B9 02 00 00 00            MOV ECX,0x2
00701FAE  7E 6B                     JLE 0x0070201b
00701FB0  47                        INC EDI
00701FB1  48                        DEC EAX
00701FB2  85 C0                     TEST EAX,EAX
00701FB4  B9 03 00 00 00            MOV ECX,0x3
00701FB9  7E 60                     JLE 0x0070201b
00701FBB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00701FBE  85 C9                     TEST ECX,ECX
00701FC0  74 18                     JZ 0x00701fda
00701FC2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701FC5  33 C9                     XOR ECX,ECX
00701FC7  66 8B 0A                  MOV CX,word ptr [EDX]
00701FCA  3B D9                     CMP EBX,ECX
00701FCC  77 0C                     JA 0x00701fda
00701FCE  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00701FD1  33 C9                     XOR ECX,ECX
00701FD3  8A 0F                     MOV CL,byte ptr [EDI]
00701FD5  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00701FD8  88 0E                     MOV byte ptr [ESI],CL
LAB_00701fda:
00701FDA  83 C2 02                  ADD EDX,0x2
00701FDD  46                        INC ESI
00701FDE  47                        INC EDI
00701FDF  48                        DEC EAX
00701FE0  85 C0                     TEST EAX,EAX
00701FE2  B9 04 00 00 00            MOV ECX,0x4
00701FE7  7E 32                     JLE 0x0070201b
00701FE9  47                        INC EDI
00701FEA  33 C9                     XOR ECX,ECX
00701FEC  48                        DEC EAX
00701FED  85 C0                     TEST EAX,EAX
00701FEF  7E 2A                     JLE 0x0070201b
00701FF1  47                        INC EDI
00701FF2  48                        DEC EAX
00701FF3  85 C0                     TEST EAX,EAX
00701FF5  B9 01 00 00 00            MOV ECX,0x1
00701FFA  7F 86                     JG 0x00701f82
00701FFC  EB 1D                     JMP 0x0070201b
LAB_00701ffe:
00701FFE  48                        DEC EAX
00701FFF  78 1D                     JS 0x0070201e
00702001  40                        INC EAX
LAB_00702002:
00702002  8B D9                     MOV EBX,ECX
00702004  83 E3 01                  AND EBX,0x1
00702007  80 FB 01                  CMP BL,0x1
0070200A  75 04                     JNZ 0x00702010
0070200C  46                        INC ESI
0070200D  83 C2 02                  ADD EDX,0x2
LAB_00702010:
00702010  41                        INC ECX
00702011  83 F9 04                  CMP ECX,0x4
00702014  7E 02                     JLE 0x00702018
00702016  33 C9                     XOR ECX,ECX
LAB_00702018:
00702018  48                        DEC EAX
00702019  75 E7                     JNZ 0x00702002
LAB_0070201b:
0070201B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0070201e:
0070201E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00702021  85 C0                     TEST EAX,EAX
00702023  7E 4B                     JLE 0x00702070
00702025  33 DB                     XOR EBX,EBX
00702027  8A 1F                     MOV BL,byte ptr [EDI]
00702029  8B C3                     MOV EAX,EBX
0070202B  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0070202E  25 80 00 00 00            AND EAX,0x80
00702033  47                        INC EDI
00702034  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00702037  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
0070203A  85 C0                     TEST EAX,EAX
0070203C  8B C3                     MOV EAX,EBX
0070203E  74 22                     JZ 0x00702062
00702040  83 E0 3F                  AND EAX,0x3f
00702043  F6 C3 40                  TEST BL,0x40
00702046  74 1D                     JZ 0x00702065
00702048  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
0070204B  33 D2                     XOR EDX,EDX
0070204D  8A 17                     MOV DL,byte ptr [EDI]
0070204F  8B FA                     MOV EDI,EDX
00702051  33 D2                     XOR EDX,EDX
00702053  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
00702056  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00702059  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0070205C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070205F  47                        INC EDI
00702060  EB 03                     JMP 0x00702065
LAB_00702062:
00702062  83 E0 7F                  AND EAX,0x7f
LAB_00702065:
00702065  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
00702068  0F 8E 23 FD FF FF         JLE 0x00701d91
0070206E  EB 07                     JMP 0x00702077
LAB_00702070:
00702070  33 C0                     XOR EAX,EAX
00702072  EB 03                     JMP 0x00702077
LAB_00702074:
00702074  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00702077:
00702077  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070207A  2B C3                     SUB EAX,EBX
0070207C  85 DB                     TEST EBX,EBX
0070207E  0F 8E 07 03 00 00         JLE 0x0070238b
00702084  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
00702087  F6 C3 80                  TEST BL,0x80
0070208A  0F 84 CF 02 00 00         JZ 0x0070235f
00702090  F6 C3 40                  TEST BL,0x40
00702093  0F 84 57 01 00 00         JZ 0x007021f0
00702099  85 C9                     TEST ECX,ECX
0070209B  0F 8E 99 00 00 00         JLE 0x0070213a
007020A1  8D 59 FF                  LEA EBX,[ECX + -0x1]
007020A4  83 FB 03                  CMP EBX,0x3
007020A7  0F 87 8D 00 00 00         JA 0x0070213a
switchD_007020ad::switchD:
007020AD  FF 24 9D EC 24 70 00      JMP dword ptr [EBX*0x4 + 0x7024ec]
switchD_007020ad::caseD_1:
007020B4  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
007020B8  74 11                     JZ 0x007020cb
007020BA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007020BD  33 C9                     XOR ECX,ECX
007020BF  66 8B 0A                  MOV CX,word ptr [EDX]
007020C2  3B D9                     CMP EBX,ECX
007020C4  77 05                     JA 0x007020cb
007020C6  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
007020C9  88 0E                     MOV byte ptr [ESI],CL
LAB_007020cb:
007020CB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007020CE  83 C2 02                  ADD EDX,0x2
007020D1  46                        INC ESI
007020D2  4B                        DEC EBX
007020D3  85 DB                     TEST EBX,EBX
007020D5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007020D8  B9 02 00 00 00            MOV ECX,0x2
007020DD  0F 8E A8 02 00 00         JLE 0x0070238b
007020E3  EB 03                     JMP 0x007020e8
switchD_007020ad::caseD_2:
007020E5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007020e8:
007020E8  4B                        DEC EBX
007020E9  B9 03 00 00 00            MOV ECX,0x3
007020EE  85 DB                     TEST EBX,EBX
007020F0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007020F3  0F 8E 92 02 00 00         JLE 0x0070238b
007020F9  EB 03                     JMP 0x007020fe
switchD_007020ad::caseD_3:
007020FB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007020fe:
007020FE  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00702102  74 14                     JZ 0x00702118
00702104  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00702107  33 C9                     XOR ECX,ECX
00702109  66 8B 0A                  MOV CX,word ptr [EDX]
0070210C  3B D9                     CMP EBX,ECX
0070210E  77 05                     JA 0x00702115
00702110  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
00702113  88 0E                     MOV byte ptr [ESI],CL
LAB_00702115:
00702115  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00702118:
00702118  83 C2 02                  ADD EDX,0x2
0070211B  46                        INC ESI
0070211C  4B                        DEC EBX
0070211D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00702120  85 DB                     TEST EBX,EBX
00702122  B9 04 00 00 00            MOV ECX,0x4
00702127  0F 8E 5E 02 00 00         JLE 0x0070238b
0070212D  33 C9                     XOR ECX,ECX
0070212F  4B                        DEC EBX
00702130  EB 0B                     JMP 0x0070213d
switchD_007020ad::caseD_4:
00702132  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702135  33 C9                     XOR ECX,ECX
00702137  4B                        DEC EBX
00702138  EB 03                     JMP 0x0070213d
LAB_0070213a:
0070213A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
switchD_007020ad::default:
0070213D  85 DB                     TEST EBX,EBX
0070213F  0F 8E 46 02 00 00         JLE 0x0070238b
00702145  4B                        DEC EBX
00702146  B9 01 00 00 00            MOV ECX,0x1
0070214B  85 DB                     TEST EBX,EBX
0070214D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702150  0F 8E 35 02 00 00         JLE 0x0070238b
00702156  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00702159  81 E1 80 00 00 00         AND ECX,0x80
0070215F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00702162  EB 03                     JMP 0x00702167
LAB_00702164:
00702164  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_00702167:
00702167  85 C9                     TEST ECX,ECX
00702169  74 14                     JZ 0x0070217f
0070216B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070216E  33 C9                     XOR ECX,ECX
00702170  66 8B 0A                  MOV CX,word ptr [EDX]
00702173  3B D9                     CMP EBX,ECX
00702175  77 05                     JA 0x0070217c
00702177  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
0070217A  88 0E                     MOV byte ptr [ESI],CL
LAB_0070217c:
0070217C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070217f:
0070217F  83 C2 02                  ADD EDX,0x2
00702182  46                        INC ESI
00702183  4B                        DEC EBX
00702184  B9 02 00 00 00            MOV ECX,0x2
00702189  85 DB                     TEST EBX,EBX
0070218B  0F 8E F7 01 00 00         JLE 0x00702388
00702191  4B                        DEC EBX
00702192  B9 03 00 00 00            MOV ECX,0x3
00702197  85 DB                     TEST EBX,EBX
00702199  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070219C  0F 8E E6 01 00 00         JLE 0x00702388
007021A2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007021A5  85 C9                     TEST ECX,ECX
007021A7  74 14                     JZ 0x007021bd
007021A9  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007021AC  33 C9                     XOR ECX,ECX
007021AE  66 8B 0A                  MOV CX,word ptr [EDX]
007021B1  3B D9                     CMP EBX,ECX
007021B3  77 05                     JA 0x007021ba
007021B5  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
007021B8  88 0E                     MOV byte ptr [ESI],CL
LAB_007021ba:
007021BA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007021bd:
007021BD  83 C2 02                  ADD EDX,0x2
007021C0  46                        INC ESI
007021C1  4B                        DEC EBX
007021C2  B9 04 00 00 00            MOV ECX,0x4
007021C7  85 DB                     TEST EBX,EBX
007021C9  0F 8E B9 01 00 00         JLE 0x00702388
007021CF  33 C9                     XOR ECX,ECX
007021D1  4B                        DEC EBX
007021D2  85 DB                     TEST EBX,EBX
007021D4  0F 8E AE 01 00 00         JLE 0x00702388
007021DA  4B                        DEC EBX
007021DB  B9 01 00 00 00            MOV ECX,0x1
007021E0  85 DB                     TEST EBX,EBX
007021E2  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007021E5  0F 8F 79 FF FF FF         JG 0x00702164
007021EB  E9 98 01 00 00            JMP 0x00702388
LAB_007021f0:
007021F0  85 C9                     TEST ECX,ECX
007021F2  0F 8E AC 00 00 00         JLE 0x007022a4
007021F8  8D 59 FF                  LEA EBX,[ECX + -0x1]
007021FB  83 FB 03                  CMP EBX,0x3
007021FE  0F 87 A0 00 00 00         JA 0x007022a4
switchD_00702204::switchD:
00702204  FF 24 9D FC 24 70 00      JMP dword ptr [EBX*0x4 + 0x7024fc]
switchD_00702204::caseD_1:
0070220B  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
0070220F  74 18                     JZ 0x00702229
00702211  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00702214  33 C9                     XOR ECX,ECX
00702216  66 8B 0A                  MOV CX,word ptr [EDX]
00702219  3B D9                     CMP EBX,ECX
0070221B  77 0C                     JA 0x00702229
0070221D  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00702220  33 C9                     XOR ECX,ECX
00702222  8A 0F                     MOV CL,byte ptr [EDI]
00702224  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702227  88 0E                     MOV byte ptr [ESI],CL
LAB_00702229:
00702229  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070222C  83 C2 02                  ADD EDX,0x2
0070222F  46                        INC ESI
00702230  47                        INC EDI
00702231  4B                        DEC EBX
00702232  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00702235  85 DB                     TEST EBX,EBX
00702237  B9 02 00 00 00            MOV ECX,0x2
0070223C  0F 8E 49 01 00 00         JLE 0x0070238b
00702242  EB 03                     JMP 0x00702247
switchD_00702204::caseD_2:
00702244  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00702247:
00702247  47                        INC EDI
00702248  4B                        DEC EBX
00702249  85 DB                     TEST EBX,EBX
0070224B  B9 03 00 00 00            MOV ECX,0x3
00702250  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702253  0F 8E 32 01 00 00         JLE 0x0070238b
00702259  EB 03                     JMP 0x0070225e
switchD_00702204::caseD_3:
0070225B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070225e:
0070225E  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00702262  74 1B                     JZ 0x0070227f
00702264  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00702267  33 C9                     XOR ECX,ECX
00702269  66 8B 0A                  MOV CX,word ptr [EDX]
0070226C  3B D9                     CMP EBX,ECX
0070226E  77 0C                     JA 0x0070227c
00702270  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00702273  33 C9                     XOR ECX,ECX
00702275  8A 0F                     MOV CL,byte ptr [EDI]
00702277  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070227A  88 0E                     MOV byte ptr [ESI],CL
LAB_0070227c:
0070227C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070227f:
0070227F  83 C2 02                  ADD EDX,0x2
00702282  46                        INC ESI
00702283  47                        INC EDI
00702284  4B                        DEC EBX
00702285  85 DB                     TEST EBX,EBX
00702287  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0070228A  B9 04 00 00 00            MOV ECX,0x4
0070228F  0F 8E F6 00 00 00         JLE 0x0070238b
00702295  33 C9                     XOR ECX,ECX
00702297  47                        INC EDI
00702298  4B                        DEC EBX
00702299  EB 0C                     JMP 0x007022a7
switchD_00702204::caseD_4:
0070229B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070229E  33 C9                     XOR ECX,ECX
007022A0  47                        INC EDI
007022A1  4B                        DEC EBX
007022A2  EB 03                     JMP 0x007022a7
LAB_007022a4:
007022A4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
switchD_00702204::default:
007022A7  85 DB                     TEST EBX,EBX
007022A9  0F 8E DC 00 00 00         JLE 0x0070238b
007022AF  47                        INC EDI
007022B0  4B                        DEC EBX
007022B1  85 DB                     TEST EBX,EBX
007022B3  B9 01 00 00 00            MOV ECX,0x1
007022B8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007022BB  0F 8E CA 00 00 00         JLE 0x0070238b
007022C1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007022C4  81 E1 80 00 00 00         AND ECX,0x80
007022CA  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007022CD  EB 03                     JMP 0x007022d2
LAB_007022cf:
007022CF  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_007022d2:
007022D2  85 C9                     TEST ECX,ECX
007022D4  74 1B                     JZ 0x007022f1
007022D6  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007022D9  33 C9                     XOR ECX,ECX
007022DB  66 8B 0A                  MOV CX,word ptr [EDX]
007022DE  3B D9                     CMP EBX,ECX
007022E0  77 0C                     JA 0x007022ee
007022E2  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007022E5  33 C9                     XOR ECX,ECX
007022E7  8A 0F                     MOV CL,byte ptr [EDI]
007022E9  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007022EC  88 0E                     MOV byte ptr [ESI],CL
LAB_007022ee:
007022EE  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007022f1:
007022F1  83 C2 02                  ADD EDX,0x2
007022F4  46                        INC ESI
007022F5  47                        INC EDI
007022F6  4B                        DEC EBX
007022F7  85 DB                     TEST EBX,EBX
007022F9  B9 02 00 00 00            MOV ECX,0x2
007022FE  0F 8E 84 00 00 00         JLE 0x00702388
00702304  47                        INC EDI
00702305  4B                        DEC EBX
00702306  85 DB                     TEST EBX,EBX
00702308  B9 03 00 00 00            MOV ECX,0x3
0070230D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702310  7E 76                     JLE 0x00702388
00702312  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00702315  85 C9                     TEST ECX,ECX
00702317  74 1B                     JZ 0x00702334
00702319  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070231C  33 C9                     XOR ECX,ECX
0070231E  66 8B 0A                  MOV CX,word ptr [EDX]
00702321  3B D9                     CMP EBX,ECX
00702323  77 0C                     JA 0x00702331
00702325  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00702328  33 C9                     XOR ECX,ECX
0070232A  8A 0F                     MOV CL,byte ptr [EDI]
0070232C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070232F  88 0E                     MOV byte ptr [ESI],CL
LAB_00702331:
00702331  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00702334:
00702334  83 C2 02                  ADD EDX,0x2
00702337  46                        INC ESI
00702338  47                        INC EDI
00702339  4B                        DEC EBX
0070233A  85 DB                     TEST EBX,EBX
0070233C  B9 04 00 00 00            MOV ECX,0x4
00702341  7E 45                     JLE 0x00702388
00702343  47                        INC EDI
00702344  33 C9                     XOR ECX,ECX
00702346  4B                        DEC EBX
00702347  85 DB                     TEST EBX,EBX
00702349  7E 3D                     JLE 0x00702388
0070234B  47                        INC EDI
0070234C  4B                        DEC EBX
0070234D  85 DB                     TEST EBX,EBX
0070234F  B9 01 00 00 00            MOV ECX,0x1
00702354  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702357  0F 8F 72 FF FF FF         JG 0x007022cf
0070235D  EB 29                     JMP 0x00702388
LAB_0070235f:
0070235F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702362  4B                        DEC EBX
00702363  78 26                     JS 0x0070238b
00702365  43                        INC EBX
00702366  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00702369:
00702369  8B D9                     MOV EBX,ECX
0070236B  83 E3 01                  AND EBX,0x1
0070236E  80 FB 01                  CMP BL,0x1
00702371  75 04                     JNZ 0x00702377
00702373  46                        INC ESI
00702374  83 C2 02                  ADD EDX,0x2
LAB_00702377:
00702377  41                        INC ECX
00702378  83 F9 04                  CMP ECX,0x4
0070237B  7E 02                     JLE 0x0070237f
0070237D  33 C9                     XOR ECX,ECX
LAB_0070237f:
0070237F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00702382  4B                        DEC EBX
00702383  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00702386  75 E1                     JNZ 0x00702369
LAB_00702388:
00702388  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0070238b:
0070238B  85 C0                     TEST EAX,EAX
0070238D  7F 41                     JG 0x007023d0
0070238F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00702392  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00702395  3B D3                     CMP EDX,EBX
00702397  7D 37                     JGE 0x007023d0
00702399  33 D2                     XOR EDX,EDX
0070239B  8A 17                     MOV DL,byte ptr [EDI]
0070239D  8B C2                     MOV EAX,EDX
0070239F  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007023A2  24 80                     AND AL,0x80
007023A4  47                        INC EDI
007023A5  84 C0                     TEST AL,AL
007023A7  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
007023AA  8B C2                     MOV EAX,EDX
007023AC  74 1F                     JZ 0x007023cd
007023AE  83 E0 3F                  AND EAX,0x3f
007023B1  F6 C2 40                  TEST DL,0x40
007023B4  74 1A                     JZ 0x007023d0
007023B6  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007023B9  33 D2                     XOR EDX,EDX
007023BB  8A 17                     MOV DL,byte ptr [EDI]
007023BD  8B FA                     MOV EDI,EDX
007023BF  33 D2                     XOR EDX,EDX
007023C1  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
007023C4  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
007023C7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
007023CA  47                        INC EDI
007023CB  EB 03                     JMP 0x007023d0
LAB_007023cd:
007023CD  83 E0 7F                  AND EAX,0x7f
LAB_007023d0:
007023D0  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007023D3  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
007023D6  3B D3                     CMP EDX,EBX
007023D8  7D 20                     JGE 0x007023fa
007023DA  2B DA                     SUB EBX,EDX
007023DC  33 D2                     XOR EDX,EDX
007023DE  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
007023E1  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007023E4  8A 13                     MOV DL,byte ptr [EBX]
007023E6  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
007023E9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
007023EC  33 D2                     XOR EDX,EDX
007023EE  85 DB                     TEST EBX,EBX
007023F0  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
007023F3  7E 07                     JLE 0x007023fc
007023F5  E9 DD F8 FF FF            JMP 0x00701cd7
LAB_007023fa:
007023FA  2B D3                     SUB EDX,EBX
LAB_007023fc:
007023FC  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
007023FF  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00702402  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00702405  2B F1                     SUB ESI,ECX
00702407  2B 75 40                  SUB ESI,dword ptr [EBP + 0x40]
0070240A  3B D6                     CMP EDX,ESI
0070240C  7D 35                     JGE 0x00702443
LAB_0070240e:
0070240E  2B F2                     SUB ESI,EDX
00702410  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
00702413  33 C9                     XOR ECX,ECX
00702415  8A 0A                     MOV CL,byte ptr [EDX]
00702417  42                        INC EDX
00702418  F6 C1 80                  TEST CL,0x80
0070241B  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
0070241E  74 1A                     JZ 0x0070243a
00702420  8B D1                     MOV EDX,ECX
00702422  83 E2 3F                  AND EDX,0x3f
00702425  F6 C1 40                  TEST CL,0x40
00702428  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
0070242B  74 06                     JZ 0x00702433
0070242D  41                        INC ECX
0070242E  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
00702431  EB 0C                     JMP 0x0070243f
LAB_00702433:
00702433  03 CA                     ADD ECX,EDX
00702435  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
00702438  EB 05                     JMP 0x0070243f
LAB_0070243a:
0070243A  83 E1 7F                  AND ECX,0x7f
0070243D  8B D1                     MOV EDX,ECX
LAB_0070243f:
0070243F  3B D6                     CMP EDX,ESI
00702441  7C CB                     JL 0x0070240e
LAB_00702443:
00702443  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00702446  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00702449  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
0070244C  2B CA                     SUB ECX,EDX
0070244E  2B CE                     SUB ECX,ESI
00702450  3B C1                     CMP EAX,ECX
00702452  7D 2B                     JGE 0x0070247f
LAB_00702454:
00702454  81 E3 C0 00 00 00         AND EBX,0xc0
0070245A  2B C8                     SUB ECX,EAX
0070245C  80 FB 80                  CMP BL,0x80
0070245F  75 02                     JNZ 0x00702463
00702461  03 F8                     ADD EDI,EAX
LAB_00702463:
00702463  33 DB                     XOR EBX,EBX
00702465  8A 1F                     MOV BL,byte ptr [EDI]
00702467  8B C3                     MOV EAX,EBX
00702469  24 80                     AND AL,0x80
0070246B  47                        INC EDI
0070246C  84 C0                     TEST AL,AL
0070246E  8B C3                     MOV EAX,EBX
00702470  74 09                     JZ 0x0070247b
00702472  83 E0 3F                  AND EAX,0x3f
00702475  F6 C3 40                  TEST BL,0x40
00702478  74 01                     JZ 0x0070247b
0070247A  47                        INC EDI
LAB_0070247b:
0070247B  3B C1                     CMP EAX,ECX
0070247D  7C D5                     JL 0x00702454
LAB_0070247f:
0070247F  81 E3 C0 00 00 00         AND EBX,0xc0
00702485  80 FB 80                  CMP BL,0x80
00702488  75 02                     JNZ 0x0070248c
0070248A  03 F9                     ADD EDI,ECX
LAB_0070248c:
0070248C  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
LAB_0070248f:
0070248F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00702492  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00702495  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00702498  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0070249B  03 C1                     ADD EAX,ECX
0070249D  03 F2                     ADD ESI,EDX
0070249F  43                        INC EBX
007024A0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007024A3  83 FB 04                  CMP EBX,0x4
007024A6  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
007024A9  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
007024AC  7E 07                     JLE 0x007024b5
007024AE  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_007024b5:
007024B5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
007024B8  48                        DEC EAX
007024B9  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
007024BC  0F 89 38 F6 FF FF         JNS 0x00701afa
007024C2  5F                        POP EDI
007024C3  5E                        POP ESI
007024C4  5B                        POP EBX
LAB_007024c5:
007024C5  8B E5                     MOV ESP,EBP
007024C7  5D                        POP EBP
007024C8  C2 40 00                  RET 0x40
