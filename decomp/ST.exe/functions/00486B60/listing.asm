FUN_00486b60:
00486B60  55                        PUSH EBP
00486B61  8B EC                     MOV EBP,ESP
00486B63  83 EC 08                  SUB ESP,0x8
00486B66  53                        PUSH EBX
00486B67  56                        PUSH ESI
00486B68  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00486B6B  57                        PUSH EDI
00486B6C  8B F9                     MOV EDI,ECX
00486B6E  C6 06 01                  MOV byte ptr [ESI],0x1
00486B71  8B 07                     MOV EAX,dword ptr [EDI]
00486B73  FF 50 08                  CALL dword ptr [EAX + 0x8]
00486B76  33 DB                     XOR EBX,EBX
00486B78  83 F8 01                  CMP EAX,0x1
00486B7B  75 05                     JNZ 0x00486b82
00486B7D  88 46 01                  MOV byte ptr [ESI + 0x1],AL
00486B80  EB 03                     JMP 0x00486b85
LAB_00486b82:
00486B82  88 5E 01                  MOV byte ptr [ESI + 0x1],BL
LAB_00486b85:
00486B85  8B CF                     MOV ECX,EDI
00486B87  C6 46 02 01               MOV byte ptr [ESI + 0x2],0x1
00486B8B  E8 DB B6 F7 FF            CALL 0x0040226b
00486B90  85 C0                     TEST EAX,EAX
00486B92  74 05                     JZ 0x00486b99
00486B94  88 5E 1D                  MOV byte ptr [ESI + 0x1d],BL
00486B97  EB 04                     JMP 0x00486b9d
LAB_00486b99:
00486B99  C6 46 1D 01               MOV byte ptr [ESI + 0x1d],0x1
LAB_00486b9d:
00486B9D  8B 17                     MOV EDX,dword ptr [EDI]
00486B9F  8B CF                     MOV ECX,EDI
00486BA1  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
00486BA4  88 46 1B                  MOV byte ptr [ESI + 0x1b],AL
00486BA7  8B 07                     MOV EAX,dword ptr [EDI]
00486BA9  8B CF                     MOV ECX,EDI
00486BAB  FF 90 C4 00 00 00         CALL dword ptr [EAX + 0xc4]
00486BB1  88 46 1C                  MOV byte ptr [ESI + 0x1c],AL
00486BB4  8B 8F F7 06 00 00         MOV ECX,dword ptr [EDI + 0x6f7]
00486BBA  89 4E 03                  MOV dword ptr [ESI + 0x3],ECX
00486BBD  8B 97 F7 06 00 00         MOV EDX,dword ptr [EDI + 0x6f7]
00486BC3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486BC9  52                        PUSH EDX
00486BCA  E8 8B B3 F7 FF            CALL 0x00401f5a
00486BCF  88 46 07                  MOV byte ptr [ESI + 0x7],AL
00486BD2  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00486BD5  8D 8F FB 06 00 00         LEA ECX,[EDI + 0x6fb]
00486BDB  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00486BDE  8D 56 0C                  LEA EDX,[ESI + 0xc]
00486BE1  8B 01                     MOV EAX,dword ptr [ECX]
00486BE3  89 02                     MOV dword ptr [EDX],EAX
00486BE5  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00486BE8  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
00486BEB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00486BEE  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00486BF1  66 8B 41 0C               MOV AX,word ptr [ECX + 0xc]
00486BF5  66 89 42 0C               MOV word ptr [EDX + 0xc],AX
00486BF9  8A 49 0E                  MOV CL,byte ptr [ECX + 0xe]
00486BFC  88 4A 0E                  MOV byte ptr [EDX + 0xe],CL
00486BFF  8B 87 F7 06 00 00         MOV EAX,dword ptr [EDI + 0x6f7]
00486C05  83 C0 F9                  ADD EAX,-0x7
00486C08  83 F8 14                  CMP EAX,0x14
00486C0B  0F 87 AF 00 00 00         JA 0x00486cc0
00486C11  33 D2                     XOR EDX,EDX
00486C13  8A 90 6C 6D 48 00         MOV DL,byte ptr [EAX + 0x486d6c]
switchD_00486c19::switchD:
00486C19  FF 24 95 60 6D 48 00      JMP dword ptr [EDX*0x4 + 0x486d60]
switchD_00486c19::caseD_7:
00486C20  8B 87 CA 07 00 00         MOV EAX,dword ptr [EDI + 0x7ca]
00486C26  3B C3                     CMP EAX,EBX
00486C28  0F 84 83 00 00 00         JZ 0x00486cb1
00486C2E  8D 4D F8                  LEA ECX,[EBP + -0x8]
00486C31  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00486C34  51                        PUSH ECX
00486C35  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00486C3B  50                        PUSH EAX
00486C3C  E8 8F F6 25 00            CALL 0x006e62d0
00486C41  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00486C44  3B CB                     CMP ECX,EBX
00486C46  74 69                     JZ 0x00486cb1
00486C48  8B 11                     MOV EDX,dword ptr [ECX]
00486C4A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00486C4D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00486C50  89 46 1E                  MOV dword ptr [ESI + 0x1e],EAX
00486C53  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
00486C56  83 E8 14                  SUB EAX,0x14
00486C59  74 34                     JZ 0x00486c8f
00486C5B  2D 5E 01 00 00            SUB EAX,0x15e
00486C60  74 15                     JZ 0x00486c77
00486C62  83 E8 32                  SUB EAX,0x32
00486C65  74 10                     JZ 0x00486c77
00486C67  88 5E 22                  MOV byte ptr [ESI + 0x22],BL
00486C6A  8B 11                     MOV EDX,dword ptr [ECX]
00486C6C  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
00486C6F  88 46 23                  MOV byte ptr [ESI + 0x23],AL
00486C72  E9 B9 00 00 00            JMP 0x00486d30
LAB_00486c77:
00486C77  8B 01                     MOV EAX,dword ptr [ECX]
00486C79  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00486C7C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00486C7F  88 46 22                  MOV byte ptr [ESI + 0x22],AL
00486C82  8B 11                     MOV EDX,dword ptr [ECX]
00486C84  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
00486C87  88 46 23                  MOV byte ptr [ESI + 0x23],AL
00486C8A  E9 A1 00 00 00            JMP 0x00486d30
LAB_00486c8f:
00486C8F  8B 8F F7 06 00 00         MOV ECX,dword ptr [EDI + 0x6f7]
00486C95  51                        PUSH ECX
00486C96  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486C9C  E8 B9 B2 F7 FF            CALL 0x00401f5a
00486CA1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00486CA4  88 46 22                  MOV byte ptr [ESI + 0x22],AL
00486CA7  8B 11                     MOV EDX,dword ptr [ECX]
00486CA9  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
00486CAC  88 46 23                  MOV byte ptr [ESI + 0x23],AL
00486CAF  EB 7F                     JMP 0x00486d30
LAB_00486cb1:
00486CB1  89 5E 1E                  MOV dword ptr [ESI + 0x1e],EBX
00486CB4  EB 7A                     JMP 0x00486d30
switchD_00486c19::caseD_8:
00486CB6  66 89 5E 20               MOV word ptr [ESI + 0x20],BX
00486CBA  66 89 5E 1E               MOV word ptr [ESI + 0x1e],BX
00486CBE  EB 70                     JMP 0x00486d30
switchD_00486c19::caseD_a:
00486CC0  66 8B 87 9A 07 00 00      MOV AX,word ptr [EDI + 0x79a]
00486CC7  66 89 46 1E               MOV word ptr [ESI + 0x1e],AX
00486CCB  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00486CCE  51                        PUSH ECX
00486CCF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486CD5  E8 DD DC F7 FF            CALL 0x004049b7
00486CDA  25 FF 00 00 00            AND EAX,0xff
00486CDF  48                        DEC EAX
00486CE0  74 14                     JZ 0x00486cf6
00486CE2  48                        DEC EAX
00486CE3  74 06                     JZ 0x00486ceb
00486CE5  66 89 5E 22               MOV word ptr [ESI + 0x22],BX
00486CE9  EB 20                     JMP 0x00486d0b
LAB_00486ceb:
00486CEB  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
00486CEE  68 83 00 00 00            PUSH 0x83
00486CF3  52                        PUSH EDX
00486CF4  EB 06                     JMP 0x00486cfc
LAB_00486cf6:
00486CF6  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00486CF9  6A 06                     PUSH 0x6
00486CFB  50                        PUSH EAX
LAB_00486cfc:
00486CFC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486D02  E8 64 AB F7 FF            CALL 0x0040186b
00486D07  66 89 46 22               MOV word ptr [ESI + 0x22],AX
LAB_00486d0b:
00486D0B  66 8B 8F A2 07 00 00      MOV CX,word ptr [EDI + 0x7a2]
00486D12  66 89 4E 26               MOV word ptr [ESI + 0x26],CX
00486D16  66 8B 97 B6 07 00 00      MOV DX,word ptr [EDI + 0x7b6]
00486D1D  66 89 56 20               MOV word ptr [ESI + 0x20],DX
00486D21  66 89 5E 24               MOV word ptr [ESI + 0x24],BX
00486D25  66 8B 87 BE 07 00 00      MOV AX,word ptr [EDI + 0x7be]
00486D2C  66 89 46 28               MOV word ptr [ESI + 0x28],AX
LAB_00486d30:
00486D30  8D 56 2A                  LEA EDX,[ESI + 0x2a]
00486D33  33 C9                     XOR ECX,ECX
00486D35  8D 45 0A                  LEA EAX,[EBP + 0xa]
00486D38  89 0A                     MOV dword ptr [EDX],ECX
00486D3A  50                        PUSH EAX
00486D3B  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
00486D3E  8D 4D FE                  LEA ECX,[EBP + -0x2]
00486D41  8D 55 FC                  LEA EDX,[EBP + -0x4]
00486D44  51                        PUSH ECX
00486D45  52                        PUSH EDX
00486D46  8B CF                     MOV ECX,EDI
00486D48  E8 78 AB F7 FF            CALL 0x004018c5
00486D4D  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
00486D51  2B F0                     SUB ESI,EAX
00486D53  5F                        POP EDI
00486D54  C6 46 2E 01               MOV byte ptr [ESI + 0x2e],0x1
00486D58  5E                        POP ESI
00486D59  5B                        POP EBX
00486D5A  8B E5                     MOV ESP,EBP
00486D5C  5D                        POP EBP
00486D5D  C2 04 00                  RET 0x4
